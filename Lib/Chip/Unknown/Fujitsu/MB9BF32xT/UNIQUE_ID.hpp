#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Unique ID
    namespace Noneuidr0{    ///<Unique ID Register 0
        using Addr = Register::Address<0x40000200,0x0000000f,0,unsigned>;
        ///Unique ID 27 through 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> uid270{}; 
    }
    namespace Noneuidr1{    ///<Unique ID Register 1
        using Addr = Register::Address<0x40000204,0xffffe000,0,unsigned>;
        ///Unique ID 40 through 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> uid4028{}; 
    }
}
