#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low Voltage detector control register
    namespace Noneicr{    ///<LVD-NMI Control Register
        using Addr = Register::Address<0x400f4004,0xffffffc0,0,unsigned>;
        ///LVDEN2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvden2{}; 
        ///LVDLVL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> lvdlvl2{}; 
        ///INTSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intsel{}; 
        ///LVDINTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lvdinten{}; 
    }
    namespace Nonesr{    ///<LVD Status Control Register
        using Addr = Register::Address<0x400f4008,0xfffffffd,0,unsigned>;
        ///LVDST2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lvdst2{}; 
    }
}
