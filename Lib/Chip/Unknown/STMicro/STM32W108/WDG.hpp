#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Watchdog timer
    namespace NonewdgCr{    ///<WDG configuration register
        using Addr = Register::Address<0x40006000,0xfffffffc,0,unsigned>;
        ///WDGDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wdgdis{}; 
        ///WDGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdgen{}; 
    }
    namespace NonewdgKr{    ///<WDG key register
        using Addr = Register::Address<0x40006004,0xffff0000,0,unsigned>;
        ///KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace NonewdgKicksr{    ///<WDG kick-start register
        using Addr = Register::Address<0x40006008,0xffff0000,0,unsigned>;
        ///KS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ks{}; 
    }
}
