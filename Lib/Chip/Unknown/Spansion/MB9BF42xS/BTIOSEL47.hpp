#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral BTIOSEL47 
    namespace Nonebtsel4567{    ///< register BTSEL4567 
        using Addr = Register::Address<0x40025300,0xffff00ff,0,unsigned>;
        /// bitfield SEL67_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> sel67{}; 
        /// bitfield SEL45_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> sel45{}; 
    }
}
