#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneen{
        using Addr = Register::Address<0x4008d000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I2T16A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HALT; 
    }
    namespace Nonerun{
        using Addr = Register::Address<0x4008d004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x4008d008,0xffffff4e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> FFCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FFEN; 
    }
    namespace Nonerg{
        using Addr = Register::Address<0x4008d00c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RG; 
    }
    namespace Nonecp{
        using Addr = Register::Address<0x4008d010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CP; 
    }
}
