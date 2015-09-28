#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace OSC_cr{
        using Addr = Register::Address<0x40066000,0xffffff50>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SC16P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SC8P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SC4P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SC2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EREFSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERCLKEN; 
    }
}
