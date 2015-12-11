#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral WORKFLASH_IF 
    namespace Nonewfaszr{    ///< register WFASZR 
        using Addr = Register::Address<0x200e0000,0xfffffffe,0,unsigned>;
        /// bitfield ASZ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> asz{}; 
    }
    namespace Nonewfrwtr{    ///< register WFRWTR 
        using Addr = Register::Address<0x200e0004,0xfffffff8,0,unsigned>;
        /// bitfield RWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace Nonewfstr{    ///< register WFSTR 
        using Addr = Register::Address<0x200e0008,0xfffffffc,0,unsigned>;
        /// bitfield HNG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hng{}; 
        /// bitfield RDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdy{}; 
    }
}
