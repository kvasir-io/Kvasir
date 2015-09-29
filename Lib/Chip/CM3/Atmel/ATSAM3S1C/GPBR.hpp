#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Backup Register
    namespace GpbrGpbr0{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1490,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr1{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1494,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr2{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1498,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr3{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e149c,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr4{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e14a0,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr5{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e14a4,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr6{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e14a8,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr7{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e14ac,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
}
