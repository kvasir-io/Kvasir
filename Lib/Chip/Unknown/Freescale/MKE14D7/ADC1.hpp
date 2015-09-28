#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC1_sc1{
        using Addr = Register::Address<0x4003c000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC1_sc2{
        using Addr = Register::Address<0x4003c002,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADACT; 
    }
    namespace ADC1_sc3{
        using Addr = Register::Address<0x4003c004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADICLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADLSMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> ADIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADLPC; 
    }
    namespace ADC1_sc4{
        using Addr = Register::Address<0x4003c006,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AFDEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ASCANE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMAEN; 
    }
    namespace ADC1_r{
        using Addr = Register::Address<0x4003c008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADR; 
    }
    namespace ADC1_cva{
        using Addr = Register::Address<0x4003c00a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VA; 
    }
    namespace ADC1_cvb{
        using Addr = Register::Address<0x4003c00c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VB; 
    }
    namespace ADC1_apctl{
        using Addr = Register::Address<0x4003c00e,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADPC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADPC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADPC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADPC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADPC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADPC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADPC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADPC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ADPC8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADPC9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ADPC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ADPC11; 
    }
}
