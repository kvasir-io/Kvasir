#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PG)
    namespace Nonedata{    ///<PG Data Register
        using Addr = Register::Address<0x400c0600,0xffffff00,0,unsigned>;
        ///PG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0{}; 
        namespace Pg0ValC{
        }
        ///PG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1{}; 
        namespace Pg1ValC{
        }
        ///PG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2{}; 
        namespace Pg2ValC{
        }
        ///PG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3{}; 
        namespace Pg3ValC{
        }
        ///PG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4{}; 
        namespace Pg4ValC{
        }
        ///PG5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5{}; 
        namespace Pg5ValC{
        }
        ///PG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pg6{}; 
        namespace Pg6ValC{
        }
        ///PG7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pg7{}; 
        namespace Pg7ValC{
        }
    }
    namespace Nonecr{    ///<PG Control Register
        using Addr = Register::Address<0x400c0604,0xffffff00,0,unsigned>;
        ///PG0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0c{}; 
        namespace Pg0cValC{
        }
        ///PG1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1c{}; 
        namespace Pg1cValC{
        }
        ///PG2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2c{}; 
        namespace Pg2cValC{
        }
        ///PG3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3c{}; 
        namespace Pg3cValC{
        }
        ///PG4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4c{}; 
        namespace Pg4cValC{
        }
        ///PG5C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5c{}; 
        namespace Pg5cValC{
        }
        ///PG6C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pg6c{}; 
        namespace Pg6cValC{
        }
        ///PG7C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pg7c{}; 
        namespace Pg7cValC{
        }
    }
    namespace Nonefr1{    ///<PG Function Register 1
        using Addr = Register::Address<0x400c0608,0xffffff00,0,unsigned>;
        ///PG0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0f1{}; 
        namespace Pg0f1ValC{
        }
        ///PG1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1f1{}; 
        namespace Pg1f1ValC{
        }
        ///PG2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2f1{}; 
        namespace Pg2f1ValC{
        }
        ///PG3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3f1{}; 
        namespace Pg3f1ValC{
        }
        ///PG4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4f1{}; 
        namespace Pg4f1ValC{
        }
        ///PG5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5f1{}; 
        namespace Pg5f1ValC{
        }
        ///PG6F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pg6f1{}; 
        namespace Pg6f1ValC{
        }
        ///PG7F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pg7f1{}; 
        namespace Pg7f1ValC{
        }
    }
    namespace Nonefr2{    ///<PG Function Register 2
        using Addr = Register::Address<0x400c060c,0xffffff01,0,unsigned>;
        ///PG1F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1f2{}; 
        namespace Pg1f2ValC{
        }
        ///PG2F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2f2{}; 
        namespace Pg2f2ValC{
        }
        ///PG3F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3f2{}; 
        namespace Pg3f2ValC{
        }
        ///PG4F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4f2{}; 
        namespace Pg4f2ValC{
        }
        ///PG5F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5f2{}; 
        namespace Pg5f2ValC{
        }
        ///PG6F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pg6f2{}; 
        namespace Pg6f2ValC{
        }
        ///PG7F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pg7f2{}; 
        namespace Pg7f2ValC{
        }
    }
    namespace Nonefr3{    ///<PG Function Register 3
        using Addr = Register::Address<0x400c0610,0xffffff00,0,unsigned>;
        ///PG0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0f3{}; 
        namespace Pg0f3ValC{
        }
        ///PG1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1f3{}; 
        namespace Pg1f3ValC{
        }
        ///PG2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2f3{}; 
        namespace Pg2f3ValC{
        }
        ///PG3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3f3{}; 
        namespace Pg3f3ValC{
        }
        ///PG4F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4f3{}; 
        namespace Pg4f3ValC{
        }
        ///PG5F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5f3{}; 
        namespace Pg5f3ValC{
        }
        ///PG6F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pg6f3{}; 
        namespace Pg6f3ValC{
        }
        ///PG7F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pg7f3{}; 
        namespace Pg7f3ValC{
        }
    }
    namespace Nonefr4{    ///<PG Function Register 4
        using Addr = Register::Address<0x400c0614,0xfffffff3,0,unsigned>;
        ///PG2F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2f4{}; 
        namespace Pg2f4ValC{
        }
        ///PG3F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3f4{}; 
        namespace Pg3f4ValC{
        }
    }
    namespace Noneod{    ///<PG Open Drain Control Register
        using Addr = Register::Address<0x400c0628,0xffffff00,0,unsigned>;
        ///PG0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0od{}; 
        namespace Pg0odValC{
        }
        ///PG1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1od{}; 
        namespace Pg1odValC{
        }
        ///PG2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2od{}; 
        namespace Pg2odValC{
        }
        ///PG3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3od{}; 
        namespace Pg3odValC{
        }
        ///PG4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4od{}; 
        namespace Pg4odValC{
        }
        ///PG5OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5od{}; 
        namespace Pg5odValC{
        }
        ///PG6OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pg6od{}; 
        namespace Pg6odValC{
        }
        ///PG7OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pg7od{}; 
        namespace Pg7odValC{
        }
    }
    namespace Nonepup{    ///<PG Pull-Up Control Register
        using Addr = Register::Address<0x400c062c,0xffffff00,0,unsigned>;
        ///PG0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0up{}; 
        namespace Pg0upValC{
        }
        ///PG1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1up{}; 
        namespace Pg1upValC{
        }
        ///PG2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2up{}; 
        namespace Pg2upValC{
        }
        ///PG3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3up{}; 
        namespace Pg3upValC{
        }
        ///PG4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4up{}; 
        namespace Pg4upValC{
        }
        ///PG5UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5up{}; 
        namespace Pg5upValC{
        }
        ///PG6UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pg6up{}; 
        namespace Pg6upValC{
        }
        ///PG7UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pg7up{}; 
        namespace Pg7upValC{
        }
    }
    namespace Nonepdn{    ///<PG Pull-Down Control Register
        using Addr = Register::Address<0x400c0630,0xffffff00,0,unsigned>;
        ///PG0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0dn{}; 
        namespace Pg0dnValC{
        }
        ///PG1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1dn{}; 
        namespace Pg1dnValC{
        }
        ///PG2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2dn{}; 
        namespace Pg2dnValC{
        }
        ///PG3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3dn{}; 
        namespace Pg3dnValC{
        }
        ///PG4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4dn{}; 
        namespace Pg4dnValC{
        }
        ///PG5DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5dn{}; 
        namespace Pg5dnValC{
        }
        ///PG6DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pg6dn{}; 
        namespace Pg6dnValC{
        }
        ///PG7DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pg7dn{}; 
        namespace Pg7dnValC{
        }
    }
    namespace Noneie{    ///<PG Input Enable Control Register
        using Addr = Register::Address<0x400c0638,0xffffff00,0,unsigned>;
        ///PG0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0ie{}; 
        namespace Pg0ieValC{
        }
        ///PG1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1ie{}; 
        namespace Pg1ieValC{
        }
        ///PG2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2ie{}; 
        namespace Pg2ieValC{
        }
        ///PG3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3ie{}; 
        namespace Pg3ieValC{
        }
        ///PG4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4ie{}; 
        namespace Pg4ieValC{
        }
        ///PG5IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5ie{}; 
        namespace Pg5ieValC{
        }
        ///PG6IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pg6ie{}; 
        namespace Pg6ieValC{
        }
        ///PG7IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pg7ie{}; 
        namespace Pg7ieValC{
        }
    }
}
