#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepintsel0{
        using Addr = Register::Address<0x400500c0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INTPIN; 
    }
    namespace Nonepintsel1{
        using Addr = Register::Address<0x400500c4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INTPIN; 
    }
    namespace Nonepintsel2{
        using Addr = Register::Address<0x400500c8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INTPIN; 
    }
    namespace Nonepintsel3{
        using Addr = Register::Address<0x400500cc,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INTPIN; 
    }
    namespace Nonepintsel4{
        using Addr = Register::Address<0x400500d0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INTPIN; 
    }
    namespace Nonepintsel5{
        using Addr = Register::Address<0x400500d4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INTPIN; 
    }
    namespace Nonepintsel6{
        using Addr = Register::Address<0x400500d8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INTPIN; 
    }
    namespace Nonepintsel7{
        using Addr = Register::Address<0x400500dc,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INTPIN; 
    }
    namespace Nonedma_itrig_inmux0{
        using Addr = Register::Address<0x400500e0,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux1{
        using Addr = Register::Address<0x400500e4,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux2{
        using Addr = Register::Address<0x400500e8,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux3{
        using Addr = Register::Address<0x400500ec,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux4{
        using Addr = Register::Address<0x400500f0,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux5{
        using Addr = Register::Address<0x400500f4,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux6{
        using Addr = Register::Address<0x400500f8,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux7{
        using Addr = Register::Address<0x400500fc,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux8{
        using Addr = Register::Address<0x40050100,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux9{
        using Addr = Register::Address<0x40050104,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux10{
        using Addr = Register::Address<0x40050108,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux11{
        using Addr = Register::Address<0x4005010c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux12{
        using Addr = Register::Address<0x40050110,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux13{
        using Addr = Register::Address<0x40050114,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux14{
        using Addr = Register::Address<0x40050118,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux15{
        using Addr = Register::Address<0x4005011c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux16{
        using Addr = Register::Address<0x40050120,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux17{
        using Addr = Register::Address<0x40050124,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux18{
        using Addr = Register::Address<0x40050128,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux19{
        using Addr = Register::Address<0x4005012c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux20{
        using Addr = Register::Address<0x40050130,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_itrig_inmux21{
        using Addr = Register::Address<0x40050134,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_otrig_inmux0{
        using Addr = Register::Address<0x40050140,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_otrig_inmux1{
        using Addr = Register::Address<0x40050144,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_otrig_inmux2{
        using Addr = Register::Address<0x40050148,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonedma_otrig_inmux3{
        using Addr = Register::Address<0x4005014c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INP; 
    }
    namespace Nonefreqmeas_ref{
        using Addr = Register::Address<0x40050160,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CLKIN; 
    }
    namespace Nonefreqmeas_target{
        using Addr = Register::Address<0x40050164,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CLKIN; 
    }
}
