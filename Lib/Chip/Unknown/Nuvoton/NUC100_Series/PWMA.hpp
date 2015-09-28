#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneppr{
        using Addr = Register::Address<0x40040000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CP01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CP23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DZI01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DZI23; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40040004,0xffff8888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CSR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CSR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CSR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CSR3; 
    }
    namespace Nonepcr{
        using Addr = Register::Address<0x40040008,0xf2f2f2c2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH0INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH0MOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DZEN01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DZEN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH1INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH1MOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CH2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CH2INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CH2MOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CH3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CH3INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CH3MOD; 
    }
    namespace Nonecnr0{
        using Addr = Register::Address<0x4004000c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNR; 
    }
    namespace Nonecmr0{
        using Addr = Register::Address<0x40040010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMR; 
    }
    namespace Nonepdr0{
        using Addr = Register::Address<0x40040014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PDR; 
    }
    namespace Nonecnr1{
        using Addr = Register::Address<0x40040018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNR; 
    }
    namespace Nonecmr1{
        using Addr = Register::Address<0x4004001c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMR; 
    }
    namespace Nonepdr1{
        using Addr = Register::Address<0x40040020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PDR; 
    }
    namespace Nonecnr2{
        using Addr = Register::Address<0x40040024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNR; 
    }
    namespace Nonecmr2{
        using Addr = Register::Address<0x40040028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMR; 
    }
    namespace Nonepdr2{
        using Addr = Register::Address<0x4004002c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PDR; 
    }
    namespace Nonecnr3{
        using Addr = Register::Address<0x40040030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNR; 
    }
    namespace Nonecmr3{
        using Addr = Register::Address<0x40040034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMR; 
    }
    namespace Nonepdr3{
        using Addr = Register::Address<0x40040038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PDR; 
    }
    namespace Nonepbcr{
        using Addr = Register::Address<0x4004003c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BCn; 
    }
    namespace Nonepier{
        using Addr = Register::Address<0x40040040,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWMIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWMIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWMIE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMIE3; 
    }
    namespace Nonepiir{
        using Addr = Register::Address<0x40040044,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWMIF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWMIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWMIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWMIF3; 
    }
    namespace Noneccr0{
        using Addr = Register::Address<0x40040050,0xff20ff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRL_IE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CFL_IE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCH0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPIF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRLRI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CFLRI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CRL_IE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFL_IE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CAPCH1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CAPIF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CRLRI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CFLRI1; 
    }
    namespace Noneccr2{
        using Addr = Register::Address<0x40040054,0xff20ff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRL_IE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CFL_IE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPCH2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAPIF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRLRI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CFLRI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CRL_IE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFL_IE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CAPCH3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CAPIF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CRLRI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CFLRI3; 
    }
    namespace Nonecrlr0{
        using Addr = Register::Address<0x40040058,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRLR; 
    }
    namespace Nonecflr0{
        using Addr = Register::Address<0x4004005c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CFLR; 
    }
    namespace Nonecrlr1{
        using Addr = Register::Address<0x40040060,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRLR; 
    }
    namespace Nonecflr1{
        using Addr = Register::Address<0x40040064,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CFLR; 
    }
    namespace Nonecrlr2{
        using Addr = Register::Address<0x40040068,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRLR; 
    }
    namespace Nonecflr2{
        using Addr = Register::Address<0x4004006c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CFLR; 
    }
    namespace Nonecrlr3{
        using Addr = Register::Address<0x40040070,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CRLR; 
    }
    namespace Nonecflr3{
        using Addr = Register::Address<0x40040074,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CFLR; 
    }
    namespace Nonecapenr{
        using Addr = Register::Address<0x40040078,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CAPENR; 
    }
    namespace Nonepoe{
        using Addr = Register::Address<0x4004007c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWM3; 
    }
}
