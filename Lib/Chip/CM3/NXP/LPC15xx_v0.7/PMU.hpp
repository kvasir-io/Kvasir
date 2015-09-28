#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepcon{
        using Addr = Register::Address<0x4003c000,0xfffff6f7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NODPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLEEPFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DPDFLAG; 
    }
    namespace Nonegpreg0{
        using Addr = Register::Address<0x4003c004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonegpreg1{
        using Addr = Register::Address<0x4003c008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonegpreg2{
        using Addr = Register::Address<0x4003c00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonegpreg3{
        using Addr = Register::Address<0x4003c010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GPDATA; 
    }
    namespace Nonedpdctrl{
        using Addr = Register::Address<0x4003c014,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKEUPHYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAKEPAD_DISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LPOSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LPOSCDPDEN; 
    }
}
