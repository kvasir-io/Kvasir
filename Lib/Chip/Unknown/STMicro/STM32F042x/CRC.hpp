#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//cyclic redundancy check calculation       unit
    namespace Nonedr{    ///<Data register
        using Addr = Register::Address<0x40023000,0x00000000,0,unsigned>;
        ///Data register bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dr{}; 
        namespace DrValC{
        }
    }
    namespace Noneidr{    ///<Independent data register
        using Addr = Register::Address<0x40023004,0xffffff00,0,unsigned>;
        ///General-purpose 8-bit data register               bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> idr{}; 
        namespace IdrValC{
        }
    }
    namespace Nonecr{    ///<Control register
        using Addr = Register::Address<0x40023008,0xffffff1e,0,unsigned>;
        ///reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reset{}; 
        namespace ResetValC{
        }
        ///Reverse input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> revIn{}; 
        namespace RevinValC{
        }
        ///Reverse output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> revOut{}; 
        namespace RevoutValC{
        }
    }
    namespace Noneinit{    ///<Initial CRC value
        using Addr = Register::Address<0x4002300c,0x00000000,0,unsigned>;
        ///Programmable initial CRC               value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> init{}; 
        namespace InitValC{
        }
    }
}
