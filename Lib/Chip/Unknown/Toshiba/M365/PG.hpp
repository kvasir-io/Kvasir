#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PG)
    namespace Nonedata{    ///<PG Data Register
        using Addr = Register::Address<0x400c0600,0xffffffc0,0,unsigned>;
        ///PG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0{}; 
        ///PG1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1{}; 
        ///PG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2{}; 
        ///PG3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3{}; 
        ///PG4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4{}; 
        ///PG5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5{}; 
    }
    namespace Nonecr{    ///<PG Control Register
        using Addr = Register::Address<0x400c0604,0xffffffc0,0,unsigned>;
        ///PG0C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0c{}; 
        ///PG1C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1c{}; 
        ///PG2C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2c{}; 
        ///PG3C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3c{}; 
        ///PG4C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4c{}; 
        ///PG5C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5c{}; 
    }
    namespace Nonefr1{    ///<PG Function Register 2
        using Addr = Register::Address<0x400c0608,0xffffffd0,0,unsigned>;
        ///PG0F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0f1{}; 
        ///PG1F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1f1{}; 
        ///PG2F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2f1{}; 
        ///PG3F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3f1{}; 
        ///PG5F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5f1{}; 
    }
    namespace Nonefr3{    ///<PG Function Register 3
        using Addr = Register::Address<0x400c0610,0xffffffe1,0,unsigned>;
        ///PG1F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1f3{}; 
        ///PG2F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2f3{}; 
        ///PG3F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3f3{}; 
        ///PG4F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4f3{}; 
    }
    namespace Nonefr4{    ///<PG Function Register 4
        using Addr = Register::Address<0x400c0614,0xffffffc0,0,unsigned>;
        ///PG0F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0f4{}; 
        ///PG1F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1f4{}; 
        ///PG2F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2f4{}; 
        ///PG3F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3f4{}; 
        ///PG4F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4f4{}; 
        ///PG5F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5f4{}; 
    }
    namespace Noneod{    ///<PG Open Drain Control Register
        using Addr = Register::Address<0x400c0628,0xffffffc0,0,unsigned>;
        ///PG0OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0od{}; 
        ///PG1OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1od{}; 
        ///PG2OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2od{}; 
        ///PG3OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3od{}; 
        ///PG4OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4od{}; 
        ///PG5OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5od{}; 
    }
    namespace Nonepup{    ///<PG Pull-Up Control Register
        using Addr = Register::Address<0x400c062c,0xffffffc0,0,unsigned>;
        ///PG0UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0up{}; 
        ///PG1UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1up{}; 
        ///PG2UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2up{}; 
        ///PG3UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3up{}; 
        ///PG4UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4up{}; 
        ///PG5UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5up{}; 
    }
    namespace Noneie{    ///<PG Input Enable Control Register
        using Addr = Register::Address<0x400c0638,0xffffffc0,0,unsigned>;
        ///PG0IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0ie{}; 
        ///PG1IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pg1ie{}; 
        ///PG2IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pg2ie{}; 
        ///PG3IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pg3ie{}; 
        ///PG4IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pg4ie{}; 
        ///PG5IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pg5ie{}; 
    }
}
