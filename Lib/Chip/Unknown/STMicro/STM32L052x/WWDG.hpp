#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System window watchdog
    namespace WwdgCr{    ///<Control register
        using Addr = Register::Address<0x40002c00,0xffffff00,0x00000000,unsigned>;
        ///Activation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wdga{}; 
        ///7-bit counter (MSB to LSB)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> t{}; 
    }
    namespace WwdgCfr{    ///<Configuration register
        using Addr = Register::Address<0x40002c04,0xfffffc00,0x00000000,unsigned>;
        ///Early wakeup interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ewi{}; 
        ///Timer base
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wdgtb1{}; 
        ///WDGTB0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wdgtb0{}; 
        ///7-bit window value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> w{}; 
    }
    namespace WwdgSr{    ///<Status register
        using Addr = Register::Address<0x40002c08,0xfffffffe,0x00000000,unsigned>;
        ///Early wakeup interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewif{}; 
    }
}
