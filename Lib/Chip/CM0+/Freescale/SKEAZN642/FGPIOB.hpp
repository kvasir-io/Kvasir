#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace FgpiobPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0xf8000040,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace FgpiobPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0xf8000044,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
    }
    namespace FgpiobPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0xf8000048,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
    }
    namespace FgpiobPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0xf800004c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
    }
    namespace FgpiobPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0xf8000050,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
    }
    namespace FgpiobPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0xf8000054,0x00000000,0,unsigned>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
    namespace FgpiobPidr{    ///<Port Input Disable Register
        using Addr = Register::Address<0xf8000058,0x00000000,0,unsigned>;
        ///Port Input Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pid{}; 
    }
}
