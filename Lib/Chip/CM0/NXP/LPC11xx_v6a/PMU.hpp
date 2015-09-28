#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepcon{
        using Addr = Register::Address<0x40038000,0xfffff6fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DPDEN; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,11)> GPDATA; 
    }
}
