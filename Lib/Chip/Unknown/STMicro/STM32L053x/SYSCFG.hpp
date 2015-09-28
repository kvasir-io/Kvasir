#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecfgr1{
        using Addr = Register::Address<0x40010000,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> BOOT_MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MEM_MODE; 
    }
    namespace Nonecfgr2{
        using Addr = Register::Address<0x40010004,0xffffc0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> I2C2_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> I2C1_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> I2C_PB9_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> I2C_PB8_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> I2C_PB7_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> I2C_PB6_FMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> CAPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FWDISEN; 
    }
    namespace Noneexticr1{
        using Addr = Register::Address<0x40010008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI0; 
    }
    namespace Noneexticr2{
        using Addr = Register::Address<0x4001000c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI4; 
    }
    namespace Noneexticr3{
        using Addr = Register::Address<0x40010010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI8; 
    }
    namespace Noneexticr4{
        using Addr = Register::Address<0x40010014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> EXTI15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EXTI14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> EXTI13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EXTI12; 
    }
    namespace Nonecfgr3{
        using Addr = Register::Address<0x40010020,0x03ffccce>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> REF_LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> VREFINT_RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> VREFINT_COMP_RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> VREFINT_ADC_RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> SENSOR_ADC_RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> REF_RC48MHz_RDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ENREF_RC48MHz; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENBUF_VREFINT_COMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ENBUF_SENSOR_ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ENBUF_BGAP_ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SEL_VREF_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN_BGAP; 
    }
}
