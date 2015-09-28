#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace KBI0_sc{
        using Addr = Register::Address<0x40079000,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> KBMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> KBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> KBACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> KBF; 
    }
    namespace KBI0_pe{
        using Addr = Register::Address<0x40079001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KBIPE; 
    }
    namespace KBI0_es{
        using Addr = Register::Address<0x40079002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KBEDG; 
    }
}
