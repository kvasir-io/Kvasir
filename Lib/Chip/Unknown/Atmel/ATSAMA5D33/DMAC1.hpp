#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DMAC1_gcfg{
        using Addr = Register::Address<0xffffe800,0xfffffeef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ARB_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DICEN; 
    }
    namespace DMAC1_en{
        using Addr = Register::Address<0xffffe804,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace DMAC1_sreq{
        using Addr = Register::Address<0xffffe808,0xffff0000>;
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
    namespace DMAC1_creq{
        using Addr = Register::Address<0xffffe80c,0xffff0000>;
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
    namespace DMAC1_last{
        using Addr = Register::Address<0xffffe810,0xffff0000>;
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
    namespace DMAC1_ebcier{
        using Addr = Register::Address<0xffffe818,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DICERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DICERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DICERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DICERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DICERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DICERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DICERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DICERR7; 
    }
    namespace DMAC1_ebcidr{
        using Addr = Register::Address<0xffffe81c,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DICERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DICERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DICERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DICERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DICERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DICERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DICERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DICERR7; 
    }
    namespace DMAC1_ebcimr{
        using Addr = Register::Address<0xffffe820,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DICERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DICERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DICERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DICERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DICERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DICERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DICERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DICERR7; 
    }
    namespace DMAC1_ebcisr{
        using Addr = Register::Address<0xffffe824,0x00000000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DICERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DICERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DICERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DICERR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DICERR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DICERR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DICERR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DICERR7; 
    }
    namespace DMAC1_cher{
        using Addr = Register::Address<0xffffe828,0x00ff0000>;
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
    namespace DMAC1_chdr{
        using Addr = Register::Address<0xffffe82c,0xffff0000>;
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
    namespace DMAC1_chsr{
        using Addr = Register::Address<0xffffe830,0x00000000>;
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
    namespace DMAC1_saddr0{
        using Addr = Register::Address<0xffffe83c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC1_daddr0{
        using Addr = Register::Address<0xffffe840,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC1_dscr0{
        using Addr = Register::Address<0xffffe844,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC1_ctrla0{
        using Addr = Register::Address<0xffffe848,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC1_ctrlb0{
        using Addr = Register::Address<0xffffe84c,0x0c8eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC1_cfg0{
        using Addr = Register::Address<0xffffe850,0xc88e0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SRC_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DST_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC1_spip0{
        using Addr = Register::Address<0xffffe854,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC1_dpip0{
        using Addr = Register::Address<0xffffe858,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC1_saddr1{
        using Addr = Register::Address<0xffffe864,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC1_daddr1{
        using Addr = Register::Address<0xffffe868,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC1_dscr1{
        using Addr = Register::Address<0xffffe86c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC1_ctrla1{
        using Addr = Register::Address<0xffffe870,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC1_ctrlb1{
        using Addr = Register::Address<0xffffe874,0x0c8eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC1_cfg1{
        using Addr = Register::Address<0xffffe878,0xc88e0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SRC_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DST_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC1_spip1{
        using Addr = Register::Address<0xffffe87c,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC1_dpip1{
        using Addr = Register::Address<0xffffe880,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC1_saddr2{
        using Addr = Register::Address<0xffffe88c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC1_daddr2{
        using Addr = Register::Address<0xffffe890,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC1_dscr2{
        using Addr = Register::Address<0xffffe894,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC1_ctrla2{
        using Addr = Register::Address<0xffffe898,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC1_ctrlb2{
        using Addr = Register::Address<0xffffe89c,0x0c8eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC1_cfg2{
        using Addr = Register::Address<0xffffe8a0,0xc88e0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SRC_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DST_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC1_spip2{
        using Addr = Register::Address<0xffffe8a4,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC1_dpip2{
        using Addr = Register::Address<0xffffe8a8,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC1_saddr3{
        using Addr = Register::Address<0xffffe8b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC1_daddr3{
        using Addr = Register::Address<0xffffe8b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC1_dscr3{
        using Addr = Register::Address<0xffffe8bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC1_ctrla3{
        using Addr = Register::Address<0xffffe8c0,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC1_ctrlb3{
        using Addr = Register::Address<0xffffe8c4,0x0c8eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC1_cfg3{
        using Addr = Register::Address<0xffffe8c8,0xc88e0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SRC_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DST_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC1_spip3{
        using Addr = Register::Address<0xffffe8cc,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC1_dpip3{
        using Addr = Register::Address<0xffffe8d0,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC1_saddr4{
        using Addr = Register::Address<0xffffe8dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC1_daddr4{
        using Addr = Register::Address<0xffffe8e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC1_dscr4{
        using Addr = Register::Address<0xffffe8e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC1_ctrla4{
        using Addr = Register::Address<0xffffe8e8,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC1_ctrlb4{
        using Addr = Register::Address<0xffffe8ec,0x0c8eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC1_cfg4{
        using Addr = Register::Address<0xffffe8f0,0xc88e0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SRC_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DST_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC1_spip4{
        using Addr = Register::Address<0xffffe8f4,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC1_dpip4{
        using Addr = Register::Address<0xffffe8f8,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC1_saddr5{
        using Addr = Register::Address<0xffffe904,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC1_daddr5{
        using Addr = Register::Address<0xffffe908,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC1_dscr5{
        using Addr = Register::Address<0xffffe90c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC1_ctrla5{
        using Addr = Register::Address<0xffffe910,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC1_ctrlb5{
        using Addr = Register::Address<0xffffe914,0x0c8eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC1_cfg5{
        using Addr = Register::Address<0xffffe918,0xc88e0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SRC_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DST_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC1_spip5{
        using Addr = Register::Address<0xffffe91c,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC1_dpip5{
        using Addr = Register::Address<0xffffe920,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC1_saddr6{
        using Addr = Register::Address<0xffffe92c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC1_daddr6{
        using Addr = Register::Address<0xffffe930,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC1_dscr6{
        using Addr = Register::Address<0xffffe934,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC1_ctrla6{
        using Addr = Register::Address<0xffffe938,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC1_ctrlb6{
        using Addr = Register::Address<0xffffe93c,0x0c8eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC1_cfg6{
        using Addr = Register::Address<0xffffe940,0xc88e0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SRC_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DST_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC1_spip6{
        using Addr = Register::Address<0xffffe944,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC1_dpip6{
        using Addr = Register::Address<0xffffe948,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC1_saddr7{
        using Addr = Register::Address<0xffffe954,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMAC1_daddr7{
        using Addr = Register::Address<0xffffe958,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMAC1_dscr7{
        using Addr = Register::Address<0xffffe95c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DSCR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> DSCR; 
    }
    namespace DMAC1_ctrla7{
        using Addr = Register::Address<0xffffe960,0x4c880000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> DCSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_WIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DONE; 
    }
    namespace DMAC1_ctrlb7{
        using Addr = Register::Address<0xffffe964,0x0c8eeecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_PIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SRC_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DST_DSCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> FC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SRC_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DST_INCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AUTO; 
    }
    namespace DMAC1_cfg7{
        using Addr = Register::Address<0xffffe968,0xc88e0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SRC_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DST_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRC_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRC_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SRC_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DST_REP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DST_H2SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DST_PER_MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LOCK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> LOCK_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LOCK_IF_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AHB_PROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> FIFOCFG; 
    }
    namespace DMAC1_spip7{
        using Addr = Register::Address<0xffffe96c,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> SPIP_BOUNDARY; 
    }
    namespace DMAC1_dpip7{
        using Addr = Register::Address<0xffffe970,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DPIP_HOLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> DPIP_BOUNDARY; 
    }
    namespace DMAC1_wpmr{
        using Addr = Register::Address<0xffffe9e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace DMAC1_wpsr{
        using Addr = Register::Address<0xffffe9e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
