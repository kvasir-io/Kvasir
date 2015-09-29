#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace GpiobPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff040,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace GpiobPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x400ff044,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
    }
    namespace GpiobPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x400ff048,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
    }
    namespace GpiobPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x400ff04c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
    }
    namespace GpiobPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff050,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
    }
    namespace GpiobPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff054,0x00000000,0,unsigned>;
        ///Port Data Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
    namespace GpiobPidr{    ///<Port Input Disable Register
        using Addr = Register::Address<0x400ff058,0x00000000,0,unsigned>;
        ///Port Input Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pid{}; 
    }
}
