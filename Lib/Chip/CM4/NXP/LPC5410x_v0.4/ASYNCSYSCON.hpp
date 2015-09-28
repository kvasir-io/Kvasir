#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneaysncpresetctrl{
        using Addr = Register::Address<0x40080000,0xffff1901>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> I2C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIMER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIMER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FRG0; 
    }
    namespace Noneaysncpresetctrlset{
        using Addr = Register::Address<0x40080004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ARST_SET; 
    }
    namespace Noneaysncpresetctrlclr{
        using Addr = Register::Address<0x40080008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ARST_CLR; 
    }
    namespace Noneasyncapbclkctrl{
        using Addr = Register::Address<0x40080010,0xffff1901>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USART1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USART2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USART3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> I2C0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> I2C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SPI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SPI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TIMER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TIMER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FRG0; 
    }
    namespace Noneasyncapbclkctrlset{
        using Addr = Register::Address<0x40080014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ACLK_SET; 
    }
    namespace Noneasyncapbclkctrlclr{
        using Addr = Register::Address<0x40080018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ACLK_CLR; 
    }
    namespace Noneasyncapbclksela{
        using Addr = Register::Address<0x40080020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneasyncapbclkselb{
        using Addr = Register::Address<0x40080024,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEL; 
    }
    namespace Noneasyncclkdiv{
        using Addr = Register::Address<0x40080028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
    }
    namespace Nonefrgctrl{
        using Addr = Register::Address<0x40080030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MULT; 
    }
    namespace Nonebodctrl{
        using Addr = Register::Address<0x40080044,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> BODRSTLEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> BODINTVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BODRSTENA; 
    }
}
