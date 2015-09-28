#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneebicon{
        using Addr = Register::Address<0x50010000,0xfff8f8fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ExtEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ExtBW16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MCLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> ExttALE; 
    }
    namespace Noneextime{
        using Addr = Register::Address<0x50010004,0xf0ff0807>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> ExttACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> ExttAHD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> ExtIW2X; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> ExtIR2R; 
    }
}
