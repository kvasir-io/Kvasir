#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SysTick
    namespace Nonectrl{    ///<CTRL
        using Addr = Register::Address<0xe000e010,0xfffefff8,0,unsigned>;
        ///ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///TICKINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tickint{}; 
        namespace TickintValC{
        }
        ///CLKSOURCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clksource{}; 
        namespace ClksourceValC{
        }
        ///COUNTFLAG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> countflag{}; 
        namespace CountflagValC{
        }
    }
    namespace Noneload{    ///<LOAD
        using Addr = Register::Address<0xe000e014,0xff000000,0,unsigned>;
        ///RELOAD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> reload{}; 
        namespace ReloadValC{
        }
    }
    namespace Noneval{    ///<VAL
        using Addr = Register::Address<0xe000e018,0xff000000,0,unsigned>;
        ///CURRENT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> current{}; 
        namespace CurrentValC{
        }
    }
    namespace Nonecalib{    ///<CALIB
        using Addr = Register::Address<0xe000e01c,0x3f000000,0,unsigned>;
        ///TENMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> tenms{}; 
        namespace TenmsValC{
        }
        ///SKEW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> skew{}; 
        namespace SkewValC{
        }
        ///NOREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> noref{}; 
        namespace NorefValC{
        }
    }
}
