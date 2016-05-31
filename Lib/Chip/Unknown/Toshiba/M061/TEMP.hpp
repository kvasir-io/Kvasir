#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Temperature Sensor
    namespace TempEn{    ///<TEMP Enable Register
        using Addr = Register::Address<0x4005d000,0xfffffffc,0x00000000,unsigned>;
        ///EN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en0{}; 
        ///EN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en1{}; 
    }
    namespace TempCr{    ///<TEMP Control Registe
        using Addr = Register::Address<0x4005d004,0xfffffffe,0x00000000,unsigned>;
        ///CR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cr0{}; 
    }
}
