#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// Base Timer I/O Select
    namespace Nonebtselcdef{    ///<I/O Select Register
        using Addr = Register::Address<0x40025700,0xffff00ff,0,unsigned>;
        ///I/O select bits for Ch.E/Ch.F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> selef{}; 
        namespace SelefValC{
        }
        ///I/O select bits for Ch.C/Ch.D
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> selcd{}; 
        namespace SelcdValC{
        }
    }
}
