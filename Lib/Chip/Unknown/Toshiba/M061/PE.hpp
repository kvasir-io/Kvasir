#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PE)
    namespace Nonedata{    ///<PE Data Register
        using Addr = Register::Address<0x400c0400,0xffffff00,0,unsigned>;
        ///PE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
        namespace Pe0ValC{
        }
        ///PE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1{}; 
        namespace Pe1ValC{
        }
        ///PE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        namespace Pe2ValC{
        }
        ///PE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        namespace Pe3ValC{
        }
        ///PE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4{}; 
        namespace Pe4ValC{
        }
        ///PE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5{}; 
        namespace Pe5ValC{
        }
        ///PE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6{}; 
        namespace Pe6ValC{
        }
        ///PE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7{}; 
        namespace Pe7ValC{
        }
    }
    namespace Nonecr{    ///<PE Control Register
        using Addr = Register::Address<0x400c0404,0xffffff00,0,unsigned>;
        ///PE0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0c{}; 
        namespace Pe0cValC{
        }
        ///PE1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1c{}; 
        namespace Pe1cValC{
        }
        ///PE2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2c{}; 
        namespace Pe2cValC{
        }
        ///PE3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3c{}; 
        namespace Pe3cValC{
        }
        ///PE4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4c{}; 
        namespace Pe4cValC{
        }
        ///PE5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5c{}; 
        namespace Pe5cValC{
        }
        ///PE6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6c{}; 
        namespace Pe6cValC{
        }
        ///PE7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7c{}; 
        namespace Pe7cValC{
        }
    }
    namespace Nonefr1{    ///<PE Function Register 1
        using Addr = Register::Address<0x400c0408,0xffffff00,0,unsigned>;
        ///PE0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0f1{}; 
        namespace Pe0f1ValC{
        }
        ///PE1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1f1{}; 
        namespace Pe1f1ValC{
        }
        ///PE2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2f1{}; 
        namespace Pe2f1ValC{
        }
        ///PE3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3f1{}; 
        namespace Pe3f1ValC{
        }
        ///PE4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4f1{}; 
        namespace Pe4f1ValC{
        }
        ///PE5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5f1{}; 
        namespace Pe5f1ValC{
        }
        ///PE6F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6f1{}; 
        namespace Pe6f1ValC{
        }
        ///PE7F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7f1{}; 
        namespace Pe7f1ValC{
        }
    }
    namespace Nonefr2{    ///<PE Function Register 2
        using Addr = Register::Address<0x400c040c,0xffffff00,0,unsigned>;
        ///PE0F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0f2{}; 
        namespace Pe0f2ValC{
        }
        ///PE1F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1f2{}; 
        namespace Pe1f2ValC{
        }
        ///PE2F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2f2{}; 
        namespace Pe2f2ValC{
        }
        ///PE3F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3f2{}; 
        namespace Pe3f2ValC{
        }
        ///PE4F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4f2{}; 
        namespace Pe4f2ValC{
        }
        ///PE5F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5f2{}; 
        namespace Pe5f2ValC{
        }
        ///PE6F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6f2{}; 
        namespace Pe6f2ValC{
        }
        ///PE7F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7f2{}; 
        namespace Pe7f2ValC{
        }
    }
    namespace Nonefr3{    ///<PE Function Register 3
        using Addr = Register::Address<0x400c0410,0xfffffff7,0,unsigned>;
        ///PE3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3f3{}; 
        namespace Pe3f3ValC{
        }
    }
    namespace Noneod{    ///<PE Open Drain Control Register
        using Addr = Register::Address<0x400c0428,0xffffff00,0,unsigned>;
        ///PE0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0od{}; 
        namespace Pe0odValC{
        }
        ///PE1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1od{}; 
        namespace Pe1odValC{
        }
        ///PE2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2od{}; 
        namespace Pe2odValC{
        }
        ///PE3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3od{}; 
        namespace Pe3odValC{
        }
        ///PE4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4od{}; 
        namespace Pe4odValC{
        }
        ///PE5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5od{}; 
        namespace Pe5odValC{
        }
        ///PE6OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6od{}; 
        namespace Pe6odValC{
        }
        ///PE7OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7od{}; 
        namespace Pe7odValC{
        }
    }
    namespace Nonepup{    ///<PE Pull-Up Control Register
        using Addr = Register::Address<0x400c042c,0xffffff00,0,unsigned>;
        ///PE0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0up{}; 
        namespace Pe0upValC{
        }
        ///PE1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1up{}; 
        namespace Pe1upValC{
        }
        ///PE2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2up{}; 
        namespace Pe2upValC{
        }
        ///PE3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3up{}; 
        namespace Pe3upValC{
        }
        ///PE4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4up{}; 
        namespace Pe4upValC{
        }
        ///PE5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5up{}; 
        namespace Pe5upValC{
        }
        ///PE6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6up{}; 
        namespace Pe6upValC{
        }
        ///PE7UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7up{}; 
        namespace Pe7upValC{
        }
    }
    namespace Nonepdn{    ///<PE Pull-Down Control Register
        using Addr = Register::Address<0x400c0430,0xffffff00,0,unsigned>;
        ///PE0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0dn{}; 
        namespace Pe0dnValC{
        }
        ///PE1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1dn{}; 
        namespace Pe1dnValC{
        }
        ///PE2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2dn{}; 
        namespace Pe2dnValC{
        }
        ///PE3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3dn{}; 
        namespace Pe3dnValC{
        }
        ///PE4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4dn{}; 
        namespace Pe4dnValC{
        }
        ///PE5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5dn{}; 
        namespace Pe5dnValC{
        }
        ///PE6DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6dn{}; 
        namespace Pe6dnValC{
        }
        ///PE7DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7dn{}; 
        namespace Pe7dnValC{
        }
    }
    namespace Noneie{    ///<PE Input Enable Control Register
        using Addr = Register::Address<0x400c0438,0xffffff00,0,unsigned>;
        ///PE0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0ie{}; 
        namespace Pe0ieValC{
        }
        ///PE1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1ie{}; 
        namespace Pe1ieValC{
        }
        ///PE2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2ie{}; 
        namespace Pe2ieValC{
        }
        ///PE3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3ie{}; 
        namespace Pe3ieValC{
        }
        ///PE4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4ie{}; 
        namespace Pe4ieValC{
        }
        ///PE5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5ie{}; 
        namespace Pe5ieValC{
        }
        ///PE6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6ie{}; 
        namespace Pe6ieValC{
        }
        ///PE7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7ie{}; 
        namespace Pe7ieValC{
        }
    }
}
