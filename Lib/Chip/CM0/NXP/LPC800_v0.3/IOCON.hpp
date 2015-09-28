#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepio0_17{
        using Addr = Register::Address<0x40044000,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_13{
        using Addr = Register::Address<0x40044004,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_12{
        using Addr = Register::Address<0x40044008,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_5{
        using Addr = Register::Address<0x4004400c,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_4{
        using Addr = Register::Address<0x40044010,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_3{
        using Addr = Register::Address<0x40044014,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_2{
        using Addr = Register::Address<0x40044018,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_11{
        using Addr = Register::Address<0x4004401c,0xffff04bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2CMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_10{
        using Addr = Register::Address<0x40044020,0xffff04bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2CMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_16{
        using Addr = Register::Address<0x40044024,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_15{
        using Addr = Register::Address<0x40044028,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_1{
        using Addr = Register::Address<0x4004402c,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_9{
        using Addr = Register::Address<0x40044034,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_8{
        using Addr = Register::Address<0x40044038,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_7{
        using Addr = Register::Address<0x4004403c,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_6{
        using Addr = Register::Address<0x40044040,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_0{
        using Addr = Register::Address<0x40044044,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
    namespace Nonepio0_14{
        using Addr = Register::Address<0x40044048,0xffff0387>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> S_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CLK_DIV; 
    }
}
