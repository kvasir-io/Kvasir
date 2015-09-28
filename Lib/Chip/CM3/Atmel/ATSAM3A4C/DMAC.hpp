#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DMAC_gcfg{
        using Addr = Register::Address<0x400c4000,0xffffffef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ARB_CFG; 
    }
    namespace DMAC_en{
        using Addr = Register::Address<0x400c4004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace DMAC_sreq{
        using Addr = Register::Address<0x400c4008,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SSREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DSREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SSREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SSREQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DSREQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SSREQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DSREQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SSREQ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DSREQ5; 
    }
    namespace DMAC_creq{
        using Addr = Register::Address<0x400c400c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DCREQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DCREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SCREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DCREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SCREQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCREQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SCREQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DCREQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SCREQ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DCREQ5; 
    }
    namespace DMAC_last{
        using Addr = Register::Address<0x400c4010,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SLAST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DLAST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SLAST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DLAST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SLAST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DLAST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SLAST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DLAST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLAST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DLAST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SLAST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DLAST5; 
    }
    namespace DMAC_ebcier{
        using Addr = Register::Address<0x400c4018,0xffc0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CBTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CBTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERR5; 
    }
    namespace DMAC_ebcidr{
        using Addr = Register::Address<0x400c401c,0xffc0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CBTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CBTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERR5; 
    }
    namespace DMAC_ebcimr{
        using Addr = Register::Address<0x400c4020,0xffc0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CBTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CBTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERR5; 
    }
    namespace DMAC_ebcisr{
        using Addr = Register::Address<0x400c4024,0xffc0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CBTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CBTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERR5; 
    }
    namespace DMAC_cher{
        using Addr = Register::Address<0x400c4028,0xc0ffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SUSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SUSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SUSP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SUSP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SUSP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SUSP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> KEEP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> KEEP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> KEEP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> KEEP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> KEEP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> KEEP5; 
    }
    namespace DMAC_chdr{
        using Addr = Register::Address<0x400c402c,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DIS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RES0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RES1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RES2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RES3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RES4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RES5; 
    }
    namespace DMAC_chsr{
        using Addr = Register::Address<0x400c4030,0xc0c0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SUSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SUSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SUSP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SUSP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SUSP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SUSP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EMPT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EMPT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EMPT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EMPT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EMPT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EMPT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STAL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STAL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STAL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STAL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STAL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STAL5; 
    }
    namespace DMAC_saddr0{
        using Addr = Register::Address<0x400c403c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC_daddr0{
        using Addr = Register::Address<0x400c4040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC_dscr0{
        using Addr = Register::Address<0x400c4044,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC_ctrla0{
        using Addr = Register::Address<0x400c4048,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC_ctrlb0{
        using Addr = Register::Address<0x400c404c,0x8c0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
    }
    namespace DMAC_cfg0{
        using Addr = Register::Address<0x400c4050,0xc88edd00>;
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
        using Addr = Register::Address<0x400c4064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC_daddr1{
        using Addr = Register::Address<0x400c4068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC_dscr1{
        using Addr = Register::Address<0x400c406c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC_ctrla1{
        using Addr = Register::Address<0x400c4070,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC_ctrlb1{
        using Addr = Register::Address<0x400c4074,0x8c0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
    }
    namespace DMAC_cfg1{
        using Addr = Register::Address<0x400c4078,0xc88edd00>;
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
        using Addr = Register::Address<0x400c408c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC_daddr2{
        using Addr = Register::Address<0x400c4090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC_dscr2{
        using Addr = Register::Address<0x400c4094,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC_ctrla2{
        using Addr = Register::Address<0x400c4098,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC_ctrlb2{
        using Addr = Register::Address<0x400c409c,0x8c0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
    }
    namespace DMAC_cfg2{
        using Addr = Register::Address<0x400c40a0,0xc88edd00>;
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
        using Addr = Register::Address<0x400c40b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC_daddr3{
        using Addr = Register::Address<0x400c40b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC_dscr3{
        using Addr = Register::Address<0x400c40bc,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC_ctrla3{
        using Addr = Register::Address<0x400c40c0,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC_ctrlb3{
        using Addr = Register::Address<0x400c40c4,0x8c0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
    }
    namespace DMAC_cfg3{
        using Addr = Register::Address<0x400c40c8,0xc88edd00>;
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
    namespace DMAC_saddr4{
        using Addr = Register::Address<0x400c40dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC_daddr4{
        using Addr = Register::Address<0x400c40e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC_dscr4{
        using Addr = Register::Address<0x400c40e4,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC_ctrla4{
        using Addr = Register::Address<0x400c40e8,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC_ctrlb4{
        using Addr = Register::Address<0x400c40ec,0x8c0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
    }
    namespace DMAC_cfg4{
        using Addr = Register::Address<0x400c40f0,0xc88edd00>;
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
    namespace DMAC_saddr5{
        using Addr = Register::Address<0x400c4104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC_daddr5{
        using Addr = Register::Address<0x400c4108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC_dscr5{
        using Addr = Register::Address<0x400c410c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC_ctrla5{
        using Addr = Register::Address<0x400c4110,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC_ctrlb5{
        using Addr = Register::Address<0x400c4114,0x8c0effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
    }
    namespace DMAC_cfg5{
        using Addr = Register::Address<0x400c4118,0xc88edd00>;
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
        using Addr = Register::Address<0x400c41e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace DMAC_wpsr{
        using Addr = Register::Address<0x400c41e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
