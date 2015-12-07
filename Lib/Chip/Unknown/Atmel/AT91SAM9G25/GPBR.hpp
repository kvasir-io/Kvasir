#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Backup Register
    namespace GpbrGpbr0{    ///<General Purpose Backup Register
        using Addr = Register::Address<0xfffffe60,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
        namespace GpbrvalueValC{
        }
    }
    namespace GpbrGpbr1{    ///<General Purpose Backup Register
        using Addr = Register::Address<0xfffffe64,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
        namespace GpbrvalueValC{
        }
    }
    namespace GpbrGpbr2{    ///<General Purpose Backup Register
        using Addr = Register::Address<0xfffffe68,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
        namespace GpbrvalueValC{
        }
    }
    namespace GpbrGpbr3{    ///<General Purpose Backup Register
        using Addr = Register::Address<0xfffffe6c,0x00000000,0,unsigned>;
        ///Value of GPBR x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gpbrValue{}; 
        namespace GpbrvalueValC{
        }
    }
}
