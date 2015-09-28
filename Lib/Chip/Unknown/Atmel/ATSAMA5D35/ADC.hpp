#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC_cr{
        using Addr = Register::Address<0xf8018000,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TSCALIB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AUTOCAL; 
    }
    namespace ADC_mr{
        using Addr = Register::Address<0xf8018004,0x70400091>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FWUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRESCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> STARTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SETTLING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ANACH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRACKTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> USEQ; 
    }
    namespace ADC_seqr1{
        using Addr = Register::Address<0xf8018008,0x00000000>;
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
        using Addr = Register::Address<0xf801800c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> USCH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> USCH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> USCH11; 
    }
    namespace ADC_cher{
        using Addr = Register::Address<0xf8018010,0xfffff000>;
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
    }
    namespace ADC_chdr{
        using Addr = Register::Address<0xf8018014,0xfffff000>;
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
    }
    namespace ADC_chsr{
        using Addr = Register::Address<0xf8018018,0xfffff000>;
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
    }
    namespace ADC_lcdr{
        using Addr = Register::Address<0xf8018020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CHNB; 
    }
    namespace ADC_ier{
        using Addr = Register::Address<0xf8018024,0x980ff000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> XRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> YRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EOCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NOPEN; 
    }
    namespace ADC_idr{
        using Addr = Register::Address<0xf8018028,0x980ff000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> XRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> YRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EOCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NOPEN; 
    }
    namespace ADC_imr{
        using Addr = Register::Address<0xf801802c,0x980ff000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> XRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> YRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EOCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NOPEN; 
    }
    namespace ADC_isr{
        using Addr = Register::Address<0xf8018030,0x180ff000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> XRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> YRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EOCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NOPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PENS; 
    }
    namespace ADC_over{
        using Addr = Register::Address<0xf801803c,0xfffff000>;
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
    }
    namespace ADC_emr{
        using Addr = Register::Address<0xf8018040,0xfeffcd0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CMPMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CMPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CMPALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CMPFILTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TAG; 
    }
    namespace ADC_cwr{
        using Addr = Register::Address<0xf8018044,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LOWTHRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> HIGHTHRES; 
    }
    namespace ADC_cgr{
        using Addr = Register::Address<0xf8018048,0xff000000>;
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
    }
    namespace ADC_cor{
        using Addr = Register::Address<0xf801804c,0xf000f000>;
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
    }
    namespace ADC_cdr0{
        using Addr = Register::Address<0xf8018050,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr1{
        using Addr = Register::Address<0xf8018054,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr2{
        using Addr = Register::Address<0xf8018058,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr3{
        using Addr = Register::Address<0xf801805c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr4{
        using Addr = Register::Address<0xf8018060,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr5{
        using Addr = Register::Address<0xf8018064,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr6{
        using Addr = Register::Address<0xf8018068,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr7{
        using Addr = Register::Address<0xf801806c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr8{
        using Addr = Register::Address<0xf8018070,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr9{
        using Addr = Register::Address<0xf8018074,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr10{
        using Addr = Register::Address<0xf8018078,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr11{
        using Addr = Register::Address<0xf801807c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_acr{
        using Addr = Register::Address<0xf8018094,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PENDETSENS; 
    }
    namespace ADC_tsmr{
        using Addr = Register::Address<0xf80180b0,0x0eb0f0cc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TSMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TSAV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TSFREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TSSCTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> NOTSDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PENDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> PENDBC; 
    }
    namespace ADC_xposr{
        using Addr = Register::Address<0xf80180b4,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> XPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> XSCALE; 
    }
    namespace ADC_yposr{
        using Addr = Register::Address<0xf80180b8,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> YPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> YSCALE; 
    }
    namespace ADC_pressr{
        using Addr = Register::Address<0xf80180bc,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> Z1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> Z2; 
    }
    namespace ADC_trgr{
        using Addr = Register::Address<0xf80180c0,0x0000fff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TRGMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TRGPER; 
    }
    namespace ADC_wpmr{
        using Addr = Register::Address<0xf80180e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace ADC_wpsr{
        using Addr = Register::Address<0xf80180e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
