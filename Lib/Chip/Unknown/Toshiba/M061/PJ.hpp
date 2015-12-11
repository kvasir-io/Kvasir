#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PJ)
    namespace Nonedata{    ///<PJ Data Register
        using Addr = Register::Address<0x400c0900,0xffffffc0,0,unsigned>;
        ///PJ0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0{}; 
        ///PJ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1{}; 
        ///PJ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2{}; 
        ///PJ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3{}; 
        ///PJ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4{}; 
        ///PJ5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5{}; 
    }
    namespace Nonecr{    ///<PJ Control Register
        using Addr = Register::Address<0x400c0904,0xffffffe0,0,unsigned>;
        ///PJ0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0c{}; 
        ///PJ1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1c{}; 
        ///PJ2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2c{}; 
        ///PJ3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3c{}; 
        ///PJ4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4c{}; 
    }
    namespace Nonefr1{    ///<PJ Function Register 1
        using Addr = Register::Address<0x400c0908,0xffffffc0,0,unsigned>;
        ///PJ0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0f1{}; 
        ///PJ1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1f1{}; 
        ///PJ2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2f1{}; 
        ///PJ3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3f1{}; 
        ///PJ4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4f1{}; 
        ///PJ5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5f1{}; 
    }
    namespace Nonefr2{    ///<PJ Function Register 2
        using Addr = Register::Address<0x400c090c,0xffffffcb,0,unsigned>;
        ///PJ2F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2f2{}; 
        ///PJ4F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4f2{}; 
        ///PJ5F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5f2{}; 
    }
    namespace Noneod{    ///<PJ OPJn Drain Control Register
        using Addr = Register::Address<0x400c0928,0xffffffe0,0,unsigned>;
        ///PJ0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0od{}; 
        ///PJ1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1od{}; 
        ///PJ2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2od{}; 
        ///PJ3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3od{}; 
        ///PJ4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4od{}; 
    }
    namespace Nonepup{    ///<PJ Pull-Up Control Register
        using Addr = Register::Address<0x400c092c,0xffffffe0,0,unsigned>;
        ///PJ0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0up{}; 
        ///PJ1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1up{}; 
        ///PJ2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2up{}; 
        ///PJ3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3up{}; 
        ///PJ4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4up{}; 
    }
    namespace Nonepdn{    ///<PJ Pull-Down Control Register
        using Addr = Register::Address<0x400c0930,0xffffffe0,0,unsigned>;
        ///PJ0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0dn{}; 
        ///PJ1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1dn{}; 
        ///PJ2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2dn{}; 
        ///PJ3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3dn{}; 
        ///PJ4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4dn{}; 
    }
    namespace Noneie{    ///<PJ Input Enable Control Register
        using Addr = Register::Address<0x400c0938,0xffffffc0,0,unsigned>;
        ///PJ0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pj0ie{}; 
        ///PJ1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pj1ie{}; 
        ///PJ2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pj2ie{}; 
        ///PJ3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pj3ie{}; 
        ///PJ4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pj4ie{}; 
        ///PJ5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pj5ie{}; 
    }
}
