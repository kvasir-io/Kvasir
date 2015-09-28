#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x4002d000,0x0ffef8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AHBSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AHBDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> APBDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EXTESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> OBUSYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> VIORFCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RTC0TCLKEN; 
    }
    namespace Noneahbclkg{
        using Addr = Register::Address<0x4002d010,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAMCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FLASHCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTM0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTM1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DTM2EN; 
    }
    namespace Noneapbclkg0{
        using Addr = Register::Address<0x4002d020,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLCTRLCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USART0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UART0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPI0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPI1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2C0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPCA0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMER0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TIMER1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TIMER2CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ADC0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMP0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CMP1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AES0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CRC0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IDAC0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LPT0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ACCTR0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DTM0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DTM1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DTM2CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> LCD0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DCDC0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ENCDEC0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PLL0CEN; 
    }
    namespace Noneapbclkg1{
        using Addr = Register::Address<0x4002d030,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MISC0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MISC1CEN; 
    }
    namespace Nonepm3cn{
        using Addr = Register::Address<0x4002d040,0xfffefff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PM3CSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PM3CEN; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x4002d060,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMSEL; 
    }
}
