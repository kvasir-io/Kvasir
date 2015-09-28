#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC12B_cr{
        using Addr = Register::Address<0x400a8000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> START; 
    }
    namespace ADC12B_mr{
        using Addr = Register::Address<0x400a8004,0xf00000c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LOWRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRESCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> STARTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> SHTIM; 
    }
    namespace ADC12B_cher{
        using Addr = Register::Address<0x400a8010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
    }
    namespace ADC12B_chdr{
        using Addr = Register::Address<0x400a8014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
    }
    namespace ADC12B_chsr{
        using Addr = Register::Address<0x400a8018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
    }
    namespace ADC12B_sr{
        using Addr = Register::Address<0x400a801c,0xfff00000>;
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
    namespace ADC12B_lcdr{
        using Addr = Register::Address<0x400a8020,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LDATA; 
    }
    namespace ADC12B_ier{
        using Addr = Register::Address<0x400a8024,0xfff00000>;
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
    namespace ADC12B_idr{
        using Addr = Register::Address<0x400a8028,0xfff00000>;
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
    namespace ADC12B_imr{
        using Addr = Register::Address<0x400a802c,0xfff00000>;
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
    namespace ADC12B_cdr0{
        using Addr = Register::Address<0x400a8030,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC12B_cdr1{
        using Addr = Register::Address<0x400a8034,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC12B_cdr2{
        using Addr = Register::Address<0x400a8038,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC12B_cdr3{
        using Addr = Register::Address<0x400a803c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC12B_cdr4{
        using Addr = Register::Address<0x400a8040,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC12B_cdr5{
        using Addr = Register::Address<0x400a8044,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC12B_cdr6{
        using Addr = Register::Address<0x400a8048,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC12B_cdr7{
        using Addr = Register::Address<0x400a804c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC12B_acr{
        using Addr = Register::Address<0x400a8064,0xfffcfcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> GAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> IBCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OFFSET; 
    }
    namespace ADC12B_emr{
        using Addr = Register::Address<0x400a8068,0xff00fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OFFMODES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> OFF_MODE_STARTUP_TIME; 
    }
    namespace ADC12B_rpr{
        using Addr = Register::Address<0x400a8100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace ADC12B_rcr{
        using Addr = Register::Address<0x400a8104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace ADC12B_rnpr{
        using Addr = Register::Address<0x400a8110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace ADC12B_rncr{
        using Addr = Register::Address<0x400a8114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace ADC12B_ptcr{
        using Addr = Register::Address<0x400a8120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace ADC12B_ptsr{
        using Addr = Register::Address<0x400a8124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
