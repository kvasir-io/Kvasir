#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Base Timer I/O Select
    namespace Nonebtsel89ab{    ///<I/O Select Register
        using Addr = Register::Address<0x40025500,0xffff00ff,0,unsigned>;
        ///I/O select bits for Ch.A/Ch.B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> selab{}; 
        namespace SelabValC{
        }
        ///I/O select bits for Ch.8/Ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> sel89{}; 
        namespace Sel89ValC{
        }
    }
}
