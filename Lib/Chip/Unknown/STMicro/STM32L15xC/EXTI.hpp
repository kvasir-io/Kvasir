#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneimr{
        using Addr = Register::Address<0x40010400,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> MR; 
    }
    namespace Noneemr{
        using Addr = Register::Address<0x40010404,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> MR; 
    }
    namespace Nonertsr{
        using Addr = Register::Address<0x40010408,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> TR; 
    }
    namespace Noneftsr{
        using Addr = Register::Address<0x4001040c,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> TR; 
    }
    namespace Noneswier{
        using Addr = Register::Address<0x40010410,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> SWIER; 
    }
    namespace Nonepr{
        using Addr = Register::Address<0x40010414,0xff800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0)> PR; 
    }
}
