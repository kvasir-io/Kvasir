#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//MAC timer
    namespace NonemactmrCntr{    ///<MACTMR counter register
        using Addr = Register::Address<0x40002038,0xfff00000,0,unsigned>;
        ///MAC timer count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace NonemactmrCr{    ///<MACTMR configuration register
        using Addr = Register::Address<0x4000208c,0xfffffffc,0,unsigned>;
        ///MAC timer enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
        ///MAC timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rst{}; 
        namespace RstValC{
        }
    }
}
