#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Watchdog Timer
    namespace WdtCr{    ///<Control Register
        using Addr = Register::Address<0xfffffe40,0x00fffffe,0,unsigned>;
        ///Watchdog Restart
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdrstt{}; 
        ///Password
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace WdtMr{    ///<Mode Register
        using Addr = Register::Address<0xfffffe44,0xc0000000,0,unsigned>;
        ///Watchdog Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> wdv{}; 
        ///Watchdog Fault Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wdfien{}; 
        ///Watchdog Reset Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wdrsten{}; 
        ///Watchdog Reset Processor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wdrproc{}; 
        ///Watchdog Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wddis{}; 
        ///Watchdog Delta Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> wdd{}; 
        ///Watchdog Debug Halt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wddbghlt{}; 
        ///Watchdog Idle Halt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> wdidlehlt{}; 
    }
    namespace WdtSr{    ///<Status Register
        using Addr = Register::Address<0xfffffe48,0xfffffffc,0,unsigned>;
        ///Watchdog Underflow
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdunf{}; 
        ///Watchdog Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wderr{}; 
    }
}
