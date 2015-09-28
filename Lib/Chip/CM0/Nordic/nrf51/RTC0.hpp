#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x4000b000,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x4000b004,0xffffffff>;
    }
    namespace Nonetasks_clear{
        using Addr = Register::Address<0x4000b008,0xffffffff>;
    }
    namespace Nonetasks_trigovrflw{
        using Addr = Register::Address<0x4000b00c,0xffffffff>;
    }
    namespace Noneevents_tick{
        using Addr = Register::Address<0x4000b100,0xffffffff>;
    }
    namespace Noneevents_ovrflw{
        using Addr = Register::Address<0x4000b104,0xffffffff>;
    }
    namespace Noneevents_compare0{
        using Addr = Register::Address<0x4000b140,0xffffffff>;
    }
    namespace Noneevents_compare1{
        using Addr = Register::Address<0x4000b144,0xffffffff>;
    }
    namespace Noneevents_compare2{
        using Addr = Register::Address<0x4000b148,0xffffffff>;
    }
    namespace Noneevents_compare3{
        using Addr = Register::Address<0x4000b14c,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4000b304,0xfff0fffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TICK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVRFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPARE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> COMPARE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> COMPARE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> COMPARE3; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x4000b308,0xfff0fffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TICK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVRFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPARE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> COMPARE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> COMPARE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> COMPARE3; 
    }
    namespace Noneevten{
        using Addr = Register::Address<0x4000b340,0xfff0fffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TICK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVRFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPARE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> COMPARE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> COMPARE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> COMPARE3; 
    }
    namespace Noneevtenset{
        using Addr = Register::Address<0x4000b344,0xfff0fffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TICK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVRFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPARE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> COMPARE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> COMPARE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> COMPARE3; 
    }
    namespace Noneevtenclr{
        using Addr = Register::Address<0x4000b348,0xfff0fffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TICK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVRFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPARE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> COMPARE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> COMPARE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> COMPARE3; 
    }
    namespace Nonecounter{
        using Addr = Register::Address<0x4000b504,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COUNTER; 
    }
    namespace Noneprescaler{
        using Addr = Register::Address<0x4000b508,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> PRESCALER; 
    }
    namespace Nonecc0{
        using Addr = Register::Address<0x4000b540,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COMPARE; 
    }
    namespace Nonecc1{
        using Addr = Register::Address<0x4000b544,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COMPARE; 
    }
    namespace Nonecc2{
        using Addr = Register::Address<0x4000b548,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COMPARE; 
    }
    namespace Nonecc3{
        using Addr = Register::Address<0x4000b54c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COMPARE; 
    }
    namespace Nonepower{
        using Addr = Register::Address<0x4000bffc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER; 
    }
}
