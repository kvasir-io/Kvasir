#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonei2s_con{
        using Addr = Register::Address<0x401a0000,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I2SEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> WORDWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MONO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FORMAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> TXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> RXTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RCHZCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> LCHZCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CLR_TXFIFO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CLR_RXFIFO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RXDMA; 
    }
    namespace Nonei2s_clkdiv{
        using Addr = Register::Address<0x401a0004,0xffff00f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MCLK_DIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> BCLK_DIV; 
    }
    namespace Nonei2s_ie{
        using Addr = Register::Address<0x401a0008,0xffffe0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXUDFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOVFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXTHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXUDFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXOVFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TXTHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RZCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LZCIE; 
    }
    namespace Nonei2s_status{
        using Addr = Register::Address<0x401a000c,0x0000e0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I2SINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> I2SRXINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> I2STXINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RIGHT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXUDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXTHF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RXFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXUDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TXTHF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TXFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TXBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RZCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> LZCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> RX_LEVEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> TX_LEVEL; 
    }
    namespace Nonei2s_txfifo{
        using Addr = Register::Address<0x401a0010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXFIFO; 
    }
    namespace Nonei2s_rxfifo{
        using Addr = Register::Address<0x401a0014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RXFIFO; 
    }
}
