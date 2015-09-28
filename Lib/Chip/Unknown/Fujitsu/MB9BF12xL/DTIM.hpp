#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetimer1load{
        using Addr = Register::Address<0x40015000,0xffffffff>;
    }
    namespace Nonetimer1value{
        using Addr = Register::Address<0x40015004,0xffffffff>;
    }
    namespace Nonetimer1control{
        using Addr = Register::Address<0x40015008,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TimerEn; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TimerMode; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IntEnable; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TimerPre; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TimerSize; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OneShot; 
    }
    namespace Nonetimer1intclr{
        using Addr = Register::Address<0x4001500c,0xffffffff>;
    }
    namespace Nonetimer1ris{
        using Addr = Register::Address<0x40015010,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIMER1RIS; 
    }
    namespace Nonetimer1mis{
        using Addr = Register::Address<0x40015014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIMER1MIS; 
    }
    namespace Nonetimer1bgload{
        using Addr = Register::Address<0x40015018,0xffffffff>;
    }
    namespace Nonetimer2load{
        using Addr = Register::Address<0x40015020,0xffffffff>;
    }
    namespace Nonetimer2value{
        using Addr = Register::Address<0x40015024,0xffffffff>;
    }
    namespace Nonetimer2control{
        using Addr = Register::Address<0x40015028,0xffffffff>;
    }
    namespace Nonetimer2intclr{
        using Addr = Register::Address<0x4001502c,0xffffffff>;
    }
    namespace Nonetimer2ris{
        using Addr = Register::Address<0x40015030,0xffffffff>;
    }
    namespace Nonetimer2mis{
        using Addr = Register::Address<0x40015034,0xffffffff>;
    }
    namespace Nonetimer2bgload{
        using Addr = Register::Address<0x40015038,0xffffffff>;
    }
}
