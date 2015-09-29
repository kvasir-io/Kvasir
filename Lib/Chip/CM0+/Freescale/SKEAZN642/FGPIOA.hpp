#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace FgpioaPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0xf8000000,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace FgpioaPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0xf8000004,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
    }
    namespace FgpioaPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0xf8000008,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
    }
    namespace FgpioaPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0xf800000c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
    }
    namespace FgpioaPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0xf8000010,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
    }
    namespace FgpioaPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0xf8000014,0x00000000,0,unsigned>;
        ///Port Data Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
    namespace FgpioaPidr{    ///<Port Input Disable Register
        using Addr = Register::Address<0xf8000018,0x00000000,0,unsigned>;
        ///Port Input Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pid{}; 
    }
}
