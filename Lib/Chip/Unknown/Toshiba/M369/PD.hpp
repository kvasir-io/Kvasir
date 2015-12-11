#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PD)
    namespace Nonedata{    ///<PD Data Register
        using Addr = Register::Address<0x400c0300,0xffffff00,0,unsigned>;
        ///PD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        ///PD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///PD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        ///PD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        ///PD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        ///PD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        ///PD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        ///PD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
    }
    namespace Nonecr{    ///<PD Control Register
        using Addr = Register::Address<0x400c0304,0xffffff00,0,unsigned>;
        ///PD0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0c{}; 
        ///PD1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1c{}; 
        ///PD2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2c{}; 
        ///PD3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3c{}; 
        ///PD4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4c{}; 
        ///PD5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5c{}; 
        ///PD6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6c{}; 
        ///PD7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7c{}; 
    }
    namespace Nonefr1{    ///<PD Function Register 1
        using Addr = Register::Address<0x400c0308,0xffffff00,0,unsigned>;
        ///PD0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0f1{}; 
        ///PD1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1f1{}; 
        ///PD2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2f1{}; 
        ///PD3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3f1{}; 
        ///PD4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4f1{}; 
        ///PD5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5f1{}; 
        ///PD6F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6f1{}; 
        ///PD7F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7f1{}; 
    }
    namespace Noneod{    ///<PD Open Drain Control Register
        using Addr = Register::Address<0x400c0328,0xffffff00,0,unsigned>;
        ///PD0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0od{}; 
        ///PD1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1od{}; 
        ///PD2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2od{}; 
        ///PD3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3od{}; 
        ///PD4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4od{}; 
        ///PD5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5od{}; 
        ///PD6OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6od{}; 
        ///PD7OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7od{}; 
    }
    namespace Nonepup{    ///<PD Pull-Up Control Register
        using Addr = Register::Address<0x400c032c,0xffffff00,0,unsigned>;
        ///PD0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0up{}; 
        ///PD1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1up{}; 
        ///PD2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2up{}; 
        ///PD3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3up{}; 
        ///PD4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4up{}; 
        ///PD5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5up{}; 
        ///PD6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6up{}; 
        ///PD7UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7up{}; 
    }
    namespace Nonepdn{    ///<PD Pull-Down Control Register
        using Addr = Register::Address<0x400c0330,0xffffff00,0,unsigned>;
        ///PD0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0dn{}; 
        ///PD1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1dn{}; 
        ///PD2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2dn{}; 
        ///PD3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3dn{}; 
        ///PD4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4dn{}; 
        ///PD5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5dn{}; 
        ///PD6DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6dn{}; 
        ///PD7DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7dn{}; 
    }
    namespace Noneie{    ///<PD Input Enable Control Register
        using Addr = Register::Address<0x400c0338,0xffffff00,0,unsigned>;
        ///PD0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0ie{}; 
        ///PD1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1ie{}; 
        ///PD2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2ie{}; 
        ///PD3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3ie{}; 
        ///PD4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4ie{}; 
        ///PD5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5ie{}; 
        ///PD6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6ie{}; 
        ///PD7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7ie{}; 
    }
}
