#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DMAC_gcfg{
        using Addr = Register::Address<0x400b0000,0xffffffef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ARB_CFG; 
    }
    namespace DMAC_en{
        using Addr = Register::Address<0x400b0004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace DMAC_sreq{
        using Addr = Register::Address<0x400b0008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SSREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DSREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SSREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SSREQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DSREQ3; 
    }
    namespace DMAC_creq{
        using Addr = Register::Address<0x400b000c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DCREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DCREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SCREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DCREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SCREQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCREQ3; 
    }
    namespace DMAC_last{
        using Addr = Register::Address<0x400b0010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SLAST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DLAST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SLAST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DLAST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SLAST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DLAST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SLAST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DLAST3; 
    }
    namespace DMAC_ebcier{
        using Addr = Register::Address<0x400b0018,0xfff0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
    }
    namespace DMAC_ebcidr{
        using Addr = Register::Address<0x400b001c,0xfff0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
    }
    namespace DMAC_ebcimr{
        using Addr = Register::Address<0x400b0020,0xfff0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
    }
    namespace DMAC_ebcisr{
        using Addr = Register::Address<0x400b0024,0xfff0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
    }
    namespace DMAC_cher{
        using Addr = Register::Address<0x400b0028,0xf0fff0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SUSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SUSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SUSP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SUSP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> KEEP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> KEEP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> KEEP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> KEEP3; 
    }
    namespace DMAC_chdr{
        using Addr = Register::Address<0x400b002c,0xfffff0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RES0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RES1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RES2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RES3; 
    }
    namespace DMAC_chsr{
        using Addr = Register::Address<0x400b0030,0xf0f0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SUSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SUSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SUSP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SUSP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EMPT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EMPT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EMPT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EMPT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STAL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STAL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STAL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STAL3; 
    }
    namespace DMAC_saddr0{
        using Addr = Register::Address<0x400b003c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC_daddr0{
        using Addr = Register::Address<0x400b0040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC_dscr0{
        using Addr = Register::Address<0x400b0044,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC_ctrla0{
        using Addr = Register::Address<0x400b0048,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC_ctrlb0{
        using Addr = Register::Address<0x400b004c,0x8c0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
    }
    namespace DMAC_cfg0{
        using Addr = Register::Address<0x400b0050,0xc88edd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC_saddr1{
        using Addr = Register::Address<0x400b0064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC_daddr1{
        using Addr = Register::Address<0x400b0068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC_dscr1{
        using Addr = Register::Address<0x400b006c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC_ctrla1{
        using Addr = Register::Address<0x400b0070,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC_ctrlb1{
        using Addr = Register::Address<0x400b0074,0x8c0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
    }
    namespace DMAC_cfg1{
        using Addr = Register::Address<0x400b0078,0xc88edd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC_saddr2{
        using Addr = Register::Address<0x400b008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC_daddr2{
        using Addr = Register::Address<0x400b0090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC_dscr2{
        using Addr = Register::Address<0x400b0094,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC_ctrla2{
        using Addr = Register::Address<0x400b0098,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC_ctrlb2{
        using Addr = Register::Address<0x400b009c,0x8c0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
    }
    namespace DMAC_cfg2{
        using Addr = Register::Address<0x400b00a0,0xc88edd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC_saddr3{
        using Addr = Register::Address<0x400b00b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC_daddr3{
        using Addr = Register::Address<0x400b00b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC_dscr3{
        using Addr = Register::Address<0x400b00bc,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC_ctrla3{
        using Addr = Register::Address<0x400b00c0,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC_ctrlb3{
        using Addr = Register::Address<0x400b00c4,0x8c0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
    }
    namespace DMAC_cfg3{
        using Addr = Register::Address<0x400b00c8,0xc88edd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC_wpmr{
        using Addr = Register::Address<0x400b01e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace DMAC_wpsr{
        using Addr = Register::Address<0x400b01e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
