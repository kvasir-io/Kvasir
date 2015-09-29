#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Temperature Sensor
    namespace Noneen{    ///<TEMP Enable Register
        using Addr = Register::Address<0x4005d000,0xfffffffc,0,unsigned>;
        ///EN0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en0{}; 
        ///EN1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en1{}; 
    }
    namespace Nonecr{    ///<TEMP Control Registe
        using Addr = Register::Address<0x4005d004,0xfffffffe,0,unsigned>;
        ///CR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cr0{}; 
    }
}
