#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External interrupt/event       controller
    namespace Noneimr{    ///<IMR
        using Addr = Register::Address<0x40010400,0xff800000,0,unsigned>;
        ///Interrupt mask on line x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> mr{}; 
    }
    namespace Noneemr{    ///<EMR
        using Addr = Register::Address<0x40010404,0xff800000,0,unsigned>;
        ///Event mask on line x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> mr{}; 
    }
    namespace Nonertsr{    ///<RTSR
        using Addr = Register::Address<0x40010408,0xff800000,0,unsigned>;
        ///Rising edge trigger event configuration               bit of line x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> tr{}; 
    }
    namespace Noneftsr{    ///<FTSR
        using Addr = Register::Address<0x4001040c,0xff800000,0,unsigned>;
        ///Falling edge trigger event configuration               bit of line x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> tr{}; 
    }
    namespace Noneswier{    ///<SWIER
        using Addr = Register::Address<0x40010410,0xff800000,0,unsigned>;
        ///Software interrupt on line               x
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> swier{}; 
    }
    namespace Nonepr{    ///<PR
        using Addr = Register::Address<0x40010414,0xff800000,0,unsigned>;
        ///Pending bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> pr{}; 
    }
}
