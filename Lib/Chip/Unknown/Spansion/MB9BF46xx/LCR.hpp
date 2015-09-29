#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral LCR 
    namespace NonelcrPrsld{    ///< register LCR_PRSLD 
        using Addr = Register::Address<0x4003c000,0xffffffc0,0,unsigned char>;
        /// bitfield LCR_PRSLD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> lcrPrsld{}; 
    }
}
