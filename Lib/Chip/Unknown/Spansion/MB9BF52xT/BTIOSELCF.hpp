#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral BTIOSELCF 
    namespace Nonebtselcdef{    ///< register BTSELCDEF 
        using Addr = Register::Address<0x40025700,0xffff00ff,0,unsigned>;
        /// bitfield SELEF_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> selef{}; 
        /// bitfield SELCD_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> selcd{}; 
    }
}
