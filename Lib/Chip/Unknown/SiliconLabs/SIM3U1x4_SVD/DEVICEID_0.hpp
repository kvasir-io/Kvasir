#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonedeviceid0{    ///<Device ID Word 0
        using Addr = Register::Address<0x400490c0,0x00000000,0,unsigned>;
        ///Revision ID. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revid{}; 
        namespace RevidValC{
        }
        ///Device ID 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> deviceid0{}; 
        namespace Deviceid0ValC{
        }
    }
    namespace Nonedeviceid1{    ///<Device ID Word 1
        using Addr = Register::Address<0x400490d0,0x00000000,0,unsigned>;
        ///Device ID 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid1{}; 
        namespace Deviceid1ValC{
        }
    }
    namespace Nonedeviceid2{    ///<Device ID Word 2
        using Addr = Register::Address<0x400490e0,0x00000000,0,unsigned>;
        ///Device ID 2. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid2{}; 
        namespace Deviceid2ValC{
        }
    }
    namespace Nonedeviceid3{    ///<Device ID Word 3
        using Addr = Register::Address<0x400490f0,0x00000000,0,unsigned>;
        ///Device ID 3. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> deviceid3{}; 
        namespace Deviceid3ValC{
        }
    }
}
