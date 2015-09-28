#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace OSC_cr{
        using Addr = Register::Address<0x40065000,0xffffff48>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSCINIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HGO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RANGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OSCOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OSCSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OSCEN; 
    }
}
