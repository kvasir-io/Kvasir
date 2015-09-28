#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TRIAMP0_c0{
        using Addr = Register::Address<0x400f8000,0xffffff3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TRIAMPEN; 
    }
}
