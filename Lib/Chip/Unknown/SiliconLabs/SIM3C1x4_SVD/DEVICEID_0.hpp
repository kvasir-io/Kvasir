#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedeviceid0{
        using Addr = Register::Address<0x400490c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> REVID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> DEVICEID0; 
    }
    namespace Nonedeviceid1{
        using Addr = Register::Address<0x400490d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEID1; 
    }
    namespace Nonedeviceid2{
        using Addr = Register::Address<0x400490e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEID2; 
    }
    namespace Nonedeviceid3{
        using Addr = Register::Address<0x400490f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEID3; 
    }
}
