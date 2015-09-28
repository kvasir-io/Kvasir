#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40027000,0x3cfcc0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XFRSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> KEYCPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EDMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWMDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> XOREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HCTREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> HCBCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> KEYSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ERRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> OCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RESET; 
    }
    namespace Nonexfrsize{
        using Addr = Register::Address<0x40027010,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> XFRSIZE; 
    }
    namespace Nonedatafifo{
        using Addr = Register::Address<0x40027020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATAFIFO; 
    }
    namespace Nonexorfifo{
        using Addr = Register::Address<0x40027030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> XORFIFO; 
    }
    namespace Nonehwkey0{
        using Addr = Register::Address<0x40027040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWKEY0; 
    }
    namespace Nonehwkey1{
        using Addr = Register::Address<0x40027050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWKEY1; 
    }
    namespace Nonehwkey2{
        using Addr = Register::Address<0x40027060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWKEY2; 
    }
    namespace Nonehwkey3{
        using Addr = Register::Address<0x40027070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWKEY3; 
    }
    namespace Nonehwkey4{
        using Addr = Register::Address<0x40027080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWKEY4; 
    }
    namespace Nonehwkey5{
        using Addr = Register::Address<0x40027090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWKEY5; 
    }
    namespace Nonehwkey6{
        using Addr = Register::Address<0x400270a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWKEY6; 
    }
    namespace Nonehwkey7{
        using Addr = Register::Address<0x400270b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWKEY7; 
    }
    namespace Nonehwctr0{
        using Addr = Register::Address<0x400270c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWCTR0; 
    }
    namespace Nonehwctr1{
        using Addr = Register::Address<0x400270d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWCTR1; 
    }
    namespace Nonehwctr2{
        using Addr = Register::Address<0x400270e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWCTR2; 
    }
    namespace Nonehwctr3{
        using Addr = Register::Address<0x400270f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HWCTR3; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40027100,0x0effe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DFIFOLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> XFIFOLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BUSYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DURI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DORI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> XORI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OCI; 
    }
}
