#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Watchdog timer
    namespace WdgWdgCr{    ///<WDG configuration register
        using Addr = Register::Address<0x40006000,0xfffffffc,0x00000000,unsigned>;
        ///WDGDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wdgdis{}; 
        ///WDGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdgen{}; 
    }
    namespace WdgWdgKr{    ///<WDG key register
        using Addr = Register::Address<0x40006004,0xffff0000,0x00000000,unsigned>;
        ///KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace WdgWdgKicksr{    ///<WDG kick-start register
        using Addr = Register::Address<0x40006008,0xffff0000,0x00000000,unsigned>;
        ///KS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ks{}; 
    }
}
