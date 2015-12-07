#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace FgpiocPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0xf80ff080,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
        namespace PdoValC{
        }
    }
    namespace FgpiocPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0xf80ff084,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
        namespace PtsoValC{
        }
    }
    namespace FgpiocPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0xf80ff088,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
        namespace PtcoValC{
        }
    }
    namespace FgpiocPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0xf80ff08c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
        namespace PttoValC{
        }
    }
    namespace FgpiocPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0xf80ff090,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
        namespace PdiValC{
        }
    }
    namespace FgpiocPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0xf80ff094,0x00000000,0,unsigned>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
        namespace PddValC{
        }
    }
}
