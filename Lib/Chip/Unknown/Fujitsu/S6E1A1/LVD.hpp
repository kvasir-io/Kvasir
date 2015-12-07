#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low-voltage Detection
    namespace NonelvdCtl{    ///<Low-voltage Detection Voltage Control Register
        using Addr = Register::Address<0x40035000,0xffff0303,0,unsigned>;
        ///Low-voltage detection reset operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lvdre{}; 
        namespace LvdreValC{
        }
        ///Low-voltage detection reset voltage setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> svhr{}; 
        namespace SvhrValC{
        }
        ///Low-voltage detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdie{}; 
        namespace LvdieValC{
        }
        ///Low-voltage detection interrupt voltage setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> svhi{}; 
        namespace SvhiValC{
        }
    }
    namespace NonelvdStr{    ///<Low-voltage Detection Interrupt Factor Register
        using Addr = Register::Address<0x40035004,0xffffff7f,0,unsigned char>;
        ///Low-voltage detection interrupt factor bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdir{}; 
        namespace LvdirValC{
        }
    }
    namespace NonelvdClr{    ///<Low-voltage Detection Interrupt Factor Clear Register
        using Addr = Register::Address<0x40035008,0xffffff7f,0,unsigned char>;
        ///Low-voltage detection interrupt factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdcl{}; 
        namespace LvdclValC{
        }
    }
    namespace NonelvdRlr{    ///<Low-voltage Detection Voltage Protection Register
        using Addr = Register::Address<0x4003500c,0x00000000,0,unsigned>;
        ///Low-voltage Detection Voltage Control Register protection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lvdlck{}; 
        namespace LvdlckValC{
        }
    }
    namespace NonelvdStr2{    ///<Low-voltage Detection Circuit Status Register
        using Addr = Register::Address<0x40035010,0xffffff3f,0,unsigned char>;
        ///Low-voltage detection interrupt status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdirdy{}; 
        namespace LvdirdyValC{
        }
        ///Low-voltage detection reset status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lvdrrdy{}; 
        namespace LvdrrdyValC{
        }
    }
}
