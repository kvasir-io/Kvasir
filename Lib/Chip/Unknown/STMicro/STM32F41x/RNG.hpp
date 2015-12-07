#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Random number generator
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x50060800,0xfffffff3,0,unsigned>;
        ///Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ie{}; 
        namespace IeValC{
        }
        ///Random number generator
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rngen{}; 
        namespace RngenValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x50060804,0xffffff98,0,unsigned>;
        ///Seed error interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> seis{}; 
        namespace SeisValC{
        }
        ///Clock error interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ceis{}; 
        namespace CeisValC{
        }
        ///Seed error current status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secs{}; 
        namespace SecsValC{
        }
        ///Clock error current status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cecs{}; 
        namespace CecsValC{
        }
        ///Data ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
    }
    namespace Nonedr{    ///<data register
        using Addr = Register::Address<0x50060808,0x00000000,0,unsigned>;
        ///Random data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rndata{}; 
        namespace RndataValC{
        }
    }
}
