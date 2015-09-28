#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonereset_pio0_0{
        using Addr = Register::Address<0x40044000,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_1{
        using Addr = Register::Address<0x40044004,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_2{
        using Addr = Register::Address<0x40044008,0xfffffcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HIDRIVE; 
    }
    namespace Nonepio0_3{
        using Addr = Register::Address<0x4004400c,0xfffffcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HIDRIVE; 
    }
    namespace Nonepio0_4{
        using Addr = Register::Address<0x40044010,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonetck_swclk_pio0_5{
        using Addr = Register::Address<0x40044014,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonetdi_pio0_6{
        using Addr = Register::Address<0x40044018,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonetms_pio0_7{
        using Addr = Register::Address<0x4004401c,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonetdo_pio0_8{
        using Addr = Register::Address<0x40044020,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonetrst_pio0_9{
        using Addr = Register::Address<0x40044024,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneswdio_pio0_10{
        using Addr = Register::Address<0x40044028,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_11{
        using Addr = Register::Address<0x4004402c,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_12{
        using Addr = Register::Address<0x40044030,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_13{
        using Addr = Register::Address<0x40044034,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_14{
        using Addr = Register::Address<0x40044038,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_15{
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
        using Addr = Register::Address<0x40044044,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_18{
        using Addr = Register::Address<0x40044048,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_19{
        using Addr = Register::Address<0x4004404c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_20{
        using Addr = Register::Address<0x40044050,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_21{
        using Addr = Register::Address<0x40044054,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
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
    namespace Nonepio0_24{
        using Addr = Register::Address<0x40044060,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_25{
        using Addr = Register::Address<0x40044064,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_26{
        using Addr = Register::Address<0x40044068,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_27{
        using Addr = Register::Address<0x4004406c,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_28{
        using Addr = Register::Address<0x40044070,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_29{
        using Addr = Register::Address<0x40044074,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_30{
        using Addr = Register::Address<0x40044078,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio0_31{
        using Addr = Register::Address<0x4004407c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_0{
        using Addr = Register::Address<0x40044080,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_1{
        using Addr = Register::Address<0x40044084,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_2{
        using Addr = Register::Address<0x40044088,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_3{
        using Addr = Register::Address<0x4004408c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_4{
        using Addr = Register::Address<0x40044090,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_5{
        using Addr = Register::Address<0x40044094,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_6{
        using Addr = Register::Address<0x40044098,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_7{
        using Addr = Register::Address<0x4004409c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_8{
        using Addr = Register::Address<0x400440a0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonepio1_9{
        using Addr = Register::Address<0x400440a4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
}
