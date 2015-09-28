#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepb{
        using Addr = Register::Address<0x4002a280,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PB; 
    }
    namespace Nonepbpin{
        using Addr = Register::Address<0x4002a290,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBPIN; 
    }
    namespace Nonepbmdsel{
        using Addr = Register::Address<0x4002a2a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBMDSEL; 
    }
    namespace Nonepbskipen{
        using Addr = Register::Address<0x4002a2b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBSKIPEN; 
    }
    namespace Nonepboutmd{
        using Addr = Register::Address<0x4002a2c0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBOUTMD; 
    }
    namespace Nonepbdrv{
        using Addr = Register::Address<0x4002a2d0,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBDRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PBPUEN; 
    }
    namespace Nonepm{
        using Addr = Register::Address<0x4002a2e0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PM; 
    }
    namespace Nonepmen{
        using Addr = Register::Address<0x4002a2f0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PMEN; 
    }
}
