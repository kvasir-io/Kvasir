#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x4002d000,0xcffef8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AHBSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AHBDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> APBDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EXTESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> OBUSYF; 
    }
    namespace Noneahbclkg{
        using Addr = Register::Address<0x4002d010,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAMCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLASHCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EMIF0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USB0BCEN; 
    }
    namespace Noneapbclkg0{
        using Addr = Register::Address<0x4002d020,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PLL0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USART0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USART1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UART0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UART1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPI0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPI1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SPI2CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> I2C0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> I2C1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPCA0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PCA0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PCA1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SSG0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIMER0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TIMER1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADC0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ADC1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CMP0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CMP1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CS0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AES0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CRC0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> IDAC0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> IDAC1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> LPT0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> I2S0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> USB0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EVREGCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FLCTRLCEN; 
    }
    namespace Noneapbclkg1{
        using Addr = Register::Address<0x4002d030,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MISC0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MISC1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MISC2CEN; 
    }
    namespace Nonepm3cn{
        using Addr = Register::Address<0x4002d040,0xfffefff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PM3CSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PM3CEN; 
    }
}
