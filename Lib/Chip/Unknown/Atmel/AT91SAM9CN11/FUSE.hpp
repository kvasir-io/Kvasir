#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FUSE_cr{
        using Addr = Register::Address<0xffffdc00,0xffff00fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> KEY; 
    }
    namespace FUSE_mr{
        using Addr = Register::Address<0xffffdc04,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSK; 
    }
    namespace FUSE_ir{
        using Addr = Register::Address<0xffffdc08,0xfffff0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> WSEL; 
    }
    namespace FUSE_dr{
        using Addr = Register::Address<0xffffdc0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace FUSE_sr0{
        using Addr = Register::Address<0xffffdc10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr1{
        using Addr = Register::Address<0xffffdc14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr2{
        using Addr = Register::Address<0xffffdc18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr3{
        using Addr = Register::Address<0xffffdc1c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr4{
        using Addr = Register::Address<0xffffdc20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr5{
        using Addr = Register::Address<0xffffdc24,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr6{
        using Addr = Register::Address<0xffffdc28,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr7{
        using Addr = Register::Address<0xffffdc2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr8{
        using Addr = Register::Address<0xffffdc30,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr9{
        using Addr = Register::Address<0xffffdc34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
}
