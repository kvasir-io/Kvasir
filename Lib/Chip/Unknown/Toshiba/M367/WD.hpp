#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Watchdog Timer (WD)
    namespace Nonemod{    ///<WD Mode Register
        using Addr = Register::Address<0x400f2000,0xffffff09,0,unsigned>;
        ///RESCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rescr{}; 
        ///I2WDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> i2wdt{}; 
        ///WDTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> wdtp{}; 
        ///WDTE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wdte{}; 
    }
    namespace Nonecr{    ///<WD Control Register
        using Addr = Register::Address<0x400f2004,0xffffffff,0,unsigned>;
    }
}
