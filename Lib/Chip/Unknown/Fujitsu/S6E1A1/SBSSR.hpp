#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Software-based Simultaneous Startup Register
    namespace Nonebtsssr{    ///<Software-based Simultaneous Startup Register
        using Addr = Register::Address<0x40025ffc,0xfffffff0,0,unsigned>;
        ///Software-based simultaneous startup bit of Ch.3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sssr3{}; 
        ///Software-based simultaneous startup bit of Ch.2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sssr2{}; 
        ///Software-based simultaneous startup bit of Ch.1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sssr1{}; 
        ///Software-based simultaneous startup bit of Ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sssr0{}; 
    }
}
