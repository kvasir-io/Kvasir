#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral CANPRES 
    namespace Nonecanpre{    ///< register CANPRE 
        using Addr = Register::Address<0x40037000,0xfffffff0,0,unsigned char>;
        /// bitfield CANPRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> canpre{}; 
    }
}
