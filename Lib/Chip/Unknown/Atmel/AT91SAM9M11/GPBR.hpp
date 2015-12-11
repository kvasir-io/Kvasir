#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Backup Register
    namespace GpbrGpbr0{    ///<General Purpose Backup Register 0
        using Addr = Register::Address<0xfffffd60,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue0{}; 
    }
    namespace GpbrGpbr1{    ///<General Purpose Backup Register 1
        using Addr = Register::Address<0xfffffd64,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue1{}; 
    }
    namespace GpbrGpbr2{    ///<General Purpose Backup Register 2
        using Addr = Register::Address<0xfffffd68,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue2{}; 
    }
    namespace GpbrGpbr3{    ///<General Purpose Backup Register 3
        using Addr = Register::Address<0xfffffd6c,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue3{}; 
    }
}
