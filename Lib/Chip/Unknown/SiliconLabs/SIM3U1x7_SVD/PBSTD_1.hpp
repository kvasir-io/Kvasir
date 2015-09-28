#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepb{
        using Addr = Register::Address<0x4002a140,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PB; 
    }
    namespace Nonepbpin{
        using Addr = Register::Address<0x4002a150,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBPIN; 
    }
    namespace Nonepbmdsel{
        using Addr = Register::Address<0x4002a160,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBMDSEL; 
    }
    namespace Nonepbskipen{
        using Addr = Register::Address<0x4002a170,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBSKIPEN; 
    }
    namespace Nonepboutmd{
        using Addr = Register::Address<0x4002a180,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBOUTMD; 
    }
    namespace Nonepbdrv{
        using Addr = Register::Address<0x4002a190,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBDRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PBPUEN; 
    }
    namespace Nonepm{
        using Addr = Register::Address<0x4002a1a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PM; 
    }
    namespace Nonepmen{
        using Addr = Register::Address<0x4002a1b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PMEN; 
    }
}
