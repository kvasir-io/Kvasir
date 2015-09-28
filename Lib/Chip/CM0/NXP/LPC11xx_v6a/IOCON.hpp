#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneiocon_pio2_6{
        using Addr = Register::Address<0x40044000,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_0{
        using Addr = Register::Address<0x40044008,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_reset_pio0_0{
        using Addr = Register::Address<0x4004400c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio0_1{
        using Addr = Register::Address<0x40044010,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio1_8{
        using Addr = Register::Address<0x40044014,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio0_2{
        using Addr = Register::Address<0x4004401c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_7{
        using Addr = Register::Address<0x40044020,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_8{
        using Addr = Register::Address<0x40044024,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_1{
        using Addr = Register::Address<0x40044028,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio0_3{
        using Addr = Register::Address<0x4004402c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio0_4{
        using Addr = Register::Address<0x40044030,0xfffffcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2CMODE; 
    }
    namespace Noneiocon_pio0_5{
        using Addr = Register::Address<0x40044034,0xfffffcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> I2CMODE; 
    }
    namespace Noneiocon_pio1_9{
        using Addr = Register::Address<0x40044038,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio3_4{
        using Addr = Register::Address<0x4004403c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_4{
        using Addr = Register::Address<0x40044040,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_5{
        using Addr = Register::Address<0x40044044,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio3_5{
        using Addr = Register::Address<0x40044048,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio0_6{
        using Addr = Register::Address<0x4004404c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio0_7{
        using Addr = Register::Address<0x40044050,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_9{
        using Addr = Register::Address<0x40044054,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_10{
        using Addr = Register::Address<0x40044058,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_2{
        using Addr = Register::Address<0x4004405c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio0_8{
        using Addr = Register::Address<0x40044060,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio0_9{
        using Addr = Register::Address<0x40044064,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_swclk_pio0_10{
        using Addr = Register::Address<0x40044068,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio1_10{
        using Addr = Register::Address<0x4004406c,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_11{
        using Addr = Register::Address<0x40044070,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_r_pio0_11{
        using Addr = Register::Address<0x40044074,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_r_pio1_0{
        using Addr = Register::Address<0x40044078,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_r_pio1_1{
        using Addr = Register::Address<0x4004407c,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_r_pio1_2{
        using Addr = Register::Address<0x40044080,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio3_0{
        using Addr = Register::Address<0x40044084,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio3_1{
        using Addr = Register::Address<0x40044088,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio2_3{
        using Addr = Register::Address<0x4004408c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_swdio_pio1_3{
        using Addr = Register::Address<0x40044090,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio1_4{
        using Addr = Register::Address<0x40044094,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio1_11{
        using Addr = Register::Address<0x40044098,0xfffffb40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio3_2{
        using Addr = Register::Address<0x4004409c,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio1_5{
        using Addr = Register::Address<0x400440a0,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio1_6{
        using Addr = Register::Address<0x400440a4,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio1_7{
        using Addr = Register::Address<0x400440a8,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_pio3_3{
        using Addr = Register::Address<0x400440ac,0xfffffbc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Noneiocon_sck0_loc{
        using Addr = Register::Address<0x400440b0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SCKLOC; 
    }
    namespace Noneiocon_dsr_loc{
        using Addr = Register::Address<0x400440b4,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSRLOC; 
    }
    namespace Noneiocon_dcd_loc{
        using Addr = Register::Address<0x400440b8,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DCDLOC; 
    }
    namespace Noneiocon_ri_loc{
        using Addr = Register::Address<0x400440bc,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RILOC; 
    }
    namespace Noneiocon_ssel1_loc{
        using Addr = Register::Address<0x40044018,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SSEL1LOC; 
    }
    namespace Noneiocon_ct16b0_cap0_loc{
        using Addr = Register::Address<0x400440c0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CT16B0_CAP0LOC; 
    }
    namespace Noneiocon_sck1_loc{
        using Addr = Register::Address<0x400440c4,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SCK1LOC; 
    }
    namespace Noneiocon_miso1_loc{
        using Addr = Register::Address<0x400440c8,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MISO1LOC; 
    }
    namespace Noneiocon_mosi1_loc{
        using Addr = Register::Address<0x400440cc,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MOSI1LOC; 
    }
    namespace Noneiocon_ct32b0_cap0_loc{
        using Addr = Register::Address<0x400440d0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CT32B0_CAP0LOC; 
    }
    namespace Noneiocon_rxd_loc{
        using Addr = Register::Address<0x400440d4,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RXDLOC; 
    }
}
