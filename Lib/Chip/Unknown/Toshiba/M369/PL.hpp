#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PL)
    namespace Nonedata{    ///<PL Data Register
        using Addr = Register::Address<0x400c0b00,0xffffff00,0,unsigned>;
        ///PL0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0{}; 
        ///PL1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1{}; 
        ///PL2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2{}; 
        ///PL3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3{}; 
        ///PL4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pl4{}; 
        ///PL5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pl5{}; 
        ///PL6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pl6{}; 
        ///PL7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pl7{}; 
    }
    namespace Nonecr{    ///<PL Control Register
        using Addr = Register::Address<0x400c0b04,0xffffff00,0,unsigned>;
        ///PL0C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0c{}; 
        ///PL1C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1c{}; 
        ///PL2C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2c{}; 
        ///PL3C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3c{}; 
        ///PL4C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pl4c{}; 
        ///PL5C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pl5c{}; 
        ///PL6C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pl6c{}; 
        ///PL7C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pl7c{}; 
    }
    namespace Nonefr1{    ///<PL Function Register 1
        using Addr = Register::Address<0x400c0b08,0xffffff00,0,unsigned>;
        ///PL0F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f1{}; 
        ///PL1F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f1{}; 
        ///PL2F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f1{}; 
        ///PL3F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f1{}; 
        ///PL4F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pl4f1{}; 
        ///PL5F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pl5f1{}; 
        ///PL6F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pl6f1{}; 
        ///PL7F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pl7f1{}; 
    }
    namespace Nonefr2{    ///<PL Function Register 2
        using Addr = Register::Address<0x400c0b0c,0xffffff00,0,unsigned>;
        ///PL0F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f2{}; 
        ///PL1F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f2{}; 
        ///PL2F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f2{}; 
        ///PL3F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f2{}; 
        ///PL4F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pl4f2{}; 
        ///PL5F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pl5f2{}; 
        ///PL6F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pl6f2{}; 
        ///PL7F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pl7f2{}; 
    }
    namespace Nonefr3{    ///<PL Function Register 3
        using Addr = Register::Address<0x400c0b10,0xfffffff0,0,unsigned>;
        ///PL0F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f3{}; 
        ///PL1F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f3{}; 
        ///PL2F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f3{}; 
        ///PL3F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f3{}; 
    }
    namespace Nonefr4{    ///<PL Function Register 4
        using Addr = Register::Address<0x400c0b14,0xfffffff0,0,unsigned>;
        ///PL0F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f4{}; 
        ///PL1F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f4{}; 
        ///PL2F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f4{}; 
        ///PL3F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f4{}; 
    }
    namespace Nonefr5{    ///<PL Function Register 5
        using Addr = Register::Address<0x400c0b18,0xfffffff1,0,unsigned>;
        ///PL1F5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f5{}; 
        ///PL2F5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f5{}; 
        ///PL3F5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f5{}; 
    }
    namespace Nonefr6{    ///<PL Function Register 6
        using Addr = Register::Address<0x400c0b1c,0xfffffff7,0,unsigned>;
        ///PL3F6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f6{}; 
    }
    namespace Noneod{    ///<PL Open Drain Control Register
        using Addr = Register::Address<0x400c0b28,0xffffff00,0,unsigned>;
        ///PL0OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0od{}; 
        ///PL1OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1od{}; 
        ///PL2OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2od{}; 
        ///PL3OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3od{}; 
        ///PL4OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pl4od{}; 
        ///PL5OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pl5od{}; 
        ///PL6OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pl6od{}; 
        ///PL7OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pl7od{}; 
    }
    namespace Nonepup{    ///<PL Pull-Up Control Register
        using Addr = Register::Address<0x400c0b2c,0xffffff00,0,unsigned>;
        ///PL0UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0up{}; 
        ///PL1UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1up{}; 
        ///PL2UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2up{}; 
        ///PL3UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3up{}; 
        ///PL4UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pl4up{}; 
        ///PL5UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pl5up{}; 
        ///PL6UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pl6up{}; 
        ///PL7UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pl7up{}; 
    }
    namespace Nonepdn{    ///<PL Pull-Down Control Register
        using Addr = Register::Address<0x400c0b30,0xffffff00,0,unsigned>;
        ///PL0DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0dn{}; 
        ///PL1DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1dn{}; 
        ///PL2DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2dn{}; 
        ///PL3DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3dn{}; 
        ///PL4DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pl4dn{}; 
        ///PL5DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pl5dn{}; 
        ///PL6DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pl6dn{}; 
        ///PL7DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pl7dn{}; 
    }
    namespace Noneie{    ///<PL Input Enable Control Register
        using Addr = Register::Address<0x400c0b38,0xffffff00,0,unsigned>;
        ///PL0IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0ie{}; 
        ///PL1IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1ie{}; 
        ///PL2IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2ie{}; 
        ///PL3IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3ie{}; 
        ///PL4IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pl4ie{}; 
        ///PL5IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pl5ie{}; 
        ///PL6IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pl6ie{}; 
        ///PL7IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pl7ie{}; 
    }
}
