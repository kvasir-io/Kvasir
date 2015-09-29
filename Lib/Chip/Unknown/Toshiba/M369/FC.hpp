#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash Control (FC)
    namespace Nonesecbit{    ///<FC Security Bit Register
        using Addr = Register::Address<0x41fff010,0xfffffffe,0,unsigned>;
        ///SECBIT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> secbit{}; 
    }
    namespace Noneflcs{    ///<FC Flash Control Register
        using Addr = Register::Address<0x41fff020,0xffc0fffe,0,unsigned>;
        ///RDY_BSY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyBsy{}; 
        ///BLPRO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> blpro{}; 
    }
}
