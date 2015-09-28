#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MCM_plasc{
        using Addr = Register::Address<0xf0003008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ASC; 
    }
    namespace MCM_plamc{
        using Addr = Register::Address<0xf000300a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> AMC; 
    }
    namespace MCM_placr{
        using Addr = Register::Address<0xf000300c,0xfffe01ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CFCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DFCDA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DFCIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DFCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EFDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DFCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ESFC; 
    }
    namespace MCM_cpo{
        using Addr = Register::Address<0xf0003040,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CPOREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CPOACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPOWOI; 
    }
}
