#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefmsstart{
        using Addr = Register::Address<0x400bc020,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> START; 
    }
    namespace Nonefmsstop{
        using Addr = Register::Address<0x400bc024,0x7ffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> STOPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STRTBIST; 
    }
    namespace Nonefmsw0{
        using Addr = Register::Address<0x400bc02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SIG; 
    }
}
