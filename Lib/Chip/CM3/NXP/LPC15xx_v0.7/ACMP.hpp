#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonectrl{
        using Addr = Register::Address<0x40008000,0xfffffcff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ROSCCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXT_RESET; 
    }
    namespace Nonecmp0{
        using Addr = Register::Address<0x40008004,0x80a01882>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> VM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> VP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INTPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INTTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> INTEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VLADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VLADREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> VSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DLY; 
    }
    namespace Nonecmp1{
        using Addr = Register::Address<0x4000800c,0x80a01882>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> VM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> VP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INTPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INTTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> INTEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VLADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VLADREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> VSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DLY; 
    }
    namespace Nonecmp2{
        using Addr = Register::Address<0x40008014,0x80a01882>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> VM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> VP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INTPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INTTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> INTEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VLADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VLADREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> VSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DLY; 
    }
    namespace Nonecmp3{
        using Addr = Register::Address<0x4000801c,0x80a01882>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> VM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> VP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INTPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INTTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> INTEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> VLADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> VLADREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> VSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29)> DLY; 
    }
    namespace Nonecmpfiltr0{
        using Addr = Register::Address<0x40008008,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CLKDIV; 
    }
    namespace Nonecmpfiltr1{
        using Addr = Register::Address<0x40008010,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CLKDIV; 
    }
    namespace Nonecmpfiltr2{
        using Addr = Register::Address<0x40008018,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CLKDIV; 
    }
    namespace Nonecmpfiltr3{
        using Addr = Register::Address<0x40008020,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CLKDIV; 
    }
}
