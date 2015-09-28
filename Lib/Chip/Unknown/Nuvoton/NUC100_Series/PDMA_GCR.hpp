#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepdma_gcrcsr{
        using Addr = Register::Address<0x50008f00,0xfffe00ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLK0_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLK1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLK2_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLK3_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLK4_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLK5_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLK6_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CLK7_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CLK8_EN; 
    }
    namespace Nonepdssr0{
        using Addr = Register::Address<0x50008f04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SPI0_RXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SPI0_TXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SPI1_RXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SPI1_TXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> SPI2_RXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> SPI2_TXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> SPI3_RXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> SPI3_TXSEL; 
    }
    namespace Nonepdssr1{
        using Addr = Register::Address<0x50008f08,0xf0ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> UART0_RXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> UART0_TXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> UART1_RXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> UART1_TXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> ADC_RXSEL; 
    }
    namespace Nonepdma_gcrisr{
        using Addr = Register::Address<0x50008f0c,0x7ffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> INTR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INTR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INTR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> INTR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INTR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> INTR; 
    }
    namespace Nonepdssr2{
        using Addr = Register::Address<0x50008f10,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> I2S_RXSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> I2S_TXSEL; 
    }
}
