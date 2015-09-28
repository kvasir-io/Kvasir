#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TSADCC_cr{
        using Addr = Register::Address<0xfffb0000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> START; 
    }
    namespace TSADCC_mr{
        using Addr = Register::Address<0xfffb0004,0x00800004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TSAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PDCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LOWRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PENDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRESCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> STARTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> SHTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> PENDBC; 
    }
    namespace TSADCC_trgr{
        using Addr = Register::Address<0xfffb0008,0x0000fff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TRGMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TRGPER; 
    }
    namespace TSADCC_tsr{
        using Addr = Register::Address<0xfffb000c,0xf0fffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TSFREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TSSHTIM; 
    }
    namespace TSADCC_cher{
        using Addr = Register::Address<0xfffb0010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
    }
    namespace TSADCC_chdr{
        using Addr = Register::Address<0xfffb0014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
    }
    namespace TSADCC_chsr{
        using Addr = Register::Address<0xfffb0018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
    }
    namespace TSADCC_sr{
        using Addr = Register::Address<0xfffb001c,0x88c00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EOC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVRE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OVRE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVRE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OVRE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OVRE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OVRE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PENCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> NOCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EOCXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EOCZ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EOCZ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> OVREXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> OVREZ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVREZ2; 
    }
    namespace TSADCC_lcdr{
        using Addr = Register::Address<0xfffb0020,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> LDATA; 
    }
    namespace TSADCC_ier{
        using Addr = Register::Address<0xfffb0024,0x88c00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EOC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVRE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OVRE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVRE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OVRE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OVRE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OVRE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PENCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> NOCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EOCXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EOCZ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EOCZ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> OVREXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> OVREZ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVREZ2; 
    }
    namespace TSADCC_idr{
        using Addr = Register::Address<0xfffb0028,0x88c00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EOC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVRE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OVRE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVRE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OVRE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OVRE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OVRE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PENCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> NOCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EOCXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EOCZ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EOCZ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> OVREXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> OVREZ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVREZ2; 
    }
    namespace TSADCC_imr{
        using Addr = Register::Address<0xfffb002c,0x88c00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EOC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVRE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OVRE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVRE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OVRE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OVRE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OVRE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXBUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PENCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> NOCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EOCXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EOCZ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EOCZ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> OVREXP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> OVREZ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OVREZ2; 
    }
    namespace TSADCC_cdr0{
        using Addr = Register::Address<0xfffb0030,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace TSADCC_cdr1{
        using Addr = Register::Address<0xfffb0034,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace TSADCC_cdr2{
        using Addr = Register::Address<0xfffb0038,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace TSADCC_cdr3{
        using Addr = Register::Address<0xfffb003c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace TSADCC_cdr4{
        using Addr = Register::Address<0xfffb0040,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace TSADCC_cdr5{
        using Addr = Register::Address<0xfffb0044,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace TSADCC_cdr6{
        using Addr = Register::Address<0xfffb0048,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace TSADCC_cdr7{
        using Addr = Register::Address<0xfffb004c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace TSADCC_xpdr{
        using Addr = Register::Address<0xfffb0050,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace TSADCC_z1dr{
        using Addr = Register::Address<0xfffb0054,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace TSADCC_z2dr{
        using Addr = Register::Address<0xfffb0058,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> Z2; 
    }
    namespace TSADCC_mscr{
        using Addr = Register::Address<0xfffb0060,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> XM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> YP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> YM; 
    }
    namespace TSADCC_wpmr{
        using Addr = Register::Address<0xfffb00e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> KEY; 
    }
    namespace TSADCC_wpsr{
        using Addr = Register::Address<0xfffb00e8,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> OFFSET_ERR; 
    }
    namespace TSADCC_rpr{
        using Addr = Register::Address<0xfffb0100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace TSADCC_rcr{
        using Addr = Register::Address<0xfffb0104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace TSADCC_rnpr{
        using Addr = Register::Address<0xfffb0110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace TSADCC_rncr{
        using Addr = Register::Address<0xfffb0114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace TSADCC_ptcr{
        using Addr = Register::Address<0xfffb0120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace TSADCC_ptsr{
        using Addr = Register::Address<0xfffb0124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
