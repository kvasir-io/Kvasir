#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonewtcr{
        using Addr = Register::Address<0x40004000,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WTRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WTRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WTIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WTWKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WTWKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> WTIS; 
    }
}
