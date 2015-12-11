#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Window watchdog
    namespace Nonecr{    ///<Control register
        using Addr = Register::Address<0x40002c00,0xffffff00,0,unsigned>;
        ///Activation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wdga{}; 
        ///7-bit counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> t{}; 
    }
    namespace Nonecfr{    ///<Configuration register
        using Addr = Register::Address<0x40002c04,0xfffffc00,0,unsigned>;
        ///Early wakeup interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ewi{}; 
        ///Timer base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,unsigned> wdgtb{}; 
        ///7-bit window value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> w{}; 
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x40002c08,0xfffffffe,0,unsigned>;
        ///Early wakeup interrupt               flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewif{}; 
    }
}
