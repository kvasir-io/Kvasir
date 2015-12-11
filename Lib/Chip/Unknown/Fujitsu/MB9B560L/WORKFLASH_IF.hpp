#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//WorkFlash Memory
    namespace Nonewfaszr{    ///<WorkFlash Access Size Register
        using Addr = Register::Address<0x200e0000,0xfffffffe,0,unsigned>;
        ///WorkFlash Access Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> asz{}; 
    }
    namespace Nonewfrwtr{    ///<WorkFlash Read Wait Register
        using Addr = Register::Address<0x200e0004,0xfffffff8,0,unsigned>;
        ///Read Wait Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace Nonewfstr{    ///<WorkFlash Status Register
        using Addr = Register::Address<0x200e0008,0xfffffffc,0,unsigned>;
        ///WorkFlash Hang
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hng{}; 
        ///WorkFlash Rdy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdy{}; 
    }
}
