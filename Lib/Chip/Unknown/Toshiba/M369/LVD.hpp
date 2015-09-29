#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low Voltage detector control register
    namespace Nonercr{    ///<LVD-RESET Control Register
        using Addr = Register::Address<0x400f4000,0xffffffd0,0,unsigned>;
        ///LVDEN1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvden1{}; 
        ///LVDLVL1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> lvdlvl1{}; 
        ///LVDRSTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lvdrsten{}; 
    }
    namespace Noneicr{    ///<LVD-NMI Control Register
        using Addr = Register::Address<0x400f4004,0xffffffc0,0,unsigned>;
        ///LVDEN2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvden2{}; 
        ///LVDLVL2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> lvdlvl2{}; 
        ///INTSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intsel{}; 
        ///LVDINTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lvdinten{}; 
    }
    namespace Nonesr{    ///<LVD Status Control Register
        using Addr = Register::Address<0x400f4008,0xfffffffc,0,unsigned>;
        ///LVDST1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvdst1{}; 
        ///LVDST2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lvdst2{}; 
    }
}
