#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Deviceid0Deviceid0{    ///<Device ID Word 0
        using Addr = Register::Address<0x400490c0,0x00000000,0x00000000,unsigned>;
        ///Revision ID. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revid{}; 
        ///Device ID 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> deviceid0{}; 
    }
    namespace Deviceid0Deviceid1{    ///<Device ID Word 1
        using Addr = Register::Address<0x400490d0,0x00000000,0x00000000,unsigned>;
        ///Device ID 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid1{}; 
    }
    namespace Deviceid0Deviceid2{    ///<Device ID Word 2
        using Addr = Register::Address<0x400490e0,0x00000000,0x00000000,unsigned>;
        ///Device ID 2. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid2{}; 
    }
    namespace Deviceid0Deviceid3{    ///<Device ID Word 3
        using Addr = Register::Address<0x400490f0,0x00000000,0x00000000,unsigned>;
        ///Device ID 3. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid3{}; 
    }
}
