#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Hardware Watchdog Timer
    namespace NonewdgLdr{    ///<Hardware Watchdog Timer Load Register
        using Addr = Register::Address<0x40011000,0xffffffff,0,unsigned>;
    }
    namespace NonewdgVlr{    ///<Hardware Watchdog Timer Value Register
        using Addr = Register::Address<0x40011004,0xffffffff,0,unsigned>;
    }
    namespace NonewdgCtl{    ///<Hardware Watchdog Timer Control Register
        using Addr = Register::Address<0x40011008,0xfffffffc,0,unsigned char>;
        ///Hardware watchdog reset enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resen{}; 
        ///Hardware watchdog interrupt and counter enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inten{}; 
    }
    namespace NonewdgIcl{    ///<Hardware Watchdog Timer Clear Register
        using Addr = Register::Address<0x4001100c,0xffffffff,0,unsigned char>;
    }
    namespace NonewdgRis{    ///<Hardware Watchdog Timer Interrupt Status Register
        using Addr = Register::Address<0x40011010,0xfffffffe,0,unsigned char>;
        ///Hardware watchdog interrupt status bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ris{}; 
    }
    namespace NonewdgLck{    ///<Hardware Watchdog Timer Lock Register
        using Addr = Register::Address<0x40011c00,0xffffffff,0,unsigned>;
    }
}
