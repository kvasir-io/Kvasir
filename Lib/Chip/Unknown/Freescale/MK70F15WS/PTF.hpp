#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace GpiofPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff140,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace GpiofPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x400ff144,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
    }
    namespace GpiofPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x400ff148,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
    }
    namespace GpiofPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x400ff14c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
    }
    namespace GpiofPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff150,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
    }
    namespace GpiofPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff154,0x00000000,0,unsigned>;
        ///Port data direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
