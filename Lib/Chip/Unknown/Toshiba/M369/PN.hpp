#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PN)
    namespace Nonedata{    ///<PN Data Register
        using Addr = Register::Address<0x400c0d00,0xffffffc0,0,unsigned>;
        ///PN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0{}; 
        ///PN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1{}; 
        ///PN2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2{}; 
        ///PN3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3{}; 
        ///PN4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4{}; 
        ///PN5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5{}; 
    }
    namespace Nonecr{    ///<PN Control Register
        using Addr = Register::Address<0x400c0d04,0xffffffc0,0,unsigned>;
        ///PN0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0c{}; 
        ///PN1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1c{}; 
        ///PN2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2c{}; 
        ///PN3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3c{}; 
        ///PN4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4c{}; 
        ///PN5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5c{}; 
    }
    namespace Nonefr1{    ///<PN Function Register 1
        using Addr = Register::Address<0x400c0d08,0xffffffc0,0,unsigned>;
        ///PN0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0f1{}; 
        ///PN1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1f1{}; 
        ///PN2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2f1{}; 
        ///PN3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3f1{}; 
        ///PN4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4f1{}; 
        ///PN5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5f1{}; 
    }
    namespace Nonefr2{    ///<PN Function Register 2
        using Addr = Register::Address<0x400c0d0c,0xffffffcf,0,unsigned>;
        ///PN4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4f1{}; 
        ///PN5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5f1{}; 
    }
    namespace Noneod{    ///<PN Open Drain Control Register
        using Addr = Register::Address<0x400c0d28,0xffffffc0,0,unsigned>;
        ///PN0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0od{}; 
        ///PN1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1od{}; 
        ///PN2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2od{}; 
        ///PN3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3od{}; 
        ///PN4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4od{}; 
        ///PN5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5od{}; 
    }
    namespace Nonepup{    ///<PN Pull-Up Control Register
        using Addr = Register::Address<0x400c0d2c,0xffffffc0,0,unsigned>;
        ///PN0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0up{}; 
        ///PN1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1up{}; 
        ///PN2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2up{}; 
        ///PN3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3up{}; 
        ///PN4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4up{}; 
        ///PN5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5up{}; 
    }
    namespace Nonepdn{    ///<PN Pull-Down Control Register
        using Addr = Register::Address<0x400c0d30,0xffffffc0,0,unsigned>;
        ///PN0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0dn{}; 
        ///PN1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1dn{}; 
        ///PN2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2dn{}; 
        ///PN3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3dn{}; 
        ///PN4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4dn{}; 
        ///PN5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5dn{}; 
    }
    namespace Noneie{    ///<PN Input Enable Control Register
        using Addr = Register::Address<0x400c0d38,0xffffffc0,0,unsigned>;
        ///PN0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0ie{}; 
        ///PN1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1ie{}; 
        ///PN2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2ie{}; 
        ///PN3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3ie{}; 
        ///PN4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pn4ie{}; 
        ///PN5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pn5ie{}; 
    }
}
