#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace FgpioaPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0xf8000000,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
        namespace PdoValC{
        }
    }
    namespace FgpioaPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0xf8000004,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
        namespace PtsoValC{
        }
    }
    namespace FgpioaPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0xf8000008,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
        namespace PtcoValC{
        }
    }
    namespace FgpioaPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0xf800000c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
        namespace PttoValC{
        }
    }
    namespace FgpioaPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0xf8000010,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
        namespace PdiValC{
        }
    }
    namespace FgpioaPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0xf8000014,0x00000000,0,unsigned>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
        namespace PddValC{
        }
    }
}
