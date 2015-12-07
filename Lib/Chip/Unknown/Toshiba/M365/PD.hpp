#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PD)
    namespace Nonedata{    ///<PD Data Register
        using Addr = Register::Address<0x400c0300,0xffffff00,0,unsigned>;
        ///PD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        namespace Pd0ValC{
        }
        ///PD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        namespace Pd1ValC{
        }
        ///PD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        namespace Pd2ValC{
        }
        ///PD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        namespace Pd3ValC{
        }
        ///PD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        namespace Pd4ValC{
        }
        ///PD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        namespace Pd5ValC{
        }
        ///PD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        namespace Pd6ValC{
        }
        ///PD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        namespace Pd7ValC{
        }
    }
    namespace Nonecr{    ///<PD Control Register
        using Addr = Register::Address<0x400c0304,0xffffff00,0,unsigned>;
        ///PD0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0c{}; 
        namespace Pd0cValC{
        }
        ///PD1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1c{}; 
        namespace Pd1cValC{
        }
        ///PD2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2c{}; 
        namespace Pd2cValC{
        }
        ///PD3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3c{}; 
        namespace Pd3cValC{
        }
        ///PD4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4c{}; 
        namespace Pd4cValC{
        }
        ///PD5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5c{}; 
        namespace Pd5cValC{
        }
        ///PD6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6c{}; 
        namespace Pd6cValC{
        }
        ///PD7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7c{}; 
        namespace Pd7cValC{
        }
    }
    namespace Nonefr3{    ///<PD Function Register 3
        using Addr = Register::Address<0x400c0310,0xffffff70,0,unsigned>;
        ///PD0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0f3{}; 
        namespace Pd0f3ValC{
        }
        ///PD1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1f3{}; 
        namespace Pd1f3ValC{
        }
        ///PD2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2f3{}; 
        namespace Pd2f3ValC{
        }
        ///PD3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3f3{}; 
        namespace Pd3f3ValC{
        }
        ///PD7F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7f3{}; 
        namespace Pd7f3ValC{
        }
    }
    namespace Noneod{    ///<PD Open Drain Control Register
        using Addr = Register::Address<0x400c0328,0xffffff00,0,unsigned>;
        ///PD0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0od{}; 
        namespace Pd0odValC{
        }
        ///PD1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1od{}; 
        namespace Pd1odValC{
        }
        ///PD2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2od{}; 
        namespace Pd2odValC{
        }
        ///PD3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3od{}; 
        namespace Pd3odValC{
        }
        ///PD4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4od{}; 
        namespace Pd4odValC{
        }
        ///PD5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5od{}; 
        namespace Pd5odValC{
        }
        ///PD6OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6od{}; 
        namespace Pd6odValC{
        }
        ///PD7OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7od{}; 
        namespace Pd7odValC{
        }
    }
    namespace Nonepup{    ///<PD Pull-Up Control Register
        using Addr = Register::Address<0x400c032c,0xffffff00,0,unsigned>;
        ///PD0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0up{}; 
        namespace Pd0upValC{
        }
        ///PD1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1up{}; 
        namespace Pd1upValC{
        }
        ///PD2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2up{}; 
        namespace Pd2upValC{
        }
        ///PD3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3up{}; 
        namespace Pd3upValC{
        }
        ///PD4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4up{}; 
        namespace Pd4upValC{
        }
        ///PD5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5up{}; 
        namespace Pd5upValC{
        }
        ///PD6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6up{}; 
        namespace Pd6upValC{
        }
        ///PD7UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7up{}; 
        namespace Pd7upValC{
        }
    }
    namespace Noneie{    ///<PD Input Enable Control Register
        using Addr = Register::Address<0x400c0338,0xffffff00,0,unsigned>;
        ///PD0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0ie{}; 
        namespace Pd0ieValC{
        }
        ///PD1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1ie{}; 
        namespace Pd1ieValC{
        }
        ///PD2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2ie{}; 
        namespace Pd2ieValC{
        }
        ///PD3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3ie{}; 
        namespace Pd3ieValC{
        }
        ///PD4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4ie{}; 
        namespace Pd4ieValC{
        }
        ///PD5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5ie{}; 
        namespace Pd5ieValC{
        }
        ///PD6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6ie{}; 
        namespace Pd6ieValC{
        }
        ///PD7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7ie{}; 
        namespace Pd7ieValC{
        }
    }
}
