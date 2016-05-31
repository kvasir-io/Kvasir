#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//External interrupt/event       controller
    namespace ExtiImr{    ///<IMR
        using Addr = Register::Address<0x40010400,0xff800000,0x00000000,unsigned>;
        ///Interrupt mask on line x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> mr{}; 
    }
    namespace ExtiEmr{    ///<EMR
        using Addr = Register::Address<0x40010404,0xff800000,0x00000000,unsigned>;
        ///Event mask on line x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> mr{}; 
    }
    namespace ExtiRtsr{    ///<RTSR
        using Addr = Register::Address<0x40010408,0xff800000,0x00000000,unsigned>;
        ///Rising edge trigger event configuration               bit of line x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> tr{}; 
    }
    namespace ExtiFtsr{    ///<FTSR
        using Addr = Register::Address<0x4001040c,0xff800000,0x00000000,unsigned>;
        ///Falling edge trigger event configuration               bit of line x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> tr{}; 
    }
    namespace ExtiSwier{    ///<SWIER
        using Addr = Register::Address<0x40010410,0xff800000,0x00000000,unsigned>;
        ///Software interrupt on line               x
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> swier{}; 
    }
    namespace ExtiPr{    ///<PR
        using Addr = Register::Address<0x40010414,0xff800000,0x00000000,unsigned>;
        ///Pending bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::ReadWriteAccess,unsigned> pr{}; 
    }
}
