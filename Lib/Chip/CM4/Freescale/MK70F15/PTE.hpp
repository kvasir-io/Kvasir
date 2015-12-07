#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace GpioePdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff100,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
        namespace PdoValC{
        }
    }
    namespace GpioePsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x400ff104,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
        namespace PtsoValC{
        }
    }
    namespace GpioePcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x400ff108,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
        namespace PtcoValC{
        }
    }
    namespace GpioePtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x400ff10c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
        namespace PttoValC{
        }
    }
    namespace GpioePdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff110,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
        namespace PdiValC{
        }
    }
    namespace GpioePddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff114,0x00000000,0,unsigned>;
        ///Port data direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
        namespace PddValC{
        }
    }
}
