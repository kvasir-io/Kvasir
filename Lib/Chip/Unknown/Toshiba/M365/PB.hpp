#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PB)
    namespace Nonedata{    ///<PB Data Register
        using Addr = Register::Address<0x400c0100,0xffffff00,0,unsigned>;
        ///PB0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb0{}; 
        namespace Pb0ValC{
        }
        ///PB1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb1{}; 
        namespace Pb1ValC{
        }
        ///PB2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2{}; 
        namespace Pb2ValC{
        }
        ///PB3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3{}; 
        namespace Pb3ValC{
        }
        ///PB4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4{}; 
        namespace Pb4ValC{
        }
        ///PB5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5{}; 
        namespace Pb5ValC{
        }
        ///PB6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6{}; 
        namespace Pb6ValC{
        }
        ///PB7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pb7{}; 
        namespace Pb7ValC{
        }
    }
    namespace Nonecr{    ///<PB Control Register
        using Addr = Register::Address<0x400c0104,0xffffff00,0,unsigned>;
        ///PB0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb0c{}; 
        namespace Pb0cValC{
        }
        ///PB1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb1c{}; 
        namespace Pb1cValC{
        }
        ///PB2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2c{}; 
        namespace Pb2cValC{
        }
        ///PB3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3c{}; 
        namespace Pb3cValC{
        }
        ///PB4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4c{}; 
        namespace Pb4cValC{
        }
        ///PB5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5c{}; 
        namespace Pb5cValC{
        }
        ///PB6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6c{}; 
        namespace Pb6cValC{
        }
        ///PB7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pb7c{}; 
        namespace Pb7cValC{
        }
    }
    namespace Noneod{    ///<PB Open Drain Control Register
        using Addr = Register::Address<0x400c0128,0xffffff00,0,unsigned>;
        ///PB0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb0od{}; 
        namespace Pb0odValC{
        }
        ///PB1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb1od{}; 
        namespace Pb1odValC{
        }
        ///PB2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2od{}; 
        namespace Pb2odValC{
        }
        ///PB3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3od{}; 
        namespace Pb3odValC{
        }
        ///PB4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4od{}; 
        namespace Pb4odValC{
        }
        ///PB5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5od{}; 
        namespace Pb5odValC{
        }
        ///PB6OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6od{}; 
        namespace Pb6odValC{
        }
        ///PB7OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pb7od{}; 
        namespace Pb7odValC{
        }
    }
    namespace Nonepup{    ///<PB Pull-Up Control Register
        using Addr = Register::Address<0x400c012c,0xffffff00,0,unsigned>;
        ///PB0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb0up{}; 
        namespace Pb0upValC{
        }
        ///PB1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb1up{}; 
        namespace Pb1upValC{
        }
        ///PB2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2up{}; 
        namespace Pb2upValC{
        }
        ///PB3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3up{}; 
        namespace Pb3upValC{
        }
        ///PB4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4up{}; 
        namespace Pb4upValC{
        }
        ///PB5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5up{}; 
        namespace Pb5upValC{
        }
        ///PB6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6up{}; 
        namespace Pb6upValC{
        }
        ///PB7UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pb7up{}; 
        namespace Pb7upValC{
        }
    }
    namespace Noneie{    ///<PB Input Enable Control Register
        using Addr = Register::Address<0x400c0138,0xffffff00,0,unsigned>;
        ///PB0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb0ie{}; 
        namespace Pb0ieValC{
        }
        ///PB1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb1ie{}; 
        namespace Pb1ieValC{
        }
        ///PB2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2ie{}; 
        namespace Pb2ieValC{
        }
        ///PB3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3ie{}; 
        namespace Pb3ieValC{
        }
        ///PB4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4ie{}; 
        namespace Pb4ieValC{
        }
        ///PB5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5ie{}; 
        namespace Pb5ieValC{
        }
        ///PB6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6ie{}; 
        namespace Pb6ieValC{
        }
        ///PB7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pb7ie{}; 
        namespace Pb7ieValC{
        }
    }
}
