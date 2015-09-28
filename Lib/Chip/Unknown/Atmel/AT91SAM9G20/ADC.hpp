#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC_cr{
        using Addr = Register::Address<0xfffe0000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> START; 
    }
    namespace ADC_mr{
        using Addr = Register::Address<0xfffe0004,0x70f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LOWRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FWUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FREERUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRESCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> STARTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRACKTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> USEQ; 
    }
    namespace ADC_seqr1{
        using Addr = Register::Address<0xfffe0008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> USCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> USCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> USCH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> USCH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> USCH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> USCH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> USCH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> USCH8; 
    }
    namespace ADC_seqr2{
        using Addr = Register::Address<0xfffe000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> USCH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> USCH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> USCH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> USCH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> USCH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> USCH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> USCH15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> USCH16; 
    }
    namespace ADC_cher{
        using Addr = Register::Address<0xfffe0010,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
    }
    namespace ADC_chdr{
        using Addr = Register::Address<0xfffe0014,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
    }
    namespace ADC_chsr{
        using Addr = Register::Address<0xfffe0018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
    }
    namespace ADC_lcdr{
        using Addr = Register::Address<0xfffe0020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CHNB; 
    }
    namespace ADC_ier{
        using Addr = Register::Address<0xfffe0024,0xe0fffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RXBUFF; 
    }
    namespace ADC_idr{
        using Addr = Register::Address<0xfffe0028,0xe0fffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RXBUFF; 
    }
    namespace ADC_imr{
        using Addr = Register::Address<0xfffe002c,0xe0fffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RXBUFF; 
    }
    namespace ADC_isr{
        using Addr = Register::Address<0xfffe0030,0xe0fffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RXBUFF; 
    }
    namespace ADC_over{
        using Addr = Register::Address<0xfffe003c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVRE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRE3; 
    }
    namespace ADC_emr{
        using Addr = Register::Address<0xfffe0040,0xfefffd0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CMPMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CMPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CMPALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TAG; 
    }
    namespace ADC_cwr{
        using Addr = Register::Address<0xfffe0044,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LOWTHRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> HIGHTHRES; 
    }
    namespace ADC_cdr0{
        using Addr = Register::Address<0xfffe0050,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr1{
        using Addr = Register::Address<0xfffe0054,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr2{
        using Addr = Register::Address<0xfffe0058,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr3{
        using Addr = Register::Address<0xfffe005c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_wpmr{
        using Addr = Register::Address<0xfffe00e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace ADC_wpsr{
        using Addr = Register::Address<0xfffe00e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
    namespace ADC_rpr{
        using Addr = Register::Address<0xfffe0100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace ADC_rcr{
        using Addr = Register::Address<0xfffe0104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace ADC_rnpr{
        using Addr = Register::Address<0xfffe0110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace ADC_rncr{
        using Addr = Register::Address<0xfffe0114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace ADC_ptcr{
        using Addr = Register::Address<0xfffe0120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace ADC_ptsr{
        using Addr = Register::Address<0xfffe0124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
