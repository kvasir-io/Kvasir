#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x40013000,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x40013004,0xffffffff>;
    }
    namespace Nonetasks_sample{
        using Addr = Register::Address<0x40013008,0xffffffff>;
    }
    namespace Noneevents_ready{
        using Addr = Register::Address<0x40013100,0xffffffff>;
    }
    namespace Noneevents_down{
        using Addr = Register::Address<0x40013104,0xffffffff>;
    }
    namespace Noneevents_up{
        using Addr = Register::Address<0x40013108,0xffffffff>;
    }
    namespace Noneevents_cross{
        using Addr = Register::Address<0x4001310c,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40013200,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY_SAMPLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> READY_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DOWN_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UP_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CROSS_STOP; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40013304,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CROSS; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40013308,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CROSS; 
    }
    namespace Noneresult{
        using Addr = Register::Address<0x40013400,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESULT; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40013500,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ENABLE; 
    }
    namespace Nonepsel{
        using Addr = Register::Address<0x40013504,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PSEL; 
    }
    namespace Nonerefsel{
        using Addr = Register::Address<0x40013508,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> REFSEL; 
    }
    namespace Noneextrefsel{
        using Addr = Register::Address<0x4001350c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTREFSEL; 
    }
    namespace Noneanadetect{
        using Addr = Register::Address<0x40013520,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ANADETECT; 
    }
    namespace Nonepower{
        using Addr = Register::Address<0x40013ffc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER; 
    }
}
