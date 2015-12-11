#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Fault_Reports
    namespace Nonecfsr{    ///<CFSR
        using Addr = Register::Address<0xe000ed28,0x00000000,0,unsigned>;
        ///MFSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mfsr{}; 
        ///BFSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> bfsr{}; 
        ///UFSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ufsr{}; 
    }
    namespace Nonemfsr{    ///<MFSR
        using Addr = Register::Address<0xe000ed28,0xffffff64,0,unsigned char>;
        ///IACCVIOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iaccviol{}; 
        ///DACCVIOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> daccviol{}; 
        ///MUNSTKERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> munstkerr{}; 
        ///MSTKERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstkerr{}; 
        ///MMARVALID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mmarvalid{}; 
    }
    namespace Nonemmfar{    ///<MMFAR
        using Addr = Register::Address<0xe000ed34,0x00000000,0,unsigned>;
        ///ADDRESS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Nonebfsr{    ///<BFSR
        using Addr = Register::Address<0xe000ed29,0xffffff60,0,unsigned char>;
        ///IBUSERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ibuserr{}; 
        ///PRECISERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> preciserr{}; 
        ///IMPRECISERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> impreciserr{}; 
        ///UNSTKERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unstkerr{}; 
        ///STKERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stkerr{}; 
        ///BFARVALID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bfarvalid{}; 
    }
    namespace Nonebfar{    ///<BFAR
        using Addr = Register::Address<0xe000ed38,0x00000000,0,unsigned>;
        ///ADDRESS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Noneufsr{    ///<UFSR
        using Addr = Register::Address<0xe000ed2a,0xfffffcf0,0,unsigned>;
        ///UNDEFINSTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> undefinstr{}; 
        ///INVSTATE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> invstate{}; 
        ///INVPC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> invpc{}; 
        ///NOCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nocp{}; 
        ///UNALIGNED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> unaligned{}; 
        ///DIVBYZERO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> divbyzero{}; 
    }
    namespace Nonehfsr{    ///<HFSR
        using Addr = Register::Address<0xe000ed2c,0x3ffffffd,0,unsigned>;
        ///VECTTBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vecttbl{}; 
        ///FORCED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> forced{}; 
        ///DEBUGEVT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> debugevt{}; 
    }
    namespace Nonedfsr{    ///<DFSR
        using Addr = Register::Address<0xe000ed30,0xffffffe0,0,unsigned>;
        ///HALTED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> halted{}; 
        ///BKPT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bkpt{}; 
        ///DWTTRAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dwttrap{}; 
        ///VCATCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcatch{}; 
        ///EXTERNAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> external{}; 
    }
    namespace Noneafsr{    ///<AFSR
        using Addr = Register::Address<0xe000ed3c,0x00000000,0,unsigned>;
        ///IMPDEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> impdef{}; 
    }
}
