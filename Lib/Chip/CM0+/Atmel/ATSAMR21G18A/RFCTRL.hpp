#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//RF233 control module
    namespace RfctrlFecfg{    ///<Front-end control bus configuration
        using Addr = Register::Address<0x42005400,0xfffff000,0,unsigned>;
        ///Front-end control signal 0 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> f0cfg{}; 
        ///Front-end control signal 1 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> f1cfg{}; 
        ///Front-end control signal 2 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> f2cfg{}; 
        ///Front-end control signal 3 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> f3cfg{}; 
        ///Front-end control signal 4 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> f4cfg{}; 
        ///Front-end control signal 5 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> f5cfg{}; 
    }
}
