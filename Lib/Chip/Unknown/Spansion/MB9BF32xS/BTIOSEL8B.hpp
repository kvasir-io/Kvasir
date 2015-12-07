#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral BTIOSEL8B 
    namespace Nonebtsel89ab{    ///< register BTSEL89AB 
        using Addr = Register::Address<0x40025500,0xffff00ff,0,unsigned>;
        /// bitfield SELAB_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> selab{}; 
        namespace SelabValC{
        }
        /// bitfield SEL89_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> sel89{}; 
        namespace Sel89ValC{
        }
    }
}
