#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC1_sc1a{
        using Addr = Register::Address<0x400bb000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC1_sc1b{
        using Addr = Register::Address<0x400bb004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC1_cfg1{
        using Addr = Register::Address<0x400bb008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADICLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADLSMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> ADIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADLPC; 
    }
    namespace ADC1_cfg2{
        using Addr = Register::Address<0x400bb00c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADLSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADHSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADACKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MUXSEL; 
    }
    namespace ADC1_ra{
        using Addr = Register::Address<0x400bb010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace ADC1_rb{
        using Addr = Register::Address<0x400bb014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace ADC1_cv1{
        using Addr = Register::Address<0x400bb018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CV; 
    }
    namespace ADC1_cv2{
        using Addr = Register::Address<0x400bb01c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CV; 
    }
    namespace ADC1_sc2{
        using Addr = Register::Address<0x400bb020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> REFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACFGT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADACT; 
    }
    namespace ADC1_sc3{
        using Addr = Register::Address<0x400bb024,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> AVGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AVGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAL; 
    }
    namespace ADC1_ofs{
        using Addr = Register::Address<0x400bb028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> OFS; 
    }
    namespace ADC1_pg{
        using Addr = Register::Address<0x400bb02c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PG; 
    }
    namespace ADC1_mg{
        using Addr = Register::Address<0x400bb030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MG; 
    }
    namespace ADC1_clpd{
        using Addr = Register::Address<0x400bb034,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLPD; 
    }
    namespace ADC1_clps{
        using Addr = Register::Address<0x400bb038,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLPS; 
    }
    namespace ADC1_clp4{
        using Addr = Register::Address<0x400bb03c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CLP4; 
    }
    namespace ADC1_clp3{
        using Addr = Register::Address<0x400bb040,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CLP3; 
    }
    namespace ADC1_clp2{
        using Addr = Register::Address<0x400bb044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLP2; 
    }
    namespace ADC1_clp1{
        using Addr = Register::Address<0x400bb048,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CLP1; 
    }
    namespace ADC1_clp0{
        using Addr = Register::Address<0x400bb04c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLP0; 
    }
    namespace ADC1_clmd{
        using Addr = Register::Address<0x400bb054,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLMD; 
    }
    namespace ADC1_clms{
        using Addr = Register::Address<0x400bb058,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLMS; 
    }
    namespace ADC1_clm4{
        using Addr = Register::Address<0x400bb05c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CLM4; 
    }
    namespace ADC1_clm3{
        using Addr = Register::Address<0x400bb060,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CLM3; 
    }
    namespace ADC1_clm2{
        using Addr = Register::Address<0x400bb064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLM2; 
    }
    namespace ADC1_clm1{
        using Addr = Register::Address<0x400bb068,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CLM1; 
    }
    namespace ADC1_clm0{
        using Addr = Register::Address<0x400bb06c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLM0; 
    }
}
