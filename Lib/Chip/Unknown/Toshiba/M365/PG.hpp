#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PG)
    namespace Nonedata{    ///<PG Data Register
        using Addr = Register::Address<0x400c0600,0xffffffc0,0,unsigned>;
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
    }
    namespace Nonecr{    ///<PG Control Register
        using Addr = Register::Address<0x400c0604,0xffffffc0,0,unsigned>;
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
    }
    namespace Nonefr1{    ///<PG Function Register 2
        using Addr = Register::Address<0x400c0608,0xffffffd0,0,unsigned>;
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
        ///PG5F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5f1{}; 
        namespace Pg5f1ValC{
        }
    }
    namespace Nonefr3{    ///<PG Function Register 3
        using Addr = Register::Address<0x400c0610,0xffffffe1,0,unsigned>;
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
    }
    namespace Nonefr4{    ///<PG Function Register 4
        using Addr = Register::Address<0x400c0614,0xffffffc0,0,unsigned>;
        ///PG0F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0f4{}; 
        namespace Pg0f4ValC{
        }
        ///PG1F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1f4{}; 
        namespace Pg1f4ValC{
        }
        ///PG2F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2f4{}; 
        namespace Pg2f4ValC{
        }
        ///PG3F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3f4{}; 
        namespace Pg3f4ValC{
        }
        ///PG4F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4f4{}; 
        namespace Pg4f4ValC{
        }
        ///PG5F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5f4{}; 
        namespace Pg5f4ValC{
        }
    }
    namespace Noneod{    ///<PG Open Drain Control Register
        using Addr = Register::Address<0x400c0628,0xffffffc0,0,unsigned>;
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
    }
    namespace Nonepup{    ///<PG Pull-Up Control Register
        using Addr = Register::Address<0x400c062c,0xffffffc0,0,unsigned>;
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
    }
    namespace Noneie{    ///<PG Input Enable Control Register
        using Addr = Register::Address<0x400c0638,0xffffffc0,0,unsigned>;
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
    }
}
