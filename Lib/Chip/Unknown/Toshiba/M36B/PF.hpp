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
    namespace Nonefr1{    ///<PF Function Register 1
        using Addr = Register::Address<0x400c0508,0xffffff00,0,unsigned>;
        ///PF0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0f1{}; 
        namespace Pf0f1ValC{
        }
        ///PF1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1f1{}; 
        namespace Pf1f1ValC{
        }
        ///PF2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pf2f1{}; 
        namespace Pf2f1ValC{
        }
        ///PF3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pf3f1{}; 
        namespace Pf3f1ValC{
        }
        ///PF4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4f1{}; 
        namespace Pf4f1ValC{
        }
        ///PF5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5f1{}; 
        namespace Pf5f1ValC{
        }
        ///PF6F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6f1{}; 
        namespace Pf6f1ValC{
        }
        ///PF7F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7f1{}; 
        namespace Pf7f1ValC{
        }
    }
    namespace Nonefr2{    ///<PF Function Register 2
        using Addr = Register::Address<0x400c050c,0xffffff0f,0,unsigned>;
        ///PF4F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4f2{}; 
        namespace Pf4f2ValC{
        }
        ///PF5F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5f2{}; 
        namespace Pf5f2ValC{
        }
        ///PF6F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6f2{}; 
        namespace Pf6f2ValC{
        }
        ///PF7F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7f2{}; 
        namespace Pf7f2ValC{
        }
    }
    namespace Nonefr3{    ///<PF Function Register 3
        using Addr = Register::Address<0x400c0510,0xffffff00,0,unsigned>;
        ///PF0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0f3{}; 
        namespace Pf0f3ValC{
        }
        ///PF1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1f3{}; 
        namespace Pf1f3ValC{
        }
        ///PF2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pf2f3{}; 
        namespace Pf2f3ValC{
        }
        ///PF3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pf3f3{}; 
        namespace Pf3f3ValC{
        }
        ///PF4F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4f3{}; 
        namespace Pf4f3ValC{
        }
        ///PF5F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5f3{}; 
        namespace Pf5f3ValC{
        }
        ///PF6F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6f3{}; 
        namespace Pf6f3ValC{
        }
        ///PF7F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7f3{}; 
        namespace Pf7f3ValC{
        }
    }
    namespace Nonefr4{    ///<PF Function Register 4
        using Addr = Register::Address<0x400c0514,0xffffff19,0,unsigned>;
        ///PF1F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1f4{}; 
        namespace Pf1f4ValC{
        }
        ///PF2F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pf2f4{}; 
        namespace Pf2f4ValC{
        }
        ///PF5F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5f4{}; 
        namespace Pf5f4ValC{
        }
        ///PF6F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6f4{}; 
        namespace Pf6f4ValC{
        }
        ///PF7F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7f4{}; 
        namespace Pf7f4ValC{
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
    namespace Nonepdn{    ///<PF Pull-Down Control Register
        using Addr = Register::Address<0x400c0530,0xffffff00,0,unsigned>;
        ///PF0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0dn{}; 
        namespace Pf0dnValC{
        }
        ///PF1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pf1dn{}; 
        namespace Pf1dnValC{
        }
        ///PF2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pf2dn{}; 
        namespace Pf2dnValC{
        }
        ///PF3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pf3dn{}; 
        namespace Pf3dnValC{
        }
        ///PF4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pf4dn{}; 
        namespace Pf4dnValC{
        }
        ///PF5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pf5dn{}; 
        namespace Pf5dnValC{
        }
        ///PF6DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pf6dn{}; 
        namespace Pf6dnValC{
        }
        ///PF7DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pf7dn{}; 
        namespace Pf7dnValC{
        }
    }
    namespace Noneie{    ///<PF Input Enable Control Register
        using Addr = Register::Address<0x400c0538,0xffffff00,0,unsigned>;
        ///PF0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pf0ie{}; 
        namespace Pf0ieValC{
        }
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
