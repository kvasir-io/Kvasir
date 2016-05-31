#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Backup Register
    namespace GpbrGpbr0{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1a90,0x00000000,0x00000000,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr1{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1a94,0x00000000,0x00000000,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr2{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1a98,0x00000000,0x00000000,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr3{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1a9c,0x00000000,0x00000000,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr4{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1aa0,0x00000000,0x00000000,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr5{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1aa4,0x00000000,0x00000000,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr6{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1aa8,0x00000000,0x00000000,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
    namespace GpbrGpbr7{    ///<General Purpose Backup Register
        using Addr = Register::Address<0x400e1aac,0x00000000,0x00000000,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
    }
}
