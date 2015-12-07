#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PB)
    namespace Nonedata{    ///<PB Data Register
        using Addr = Register::Address<0x400c0100,0xffffff80,0,unsigned>;
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
    }
    namespace Nonecr{    ///<PB Control Register
        using Addr = Register::Address<0x400c0104,0xffffff80,0,unsigned>;
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
    }
    namespace Nonefr1{    ///<PB Function Register 1
        using Addr = Register::Address<0x400c0108,0xffffff80,0,unsigned>;
        ///PB0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb0f1{}; 
        namespace Pb0f1ValC{
        }
        ///PB1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb1f1{}; 
        namespace Pb1f1ValC{
        }
        ///PB2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2f1{}; 
        namespace Pb2f1ValC{
        }
        ///PB3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3f1{}; 
        namespace Pb3f1ValC{
        }
        ///PB4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4f1{}; 
        namespace Pb4f1ValC{
        }
        ///PB5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5f1{}; 
        namespace Pb5f1ValC{
        }
        ///PB6F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6f1{}; 
        namespace Pb6f1ValC{
        }
    }
    namespace Nonefr2{    ///<PB Function Register 2
        using Addr = Register::Address<0x400c010c,0xffffff83,0,unsigned>;
        ///PB2F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2f2{}; 
        namespace Pb2f2ValC{
        }
        ///PB3F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3f2{}; 
        namespace Pb3f2ValC{
        }
        ///PB4F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4f2{}; 
        namespace Pb4f2ValC{
        }
        ///PB5F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5f2{}; 
        namespace Pb5f2ValC{
        }
        ///PB6F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6f2{}; 
        namespace Pb6f2ValC{
        }
    }
    namespace Nonefr3{    ///<PB Function Register 3
        using Addr = Register::Address<0x400c0110,0xffffffc0,0,unsigned>;
        ///PB0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb0f3{}; 
        namespace Pb0f3ValC{
        }
        ///PB1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb1f3{}; 
        namespace Pb1f3ValC{
        }
        ///PB2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2f3{}; 
        namespace Pb2f3ValC{
        }
        ///PB3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3f3{}; 
        namespace Pb3f3ValC{
        }
        ///PB4F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4f3{}; 
        namespace Pb4f3ValC{
        }
        ///PB5F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5f3{}; 
        namespace Pb5f3ValC{
        }
    }
    namespace Nonefr4{    ///<PB Function Register 4
        using Addr = Register::Address<0x400c0114,0xffffff83,0,unsigned>;
        ///PB2F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2f4{}; 
        namespace Pb2f4ValC{
        }
        ///PB3F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3f4{}; 
        namespace Pb3f4ValC{
        }
        ///PB4F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4f4{}; 
        namespace Pb4f4ValC{
        }
        ///PB5F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5f4{}; 
        namespace Pb5f4ValC{
        }
        ///PB6F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6f4{}; 
        namespace Pb6f4ValC{
        }
    }
    namespace Noneod{    ///<PB Open Drain Control Register
        using Addr = Register::Address<0x400c0128,0xffffff80,0,unsigned>;
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
    }
    namespace Nonepup{    ///<PB Pull-Up Control Register
        using Addr = Register::Address<0x400c012c,0xffffff80,0,unsigned>;
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
    }
    namespace Nonepdn{    ///<PB Pull-Down Control Register
        using Addr = Register::Address<0x400c0130,0xffffff80,0,unsigned>;
        ///PB0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb0dn{}; 
        namespace Pb0dnValC{
        }
        ///PB1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb1dn{}; 
        namespace Pb1dnValC{
        }
        ///PB2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pb2dn{}; 
        namespace Pb2dnValC{
        }
        ///PB3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb3dn{}; 
        namespace Pb3dnValC{
        }
        ///PB4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb4dn{}; 
        namespace Pb4dnValC{
        }
        ///PB5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pb5dn{}; 
        namespace Pb5dnValC{
        }
        ///PB6DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pb6dn{}; 
        namespace Pb6dnValC{
        }
    }
    namespace Noneie{    ///<PB Input Enable Control Register
        using Addr = Register::Address<0x400c0138,0xffffff80,0,unsigned>;
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
    }
}
