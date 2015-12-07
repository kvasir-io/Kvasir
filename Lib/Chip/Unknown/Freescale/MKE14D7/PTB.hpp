#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace GpiobPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x4007f040,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
        namespace PdoValC{
        }
    }
    namespace GpiobPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x4007f044,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
        namespace PtsoValC{
        }
    }
    namespace GpiobPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x4007f048,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
        namespace PtcoValC{
        }
    }
    namespace GpiobPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x4007f04c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
        namespace PttoValC{
        }
    }
    namespace GpiobPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x4007f050,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
        namespace PdiValC{
        }
    }
    namespace GpiobPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x4007f054,0x00000000,0,unsigned>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
        namespace PddValC{
        }
    }
}
