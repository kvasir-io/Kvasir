#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Fault_Reports
    namespace Nonecfsr{    ///<CFSR
        using Addr = Register::Address<0xe000ed28,0x00000000,0,unsigned>;
        ///MFSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> mfsr{}; 
        ///BFSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> bfsr{}; 
        ///UFSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ufsr{}; 
    }
    namespace Nonemfsr{    ///<MFSR
        using Addr = Register::Address<0xe000ed28,0xffffff64,0,unsigned char>;
        ///IACCVIOL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iaccviol{}; 
        ///DACCVIOL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> daccviol{}; 
        ///MUNSTKERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> munstkerr{}; 
        ///MSTKERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstkerr{}; 
        ///MMARVALID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mmarvalid{}; 
    }
    namespace Nonemmfar{    ///<MMFAR
        using Addr = Register::Address<0xe000ed34,0x00000000,0,unsigned>;
        ///ADDRESS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Nonebfsr{    ///<BFSR
        using Addr = Register::Address<0xe000ed29,0xffffff60,0,unsigned char>;
        ///IBUSERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ibuserr{}; 
        ///PRECISERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> preciserr{}; 
        ///IMPRECISERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> impreciserr{}; 
        ///UNSTKERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unstkerr{}; 
        ///STKERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stkerr{}; 
        ///BFARVALID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bfarvalid{}; 
    }
    namespace Nonebfar{    ///<BFAR
        using Addr = Register::Address<0xe000ed38,0x00000000,0,unsigned>;
        ///ADDRESS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Noneufsr{    ///<UFSR
        using Addr = Register::Address<0xe000ed2a,0xfffffcf0,0,unsigned>;
        ///UNDEFINSTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> undefinstr{}; 
        ///INVSTATE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> invstate{}; 
        ///INVPC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> invpc{}; 
        ///NOCP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nocp{}; 
        ///UNALIGNED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> unaligned{}; 
        ///DIVBYZERO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> divbyzero{}; 
    }
    namespace Nonehfsr{    ///<HFSR
        using Addr = Register::Address<0xe000ed2c,0x3ffffffd,0,unsigned>;
        ///VECTTBL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vecttbl{}; 
        ///FORCED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> forced{}; 
        ///DEBUGEVT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> debugevt{}; 
    }
    namespace Nonedfsr{    ///<DFSR
        using Addr = Register::Address<0xe000ed30,0xffffffe0,0,unsigned>;
        ///HALTED
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> halted{}; 
        ///BKPT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bkpt{}; 
        ///DWTTRAP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dwttrap{}; 
        ///VCATCH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vcatch{}; 
        ///EXTERNAL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> external{}; 
    }
    namespace Noneafsr{    ///<AFSR
        using Addr = Register::Address<0xe000ed3c,0x00000000,0,unsigned>;
        ///IMPDEF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> impdef{}; 
    }
}
