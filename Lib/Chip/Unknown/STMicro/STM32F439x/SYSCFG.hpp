#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonememrm{
        using Addr = Register::Address<0x40013800,0xfffff2f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MEM_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FB_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SWP_FMC; 
    }
    namespace Nonepmc{
        using Addr = Register::Address<0x40013804,0xff78ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MII_RMII_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADC1DC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADC2DC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ADC3DC2; 
    }
    namespace Noneexticr1{
        using Addr = Register::Address<0x40013808,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI0; 
    }
    namespace Noneexticr2{
        using Addr = Register::Address<0x4001380c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI4; 
    }
    namespace Noneexticr3{
        using Addr = Register::Address<0x40013810,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI8; 
    }
    namespace Noneexticr4{
        using Addr = Register::Address<0x40013814,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI12; 
    }
    namespace Nonecmpcr{
        using Addr = Register::Address<0x40013820,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMP_PD; 
    }
}
