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
    namespace Nonefr1{    ///<PD Function Register 1
        using Addr = Register::Address<0x400c0308,0xffffff00,0,unsigned>;
        ///PD0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0f1{}; 
        namespace Pd0f1ValC{
        }
        ///PD1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1f1{}; 
        namespace Pd1f1ValC{
        }
        ///PD2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2f1{}; 
        namespace Pd2f1ValC{
        }
        ///PD3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3f1{}; 
        namespace Pd3f1ValC{
        }
        ///PD4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4f1{}; 
        namespace Pd4f1ValC{
        }
        ///PD5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5f1{}; 
        namespace Pd5f1ValC{
        }
        ///PD6F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6f1{}; 
        namespace Pd6f1ValC{
        }
        ///PD7F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7f1{}; 
        namespace Pd7f1ValC{
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
    namespace Nonepdn{    ///<PD Pull-Down Control Register
        using Addr = Register::Address<0x400c0330,0xffffff00,0,unsigned>;
        ///PD0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0dn{}; 
        namespace Pd0dnValC{
        }
        ///PD1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1dn{}; 
        namespace Pd1dnValC{
        }
        ///PD2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2dn{}; 
        namespace Pd2dnValC{
        }
        ///PD3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3dn{}; 
        namespace Pd3dnValC{
        }
        ///PD4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4dn{}; 
        namespace Pd4dnValC{
        }
        ///PD5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5dn{}; 
        namespace Pd5dnValC{
        }
        ///PD6DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6dn{}; 
        namespace Pd6dnValC{
        }
        ///PD7DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7dn{}; 
        namespace Pd7dnValC{
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
