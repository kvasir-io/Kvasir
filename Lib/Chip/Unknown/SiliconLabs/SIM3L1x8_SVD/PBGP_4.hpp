#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepb{
        using Addr = Register::Address<0x4002a320,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PB; 
    }
    namespace Nonepbpin{
        using Addr = Register::Address<0x4002a330,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBPIN; 
    }
    namespace Nonepbmdsel{
        using Addr = Register::Address<0x4002a340,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBMDSEL; 
    }
    namespace Nonepboutmd{
        using Addr = Register::Address<0x4002a350,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBOUTMD; 
    }
    namespace Nonepbdrv{
        using Addr = Register::Address<0x4002a360,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBDRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PBPUEN; 
    }
    namespace Nonepm{
        using Addr = Register::Address<0x4002a370,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PM; 
    }
    namespace Nonepmen{
        using Addr = Register::Address<0x4002a380,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PMEN; 
    }
}
