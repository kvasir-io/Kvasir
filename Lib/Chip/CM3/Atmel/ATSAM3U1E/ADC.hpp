#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC_cr{
        using Addr = Register::Address<0x400ac000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> START; 
    }
    namespace ADC_mr{
        using Addr = Register::Address<0x400ac004,0xf08000c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LOWRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRESCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> STARTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> SHTIM; 
    }
    namespace ADC_cher{
        using Addr = Register::Address<0x400ac010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
    }
    namespace ADC_chdr{
        using Addr = Register::Address<0x400ac014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
    }
    namespace ADC_chsr{
        using Addr = Register::Address<0x400ac018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
    }
    namespace ADC_sr{
        using Addr = Register::Address<0x400ac01c,0xfff00000>;
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
    }
    namespace ADC_lcdr{
        using Addr = Register::Address<0x400ac020,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> LDATA; 
    }
    namespace ADC_ier{
        using Addr = Register::Address<0x400ac024,0xfff00000>;
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
    }
    namespace ADC_idr{
        using Addr = Register::Address<0x400ac028,0xfff00000>;
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
    }
    namespace ADC_imr{
        using Addr = Register::Address<0x400ac02c,0xfff00000>;
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
    }
    namespace ADC_cdr0{
        using Addr = Register::Address<0x400ac030,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace ADC_cdr1{
        using Addr = Register::Address<0x400ac034,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace ADC_cdr2{
        using Addr = Register::Address<0x400ac038,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace ADC_cdr3{
        using Addr = Register::Address<0x400ac03c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace ADC_cdr4{
        using Addr = Register::Address<0x400ac040,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace ADC_cdr5{
        using Addr = Register::Address<0x400ac044,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace ADC_cdr6{
        using Addr = Register::Address<0x400ac048,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace ADC_cdr7{
        using Addr = Register::Address<0x400ac04c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DATA; 
    }
    namespace ADC_rpr{
        using Addr = Register::Address<0x400ac100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace ADC_rcr{
        using Addr = Register::Address<0x400ac104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace ADC_rnpr{
        using Addr = Register::Address<0x400ac110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace ADC_rncr{
        using Addr = Register::Address<0x400ac114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace ADC_ptcr{
        using Addr = Register::Address<0x400ac120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace ADC_ptsr{
        using Addr = Register::Address<0x400ac124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
