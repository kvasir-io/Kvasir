#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10503 Chapter title=LPC43xx Global Input Multiplexer Array (GIMA) Modification date=10/7/2011 Major revision=0 Minor revision=3 
    namespace Nonecap00In{    ///<Timer 0 CAP0_0 capture input multiplexer (GIMA output 0)
        using Addr = Register::Address<0x400c7000,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap01In{    ///<Timer 0 CAP0_1 capture input multiplexer (GIMA output 1)
        using Addr = Register::Address<0x400c7004,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap02In{    ///<Timer 0 CAP0_2 capture input multiplexer (GIMA output 2)
        using Addr = Register::Address<0x400c7008,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap03In{    ///<Timer 0 CAP0_3 capture input multiplexer (GIMA output 3)
        using Addr = Register::Address<0x400c700c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap10In{    ///<Timer 1 CAP1_0 capture input multiplexer (GIMA output 4)
        using Addr = Register::Address<0x400c7010,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap11In{    ///<Timer 1 CAP1_1 capture input multiplexer (GIMA output 5)
        using Addr = Register::Address<0x400c7014,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap12In{    ///<Timer 1 CAP1_2 capture input multiplexer (GIMA output 6)
        using Addr = Register::Address<0x400c7018,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap13In{    ///<Timer 1 CAP1_3 capture input multiplexer (GIMA output 7)
        using Addr = Register::Address<0x400c701c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap20In{    ///<Timer 2 CAP2_0 capture input multiplexer (GIMA output 8)
        using Addr = Register::Address<0x400c7020,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap21In{    ///<Timer 2 CAP2_1 capture input multiplexer (GIMA output 9)
        using Addr = Register::Address<0x400c7024,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap22In{    ///<Timer 2 CAP2_2 capture input multiplexer (GIMA output 10)
        using Addr = Register::Address<0x400c7028,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap23In{    ///<Timer 2 CAP2_3 capture input multiplexer (GIMA output 11)
        using Addr = Register::Address<0x400c702c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap30In{    ///<Timer 3 CAP3_0 capture input multiplexer (GIMA output 12)
        using Addr = Register::Address<0x400c7030,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap31In{    ///<Timer 3 CAP3_1 capture input multiplexer (GIMA output 13)
        using Addr = Register::Address<0x400c7034,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap32In{    ///<Timer 3 CAP3_2 capture input multiplexer (GIMA output 14)
        using Addr = Register::Address<0x400c7038,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap33In{    ///<Timer 3 CAP3_3 capture input multiplexer (GIMA output 15)
        using Addr = Register::Address<0x400c703c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin0In{    ///<SCT CTIN_0 capture input multiplexer (GIMA output 16)
        using Addr = Register::Address<0x400c7040,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin1In{    ///<SCT CTIN_1 capture input multiplexer (GIMA output 17)
        using Addr = Register::Address<0x400c7044,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin2In{    ///<SCT CTIN_2 capture input multiplexer (GIMA output 18)
        using Addr = Register::Address<0x400c7048,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin3In{    ///<SCT CTIN_3 capture input multiplexer (GIMA output 19)
        using Addr = Register::Address<0x400c704c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin4In{    ///<SCT CTIN_4 capture input multiplexer (GIMA output 20)
        using Addr = Register::Address<0x400c7050,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin5In{    ///<SCT CTIN_5 capture input multiplexer (GIMA output 21)
        using Addr = Register::Address<0x400c7054,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin6In{    ///<SCT CTIN_6 capture input multiplexer (GIMA output 22)
        using Addr = Register::Address<0x400c7058,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin7In{    ///<SCT CTIN_7 capture input multiplexer (GIMA output 23)
        using Addr = Register::Address<0x400c705c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace NonevadcTriggerIn{    ///<VADC trigger input multiplexer (GIMA output 24)
        using Addr = Register::Address<0x400c7060,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0xA to 0xF are reserved.
        enum class SelectVal {
            gpio628=0x00000000,     ///<GPIO6[28]
            gpio53=0x00000001,     ///<GPIO5[3]
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio12=0x00000003,     ///<SGPIO12
            mcob2=0x00000005,     ///<MCOB2
            ctout0OrT0Mat0=0x00000006,     ///<CTOUT_0 or T0_MAT0
            ctout8OrT2Mat0=0x00000007,     ///<CTOUT_8 or T2_MAT0
            t0Mat0=0x00000008,     ///<T0_MAT0
            t2Mat0=0x00000009,     ///<T2_MAT0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,SelectVal> select{}; 
        namespace SelectValC{
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::gpio628> gpio628{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::gpio53> gpio53{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::sgpio12> sgpio12{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::mcob2> mcob2{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::ctout0OrT0Mat0> ctout0OrT0Mat0{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::ctout8OrT2Mat0> ctout8OrT2Mat0{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::t0Mat0> t0Mat0{};
            constexpr Register::FieldValue<decltype(select)::Type,SelectVal::t2Mat0> t2Mat0{};
        }
    }
    namespace Noneeventrouter13In{    ///<Event router   input 13 multiplexer (GIMA output 25)
        using Addr = Register::Address<0x400c7064,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Noneeventrouter14In{    ///<Event router   input 14 multiplexer (GIMA output 26)
        using Addr = Register::Address<0x400c7068,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Noneeventrouter16In{    ///<Event router   input 16 multiplexer (GIMA output 27)
        using Addr = Register::Address<0x400c706c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x2 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Noneadcstart0In{    ///<ADC start0   input   multiplexer (GIMA output 28)
        using Addr = Register::Address<0x400c7070,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x2 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Noneadcstart1In{    ///<ADC start1 input   multiplexer (GIMA output 29)
        using Addr = Register::Address<0x400c7074,0xffffff00,0,unsigned>;
        ///Invert input
        enum class InvVal {
            notInverted=0x00000000,     ///<Not inverted.
            inputInverted=0x00000001,     ///<Input inverted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::inputInverted> inputInverted{};
        }
        ///Enable rising edge detection
        enum class EdgeVal {
            noEdgeDetection=0x00000000,     ///<No edge detection.
            risingEdgeDetectio=0x00000001,     ///<Rising edge detection enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EdgeVal> edge{}; 
        namespace EdgeValC{
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::noEdgeDetection> noEdgeDetection{};
            constexpr Register::FieldValue<decltype(edge)::Type,EdgeVal::risingEdgeDetectio> risingEdgeDetectio{};
        }
        ///Enable   synchronization
        enum class SynchVal {
            disableSynchroniz=0x00000000,     ///<Disable   synchronization.
            enableSynchroniza=0x00000001,     ///<Enable   synchronization.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SynchVal> synch{}; 
        namespace SynchValC{
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::disableSynchroniz> disableSynchroniz{};
            constexpr Register::FieldValue<decltype(synch)::Type,SynchVal::enableSynchroniza> enableSynchroniza{};
        }
        ///Enable single pulse generation.
        enum class PulseVal {
            disableSinglePulse=0x00000000,     ///<Disable single pulse generation.
            enableSinglePulse=0x00000001,     ///<Enable single pulse generation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PulseVal> pulse{}; 
        namespace PulseValC{
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::disableSinglePulse> disableSinglePulse{};
            constexpr Register::FieldValue<decltype(pulse)::Type,PulseVal::enableSinglePulse> enableSinglePulse{};
        }
        ///Select input. Values 0x2 to 0xF are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
}
