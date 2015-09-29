#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Backup Register
    namespace GpbrGpbr0{    ///<General Purpose Backup Register 0
        using Addr = Register::Address<0xfffffd50,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue0{}; 
    }
    namespace GpbrGpbr1{    ///<General Purpose Backup Register 1
        using Addr = Register::Address<0xfffffd54,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue1{}; 
    }
    namespace GpbrGpbr2{    ///<General Purpose Backup Register 2
        using Addr = Register::Address<0xfffffd58,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue2{}; 
    }
    namespace GpbrGpbr3{    ///<General Purpose Backup Register 3
        using Addr = Register::Address<0xfffffd5c,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue3{}; 
    }
}
