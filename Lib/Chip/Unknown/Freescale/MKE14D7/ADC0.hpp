#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC0_sc1{
        using Addr = Register::Address<0x4003b000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COCO; 
    }
    namespace ADC0_sc2{
        using Addr = Register::Address<0x4003b002,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADACT; 
    }
    namespace ADC0_sc3{
        using Addr = Register::Address<0x4003b004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADICLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADLSMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> ADIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADLPC; 
    }
    namespace ADC0_sc4{
        using Addr = Register::Address<0x4003b006,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AFDEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACFSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ASCANE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMAEN; 
    }
    namespace ADC0_r{
        using Addr = Register::Address<0x4003b008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ADR; 
    }
    namespace ADC0_cva{
        using Addr = Register::Address<0x4003b00a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VA; 
    }
    namespace ADC0_cvb{
        using Addr = Register::Address<0x4003b00c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VB; 
    }
    namespace ADC0_apctl{
        using Addr = Register::Address<0x4003b00e,0xfffff000>;
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
