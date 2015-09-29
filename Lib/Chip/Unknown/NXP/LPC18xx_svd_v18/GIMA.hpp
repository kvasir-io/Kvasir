#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=Falcon Chapter title=Global Input Multiplexer Array (GIMA) Modification date=3/25/2011 Major revision=0 Minor revision=4 
    namespace Nonecap00In{    ///<Timer 0 CAP0_0  capture input multiplexer
        using Addr = Register::Address<0x400c7000,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap01In{    ///<Timer 0 CAP0_1  capture input multiplexer
        using Addr = Register::Address<0x400c7004,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap02In{    ///<Timer 0 CAP0_2 capture  input multiplexer
        using Addr = Register::Address<0x400c7008,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap03In{    ///<Timer 0 CAP0_3 capture input multiplexer
        using Addr = Register::Address<0x400c700c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap10In{    ///<Timer 1 CAP1_0 capture  input multiplexer
        using Addr = Register::Address<0x400c7010,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap11In{    ///<Timer 1 CAP1_1 capture  input multiplexer
        using Addr = Register::Address<0x400c7014,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap12In{    ///<Timer 1 CAP1_2 capture  input multiplexer
        using Addr = Register::Address<0x400c7018,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap13In{    ///<Timer 1 CAP1_3 capture  input multiplexer
        using Addr = Register::Address<0x400c701c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap20In{    ///<Timer 2 CAP2_0 capture  input multiplexer
        using Addr = Register::Address<0x400c7020,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap21In{    ///<Timer 2 CAP2_1 capture  input multiplexer
        using Addr = Register::Address<0x400c7024,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap22In{    ///<Timer 2 CAP2_2 capture  input multiplexer
        using Addr = Register::Address<0x400c7028,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap23In{    ///<Timer 2 CAP2_3 capture  input multiplexer
        using Addr = Register::Address<0x400c702c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap30In{    ///<Timer 3 CAP3_0 capture  input multiplexer
        using Addr = Register::Address<0x400c7030,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap31In{    ///<Timer 3 CAP3_1 capture  input multiplexer
        using Addr = Register::Address<0x400c7034,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap32In{    ///<Timer 3 CAP3_2 capture  input multiplexer
        using Addr = Register::Address<0x400c7038,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonecap33In{    ///<Timer 3 CAP3_3 capture  input multiplexer
        using Addr = Register::Address<0x400c703c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin0In{    ///<SCT CTIN_0 capture  input multiplexer
        using Addr = Register::Address<0x400c7040,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin1In{    ///<SCT CTIN_1 capture  input multiplexer
        using Addr = Register::Address<0x400c7044,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin2In{    ///<SCT CTIN_2 capture  input multiplexer
        using Addr = Register::Address<0x400c7048,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin3In{    ///<SCT CTIN_3 capture  input multiplexer
        using Addr = Register::Address<0x400c704c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin4In{    ///<SCT CTIN_4 capture  input multiplexer
        using Addr = Register::Address<0x400c7050,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin5In{    ///<SCT CTIN_5 capture  input multiplexer
        using Addr = Register::Address<0x400c7054,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin6In{    ///<SCT CTIN_6 capture  input multiplexer
        using Addr = Register::Address<0x400c7058,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Nonectin7In{    ///<SCT CTIN_7 capture  input multiplexer
        using Addr = Register::Address<0x400c705c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x4 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace NonevadcTriggerIn{    ///<ADC trigger  input multiplexer
        using Addr = Register::Address<0x400c7060,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0xA to 0xF are reserved.
        enum class selectVal {
            gpio628=0x00000000,     ///<GPIO6[28]
            gpio53=0x00000001,     ///<GPIO5[3]
            reserved=0x00000002,     ///<Reserved
            reserved=0x00000003,     ///<Reserved
            reserved=0x00000004,     ///<Reserved
            mcob2=0x00000005,     ///<MCOB2
            ctout0ort0Mat0=0x00000006,     ///<CTOUT_0 or T0_MAT0
            ctout8ort2Mat0=0x00000007,     ///<CTOUT_8 or T2_MAT0
            t0Mat0=0x00000008,     ///<T0_MAT0
            t2Mat0=0x00000009,     ///<T2_MAT0
        };
        namespace selectValC{
            constexpr MPL::Value<selectVal,selectVal::gpio628> gpio628{};
            constexpr MPL::Value<selectVal,selectVal::gpio53> gpio53{};
            constexpr MPL::Value<selectVal,selectVal::reserved> reserved{};
            constexpr MPL::Value<selectVal,selectVal::reserved> reserved{};
            constexpr MPL::Value<selectVal,selectVal::reserved> reserved{};
            constexpr MPL::Value<selectVal,selectVal::mcob2> mcob2{};
            constexpr MPL::Value<selectVal,selectVal::ctout0ort0Mat0> ctout0ort0Mat0{};
            constexpr MPL::Value<selectVal,selectVal::ctout8ort2Mat0> ctout8ort2Mat0{};
            constexpr MPL::Value<selectVal,selectVal::t0Mat0> t0Mat0{};
            constexpr MPL::Value<selectVal,selectVal::t2Mat0> t2Mat0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,selectVal> select{}; 
    }
    namespace Noneeventrouter13In{    ///<Event router   input 13  multiplexer
        using Addr = Register::Address<0x400c7064,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Noneeventrouter14In{    ///<Event router   input 14  multiplexer
        using Addr = Register::Address<0x400c7068,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x3 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Noneeventrouter16In{    ///<Event router   input 16  multiplexer
        using Addr = Register::Address<0x400c706c,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x2 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Noneadcstart0In{    ///<ADC start0   input   multiplexer
        using Addr = Register::Address<0x400c7070,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x2 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
    namespace Noneadcstart1In{    ///<ADC start1  input   multiplexer
        using Addr = Register::Address<0x400c7074,0xffffff00,0,unsigned>;
        ///Invert input
        enum class invVal {
            noinvert=0x00000000,     ///<Not inverted.
            invert=0x00000001,     ///<Input inverted.
        };
        namespace invValC{
            constexpr MPL::Value<invVal,invVal::noinvert> noinvert{};
            constexpr MPL::Value<invVal,invVal::invert> invert{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,invVal> inv{}; 
        ///Enable rising edge detection
        enum class edgeVal {
            noedge=0x00000000,     ///<No edge detection.
            risingedge=0x00000001,     ///<Rising edge detection enabled.
        };
        namespace edgeValC{
            constexpr MPL::Value<edgeVal,edgeVal::noedge> noedge{};
            constexpr MPL::Value<edgeVal,edgeVal::risingedge> risingedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,edgeVal> edge{}; 
        ///Enable 2ff synchronization
        enum class synchVal {
            disable=0x00000000,     ///<Disable 2ff synchronization.
            enable=0x00000001,     ///<Enable 2ff synchronization.
        };
        namespace synchValC{
            constexpr MPL::Value<synchVal,synchVal::disable> disable{};
            constexpr MPL::Value<synchVal,synchVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,synchVal> synch{}; 
        ///Enable single pulse generation.
        enum class pulseVal {
            disable=0x00000000,     ///<Disable single pulse generation.
            enable=0x00000001,     ///<Enable single pulse generation.
        };
        namespace pulseValC{
            constexpr MPL::Value<pulseVal,pulseVal::disable> disable{};
            constexpr MPL::Value<pulseVal,pulseVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pulseVal> pulse{}; 
        ///Select input. Values 0x2 to 0xF are reserved.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> select{}; 
    }
}
