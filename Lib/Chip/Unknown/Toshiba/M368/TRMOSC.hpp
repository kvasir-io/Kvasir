#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low Voltage detector control register
    namespace Nonepro{    ///<Protection Register
        using Addr = Register::Address<0x400f3200,0xffffff00,0,unsigned>;
        ///PROTECT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> protect{}; 
    }
    namespace Noneen{    ///<Enable Register
        using Addr = Register::Address<0x400f3204,0xfffffffe,0,unsigned>;
        ///TRIMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trimen{}; 
    }
    namespace Noneinit{    ///<Initial Trimming Level Monitor Register
        using Addr = Register::Address<0x400f3208,0xffffc0f0,0,unsigned>;
        ///TRIMINITF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> triminitf{}; 
        ///TRIMINITC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> triminitc{}; 
    }
    namespace Noneset{    ///<Trimming Level Setting Register
        using Addr = Register::Address<0x400f320c,0xffffc0f0,0,unsigned>;
        ///TRIMSETF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> trimsetf{}; 
        ///TRIMSETC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> trimsetc{}; 
    }
}
