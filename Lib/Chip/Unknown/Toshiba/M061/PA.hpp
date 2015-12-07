#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PA)
    namespace Nonedata{    ///<PA Data Register
        using Addr = Register::Address<0x400c0000,0xffffff00,0,unsigned>;
        ///PA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0{}; 
        namespace Pa0ValC{
        }
        ///PA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1{}; 
        namespace Pa1ValC{
        }
        ///PA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2{}; 
        namespace Pa2ValC{
        }
        ///PA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3{}; 
        namespace Pa3ValC{
        }
        ///PA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4{}; 
        namespace Pa4ValC{
        }
        ///PA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5{}; 
        namespace Pa5ValC{
        }
        ///PA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6{}; 
        namespace Pa6ValC{
        }
        ///PA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7{}; 
        namespace Pa7ValC{
        }
    }
    namespace Nonecr{    ///<PA Control Register
        using Addr = Register::Address<0x400c0004,0xffffff00,0,unsigned>;
        ///PA0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0c{}; 
        namespace Pa0cValC{
        }
        ///PA1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1c{}; 
        namespace Pa1cValC{
        }
        ///PA2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2c{}; 
        namespace Pa2cValC{
        }
        ///PA3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3c{}; 
        namespace Pa3cValC{
        }
        ///PA4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4c{}; 
        namespace Pa4cValC{
        }
        ///PA5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5c{}; 
        namespace Pa5cValC{
        }
        ///PA6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6c{}; 
        namespace Pa6cValC{
        }
        ///PA7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7c{}; 
        namespace Pa7cValC{
        }
    }
    namespace Nonefr1{    ///<PA Function Register 1
        using Addr = Register::Address<0x400c0008,0xffffff00,0,unsigned>;
        ///PA0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0f1{}; 
        namespace Pa0f1ValC{
        }
        ///PA1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1f1{}; 
        namespace Pa1f1ValC{
        }
        ///PA2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2f1{}; 
        namespace Pa2f1ValC{
        }
        ///PA3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3f1{}; 
        namespace Pa3f1ValC{
        }
        ///PA4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4f1{}; 
        namespace Pa4f1ValC{
        }
        ///PA5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5f1{}; 
        namespace Pa5f1ValC{
        }
        ///PA6F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6f1{}; 
        namespace Pa6f1ValC{
        }
        ///PA7F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7f1{}; 
        namespace Pa7f1ValC{
        }
    }
    namespace Noneod{    ///<PA Open Drain Control Register
        using Addr = Register::Address<0x400c0028,0xffffff00,0,unsigned>;
        ///PA0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0od{}; 
        namespace Pa0odValC{
        }
        ///PA1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1od{}; 
        namespace Pa1odValC{
        }
        ///PA2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2od{}; 
        namespace Pa2odValC{
        }
        ///PA3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3od{}; 
        namespace Pa3odValC{
        }
        ///PA4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4od{}; 
        namespace Pa4odValC{
        }
        ///PA5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5od{}; 
        namespace Pa5odValC{
        }
        ///PA6OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6od{}; 
        namespace Pa6odValC{
        }
        ///PA7OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7od{}; 
        namespace Pa7odValC{
        }
    }
    namespace Nonepup{    ///<PA Pull-Up Control Register
        using Addr = Register::Address<0x400c002c,0xffffff00,0,unsigned>;
        ///PA0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0up{}; 
        namespace Pa0upValC{
        }
        ///PA1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1up{}; 
        namespace Pa1upValC{
        }
        ///PA2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2up{}; 
        namespace Pa2upValC{
        }
        ///PA3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3up{}; 
        namespace Pa3upValC{
        }
        ///PA4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4up{}; 
        namespace Pa4upValC{
        }
        ///PA5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5up{}; 
        namespace Pa5upValC{
        }
        ///PA6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6up{}; 
        namespace Pa6upValC{
        }
        ///PA7UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7up{}; 
        namespace Pa7upValC{
        }
    }
    namespace Nonepdn{    ///<PA Pull-Down Control Register
        using Addr = Register::Address<0x400c0030,0xffffff00,0,unsigned>;
        ///PA0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0dn{}; 
        namespace Pa0dnValC{
        }
        ///PA1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1dn{}; 
        namespace Pa1dnValC{
        }
        ///PA2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2dn{}; 
        namespace Pa2dnValC{
        }
        ///PA3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3dn{}; 
        namespace Pa3dnValC{
        }
        ///PA4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4dn{}; 
        namespace Pa4dnValC{
        }
        ///PA5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5dn{}; 
        namespace Pa5dnValC{
        }
        ///PA6DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6dn{}; 
        namespace Pa6dnValC{
        }
        ///PA7DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7dn{}; 
        namespace Pa7dnValC{
        }
    }
    namespace Noneie{    ///<PA Input Enable Control Register
        using Addr = Register::Address<0x400c0038,0xffffff00,0,unsigned>;
        ///PA0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pa0ie{}; 
        namespace Pa0ieValC{
        }
        ///PA1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pa1ie{}; 
        namespace Pa1ieValC{
        }
        ///PA2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa2ie{}; 
        namespace Pa2ieValC{
        }
        ///PA3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pa3ie{}; 
        namespace Pa3ieValC{
        }
        ///PA4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pa4ie{}; 
        namespace Pa4ieValC{
        }
        ///PA5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pa5ie{}; 
        namespace Pa5ieValC{
        }
        ///PA6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pa6ie{}; 
        namespace Pa6ieValC{
        }
        ///PA7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pa7ie{}; 
        namespace Pa7ieValC{
        }
    }
}
