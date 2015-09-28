#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepb{
        using Addr = Register::Address<0x4002a0a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PB; 
    }
    namespace Nonepbpin{
        using Addr = Register::Address<0x4002a0b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBPIN; 
    }
    namespace Nonepbmdsel{
        using Addr = Register::Address<0x4002a0c0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBMDSEL; 
    }
    namespace Nonepbskipen{
        using Addr = Register::Address<0x4002a0d0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBSKIPEN; 
    }
    namespace Nonepboutmd{
        using Addr = Register::Address<0x4002a0e0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBOUTMD; 
    }
    namespace Nonepbdrv{
        using Addr = Register::Address<0x4002a0f0,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBDRV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PBPUEN; 
    }
    namespace Nonepm{
        using Addr = Register::Address<0x4002a100,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PM; 
    }
    namespace Nonepmen{
        using Addr = Register::Address<0x4002a110,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PMEN; 
    }
    namespace Nonepbpgen{
        using Addr = Register::Address<0x4002a120,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBPGEN; 
    }
    namespace Nonepbpgphase{
        using Addr = Register::Address<0x4002a130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PBPGPH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PBPGPH1; 
    }
}
