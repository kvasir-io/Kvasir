#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FTM1_sc{
        using Addr = Register::Address<0x40039000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CPWMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TOF; 
    }
    namespace FTM1_cnt{
        using Addr = Register::Address<0x40039004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COUNT; 
    }
    namespace FTM1_mod{
        using Addr = Register::Address<0x40039008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace FTM1_c0sc{
        using Addr = Register::Address<0x4003900c,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace FTM1_c1sc{
        using Addr = Register::Address<0x40039014,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace FTM1_c0v{
        using Addr = Register::Address<0x40039010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace FTM1_c1v{
        using Addr = Register::Address<0x40039018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
}
