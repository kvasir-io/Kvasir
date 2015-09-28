#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FUSE_cr{
        using Addr = Register::Address<0xffffe400,0xffff00fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> KEY; 
    }
    namespace FUSE_mr{
        using Addr = Register::Address<0xffffe404,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSK; 
    }
    namespace FUSE_ir{
        using Addr = Register::Address<0xffffe408,0xfffff0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> WSEL; 
    }
    namespace FUSE_dr{
        using Addr = Register::Address<0xffffe40c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace FUSE_sr0{
        using Addr = Register::Address<0xffffe410,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr1{
        using Addr = Register::Address<0xffffe414,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr2{
        using Addr = Register::Address<0xffffe418,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr3{
        using Addr = Register::Address<0xffffe41c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr4{
        using Addr = Register::Address<0xffffe420,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr5{
        using Addr = Register::Address<0xffffe424,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr6{
        using Addr = Register::Address<0xffffe428,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
    namespace FUSE_sr7{
        using Addr = Register::Address<0xffffe42c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FUSE; 
    }
}
