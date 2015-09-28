#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepcon{
        using Addr = Register::Address<0x40038000,0xfffff6f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NODPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLEEPFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DPDFLAG; 
    }
    namespace Nonegpreg0{
        using Addr = Register::Address<0x40038004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonegpreg1{
        using Addr = Register::Address<0x40038008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonegpreg2{
        using Addr = Register::Address<0x4003800c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonegpreg3{
        using Addr = Register::Address<0x40038010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonegpreg4{
        using Addr = Register::Address<0x40038014,0x000003ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WAKEUPHYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAKEPAD_DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,12)> GPDATA; 
    }
}
