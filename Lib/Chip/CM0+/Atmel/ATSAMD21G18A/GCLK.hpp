#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace GCLK_clkctrl{
        using Addr = Register::Address<0x40000c02,0xffff30c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> GEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> WRTLOCK; 
    }
    namespace GCLK_ctrl{
        using Addr = Register::Address<0x40000c00,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
    }
    namespace GCLK_genctrl{
        using Addr = Register::Address<0x40000c04,0xffc0e0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> GENEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OOV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DIVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RUNSTDBY; 
    }
    namespace GCLK_gendiv{
        using Addr = Register::Address<0x40000c08,0xff0000f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> DIV; 
    }
    namespace GCLK_status{
        using Addr = Register::Address<0x40000c01,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SYNCBUSY; 
    }
}
