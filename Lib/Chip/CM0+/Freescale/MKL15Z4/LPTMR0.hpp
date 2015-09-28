#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace LPTMR0_csr{
        using Addr = Register::Address<0x40040000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TPP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCF; 
    }
    namespace LPTMR0_psr{
        using Addr = Register::Address<0x40040004,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3)> PRESCALE; 
    }
    namespace LPTMR0_cmr{
        using Addr = Register::Address<0x40040008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COMPARE; 
    }
    namespace LPTMR0_cnr{
        using Addr = Register::Address<0x4004000c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COUNTER; 
    }
}
