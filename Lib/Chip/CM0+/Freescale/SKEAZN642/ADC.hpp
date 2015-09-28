#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC_sc1{
        using Addr = Register::Address<0x4003b000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC_sc2{
        using Addr = Register::Address<0x4003b004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> REFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACFGT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADACT; 
    }
    namespace ADC_sc3{
        using Addr = Register::Address<0x4003b008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADICLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADLSMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> ADIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADLPC; 
    }
    namespace ADC_sc4{
        using Addr = Register::Address<0x4003b00c,0xffffff98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AFDEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ASCANE; 
    }
    namespace ADC_r{
        using Addr = Register::Address<0x4003b010,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> ADR; 
    }
    namespace ADC_cv{
        using Addr = Register::Address<0x4003b014,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> CV; 
    }
    namespace ADC_apctl1{
        using Addr = Register::Address<0x4003b018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADPC; 
    }
}
