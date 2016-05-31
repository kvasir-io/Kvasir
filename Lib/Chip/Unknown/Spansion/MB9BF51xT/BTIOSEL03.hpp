#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// Base Timer I/O Select
    namespace Btiosel03Btsel0123{    ///<I/O Select Register
        using Addr = Register::Address<0x40025100,0xffff00ff,0x00000000,unsigned>;
        ///I/O select bits for Ch.2/Ch.3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> sel23{}; 
        ///I/O select bits for Ch.0/Ch.1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> sel01{}; 
    }
}
