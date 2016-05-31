#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input_Output Port (PL)
    namespace PlData{    ///<PL Data Register
        using Addr = Register::Address<0x400c0b00,0xfffffff0,0x00000000,unsigned>;
        ///PL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0{}; 
        ///PL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1{}; 
        ///PL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2{}; 
        ///PL3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3{}; 
    }
    namespace PlCr{    ///<PL Control Register
        using Addr = Register::Address<0x400c0b04,0xfffffff0,0x00000000,unsigned>;
        ///PL0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0c{}; 
        ///PL1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1c{}; 
        ///PL2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2c{}; 
        ///PL3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3c{}; 
    }
    namespace PlFr2{    ///<PL Function Register 2
        using Addr = Register::Address<0x400c0b0c,0xfffffffe,0x00000000,unsigned>;
        ///PL0F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f2{}; 
    }
    namespace PlFr3{    ///<PL Function Register 3
        using Addr = Register::Address<0x400c0b10,0xfffffff0,0x00000000,unsigned>;
        ///PL0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f3{}; 
        ///PL1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f3{}; 
        ///PL2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f3{}; 
        ///PL3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f3{}; 
    }
    namespace PlFr4{    ///<PL Function Register 4
        using Addr = Register::Address<0x400c0b14,0xfffffff2,0x00000000,unsigned>;
        ///PL0F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f4{}; 
        ///PL2F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f4{}; 
        ///PL3F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f4{}; 
    }
    namespace PlFr5{    ///<PL Function Register 5
        using Addr = Register::Address<0x400c0b18,0xfffffff1,0x00000000,unsigned>;
        ///PL1F5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f5{}; 
        ///PL2F5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f5{}; 
        ///PL3F5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f5{}; 
    }
    namespace PlFr6{    ///<PL Function Register 6
        using Addr = Register::Address<0x400c0b1c,0xfffffff7,0x00000000,unsigned>;
        ///PL3F6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f6{}; 
    }
    namespace PlOd{    ///<PL Open Drain Control Register
        using Addr = Register::Address<0x400c0b28,0xfffffff0,0x00000000,unsigned>;
        ///PL0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0od{}; 
        ///PL1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1od{}; 
        ///PL2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2od{}; 
        ///PL3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3od{}; 
    }
    namespace PlPup{    ///<PL Pull-Up Control Register
        using Addr = Register::Address<0x400c0b2c,0xfffffff0,0x00000000,unsigned>;
        ///PL0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0up{}; 
        ///PL1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1up{}; 
        ///PL2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2up{}; 
        ///PL3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3up{}; 
    }
    namespace PlPdn{    ///<PL Pull-Down Control Register
        using Addr = Register::Address<0x400c0b30,0xfffffff0,0x00000000,unsigned>;
        ///PL0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0dn{}; 
        ///PL1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1dn{}; 
        ///PL2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2dn{}; 
        ///PL3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3dn{}; 
    }
    namespace PlIe{    ///<PL Input Enable Control Register
        using Addr = Register::Address<0x400c0b38,0xfffffff0,0x00000000,unsigned>;
        ///PL0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0ie{}; 
        ///PL1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1ie{}; 
        ///PL2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2ie{}; 
        ///PL3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3ie{}; 
    }
}
