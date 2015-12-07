#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral ECC_CAPTURE 
    namespace Noneferrad{    ///< register FERRAD 
        using Addr = Register::Address<0x40000300,0xff800000,0,unsigned>;
        /// bitfield ERRAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> errad{}; 
        namespace ErradValC{
        }
    }
}
