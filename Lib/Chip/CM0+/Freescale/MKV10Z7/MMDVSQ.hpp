#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MMDVSQ_dend{
        using Addr = Register::Address<0xf0004000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIVIDEND; 
    }
    namespace MMDVSQ_dsor{
        using Addr = Register::Address<0xf0004004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DIVISOR; 
    }
    namespace MMDVSQ_csr{
        using Addr = Register::Address<0xf0004008,0x1fffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USGN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SQRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BUSY; 
    }
    namespace MMDVSQ_res{
        using Addr = Register::Address<0xf000400c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RESULT; 
    }
    namespace MMDVSQ_rcnd{
        using Addr = Register::Address<0xf0004010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RADICAND; 
    }
}
