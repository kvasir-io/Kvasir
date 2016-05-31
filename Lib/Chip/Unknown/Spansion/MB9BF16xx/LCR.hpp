#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral LCR 
    namespace LcrLcrPrsld{    ///< register LCR_PRSLD 
        using Addr = Register::Address<0x4003c000,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield LCR_PRSLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> lcrPrsld{}; 
    }
}
