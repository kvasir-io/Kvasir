#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecodepagesize{
        using Addr = Register::Address<0x10000010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CODEPAGESIZE; 
    }
    namespace Nonecodesize{
        using Addr = Register::Address<0x10000014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CODESIZE; 
    }
    namespace Noneconfigid{
        using Addr = Register::Address<0x1000005c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HWID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> FWID; 
    }
    namespace Nonedeviceid0{
        using Addr = Register::Address<0x10000060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEID; 
    }
    namespace Nonedeviceid1{
        using Addr = Register::Address<0x10000064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEID; 
    }
    namespace Noneer0{
        using Addr = Register::Address<0x10000080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ER; 
    }
    namespace Noneer1{
        using Addr = Register::Address<0x10000084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ER; 
    }
    namespace Noneer2{
        using Addr = Register::Address<0x10000088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ER; 
    }
    namespace Noneer3{
        using Addr = Register::Address<0x1000008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ER; 
    }
    namespace Noneir0{
        using Addr = Register::Address<0x10000090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IR; 
    }
    namespace Noneir1{
        using Addr = Register::Address<0x10000094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IR; 
    }
    namespace Noneir2{
        using Addr = Register::Address<0x10000098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IR; 
    }
    namespace Noneir3{
        using Addr = Register::Address<0x1000009c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> IR; 
    }
    namespace Nonedeviceaddrtype{
        using Addr = Register::Address<0x100000a0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DEVICEADDRTYPE; 
    }
    namespace Nonedeviceaddr0{
        using Addr = Register::Address<0x100000a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEADDR; 
    }
    namespace Nonedeviceaddr1{
        using Addr = Register::Address<0x100000a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DEVICEADDR; 
    }
}
