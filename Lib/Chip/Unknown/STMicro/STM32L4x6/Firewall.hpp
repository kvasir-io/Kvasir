#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecssa{
        using Addr = Register::Address<0x40011c00,0xff0000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> ADD; 
    }
    namespace Nonecsl{
        using Addr = Register::Address<0x40011c04,0xffc000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,8)> LENG; 
    }
    namespace Nonenvdssa{
        using Addr = Register::Address<0x40011c08,0xff0000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> ADD; 
    }
    namespace Nonenvdsl{
        using Addr = Register::Address<0x40011c0c,0xffc000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,8)> LENG; 
    }
    namespace Nonevdssa{
        using Addr = Register::Address<0x40011c10,0xffff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADD; 
    }
    namespace Nonevdsl{
        using Addr = Register::Address<0x40011c14,0xffff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> LENG; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40011c20,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> VDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FPA; 
    }
}
