#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace GpioaPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff000,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace GpioaPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x400ff004,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
    }
    namespace GpioaPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x400ff008,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
    }
    namespace GpioaPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x400ff00c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
    }
    namespace GpioaPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff010,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
    }
    namespace GpioaPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff014,0x00000000,0,unsigned>;
        ///Port Data Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
