#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedao{
        using Addr = Register::Address<0x400a2000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WORDWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MONO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,6)> WS_HALFPERIOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MUTE; 
    }
    namespace Nonedai{
        using Addr = Register::Address<0x400a2004,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WORDWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MONO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WS_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,6)> WS_HALFPERIOD; 
    }
    namespace Nonetxfifo{
        using Addr = Register::Address<0x400a2008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> I2STXFIFO; 
    }
    namespace Nonerxfifo{
        using Addr = Register::Address<0x400a200c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> I2SRXFIFO; 
    }
    namespace Nonestate{
        using Addr = Register::Address<0x400a2010,0xfff0f0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMAREQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAREQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> RX_LEVEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TX_LEVEL; 
    }
    namespace Nonedma1{
        using Addr = Register::Address<0x400a2014,0xfff0f0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RX_DMA1_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TX_DMA1_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> RX_DEPTH_DMA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TX_DEPTH_DMA1; 
    }
    namespace Nonedma2{
        using Addr = Register::Address<0x400a2018,0xfff0f0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RX_DMA2_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TX_DMA2_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> RX_DEPTH_DMA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TX_DEPTH_DMA2; 
    }
    namespace Noneirq{
        using Addr = Register::Address<0x400a201c,0xfff0f0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RX_IRQ_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TX_IRQ_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> RX_DEPTH_IRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TX_DEPTH_IRQ; 
    }
    namespace Nonetxrate{
        using Addr = Register::Address<0x400a2020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Y_DIVIDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> X_DIVIDER; 
    }
    namespace Nonerxrate{
        using Addr = Register::Address<0x400a2024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Y_DIVIDER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> X_DIVIDER; 
    }
    namespace Nonetxbitrate{
        using Addr = Register::Address<0x400a2028,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> TX_BITRATE; 
    }
    namespace Nonerxbitrate{
        using Addr = Register::Address<0x400a202c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> RX_BITRATE; 
    }
    namespace Nonetxmode{
        using Addr = Register::Address<0x400a2030,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TXCLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TX4PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXMCENA; 
    }
    namespace Nonerxmode{
        using Addr = Register::Address<0x400a2034,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RXCLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RX4PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXMCENA; 
    }
}
