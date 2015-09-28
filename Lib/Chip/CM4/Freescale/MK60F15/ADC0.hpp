#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC0_sc1a{
        using Addr = Register::Address<0x4003b000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC0_sc1b{
        using Addr = Register::Address<0x4003b004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC0_cfg1{
        using Addr = Register::Address<0x4003b008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADICLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADLSMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> ADIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADLPC; 
    }
    namespace ADC0_cfg2{
        using Addr = Register::Address<0x4003b00c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADLSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADHSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADACKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MUXSEL; 
    }
    namespace ADC0_ra{
        using Addr = Register::Address<0x4003b010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace ADC0_rb{
        using Addr = Register::Address<0x4003b014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace ADC0_cv1{
        using Addr = Register::Address<0x4003b018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CV; 
    }
    namespace ADC0_cv2{
        using Addr = Register::Address<0x4003b01c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CV; 
    }
    namespace ADC0_sc2{
        using Addr = Register::Address<0x4003b020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> REFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACFGT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADACT; 
    }
    namespace ADC0_sc3{
        using Addr = Register::Address<0x4003b024,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> AVGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AVGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAL; 
    }
    namespace ADC0_ofs{
        using Addr = Register::Address<0x4003b028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> OFS; 
    }
    namespace ADC0_pg{
        using Addr = Register::Address<0x4003b02c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PG; 
    }
    namespace ADC0_mg{
        using Addr = Register::Address<0x4003b030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MG; 
    }
    namespace ADC0_clpd{
        using Addr = Register::Address<0x4003b034,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLPD; 
    }
    namespace ADC0_clps{
        using Addr = Register::Address<0x4003b038,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLPS; 
    }
    namespace ADC0_clp4{
        using Addr = Register::Address<0x4003b03c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CLP4; 
    }
    namespace ADC0_clp3{
        using Addr = Register::Address<0x4003b040,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CLP3; 
    }
    namespace ADC0_clp2{
        using Addr = Register::Address<0x4003b044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLP2; 
    }
    namespace ADC0_clp1{
        using Addr = Register::Address<0x4003b048,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CLP1; 
    }
    namespace ADC0_clp0{
        using Addr = Register::Address<0x4003b04c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLP0; 
    }
    namespace ADC0_pga{
        using Addr = Register::Address<0x4003b050,0xff40bfff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PGAOFSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PGAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PGALPb; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PGACHPb; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PGAEN; 
    }
    namespace ADC0_clmd{
        using Addr = Register::Address<0x4003b054,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLMD; 
    }
    namespace ADC0_clms{
        using Addr = Register::Address<0x4003b058,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLMS; 
    }
    namespace ADC0_clm4{
        using Addr = Register::Address<0x4003b05c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CLM4; 
    }
    namespace ADC0_clm3{
        using Addr = Register::Address<0x4003b060,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CLM3; 
    }
    namespace ADC0_clm2{
        using Addr = Register::Address<0x4003b064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLM2; 
    }
    namespace ADC0_clm1{
        using Addr = Register::Address<0x4003b068,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CLM1; 
    }
    namespace ADC0_clm0{
        using Addr = Register::Address<0x4003b06c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLM0; 
    }
}
