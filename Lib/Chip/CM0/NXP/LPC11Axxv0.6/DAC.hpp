#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40024000,0xff10003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> VALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BIAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> TRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> EDGESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TRIGERD; 
    }
}
