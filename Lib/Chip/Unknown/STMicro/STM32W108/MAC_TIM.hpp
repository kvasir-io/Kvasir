#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//MAC timer
    namespace MacTimMactmrCntr{    ///<MACTMR counter register
        using Addr = Register::Address<0x40002038,0xfff00000,0x00000000,unsigned>;
        ///MAC timer count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace MacTimMactmrCr{    ///<MACTMR configuration register
        using Addr = Register::Address<0x4000208c,0xfffffffc,0x00000000,unsigned>;
        ///MAC timer enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///MAC timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rst{}; 
    }
}
