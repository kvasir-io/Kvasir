#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x40010000,0xffffffff>;
    }
    namespace Noneevents_timeout{
        using Addr = Register::Address<0x40010100,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40010304,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIMEOUT; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40010308,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIMEOUT; 
    }
    namespace Nonerunstatus{
        using Addr = Register::Address<0x40010400,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUNSTATUS; 
    }
    namespace Nonereqstatus{
        using Addr = Register::Address<0x40010404,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RR7; 
    }
    namespace Nonecrv{
        using Addr = Register::Address<0x40010504,0xffffffff>;
    }
    namespace Nonerren{
        using Addr = Register::Address<0x40010508,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RR7; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x4001050c,0xfffffff6>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HALT; 
    }
    namespace Nonerr0{
        using Addr = Register::Address<0x40010600,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RR; 
    }
    namespace Nonerr1{
        using Addr = Register::Address<0x40010604,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RR; 
    }
    namespace Nonerr2{
        using Addr = Register::Address<0x40010608,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RR; 
    }
    namespace Nonerr3{
        using Addr = Register::Address<0x4001060c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RR; 
    }
    namespace Nonerr4{
        using Addr = Register::Address<0x40010610,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RR; 
    }
    namespace Nonerr5{
        using Addr = Register::Address<0x40010614,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RR; 
    }
    namespace Nonerr6{
        using Addr = Register::Address<0x40010618,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RR; 
    }
    namespace Nonerr7{
        using Addr = Register::Address<0x4001061c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RR; 
    }
    namespace Nonepower{
        using Addr = Register::Address<0x40010ffc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER; 
    }
}
