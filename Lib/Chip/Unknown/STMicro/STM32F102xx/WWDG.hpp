#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Window watchdog
    namespace Nonecr{    ///<Control register (WWDG_CR)
        using Addr = Register::Address<0x40002c00,0xffffff00,0,unsigned>;
        ///7-bit counter (MSB to LSB)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> t{}; 
        ///Activation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wdga{}; 
    }
    namespace Nonecfr{    ///<Configuration register
          (WWDG_CFR)
        using Addr = Register::Address<0x40002c04,0xfffffc00,0,unsigned>;
        ///7-bit window value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> w{}; 
        ///Timer Base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> wdgtb{}; 
        ///Early Wakeup Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ewi{}; 
    }
    namespace Nonesr{    ///<Status register (WWDG_SR)
        using Addr = Register::Address<0x40002c08,0xfffffffe,0,unsigned>;
        ///Early Wakeup Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewi{}; 
    }
}
