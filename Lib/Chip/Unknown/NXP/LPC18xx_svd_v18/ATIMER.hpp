#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedowncounter{
        using Addr = Register::Address<0x40040000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CVAL; 
    }
    namespace Nonepreset{
        using Addr = Register::Address<0x40040004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PRESETVAL; 
    }
    namespace Noneclr_en{
        using Addr = Register::Address<0x40040fd8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLR_EN; 
    }
    namespace Noneset_en{
        using Addr = Register::Address<0x40040fdc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SET_EN; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40040fe0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STAT; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40040fe4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Noneclr_stat{
        using Addr = Register::Address<0x40040fe8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSTAT; 
    }
    namespace Noneset_stat{
        using Addr = Register::Address<0x40040fec,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SSTAT; 
    }
}
