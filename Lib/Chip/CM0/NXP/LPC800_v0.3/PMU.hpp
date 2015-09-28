#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepcon{
        using Addr = Register::Address<0x40020000,0xfffff6f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NODPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLEEPFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DPDFLAG; 
    }
    namespace Nonegpreg0{
        using Addr = Register::Address<0x40020004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonegpreg1{
        using Addr = Register::Address<0x40020008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonegpreg2{
        using Addr = Register::Address<0x4002000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonegpreg3{
        using Addr = Register::Address<0x40020010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonedpdctrl{
        using Addr = Register::Address<0x40020014,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUPHYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEPAD_DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LPOSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LPOSCDPDEN; 
    }
}
