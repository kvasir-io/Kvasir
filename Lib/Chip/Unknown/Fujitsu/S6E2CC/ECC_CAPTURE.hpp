#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ECC Capture Address
    namespace Noneferrad{    ///<Flash ECC Error Address Capture Register
        using Addr = Register::Address<0x40000300,0xff800000,0,unsigned>;
        ///Flash ECC Error Address Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> errad{}; 
        namespace ErradValC{
        }
    }
}
