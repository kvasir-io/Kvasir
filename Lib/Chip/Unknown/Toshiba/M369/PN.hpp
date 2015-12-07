#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PN)
    namespace Nonedata{    ///<PN Data Register
        using Addr = Register::Address<0x400c0d00,0xffffffc0,0,unsigned>;
        ///PN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0{}; 
        namespace Pn0ValC{
        }
        ///PN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1{}; 
        namespace Pn1ValC{
        }
        ///PN2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2{}; 
        namespace Pn2ValC{
        }
        ///PN3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3{}; 
        namespace Pn3ValC{
        }
        ///PN4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4{}; 
        namespace Pn4ValC{
        }
        ///PN5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5{}; 
        namespace Pn5ValC{
        }
    }
    namespace Nonecr{    ///<PN Control Register
        using Addr = Register::Address<0x400c0d04,0xffffffc0,0,unsigned>;
        ///PN0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0c{}; 
        namespace Pn0cValC{
        }
        ///PN1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1c{}; 
        namespace Pn1cValC{
        }
        ///PN2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2c{}; 
        namespace Pn2cValC{
        }
        ///PN3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3c{}; 
        namespace Pn3cValC{
        }
        ///PN4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4c{}; 
        namespace Pn4cValC{
        }
        ///PN5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5c{}; 
        namespace Pn5cValC{
        }
    }
    namespace Nonefr1{    ///<PN Function Register 1
        using Addr = Register::Address<0x400c0d08,0xffffffc0,0,unsigned>;
        ///PN0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0f1{}; 
        namespace Pn0f1ValC{
        }
        ///PN1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1f1{}; 
        namespace Pn1f1ValC{
        }
        ///PN2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2f1{}; 
        namespace Pn2f1ValC{
        }
        ///PN3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3f1{}; 
        namespace Pn3f1ValC{
        }
        ///PN4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4f1{}; 
        namespace Pn4f1ValC{
        }
        ///PN5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5f1{}; 
        namespace Pn5f1ValC{
        }
    }
    namespace Nonefr2{    ///<PN Function Register 2
        using Addr = Register::Address<0x400c0d0c,0xffffffcf,0,unsigned>;
        ///PN4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4f1{}; 
        namespace Pn4f1ValC{
        }
        ///PN5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5f1{}; 
        namespace Pn5f1ValC{
        }
    }
    namespace Noneod{    ///<PN Open Drain Control Register
        using Addr = Register::Address<0x400c0d28,0xffffffc0,0,unsigned>;
        ///PN0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0od{}; 
        namespace Pn0odValC{
        }
        ///PN1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1od{}; 
        namespace Pn1odValC{
        }
        ///PN2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2od{}; 
        namespace Pn2odValC{
        }
        ///PN3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3od{}; 
        namespace Pn3odValC{
        }
        ///PN4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4od{}; 
        namespace Pn4odValC{
        }
        ///PN5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5od{}; 
        namespace Pn5odValC{
        }
    }
    namespace Nonepup{    ///<PN Pull-Up Control Register
        using Addr = Register::Address<0x400c0d2c,0xffffffc0,0,unsigned>;
        ///PN0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0up{}; 
        namespace Pn0upValC{
        }
        ///PN1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1up{}; 
        namespace Pn1upValC{
        }
        ///PN2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2up{}; 
        namespace Pn2upValC{
        }
        ///PN3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3up{}; 
        namespace Pn3upValC{
        }
        ///PN4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4up{}; 
        namespace Pn4upValC{
        }
        ///PN5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5up{}; 
        namespace Pn5upValC{
        }
    }
    namespace Nonepdn{    ///<PN Pull-Down Control Register
        using Addr = Register::Address<0x400c0d30,0xffffffc0,0,unsigned>;
        ///PN0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0dn{}; 
        namespace Pn0dnValC{
        }
        ///PN1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1dn{}; 
        namespace Pn1dnValC{
        }
        ///PN2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2dn{}; 
        namespace Pn2dnValC{
        }
        ///PN3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3dn{}; 
        namespace Pn3dnValC{
        }
        ///PN4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4dn{}; 
        namespace Pn4dnValC{
        }
        ///PN5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5dn{}; 
        namespace Pn5dnValC{
        }
    }
    namespace Noneie{    ///<PN Input Enable Control Register
        using Addr = Register::Address<0x400c0d38,0xffffffc0,0,unsigned>;
        ///PN0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0ie{}; 
        namespace Pn0ieValC{
        }
        ///PN1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1ie{}; 
        namespace Pn1ieValC{
        }
        ///PN2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2ie{}; 
        namespace Pn2ieValC{
        }
        ///PN3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3ie{}; 
        namespace Pn3ieValC{
        }
        ///PN4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4ie{}; 
        namespace Pn4ieValC{
        }
        ///PN5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5ie{}; 
        namespace Pn5ieValC{
        }
    }
}
