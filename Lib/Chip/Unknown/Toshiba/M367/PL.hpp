#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PL)
    namespace Nonedata{    ///<PL Data Register
        using Addr = Register::Address<0x400c0b00,0xfffffff0,0,unsigned>;
        ///PL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0{}; 
        namespace Pl0ValC{
        }
        ///PL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1{}; 
        namespace Pl1ValC{
        }
        ///PL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2{}; 
        namespace Pl2ValC{
        }
        ///PL3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3{}; 
        namespace Pl3ValC{
        }
    }
    namespace Nonecr{    ///<PL Control Register
        using Addr = Register::Address<0x400c0b04,0xfffffff0,0,unsigned>;
        ///PL0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0c{}; 
        namespace Pl0cValC{
        }
        ///PL1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1c{}; 
        namespace Pl1cValC{
        }
        ///PL2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2c{}; 
        namespace Pl2cValC{
        }
        ///PL3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3c{}; 
        namespace Pl3cValC{
        }
    }
    namespace Nonefr1{    ///<PL Function Register 1
        using Addr = Register::Address<0x400c0b08,0xfffffff0,0,unsigned>;
        ///PL0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f1{}; 
        namespace Pl0f1ValC{
        }
        ///PL1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f1{}; 
        namespace Pl1f1ValC{
        }
        ///PL2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f1{}; 
        namespace Pl2f1ValC{
        }
        ///PL3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f1{}; 
        namespace Pl3f1ValC{
        }
    }
    namespace Nonefr2{    ///<PL Function Register 2
        using Addr = Register::Address<0x400c0b0c,0xfffffff0,0,unsigned>;
        ///PL0F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f2{}; 
        namespace Pl0f2ValC{
        }
        ///PL1F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f2{}; 
        namespace Pl1f2ValC{
        }
        ///PL2F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f2{}; 
        namespace Pl2f2ValC{
        }
        ///PL3F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f2{}; 
        namespace Pl3f2ValC{
        }
    }
    namespace Nonefr3{    ///<PL Function Register 3
        using Addr = Register::Address<0x400c0b10,0xfffffff0,0,unsigned>;
        ///PL0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f3{}; 
        namespace Pl0f3ValC{
        }
        ///PL1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f3{}; 
        namespace Pl1f3ValC{
        }
        ///PL2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f3{}; 
        namespace Pl2f3ValC{
        }
        ///PL3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f3{}; 
        namespace Pl3f3ValC{
        }
    }
    namespace Nonefr4{    ///<PL Function Register 4
        using Addr = Register::Address<0x400c0b14,0xfffffff0,0,unsigned>;
        ///PL0F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0f4{}; 
        namespace Pl0f4ValC{
        }
        ///PL1F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f4{}; 
        namespace Pl1f4ValC{
        }
        ///PL2F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f4{}; 
        namespace Pl2f4ValC{
        }
        ///PL3F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f4{}; 
        namespace Pl3f4ValC{
        }
    }
    namespace Nonefr5{    ///<PL Function Register 5
        using Addr = Register::Address<0x400c0b18,0xfffffff1,0,unsigned>;
        ///PL1F5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1f5{}; 
        namespace Pl1f5ValC{
        }
        ///PL2F5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2f5{}; 
        namespace Pl2f5ValC{
        }
        ///PL3F5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f5{}; 
        namespace Pl3f5ValC{
        }
    }
    namespace Nonefr6{    ///<PL Function Register 6
        using Addr = Register::Address<0x400c0b1c,0xfffffff7,0,unsigned>;
        ///PL3F6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3f6{}; 
        namespace Pl3f6ValC{
        }
    }
    namespace Noneod{    ///<PL Open Drain Control Register
        using Addr = Register::Address<0x400c0b28,0xfffffff0,0,unsigned>;
        ///PL0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0od{}; 
        namespace Pl0odValC{
        }
        ///PL1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1od{}; 
        namespace Pl1odValC{
        }
        ///PL2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2od{}; 
        namespace Pl2odValC{
        }
        ///PL3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3od{}; 
        namespace Pl3odValC{
        }
    }
    namespace Nonepup{    ///<PL Pull-Up Control Register
        using Addr = Register::Address<0x400c0b2c,0xfffffff0,0,unsigned>;
        ///PL0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0up{}; 
        namespace Pl0upValC{
        }
        ///PL1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1up{}; 
        namespace Pl1upValC{
        }
        ///PL2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2up{}; 
        namespace Pl2upValC{
        }
        ///PL3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3up{}; 
        namespace Pl3upValC{
        }
    }
    namespace Nonepdn{    ///<PL Pull-Down Control Register
        using Addr = Register::Address<0x400c0b30,0xfffffff0,0,unsigned>;
        ///PL0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0dn{}; 
        namespace Pl0dnValC{
        }
        ///PL1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1dn{}; 
        namespace Pl1dnValC{
        }
        ///PL2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2dn{}; 
        namespace Pl2dnValC{
        }
        ///PL3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3dn{}; 
        namespace Pl3dnValC{
        }
    }
    namespace Noneie{    ///<PL Input Enable Control Register
        using Addr = Register::Address<0x400c0b38,0xfffffff0,0,unsigned>;
        ///PL0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pl0ie{}; 
        namespace Pl0ieValC{
        }
        ///PL1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pl1ie{}; 
        namespace Pl1ieValC{
        }
        ///PL2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pl2ie{}; 
        namespace Pl2ieValC{
        }
        ///PL3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pl3ie{}; 
        namespace Pl3ieValC{
        }
    }
}
