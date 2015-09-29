#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PA)
    namespace Nonedata{    ///<PA Data Register
        using Addr = Register::Address<0x400c0000,0xffffff00,0,unsigned>;
        ///PA0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0{}; 
        ///PA1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1{}; 
        ///PA2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2{}; 
        ///PA3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3{}; 
        ///PA4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4{}; 
        ///PA5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5{}; 
        ///PA6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6{}; 
        ///PA7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7{}; 
    }
    namespace Nonecr{    ///<PA Control Register
        using Addr = Register::Address<0x400c0004,0xffffff00,0,unsigned>;
        ///PA0C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0c{}; 
        ///PA1C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1c{}; 
        ///PA2C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2c{}; 
        ///PA3C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3c{}; 
        ///PA4C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4c{}; 
        ///PA5C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5c{}; 
        ///PA6C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6c{}; 
        ///PA7C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7c{}; 
    }
    namespace Nonefr1{    ///<PA Function Register 1
        using Addr = Register::Address<0x400c0008,0xffffff00,0,unsigned>;
        ///PA0F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0f1{}; 
        ///PA1F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1f1{}; 
        ///PA2F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2f1{}; 
        ///PA3F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3f1{}; 
        ///PA4F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4f1{}; 
        ///PA5F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5f1{}; 
        ///PA6F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6f1{}; 
        ///PA7F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7f1{}; 
    }
    namespace Noneod{    ///<PA Open Drain Control Register
        using Addr = Register::Address<0x400c0028,0xffffff00,0,unsigned>;
        ///PA0OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0od{}; 
        ///PA1OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1od{}; 
        ///PA2OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2od{}; 
        ///PA3OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3od{}; 
        ///PA4OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4od{}; 
        ///PA5OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5od{}; 
        ///PA6OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6od{}; 
        ///PA7OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7od{}; 
    }
    namespace Nonepup{    ///<PA Pull-Up Control Register
        using Addr = Register::Address<0x400c002c,0xffffff00,0,unsigned>;
        ///PA0UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0up{}; 
        ///PA1UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1up{}; 
        ///PA2UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2up{}; 
        ///PA3UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3up{}; 
        ///PA4UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4up{}; 
        ///PA5UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5up{}; 
        ///PA6UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6up{}; 
        ///PA7UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7up{}; 
    }
    namespace Nonepdn{    ///<PA Pull-Down Control Register
        using Addr = Register::Address<0x400c0030,0xffffff00,0,unsigned>;
        ///PA0DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0dn{}; 
        ///PA1DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1dn{}; 
        ///PA2DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2dn{}; 
        ///PA3DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3dn{}; 
        ///PA4DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4dn{}; 
        ///PA5DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5dn{}; 
        ///PA6DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6dn{}; 
        ///PA7DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7dn{}; 
    }
    namespace Noneie{    ///<PA Input Enable Control Register
        using Addr = Register::Address<0x400c0038,0xffffff00,0,unsigned>;
        ///PA0IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0ie{}; 
        ///PA1IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1ie{}; 
        ///PA2IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2ie{}; 
        ///PA3IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3ie{}; 
        ///PA4IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4ie{}; 
        ///PA5IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5ie{}; 
        ///PA6IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6ie{}; 
        ///PA7IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7ie{}; 
    }
}
