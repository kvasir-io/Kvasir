#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol0{
        using Addr = Register::Address<0x4002a000,0x60ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> INT0SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INT0POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> INT0MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INT0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> INT1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INT1POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> INT1MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> INT1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> PGTIMER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PGDONEF; 
    }
    namespace Nonecontrol1{
        using Addr = Register::Address<0x4002a010,0x7fffecf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> JTAGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ETMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SWVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SPI1SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PMATCHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LPTOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOCK; 
    }
    namespace Nonexbar0{
        using Addr = Register::Address<0x4002a020,0x7f800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USART0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USART0FCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USART0CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMA0T0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMA0T1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IDAC0TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SPI0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPI0NSSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EPCA0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EECI0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> I2C0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CMP0SEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CMP0AEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CMP1SEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CMP1AEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TMR0CTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TMR0EXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TMR1CTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TMR1EXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SARADC0TEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AHBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> XBAR0EN; 
    }
    namespace Nonepbkey{
        using Addr = Register::Address<0x4002a030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> KEY; 
    }
}
