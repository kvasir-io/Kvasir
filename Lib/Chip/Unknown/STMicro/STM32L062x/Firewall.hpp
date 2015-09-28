#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefirewall_cssa{
        using Addr = Register::Address<0x40011c00,0xff0000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> ADD; 
    }
    namespace Nonefirewall_csl{
        using Addr = Register::Address<0x40011c04,0xffc000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,8)> LENG; 
    }
    namespace Nonefirewall_nvdssa{
        using Addr = Register::Address<0x40011c08,0xff0000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> ADD; 
    }
    namespace Nonefirewall_nvdsl{
        using Addr = Register::Address<0x40011c0c,0xffc000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,8)> LENG; 
    }
    namespace Nonefirewall_vdssa{
        using Addr = Register::Address<0x40011c10,0xffff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADD; 
    }
    namespace Nonefirewall_vdsl{
        using Addr = Register::Address<0x40011c14,0xffff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> LENG; 
    }
    namespace Nonefirewall_cr{
        using Addr = Register::Address<0x40011c20,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FPA; 
    }
}
