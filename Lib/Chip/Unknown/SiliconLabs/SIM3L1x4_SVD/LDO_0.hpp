#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40039000,0xff808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ALDOOVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ALDOBSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ALDOSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> MLDOOVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MLDOBSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MLDOSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> DLDOOVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DLDOBSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DLDOSSEL; 
    }
}
