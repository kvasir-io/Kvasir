#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CRCCU_dscr{
        using Addr = Register::Address<0x40044000,0x000001ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,9)> DSCR; 
    }
    namespace CRCCU_dma_en{
        using Addr = Register::Address<0x40044008,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
    }
    namespace CRCCU_dma_dis{
        using Addr = Register::Address<0x4004400c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMADIS; 
    }
    namespace CRCCU_dma_sr{
        using Addr = Register::Address<0x40044010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMASR; 
    }
    namespace CRCCU_dma_ier{
        using Addr = Register::Address<0x40044014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAIER; 
    }
    namespace CRCCU_dma_idr{
        using Addr = Register::Address<0x40044018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAIDR; 
    }
    namespace CRCCU_dma_imr{
        using Addr = Register::Address<0x4004401c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAIMR; 
    }
    namespace CRCCU_dma_isr{
        using Addr = Register::Address<0x40044020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAISR; 
    }
    namespace CRCCU_cr{
        using Addr = Register::Address<0x40044034,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RESET; 
    }
    namespace CRCCU_mr{
        using Addr = Register::Address<0x40044038,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMPARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DIVIDER; 
    }
    namespace CRCCU_sr{
        using Addr = Register::Address<0x4004403c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CRC; 
    }
    namespace CRCCU_ier{
        using Addr = Register::Address<0x40044040,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERRIER; 
    }
    namespace CRCCU_idr{
        using Addr = Register::Address<0x40044044,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERRIDR; 
    }
    namespace CRCCU_imr{
        using Addr = Register::Address<0x40044048,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERRIMR; 
    }
    namespace CRCCU_isr{
        using Addr = Register::Address<0x4004404c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERRISR; 
    }
}
