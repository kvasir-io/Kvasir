#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneval{
        using Addr = Register::Address<0x40004000,0xffff000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> VALUE; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x40004004,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT_DMA_FLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> TRIG_SRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNC_BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIMER_ENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DBLBUF_ENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SHUTOFF_ENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SHUTOFF_FLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> BIAS; 
    }
    namespace Nonecntval{
        using Addr = Register::Address<0x40004008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNTVAL; 
    }
}
