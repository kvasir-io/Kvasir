#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DMAC0_gcfg{
        using Addr = Register::Address<0xffffec00,0xffffffef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ARB_CFG; 
    }
    namespace DMAC0_en{
        using Addr = Register::Address<0xffffec04,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace DMAC0_sreq{
        using Addr = Register::Address<0xffffec08,0xffff0000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SSREQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DSREQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SSREQ7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DSREQ7; 
    }
    namespace DMAC0_creq{
        using Addr = Register::Address<0xffffec0c,0xffff0000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SCREQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DCREQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SCREQ7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DCREQ7; 
    }
    namespace DMAC0_last{
        using Addr = Register::Address<0xffffec10,0xffff0000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SLAST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DLAST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SLAST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DLAST7; 
    }
    namespace DMAC0_ebcier{
        using Addr = Register::Address<0xffffec18,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BTC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CBTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CBTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CBTC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CBTC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ERR7; 
    }
    namespace DMAC0_ebcidr{
        using Addr = Register::Address<0xffffec1c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BTC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CBTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CBTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CBTC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CBTC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ERR7; 
    }
    namespace DMAC0_ebcimr{
        using Addr = Register::Address<0xffffec20,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BTC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CBTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CBTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CBTC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CBTC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ERR7; 
    }
    namespace DMAC0_ebcisr{
        using Addr = Register::Address<0xffffec24,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BTC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CBTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CBTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CBTC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CBTC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CBTC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CBTC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CBTC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CBTC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ERR7; 
    }
    namespace DMAC0_cher{
        using Addr = Register::Address<0xffffec28,0x00ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SUSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SUSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SUSP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SUSP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SUSP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SUSP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SUSP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SUSP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> KEEP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> KEEP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> KEEP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> KEEP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> KEEP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> KEEP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> KEEP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> KEEP7; 
    }
    namespace DMAC0_chdr{
        using Addr = Register::Address<0xffffec2c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DIS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DIS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DIS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RES0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RES1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RES2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RES3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RES4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RES5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RES6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RES7; 
    }
    namespace DMAC0_chsr{
        using Addr = Register::Address<0xffffec30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SUSP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SUSP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SUSP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SUSP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SUSP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SUSP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SUSP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SUSP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EMPT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EMPT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EMPT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EMPT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EMPT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EMPT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EMPT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EMPT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> STAL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> STAL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> STAL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> STAL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> STAL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> STAL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STAL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STAL7; 
    }
    namespace DMAC0_saddr0{
        using Addr = Register::Address<0xffffec3c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC0_daddr0{
        using Addr = Register::Address<0xffffec40,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC0_dscr0{
        using Addr = Register::Address<0xffffec44,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC0_ctrla0{
        using Addr = Register::Address<0xffffec48,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC0_ctrlb0{
        using Addr = Register::Address<0xffffec4c,0x0c0eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC0_cfg0{
        using Addr = Register::Address<0xffffec50,0xc88ecc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC0_spip0{
        using Addr = Register::Address<0xffffec54,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC0_dpip0{
        using Addr = Register::Address<0xffffec58,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC0_saddr1{
        using Addr = Register::Address<0xffffec64,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC0_daddr1{
        using Addr = Register::Address<0xffffec68,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC0_dscr1{
        using Addr = Register::Address<0xffffec6c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC0_ctrla1{
        using Addr = Register::Address<0xffffec70,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC0_ctrlb1{
        using Addr = Register::Address<0xffffec74,0x0c0eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC0_cfg1{
        using Addr = Register::Address<0xffffec78,0xc88ecc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC0_spip1{
        using Addr = Register::Address<0xffffec7c,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC0_dpip1{
        using Addr = Register::Address<0xffffec80,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC0_saddr2{
        using Addr = Register::Address<0xffffec8c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC0_daddr2{
        using Addr = Register::Address<0xffffec90,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC0_dscr2{
        using Addr = Register::Address<0xffffec94,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC0_ctrla2{
        using Addr = Register::Address<0xffffec98,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC0_ctrlb2{
        using Addr = Register::Address<0xffffec9c,0x0c0eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC0_cfg2{
        using Addr = Register::Address<0xffffeca0,0xc88ecc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC0_spip2{
        using Addr = Register::Address<0xffffeca4,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC0_dpip2{
        using Addr = Register::Address<0xffffeca8,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC0_saddr3{
        using Addr = Register::Address<0xffffecb4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC0_daddr3{
        using Addr = Register::Address<0xffffecb8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC0_dscr3{
        using Addr = Register::Address<0xffffecbc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC0_ctrla3{
        using Addr = Register::Address<0xffffecc0,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC0_ctrlb3{
        using Addr = Register::Address<0xffffecc4,0x0c0eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC0_cfg3{
        using Addr = Register::Address<0xffffecc8,0xc88ecc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC0_spip3{
        using Addr = Register::Address<0xffffeccc,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC0_dpip3{
        using Addr = Register::Address<0xffffecd0,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC0_saddr4{
        using Addr = Register::Address<0xffffecdc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC0_daddr4{
        using Addr = Register::Address<0xffffece0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC0_dscr4{
        using Addr = Register::Address<0xffffece4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC0_ctrla4{
        using Addr = Register::Address<0xffffece8,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC0_ctrlb4{
        using Addr = Register::Address<0xffffecec,0x0c0eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC0_cfg4{
        using Addr = Register::Address<0xffffecf0,0xc88ecc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC0_spip4{
        using Addr = Register::Address<0xffffecf4,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC0_dpip4{
        using Addr = Register::Address<0xffffecf8,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC0_saddr5{
        using Addr = Register::Address<0xffffed04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC0_daddr5{
        using Addr = Register::Address<0xffffed08,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC0_dscr5{
        using Addr = Register::Address<0xffffed0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC0_ctrla5{
        using Addr = Register::Address<0xffffed10,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC0_ctrlb5{
        using Addr = Register::Address<0xffffed14,0x0c0eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC0_cfg5{
        using Addr = Register::Address<0xffffed18,0xc88ecc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC0_spip5{
        using Addr = Register::Address<0xffffed1c,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC0_dpip5{
        using Addr = Register::Address<0xffffed20,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC0_saddr6{
        using Addr = Register::Address<0xffffed2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC0_daddr6{
        using Addr = Register::Address<0xffffed30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC0_dscr6{
        using Addr = Register::Address<0xffffed34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC0_ctrla6{
        using Addr = Register::Address<0xffffed38,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC0_ctrlb6{
        using Addr = Register::Address<0xffffed3c,0x0c0eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC0_cfg6{
        using Addr = Register::Address<0xffffed40,0xc88ecc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC0_spip6{
        using Addr = Register::Address<0xffffed44,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC0_dpip6{
        using Addr = Register::Address<0xffffed48,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC0_saddr7{
        using Addr = Register::Address<0xffffed54,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC0_daddr7{
        using Addr = Register::Address<0xffffed58,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC0_dscr7{
        using Addr = Register::Address<0xffffed5c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC0_ctrla7{
        using Addr = Register::Address<0xffffed60,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC0_ctrlb7{
        using Addr = Register::Address<0xffffed64,0x0c0eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC0_cfg7{
        using Addr = Register::Address<0xffffed68,0xc88ecc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC0_spip7{
        using Addr = Register::Address<0xffffed6c,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC0_dpip7{
        using Addr = Register::Address<0xffffed70,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC0_wpmr{
        using Addr = Register::Address<0xffffede4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace DMAC0_wpsr{
        using Addr = Register::Address<0xffffede8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
