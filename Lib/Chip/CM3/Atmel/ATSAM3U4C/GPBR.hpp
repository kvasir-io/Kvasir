#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Backup Register
    namespace GpbrGpbr0{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1290,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr1{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1294,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr2{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1298,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr3{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e129c,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
}
