#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PWM_mr{
        using Addr = Register::Address<0xfffb8000,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIVA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> PREA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DIVB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> PREB; 
    }
    namespace PWM_ena{
        using Addr = Register::Address<0xfffb8004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
    }
    namespace PWM_dis{
        using Addr = Register::Address<0xfffb8008,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
    }
    namespace PWM_sr{
        using Addr = Register::Address<0xfffb800c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
    }
    namespace PWM_ier{
        using Addr = Register::Address<0xfffb8010,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
    }
    namespace PWM_idr{
        using Addr = Register::Address<0xfffb8014,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
    }
    namespace PWM_imr{
        using Addr = Register::Address<0xfffb8018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
    }
    namespace PWM_isr{
        using Addr = Register::Address<0xfffb801c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHID0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHID3; 
    }
    namespace PWM_cmr0{
        using Addr = Register::Address<0xfffb8200,0xfffff8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CPD; 
    }
    namespace PWM_cdty0{
        using Addr = Register::Address<0xfffb8204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CDTY; 
    }
    namespace PWM_cprd0{
        using Addr = Register::Address<0xfffb8208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CPRD; 
    }
    namespace PWM_ccnt0{
        using Addr = Register::Address<0xfffb820c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CNT; 
    }
    namespace PWM_cupd0{
        using Addr = Register::Address<0xfffb8210,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUPD; 
    }
    namespace PWM_cmr1{
        using Addr = Register::Address<0xfffb8220,0xfffff8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CPD; 
    }
    namespace PWM_cdty1{
        using Addr = Register::Address<0xfffb8224,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CDTY; 
    }
    namespace PWM_cprd1{
        using Addr = Register::Address<0xfffb8228,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CPRD; 
    }
    namespace PWM_ccnt1{
        using Addr = Register::Address<0xfffb822c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CNT; 
    }
    namespace PWM_cupd1{
        using Addr = Register::Address<0xfffb8230,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUPD; 
    }
    namespace PWM_cmr2{
        using Addr = Register::Address<0xfffb8240,0xfffff8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CPD; 
    }
    namespace PWM_cdty2{
        using Addr = Register::Address<0xfffb8244,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CDTY; 
    }
    namespace PWM_cprd2{
        using Addr = Register::Address<0xfffb8248,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CPRD; 
    }
    namespace PWM_ccnt2{
        using Addr = Register::Address<0xfffb824c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CNT; 
    }
    namespace PWM_cupd2{
        using Addr = Register::Address<0xfffb8250,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUPD; 
    }
    namespace PWM_cmr3{
        using Addr = Register::Address<0xfffb8260,0xfffff8f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CALG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CPD; 
    }
    namespace PWM_cdty3{
        using Addr = Register::Address<0xfffb8264,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CDTY; 
    }
    namespace PWM_cprd3{
        using Addr = Register::Address<0xfffb8268,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CPRD; 
    }
    namespace PWM_ccnt3{
        using Addr = Register::Address<0xfffb826c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CNT; 
    }
    namespace PWM_cupd3{
        using Addr = Register::Address<0xfffb8270,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUPD; 
    }
}
