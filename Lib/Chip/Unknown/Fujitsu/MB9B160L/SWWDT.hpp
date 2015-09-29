#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Software Watchdog Timer
    namespace Nonewdogload{    ///<Software Watchdog Timer Load Register
        using Addr = Register::Address<0x40012000,0xffffffff,0,unsigned>;
    }
    namespace Nonewdogvalue{    ///<Software Watchdog Timer Value Register
        using Addr = Register::Address<0x40012004,0xffffffff,0,unsigned>;
    }
    namespace Nonewdogcontrol{    ///<Software Watchdog Timer Control Register
        using Addr = Register::Address<0x40012008,0xffffffe0,0,unsigned char>;
        ///Software Watchdog window watchdog mode enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spm{}; 
        ///Timing window setting bit of the software watchdog
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> twd{}; 
        ///Reset enable bit of the software watchdog
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resen{}; 
        ///Interrupt and counter enable bit of the software watchdog 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inten{}; 
    }
    namespace Nonewdogintclr{    ///<Software Watchdog Timer Clear Register
        using Addr = Register::Address<0x4001200c,0xffffffff,0,unsigned>;
    }
    namespace Nonewdogris{    ///<Software Watchdog Timer Interrupt Status Register
        using Addr = Register::Address<0x40012010,0xfffffffe,0,unsigned char>;
        ///Software watchdog interrupt status bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ris{}; 
    }
    namespace Nonewdogspmc{    ///<Software Watchdog Timer Window Watchdog Mode Control Register
        using Addr = Register::Address<0x40012018,0xfffffffe,0,unsigned char>;
        ///Software watchdog trigger type bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tgr{}; 
    }
    namespace Nonewdoglock{    ///<Software Watchdog Timer Lock Register
        using Addr = Register::Address<0x40012c00,0xffffffff,0,unsigned>;
    }
}
