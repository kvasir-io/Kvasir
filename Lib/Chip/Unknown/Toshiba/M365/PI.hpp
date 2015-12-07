#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PI)
    namespace Nonedata{    ///<PI Data Register
        using Addr = Register::Address<0x400c0800,0xffffff00,0,unsigned>;
        ///PI0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0{}; 
        namespace Pi0ValC{
        }
        ///PI1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1{}; 
        namespace Pi1ValC{
        }
        ///PI2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2{}; 
        namespace Pi2ValC{
        }
        ///PI3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3{}; 
        namespace Pi3ValC{
        }
        ///PI4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4{}; 
        namespace Pi4ValC{
        }
        ///PI5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5{}; 
        namespace Pi5ValC{
        }
        ///PI6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6{}; 
        namespace Pi6ValC{
        }
        ///PI7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pi7{}; 
        namespace Pi7ValC{
        }
    }
    namespace Nonecr{    ///<PI Control Register
        using Addr = Register::Address<0x400c0804,0xffffff00,0,unsigned>;
        ///PI0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0c{}; 
        namespace Pi0cValC{
        }
        ///PI1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1c{}; 
        namespace Pi1cValC{
        }
        ///PI2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2c{}; 
        namespace Pi2cValC{
        }
        ///PI3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3c{}; 
        namespace Pi3cValC{
        }
        ///PI4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4c{}; 
        namespace Pi4cValC{
        }
        ///PI5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5c{}; 
        namespace Pi5cValC{
        }
        ///PI6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6c{}; 
        namespace Pi6cValC{
        }
        ///PI7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pi7c{}; 
        namespace Pi7cValC{
        }
    }
    namespace Noneod{    ///<PI Open Drain Control Register
        using Addr = Register::Address<0x400c0828,0xfffffff8,0,unsigned>;
        ///PI0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0od{}; 
        namespace Pi0odValC{
        }
        ///PI1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1od{}; 
        namespace Pi1odValC{
        }
        ///PI2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2od{}; 
        namespace Pi2odValC{
        }
    }
    namespace Nonepup{    ///<PI Pull-Up Control Register
        using Addr = Register::Address<0x400c082c,0xffffff00,0,unsigned>;
        ///PI0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0up{}; 
        namespace Pi0upValC{
        }
        ///PI1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1up{}; 
        namespace Pi1upValC{
        }
        ///PI2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2up{}; 
        namespace Pi2upValC{
        }
        ///PI3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3up{}; 
        namespace Pi3upValC{
        }
        ///PI4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4up{}; 
        namespace Pi4upValC{
        }
        ///PI5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5up{}; 
        namespace Pi5upValC{
        }
        ///PI6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6up{}; 
        namespace Pi6upValC{
        }
        ///PI7UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pi7up{}; 
        namespace Pi7upValC{
        }
    }
    namespace Nonepdn{    ///<PI Pull-Down Control Register
        using Addr = Register::Address<0x400c0830,0xfffffff7,0,unsigned>;
        ///PI3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3dn{}; 
        namespace Pi3dnValC{
        }
    }
    namespace Noneie{    ///<PI Input Enable Control Register
        using Addr = Register::Address<0x400c0838,0xffffff00,0,unsigned>;
        ///PI0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pi0ie{}; 
        namespace Pi0ieValC{
        }
        ///PI1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pi1ie{}; 
        namespace Pi1ieValC{
        }
        ///PI2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pi2ie{}; 
        namespace Pi2ieValC{
        }
        ///PI3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pi3ie{}; 
        namespace Pi3ieValC{
        }
        ///PI4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pi4ie{}; 
        namespace Pi4ieValC{
        }
        ///PI5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pi5ie{}; 
        namespace Pi5ieValC{
        }
        ///PI6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pi6ie{}; 
        namespace Pi6ieValC{
        }
        ///PI7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pi7ie{}; 
        namespace Pi7ieValC{
        }
    }
}
