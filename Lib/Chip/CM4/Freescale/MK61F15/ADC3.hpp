#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC3_sc1a{
        using Addr = Register::Address<0x400bc000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC3_sc1b{
        using Addr = Register::Address<0x400bc004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DIFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC3_cfg1{
        using Addr = Register::Address<0x400bc008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADICLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADLSMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> ADIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADLPC; 
    }
    namespace ADC3_cfg2{
        using Addr = Register::Address<0x400bc00c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADLSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADHSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADACKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MUXSEL; 
    }
    namespace ADC3_ra{
        using Addr = Register::Address<0x400bc010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace ADC3_rb{
        using Addr = Register::Address<0x400bc014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace ADC3_cv1{
        using Addr = Register::Address<0x400bc018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CV; 
    }
    namespace ADC3_cv2{
        using Addr = Register::Address<0x400bc01c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CV; 
    }
    namespace ADC3_sc2{
        using Addr = Register::Address<0x400bc020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> REFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACFGT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADACT; 
    }
    namespace ADC3_sc3{
        using Addr = Register::Address<0x400bc024,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> AVGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AVGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAL; 
    }
    namespace ADC3_ofs{
        using Addr = Register::Address<0x400bc028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> OFS; 
    }
    namespace ADC3_pg{
        using Addr = Register::Address<0x400bc02c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PG; 
    }
    namespace ADC3_mg{
        using Addr = Register::Address<0x400bc030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MG; 
    }
    namespace ADC3_clpd{
        using Addr = Register::Address<0x400bc034,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLPD; 
    }
    namespace ADC3_clps{
        using Addr = Register::Address<0x400bc038,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLPS; 
    }
    namespace ADC3_clp4{
        using Addr = Register::Address<0x400bc03c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CLP4; 
    }
    namespace ADC3_clp3{
        using Addr = Register::Address<0x400bc040,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CLP3; 
    }
    namespace ADC3_clp2{
        using Addr = Register::Address<0x400bc044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLP2; 
    }
    namespace ADC3_clp1{
        using Addr = Register::Address<0x400bc048,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CLP1; 
    }
    namespace ADC3_clp0{
        using Addr = Register::Address<0x400bc04c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLP0; 
    }
    namespace ADC3_pga{
        using Addr = Register::Address<0x400bc050,0xff40bfff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PGAOFSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PGAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PGALPb; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PGACHPb; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PGAEN; 
    }
    namespace ADC3_clmd{
        using Addr = Register::Address<0x400bc054,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLMD; 
    }
    namespace ADC3_clms{
        using Addr = Register::Address<0x400bc058,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLMS; 
    }
    namespace ADC3_clm4{
        using Addr = Register::Address<0x400bc05c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CLM4; 
    }
    namespace ADC3_clm3{
        using Addr = Register::Address<0x400bc060,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CLM3; 
    }
    namespace ADC3_clm2{
        using Addr = Register::Address<0x400bc064,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLM2; 
    }
    namespace ADC3_clm1{
        using Addr = Register::Address<0x400bc068,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CLM1; 
    }
    namespace ADC3_clm0{
        using Addr = Register::Address<0x400bc06c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLM0; 
    }
}
