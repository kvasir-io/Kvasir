#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PIT_mr{
        using Addr = Register::Address<0xfffffe30,0xfcf00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> PIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PITIEN; 
    }
    namespace PIT_sr{
        using Addr = Register::Address<0xfffffe34,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PITS; 
    }
    namespace PIT_pivr{
        using Addr = Register::Address<0xfffffe38,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> CPIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> PICNT; 
    }
    namespace PIT_piir{
        using Addr = Register::Address<0xfffffe3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,0)> CPIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> PICNT; 
    }
}
