#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonebftm1_cr{
        using Addr = Register::Address<0x40077000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CEN; 
    }
    namespace Nonebftm1_sr{
        using Addr = Register::Address<0x40077004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MIF; 
    }
    namespace Nonebftm1_cntr{
        using Addr = Register::Address<0x40077008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CNTR; 
    }
    namespace Nonebftm1_cmpr{
        using Addr = Register::Address<0x4007700c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CMP; 
    }
}
