#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PF)
    namespace Nonedata{    ///<PF Data Register
        using Addr = Register::Address<0x400c0500,0xffffff00,0,unsigned>;
        ///PF0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0{}; 
        namespace Pf0ValC{
        }
        ///PF1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1{}; 
        namespace Pf1ValC{
        }
        ///PF2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pf2{}; 
        namespace Pf2ValC{
        }
        ///PF3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pf3{}; 
        namespace Pf3ValC{
        }
        ///PF4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4{}; 
        namespace Pf4ValC{
        }
        ///PF5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5{}; 
        namespace Pf5ValC{
        }
        ///PF6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6{}; 
        namespace Pf6ValC{
        }
        ///PF7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7{}; 
        namespace Pf7ValC{
        }
    }
    namespace Nonecr{    ///<PF Control Register
        using Addr = Register::Address<0x400c0504,0xffffff00,0,unsigned>;
        ///PF0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0c{}; 
        namespace Pf0cValC{
        }
        ///PF1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1c{}; 
        namespace Pf1cValC{
        }
        ///PF2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pf2c{}; 
        namespace Pf2cValC{
        }
        ///PF3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pf3c{}; 
        namespace Pf3cValC{
        }
        ///PF4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4c{}; 
        namespace Pf4cValC{
        }
        ///PF5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5c{}; 
        namespace Pf5cValC{
        }
        ///PF6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6c{}; 
        namespace Pf6cValC{
        }
        ///PF7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7c{}; 
        namespace Pf7cValC{
        }
    }
    namespace Nonefr2{    ///<PF Function Register 2
        using Addr = Register::Address<0x400c050c,0xffffffcf,0,unsigned>;
        ///PF4F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4f2{}; 
        namespace Pf4f2ValC{
        }
        ///PF5F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5f2{}; 
        namespace Pf5f2ValC{
        }
    }
    namespace Nonefr3{    ///<PF Function Register 3
        using Addr = Register::Address<0x400c0510,0xffffffce,0,unsigned>;
        ///PF0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0f3{}; 
        namespace Pf0f3ValC{
        }
        ///PF4F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4f3{}; 
        namespace Pf4f3ValC{
        }
        ///PF5F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5f3{}; 
        namespace Pf5f3ValC{
        }
    }
    namespace Noneod{    ///<PF Open Drain Control Register
        using Addr = Register::Address<0x400c0528,0xffffff00,0,unsigned>;
        ///PF0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0od{}; 
        namespace Pf0odValC{
        }
        ///PF1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1od{}; 
        namespace Pf1odValC{
        }
        ///PF2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pf2od{}; 
        namespace Pf2odValC{
        }
        ///PF3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pf3od{}; 
        namespace Pf3odValC{
        }
        ///PF4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4od{}; 
        namespace Pf4odValC{
        }
        ///PF5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5od{}; 
        namespace Pf5odValC{
        }
        ///PF6OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6od{}; 
        namespace Pf6odValC{
        }
        ///PF7OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7od{}; 
        namespace Pf7odValC{
        }
    }
    namespace Nonepup{    ///<PF Pull-Up Control Register
        using Addr = Register::Address<0x400c052c,0xffffff00,0,unsigned>;
        ///PF0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0up{}; 
        namespace Pf0upValC{
        }
        ///PF1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1up{}; 
        namespace Pf1upValC{
        }
        ///PF2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pf2up{}; 
        namespace Pf2upValC{
        }
        ///PF3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pf3up{}; 
        namespace Pf3upValC{
        }
        ///PF4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4up{}; 
        namespace Pf4upValC{
        }
        ///PF5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5up{}; 
        namespace Pf5upValC{
        }
        ///PF6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6up{}; 
        namespace Pf6upValC{
        }
        ///PF7UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7up{}; 
        namespace Pf7upValC{
        }
    }
    namespace Noneie{    ///<PF Input Enable Control Register
        using Addr = Register::Address<0x400c0538,0xffffff01,0,unsigned>;
        ///PF1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1ie{}; 
        namespace Pf1ieValC{
        }
        ///PF2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pf2ie{}; 
        namespace Pf2ieValC{
        }
        ///PF3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pf3ie{}; 
        namespace Pf3ieValC{
        }
        ///PF4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4ie{}; 
        namespace Pf4ieValC{
        }
        ///PF5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5ie{}; 
        namespace Pf5ieValC{
        }
        ///PF6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6ie{}; 
        namespace Pf6ieValC{
        }
        ///PF7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7ie{}; 
        namespace Pf7ieValC{
        }
    }
}
