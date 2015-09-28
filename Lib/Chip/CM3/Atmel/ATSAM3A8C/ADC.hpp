#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC_cr{
        using Addr = Register::Address<0x400c0000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> START; 
    }
    namespace ADC_mr{
        using Addr = Register::Address<0x400c0004,0x40400000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LOWRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FWUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FREERUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRESCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> STARTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SETTLING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ANACH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRACKTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TRANSFER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> USEQ; 
    }
    namespace ADC_seqr1{
        using Addr = Register::Address<0x400c0008,0x00000000>;
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
        using Addr = Register::Address<0x400c000c,0x00000000>;
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
        using Addr = Register::Address<0x400c0010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace ADC_chdr{
        using Addr = Register::Address<0x400c0014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace ADC_chsr{
        using Addr = Register::Address<0x400c0018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15; 
    }
    namespace ADC_lcdr{
        using Addr = Register::Address<0x400c0020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CHNB; 
    }
    namespace ADC_ier{
        using Addr = Register::Address<0x400c0024,0xe0ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EOC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EOC8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EOC9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EOC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOC11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EOC12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EOC13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EOC14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EOC15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RXBUFF; 
    }
    namespace ADC_idr{
        using Addr = Register::Address<0x400c0028,0xe0ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EOC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EOC8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EOC9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EOC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOC11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EOC12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EOC13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EOC14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EOC15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RXBUFF; 
    }
    namespace ADC_imr{
        using Addr = Register::Address<0x400c002c,0xe0ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EOC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EOC8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EOC9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EOC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOC11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EOC12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EOC13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EOC14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EOC15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RXBUFF; 
    }
    namespace ADC_isr{
        using Addr = Register::Address<0x400c0030,0xe0ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EOC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EOC8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EOC9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EOC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOC11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EOC12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EOC13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EOC14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EOC15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ENDRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RXBUFF; 
    }
    namespace ADC_over{
        using Addr = Register::Address<0x400c003c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVRE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVRE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVRE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVRE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVRE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVRE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVRE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVRE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVRE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OVRE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVRE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OVRE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OVRE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OVRE15; 
    }
    namespace ADC_emr{
        using Addr = Register::Address<0x400c0040,0xfeffcd0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CMPMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CMPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CMPALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CMPFILTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TAG; 
    }
    namespace ADC_cwr{
        using Addr = Register::Address<0x400c0044,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LOWTHRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> HIGHTHRES; 
    }
    namespace ADC_cgr{
        using Addr = Register::Address<0x400c0048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> GAIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> GAIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GAIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> GAIN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> GAIN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> GAIN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> GAIN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> GAIN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> GAIN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> GAIN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> GAIN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> GAIN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> GAIN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> GAIN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> GAIN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> GAIN15; 
    }
    namespace ADC_cor{
        using Addr = Register::Address<0x400c004c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OFF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OFF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OFF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OFF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OFF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OFF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OFF8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OFF9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OFF10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OFF11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OFF12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OFF13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OFF14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OFF15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DIFF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DIFF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DIFF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DIFF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DIFF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DIFF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DIFF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DIFF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DIFF8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DIFF9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DIFF10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DIFF11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DIFF12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DIFF13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DIFF14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DIFF15; 
    }
    namespace ADC_cdr0{
        using Addr = Register::Address<0x400c0050,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr1{
        using Addr = Register::Address<0x400c0054,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr2{
        using Addr = Register::Address<0x400c0058,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr3{
        using Addr = Register::Address<0x400c005c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr4{
        using Addr = Register::Address<0x400c0060,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr5{
        using Addr = Register::Address<0x400c0064,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr6{
        using Addr = Register::Address<0x400c0068,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr7{
        using Addr = Register::Address<0x400c006c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr8{
        using Addr = Register::Address<0x400c0070,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr9{
        using Addr = Register::Address<0x400c0074,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr10{
        using Addr = Register::Address<0x400c0078,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr11{
        using Addr = Register::Address<0x400c007c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr12{
        using Addr = Register::Address<0x400c0080,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr13{
        using Addr = Register::Address<0x400c0084,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr14{
        using Addr = Register::Address<0x400c0088,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr15{
        using Addr = Register::Address<0x400c008c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_acr{
        using Addr = Register::Address<0x400c0094,0xfffffcef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> IBCTL; 
    }
    namespace ADC_wpmr{
        using Addr = Register::Address<0x400c00e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace ADC_wpsr{
        using Addr = Register::Address<0x400c00e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
    namespace ADC_rpr{
        using Addr = Register::Address<0x400c0100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXPTR; 
    }
    namespace ADC_rcr{
        using Addr = Register::Address<0x400c0104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXCTR; 
    }
    namespace ADC_rnpr{
        using Addr = Register::Address<0x400c0110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXNPTR; 
    }
    namespace ADC_rncr{
        using Addr = Register::Address<0x400c0114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXNCTR; 
    }
    namespace ADC_ptcr{
        using Addr = Register::Address<0x400c0120,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXTDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXTDIS; 
    }
    namespace ADC_ptsr{
        using Addr = Register::Address<0x400c0124,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXTEN; 
    }
}
