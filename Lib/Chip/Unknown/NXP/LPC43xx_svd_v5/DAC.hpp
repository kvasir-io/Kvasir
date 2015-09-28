#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x400e1000,0xfffe003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> VALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BIAS; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x400e1004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT_DMA_REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBLBUF_ENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNT_ENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMA_ENA; 
    }
    namespace Nonecntval{
        using Addr = Register::Address<0x400e1008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VALUE; 
    }
}
