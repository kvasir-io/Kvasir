#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Control (FC)
    namespace Nonesecbit{    ///<FC Security Bit Register
        using Addr = Register::Address<0x41fff010,0xfffffffe,0,unsigned>;
        ///SECBIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> secbit{}; 
    }
    namespace Noneflcs{    ///<FC Flash Control Register
        using Addr = Register::Address<0x41fff020,0xfff0fffe,0,unsigned>;
        ///RDY_BSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyBsy{}; 
        ///BLPRO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> blpro{}; 
    }
    namespace Nonedbgen{    ///<FC Debug enable monitor Register
        using Addr = Register::Address<0x41fff05c,0xfffffffc,0,unsigned>;
        ///EN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en0{}; 
        ///EN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en1{}; 
    }
}
