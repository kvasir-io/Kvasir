#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x40021000,0xfcf00004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HSION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> HSITRIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> HSICAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> HSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CSSON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PLLON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PLLRDY; 
    }
    namespace Nonecfgr{
        using Addr = Register::Address<0x40021004,0xf8c00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PPRE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> PPRE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> ADCPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PLLSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PLLXTPRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> PLLMUL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> MCO; 
    }
    namespace Nonecir{
        using Addr = Register::Address<0x40021008,0xff60e060>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSIRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HSERDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLLRDYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CSSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HSIRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HSERDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PLLRDYIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HSIRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HSERDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PLLRDYC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CSSC; 
    }
    namespace Noneapb2rstr{
        using Addr = Register::Address<0x4002100c,0xffffadc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AFIORST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IOPARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IOPBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IOPCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IOPDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADC1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1RST; 
    }
    namespace Noneapb1rstr{
        using Addr = Register::Address<0x40021010,0xe7ddf7fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> BKPRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWRRST; 
    }
    namespace Noneahbenr{
        using Addr = Register::Address<0x40021014,0xffffffa8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMA2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRAMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FLITFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCEN; 
    }
    namespace Noneapb2enr{
        using Addr = Register::Address<0x40021018,0xffffadc2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AFIOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IOPAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IOPBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IOPCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IOPDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ADC1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SPI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> USART1EN; 
    }
    namespace Noneapb1enr{
        using Addr = Register::Address<0x4002101c,0xe7ddf7fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIM2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIM3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WWDGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USART2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2C1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> BKPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PWREN; 
    }
    namespace Nonebdcr{
        using Addr = Register::Address<0x40021020,0xfffe7cf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LSEBYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RTCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RTCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BDRST; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40021024,0x02fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSIRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RMVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PINRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PORRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SFTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> WWDGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LPWRRSTF; 
    }
}
