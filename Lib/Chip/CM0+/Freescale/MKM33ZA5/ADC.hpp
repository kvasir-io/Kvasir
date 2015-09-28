#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC_sc1a{
        using Addr = Register::Address<0x4002b000,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC_sc1b{
        using Addr = Register::Address<0x4002b004,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC_sc1c{
        using Addr = Register::Address<0x4002b008,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC_sc1d{
        using Addr = Register::Address<0x4002b00c,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC_cfg1{
        using Addr = Register::Address<0x4002b010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADICLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADLSMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> ADIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADLPC; 
    }
    namespace ADC_cfg2{
        using Addr = Register::Address<0x4002b014,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADLSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADHSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADACKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MUXSEL; 
    }
    namespace ADC_ra{
        using Addr = Register::Address<0x4002b018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace ADC_rb{
        using Addr = Register::Address<0x4002b01c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace ADC_rc{
        using Addr = Register::Address<0x4002b020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace ADC_rd{
        using Addr = Register::Address<0x4002b024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> D; 
    }
    namespace ADC_cv1{
        using Addr = Register::Address<0x4002b028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CV; 
    }
    namespace ADC_cv2{
        using Addr = Register::Address<0x4002b02c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CV; 
    }
    namespace ADC_sc2{
        using Addr = Register::Address<0x4002b030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> REFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACFGT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADACT; 
    }
    namespace ADC_sc3{
        using Addr = Register::Address<0x4002b034,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> AVGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AVGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAL; 
    }
    namespace ADC_ofs{
        using Addr = Register::Address<0x4002b038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> OFS; 
    }
    namespace ADC_pg{
        using Addr = Register::Address<0x4002b03c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PG; 
    }
    namespace ADC_clpd{
        using Addr = Register::Address<0x4002b044,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLPD; 
    }
    namespace ADC_clps{
        using Addr = Register::Address<0x4002b048,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLPS; 
    }
    namespace ADC_clp4{
        using Addr = Register::Address<0x4002b04c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CLP4; 
    }
    namespace ADC_clp3{
        using Addr = Register::Address<0x4002b050,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CLP3; 
    }
    namespace ADC_clp2{
        using Addr = Register::Address<0x4002b054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLP2; 
    }
    namespace ADC_clp1{
        using Addr = Register::Address<0x4002b058,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CLP1; 
    }
    namespace ADC_clp0{
        using Addr = Register::Address<0x4002b05c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CLP0; 
    }
}
