#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemode{
        using Addr = Register::Address<0x20090000,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CRC_POLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BIT_RVS_WR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMPL_WR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BIT_RVS_SUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMPL_SUM; 
    }
    namespace Noneseed{
        using Addr = Register::Address<0x20090004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRC_SEED; 
    }
    namespace Nonesum{
        using Addr = Register::Address<0x20090008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRC_SUM; 
    }
    namespace Nonedata{
        using Addr = Register::Address<0x20090008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRC_WR_DATA; 
    }
}
