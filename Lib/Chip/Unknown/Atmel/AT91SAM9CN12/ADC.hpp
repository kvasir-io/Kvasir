#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC_cr{
        using Addr = Register::Address<0xf804c000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TSCALIB; 
    }
    namespace ADC_mr{
        using Addr = Register::Address<0xf804c004,0x70f0008f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LOWRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FWUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PRESCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> STARTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRACKTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> USEQ; 
    }
    namespace ADC_seqr1{
        using Addr = Register::Address<0xf804c008,0x00000000>;
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
        using Addr = Register::Address<0xf804c00c,0x00000000>;
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
        using Addr = Register::Address<0xf804c010,0xfffff000>;
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
        using Addr = Register::Address<0xf804c014,0xfffff000>;
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
        using Addr = Register::Address<0xf804c018,0xfffff000>;
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
        using Addr = Register::Address<0xf804c020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LDATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CHNB; 
    }
    namespace ADC_ier{
        using Addr = Register::Address<0xf804c024,0x988ff000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NOPEN; 
    }
    namespace ADC_idr{
        using Addr = Register::Address<0xf804c028,0x988ff000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NOPEN; 
    }
    namespace ADC_imr{
        using Addr = Register::Address<0xf804c02c,0x988ff000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NOPEN; 
    }
    namespace ADC_isr{
        using Addr = Register::Address<0xf804c030,0x188ff000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> COMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NOPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PENS; 
    }
    namespace ADC_over{
        using Addr = Register::Address<0xf804c03c,0xfffff000>;
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
        using Addr = Register::Address<0xf804c040,0xfefffd0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CMPMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CMPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CMPALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TAG; 
    }
    namespace ADC_cwr{
        using Addr = Register::Address<0xf804c044,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LOWTHRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> HIGHTHRES; 
    }
    namespace ADC_cdr0{
        using Addr = Register::Address<0xf804c050,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr1{
        using Addr = Register::Address<0xf804c054,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr2{
        using Addr = Register::Address<0xf804c058,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr3{
        using Addr = Register::Address<0xf804c05c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr4{
        using Addr = Register::Address<0xf804c060,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr5{
        using Addr = Register::Address<0xf804c064,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr6{
        using Addr = Register::Address<0xf804c068,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr7{
        using Addr = Register::Address<0xf804c06c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr8{
        using Addr = Register::Address<0xf804c070,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr9{
        using Addr = Register::Address<0xf804c074,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr10{
        using Addr = Register::Address<0xf804c078,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_cdr11{
        using Addr = Register::Address<0xf804c07c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DATA; 
    }
    namespace ADC_acr{
        using Addr = Register::Address<0xf804c094,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PENDETSENS; 
    }
    namespace ADC_tsmr{
        using Addr = Register::Address<0xf804c0b0,0x0eb0f0cc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TSMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TSAV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TSFREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TSSCTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> NOTSDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PENDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> PENDBC; 
    }
    namespace ADC_xposr{
        using Addr = Register::Address<0xf804c0b4,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> XPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> XSCALE; 
    }
    namespace ADC_yposr{
        using Addr = Register::Address<0xf804c0b8,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> YPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> YSCALE; 
    }
    namespace ADC_pressr{
        using Addr = Register::Address<0xf804c0bc,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> Z1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> Z2; 
    }
    namespace ADC_trgr{
        using Addr = Register::Address<0xf804c0c0,0x0000fff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TRGMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TRGPER; 
    }
    namespace ADC_wpmr{
        using Addr = Register::Address<0xf804c0e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace ADC_wpsr{
        using Addr = Register::Address<0xf804c0e8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
