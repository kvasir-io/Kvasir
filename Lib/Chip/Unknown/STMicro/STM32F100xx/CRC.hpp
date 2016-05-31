#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CRC calculation unit
    namespace CrcDr{    ///<Data register
        using Addr = Register::Address<0x40023000,0x00000000,0x00000000,unsigned>;
        ///Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace CrcIdr{    ///<Independent Data register
        using Addr = Register::Address<0x40023004,0xffffff00,0x00000000,unsigned>;
        ///Independent Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> idr{}; 
    }
    namespace CrcCr{    ///<Control register
        using Addr = Register::Address<0x40023008,0xfffffffe,0x00000000,unsigned>;
        ///Reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reset{}; 
    }
}
