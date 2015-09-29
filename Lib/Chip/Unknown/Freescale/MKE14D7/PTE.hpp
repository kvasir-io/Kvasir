#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input/Output
    namespace GpioePdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x4007f100,0x00000000,0,unsigned>;
        ///Port Data Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace GpioePsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x4007f104,0x00000000,0,unsigned>;
        ///Port Set Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptso{}; 
    }
    namespace GpioePcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x4007f108,0x00000000,0,unsigned>;
        ///Port Clear Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptco{}; 
    }
    namespace GpioePtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x4007f10c,0x00000000,0,unsigned>;
        ///Port Toggle Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptto{}; 
    }
    namespace GpioePdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x4007f110,0x00000000,0,unsigned>;
        ///Port Data Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdi{}; 
    }
    namespace GpioePddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x4007f114,0x00000000,0,unsigned>;
        ///Port Data Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
