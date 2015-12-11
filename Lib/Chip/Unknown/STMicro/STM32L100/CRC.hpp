#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CRC calculation unit
    namespace Nonedr{    ///<Data register
        using Addr = Register::Address<0x40023000,0x00000000,0,unsigned>;
        ///Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dataRegister{}; 
    }
    namespace Noneidr{    ///<Independent data register
        using Addr = Register::Address<0x40023004,0xffffff80,0,unsigned>;
        ///Independent data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> independentDataRegister{}; 
    }
    namespace Nonecr{    ///<Control register
        using Addr = Register::Address<0x40023008,0xfffffffe,0,unsigned>;
        ///RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reset{}; 
    }
}
