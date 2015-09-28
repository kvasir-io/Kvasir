#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol0{
        using Addr = Register::Address<0x4002a000,0x60ff4040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> INT0SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INT0POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INT0MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INT0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> INT1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INT1POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INT1MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INT1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> PGTIMER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PGDONEF; 
    }
    namespace Nonecontrol1{
        using Addr = Register::Address<0x4002a010,0x7f7c007c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JTAGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ETMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EMIFBE0BEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EMIFCS1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EMIFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> EMIFWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> MATMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EVREGRMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOCK; 
    }
    namespace Nonexbar0l{
        using Addr = Register::Address<0x4002a020,0x80003800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USART0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USART0FCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USART0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SPI0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPI0NSSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> USART1FCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> USART1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPCA0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PCA0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> PCA1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EECI0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ECI0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ECI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> I2S0TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> I2C0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CMP0SEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CMP0AEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CMP1SEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CMP1AEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TMR0CTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TMR0EXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TMR1CTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TMR1EXEN; 
    }
    namespace Nonexbar0h{
        using Addr = Register::Address<0x4002a030,0x7fffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UART0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UART0FCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SPI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPI1NSSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPI2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPI2NSSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AHBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> XBAR0EN; 
    }
    namespace Nonexbar1{
        using Addr = Register::Address<0x4002a040,0x7fc40000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SSG0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP0SEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP1SEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPI1NSSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTC0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPI2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SPI2NSSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USART1FCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> USART1CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UART0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UART0FCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> I2S0TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I2C0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UART1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> I2S0RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> LPT0OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> I2C1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> KILLHDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> XBAR1EN; 
    }
    namespace Nonepbkey{
        using Addr = Register::Address<0x4002a050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
}
