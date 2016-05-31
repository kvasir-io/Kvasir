#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Low-voltage Detection
    namespace LvdLvdCtl{    ///<Low-voltage Detection Voltage Control Register
        using Addr = Register::Address<0x40035000,0xffff0303,0x00000000,unsigned>;
        ///Low-voltage detection reset operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lvdre{}; 
        ///Low-voltage detection reset voltage setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> svhr{}; 
        ///Low-voltage detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdie{}; 
        ///Low-voltage detection interrupt voltage setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> svhi{}; 
    }
    namespace LvdLvdStr{    ///<Low-voltage Detection Interrupt Factor Register
        using Addr = Register::Address<0x40035004,0xffffff7f,0x00000000,unsigned char>;
        ///Low-voltage detection interrupt factor bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdir{}; 
    }
    namespace LvdLvdClr{    ///<Low-voltage Detection Interrupt Factor Clear Register
        using Addr = Register::Address<0x40035008,0xffffff7f,0x00000000,unsigned char>;
        ///Low-voltage detection interrupt factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdcl{}; 
    }
    namespace LvdLvdRlr{    ///<Low-voltage Detection Voltage Protection Register
        using Addr = Register::Address<0x4003500c,0x00000000,0x00000000,unsigned>;
        ///Low-voltage Detection Voltage Control Register protection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lvdlck{}; 
    }
    namespace LvdLvdStr2{    ///<Low-voltage Detection Circuit Status Register
        using Addr = Register::Address<0x40035010,0xffffff3f,0x00000000,unsigned char>;
        ///Low-voltage detection interrupt status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdirdy{}; 
        ///Low-voltage detection reset status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdrrdy{}; 
    }
}
