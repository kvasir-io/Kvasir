#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepio2_6{
        using Addr = Register::Address<0x40044000,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_0{
        using Addr = Register::Address<0x40044008,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonereset_pio0_0{
        using Addr = Register::Address<0x4004400c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_1{
        using Addr = Register::Address<0x40044010,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_8{
        using Addr = Register::Address<0x40044014,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_2{
        using Addr = Register::Address<0x4004401c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_7{
        using Addr = Register::Address<0x40044020,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_8{
        using Addr = Register::Address<0x40044024,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_1{
        using Addr = Register::Address<0x40044028,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_3{
        using Addr = Register::Address<0x4004402c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_4{
        using Addr = Register::Address<0x40044030,0xfffffcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2CMODE; 
    }
    namespace Nonepio0_5{
        using Addr = Register::Address<0x40044034,0xfffffcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2CMODE; 
    }
    namespace Nonepio1_9{
        using Addr = Register::Address<0x40044038,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio3_4{
        using Addr = Register::Address<0x4004403c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_4{
        using Addr = Register::Address<0x40044040,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_5{
        using Addr = Register::Address<0x40044044,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio3_5{
        using Addr = Register::Address<0x40044048,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_6{
        using Addr = Register::Address<0x4004404c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_7{
        using Addr = Register::Address<0x40044050,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_9{
        using Addr = Register::Address<0x40044054,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_10{
        using Addr = Register::Address<0x40044058,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_2{
        using Addr = Register::Address<0x4004405c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_8{
        using Addr = Register::Address<0x40044060,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_9{
        using Addr = Register::Address<0x40044064,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneswclk_pio0_10{
        using Addr = Register::Address<0x40044068,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_10{
        using Addr = Register::Address<0x4004406c,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_11{
        using Addr = Register::Address<0x40044070,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noner_pio0_11{
        using Addr = Register::Address<0x40044074,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noner_pio1_0{
        using Addr = Register::Address<0x40044078,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noner_pio1_1{
        using Addr = Register::Address<0x4004407c,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noner_pio1_2{
        using Addr = Register::Address<0x40044080,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio3_0{
        using Addr = Register::Address<0x40044084,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio3_1{
        using Addr = Register::Address<0x40044088,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio2_3{
        using Addr = Register::Address<0x4004408c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneswdio_pio1_3{
        using Addr = Register::Address<0x40044090,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_4{
        using Addr = Register::Address<0x40044094,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_11{
        using Addr = Register::Address<0x40044098,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio3_2{
        using Addr = Register::Address<0x4004409c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_5{
        using Addr = Register::Address<0x400440a0,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_6{
        using Addr = Register::Address<0x400440a4,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_7{
        using Addr = Register::Address<0x400440a8,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio3_3{
        using Addr = Register::Address<0x400440ac,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonesck0_loc{
        using Addr = Register::Address<0x400440b0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SCKLOC; 
    }
    namespace Nonedsr_loc{
        using Addr = Register::Address<0x400440b4,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSRLOC; 
    }
    namespace Nonedcd_loc{
        using Addr = Register::Address<0x400440b8,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DCDLOC; 
    }
    namespace Noneri_loc{
        using Addr = Register::Address<0x400440bc,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RILOC; 
    }
}
