#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SCKC_cr{
        using Addr = Register::Address<0xfffffe50,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSC32EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSC32BYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSCSEL; 
    }
}
