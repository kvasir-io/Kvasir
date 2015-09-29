#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace FgpioePdor{    ///<Port Data Output Register
        using Addr = Register::Address<0xf8000100,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace FgpioePsor{    ///<Port Set Output Register
        using Addr = Register::Address<0xf8000104,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
    }
    namespace FgpioePcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0xf8000108,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
    }
    namespace FgpioePtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0xf800010c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
    }
    namespace FgpioePdir{    ///<Port Data Input Register
        using Addr = Register::Address<0xf8000110,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
    }
    namespace FgpioePddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0xf8000114,0x00000000,0,unsigned>;
        ///Port Data Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
