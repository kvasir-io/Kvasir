#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MCG_c1{
        using Addr = Register::Address<0x40064000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IREFSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IREFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FRDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CLKS; 
    }
    namespace MCG_c2{
        using Addr = Register::Address<0x40064001,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EREFS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HGO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RANGE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOCRE0; 
    }
    namespace MCG_c3{
        using Addr = Register::Address<0x40064002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCTRIM; 
    }
    namespace MCG_c4{
        using Addr = Register::Address<0x40064003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCFTRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> FCTRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> DRST_DRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMX32; 
    }
    namespace MCG_c5{
        using Addr = Register::Address<0x40064004,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> PRDIV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PLLSTEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PLLCLKEN0; 
    }
    namespace MCG_c6{
        using Addr = Register::Address<0x40064005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> VDIV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CME0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PLLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOLIE0; 
    }
    namespace MCG_s{
        using Addr = Register::Address<0x40064006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRCST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OSCINIT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CLKST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IREFST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PLLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LOCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOLS0; 
    }
    namespace MCG_sc{
        using Addr = Register::Address<0x40064008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> FCRDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLTPRSRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ATMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ATMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ATME; 
    }
    namespace MCG_atcvh{
        using Addr = Register::Address<0x4006400a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ATCVH; 
    }
    namespace MCG_atcvl{
        using Addr = Register::Address<0x4006400b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ATCVL; 
    }
    namespace MCG_c7{
        using Addr = Register::Address<0x4006400c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OSCSEL; 
    }
    namespace MCG_c8{
        using Addr = Register::Address<0x4006400d,0xffffff1e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CME1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LOLRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOCRE1; 
    }
    namespace MCG_c9{
        using Addr = Register::Address<0x4006400e,0xffffffff>;
    }
    namespace MCG_c10{
        using Addr = Register::Address<0x4006400f,0xffffffff>;
    }
}
