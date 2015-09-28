#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonereset_pio0_0{
        using Addr = Register::Address<0x40044000,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_1{
        using Addr = Register::Address<0x40044004,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_2{
        using Addr = Register::Address<0x40044008,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_3{
        using Addr = Register::Address<0x4004400c,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_4{
        using Addr = Register::Address<0x40044010,0xfffffcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2CMODE; 
    }
    namespace Nonepio0_5{
        using Addr = Register::Address<0x40044014,0xfffffcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2CMODE; 
    }
    namespace Nonepio0_6{
        using Addr = Register::Address<0x40044018,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_7{
        using Addr = Register::Address<0x4004401c,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_8{
        using Addr = Register::Address<0x40044020,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_9{
        using Addr = Register::Address<0x40044024,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneswclk_pio0_10{
        using Addr = Register::Address<0x40044028,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonetdi_pio0_11{
        using Addr = Register::Address<0x4004402c,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonetms_pio0_12{
        using Addr = Register::Address<0x40044030,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonetdo_pio0_13{
        using Addr = Register::Address<0x40044034,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonetrst_pio0_14{
        using Addr = Register::Address<0x40044038,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneswdio_pio0_15{
        using Addr = Register::Address<0x4004403c,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_16{
        using Addr = Register::Address<0x40044040,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_17{
        using Addr = Register::Address<0x40044044,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_18{
        using Addr = Register::Address<0x40044048,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_19{
        using Addr = Register::Address<0x4004404c,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_20{
        using Addr = Register::Address<0x40044050,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_21{
        using Addr = Register::Address<0x40044054,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_22{
        using Addr = Register::Address<0x40044058,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_23{
        using Addr = Register::Address<0x4004405c,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_0{
        using Addr = Register::Address<0x40044060,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_1{
        using Addr = Register::Address<0x40044064,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_2{
        using Addr = Register::Address<0x40044068,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_3{
        using Addr = Register::Address<0x4004406c,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_4{
        using Addr = Register::Address<0x40044070,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_5{
        using Addr = Register::Address<0x40044074,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_7{
        using Addr = Register::Address<0x4004407c,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_8{
        using Addr = Register::Address<0x40044080,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_10{
        using Addr = Register::Address<0x40044088,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_11{
        using Addr = Register::Address<0x4004408c,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_13{
        using Addr = Register::Address<0x40044094,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_14{
        using Addr = Register::Address<0x40044098,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_15{
        using Addr = Register::Address<0x4004409c,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_16{
        using Addr = Register::Address<0x400440a0,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_17{
        using Addr = Register::Address<0x400440a4,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_18{
        using Addr = Register::Address<0x400440a8,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_19{
        using Addr = Register::Address<0x400440ac,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_20{
        using Addr = Register::Address<0x400440b0,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_21{
        using Addr = Register::Address<0x400440b4,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_22{
        using Addr = Register::Address<0x400440b8,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_23{
        using Addr = Register::Address<0x400440bc,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_24{
        using Addr = Register::Address<0x400440c0,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_25{
        using Addr = Register::Address<0x400440c4,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_26{
        using Addr = Register::Address<0x400440c8,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_27{
        using Addr = Register::Address<0x400440cc,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_28{
        using Addr = Register::Address<0x400440d0,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_29{
        using Addr = Register::Address<0x400440d4,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_31{
        using Addr = Register::Address<0x400440dc,0xfffffb80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
}
