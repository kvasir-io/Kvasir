#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low-voltage Detection
    namespace NonelvdCtl{    ///<Low-voltage Detection Voltage Control Register
        using Addr = Register::Address<0x40035000,0xffff4341,0,unsigned>;
        ///Low-voltage detection reset operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lvdre{}; 
        ///Low-voltage detection reset voltage setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> svhr{}; 
        ///Low-voltage detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdie{}; 
        ///Low-voltage detection interrupt voltage setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> svhi{}; 
        ///Low-voltage detection interrupt low power mode select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lvdim{}; 
    }
    namespace NonelvdStr{    ///<Low-voltage Detection Interrupt Register
        using Addr = Register::Address<0x40035004,0xffffff7f,0,unsigned char>;
        ///Low-voltage detection interrupt bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdir{}; 
    }
    namespace NonelvdClr{    ///<Low-voltage Detection Interrupt Clear Register
        using Addr = Register::Address<0x40035008,0xffffff7f,0,unsigned char>;
        ///Low-voltage detection interrupt clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdcl{}; 
    }
    namespace NonelvdRlr{    ///<Low-voltage Detection Voltage Protection Register
        using Addr = Register::Address<0x4003500c,0x00000000,0,unsigned>;
        ///Low-voltage Detection Voltage Control Register protection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lvdlck{}; 
    }
    namespace NonelvdStr2{    ///<Low-voltage Detection Circuit Status Register
        using Addr = Register::Address<0x40035010,0xffffff3f,0,unsigned char>;
        ///Low-voltage detection interrupt status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdirdy{}; 
        ///Low-voltage detection reset status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lvdrrdy{}; 
    }
}
