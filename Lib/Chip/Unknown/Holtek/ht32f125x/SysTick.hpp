#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SysTick
    namespace SystickCtrl{    ///<CTRL
        using Addr = Register::Address<0xe000e010,0x0000fff8,0x00000000,unsigned>;
        ///ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///TICKINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tickint{}; 
        ///CLKSOURCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clksource{}; 
        ///COUNTFLAG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> countflag{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,17),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SystickLoad{    ///<LOAD
        using Addr = Register::Address<0xe000e014,0x00000000,0x00000000,unsigned>;
        ///RELOAD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> reload{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SystickVal{    ///<VAL
        using Addr = Register::Address<0xe000e018,0x00000000,0x00000000,unsigned>;
        ///CURRENT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> current{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace SystickCalib{    ///<CALIB
        using Addr = Register::Address<0xe000e01c,0x3f000000,0x00000000,unsigned>;
        ///TENMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> tenms{}; 
        ///SKEW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> skew{}; 
        ///NOREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> noref{}; 
    }
}
