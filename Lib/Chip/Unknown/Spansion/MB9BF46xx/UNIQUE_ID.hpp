#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral UNIQUE_ID 
    namespace Noneuidr0{    ///< register UIDR0 
        using Addr = Register::Address<0x40000200,0x0000000f,0,unsigned>;
        /// bitfield UID 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
    namespace Noneuidr1{    ///< register UIDR1 
        using Addr = Register::Address<0x40000204,0xffffe000,0,unsigned>;
        /// bitfield UID 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> uid{}; 
        namespace UidValC{
        }
    }
}
