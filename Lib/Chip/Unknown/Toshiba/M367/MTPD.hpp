#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemden{
        using Addr = Register::Address<0x400f6000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWMEN; 
    }
    namespace Noneportmd{
        using Addr = Register::Address<0x400f6004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PORTMD; 
    }
    namespace Nonemdcr{
        using Addr = Register::Address<0x400f6008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWMMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> INTPRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DTYMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SYNTMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PWMCK; 
    }
    namespace Nonecntsta{
        using Addr = Register::Address<0x400f600c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPDWN; 
    }
    namespace Nonemdcnt{
        using Addr = Register::Address<0x400f6010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MDCNT; 
    }
    namespace Nonemdprd{
        using Addr = Register::Address<0x400f6014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MDPRD; 
    }
    namespace Nonecmpu{
        using Addr = Register::Address<0x400f6018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMPU; 
    }
    namespace Nonecmpv{
        using Addr = Register::Address<0x400f601c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMPV; 
    }
    namespace Nonecmpw{
        using Addr = Register::Address<0x400f6020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMPW; 
    }
    namespace Nonemdout{
        using Addr = Register::Address<0x400f6028,0xfffff8c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> UOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> VOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> WOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UPWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> VPWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> WPWM; 
    }
    namespace Nonemdpot{
        using Addr = Register::Address<0x400f602c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PSYNCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> POLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> POLH; 
    }
    namespace Noneemgrel{
        using Addr = Register::Address<0x400f6030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EMGREL; 
    }
    namespace Noneemgcr{
        using Addr = Register::Address<0x400f6034,0xfffff0c4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EMGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EMGRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> EMGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> EMGCNT; 
    }
    namespace Noneemgsta{
        using Addr = Register::Address<0x400f6038,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EMGST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EMGI; 
    }
    namespace Nonedtr{
        using Addr = Register::Address<0x400f6044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DTR; 
    }
}
