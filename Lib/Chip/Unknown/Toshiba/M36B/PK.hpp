#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PK)
    namespace Nonedata{    ///<PK Data Register
        using Addr = Register::Address<0x400c0a00,0xffffffe0,0,unsigned>;
        ///PK0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0{}; 
        namespace Pk0ValC{
        }
        ///PK1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1{}; 
        namespace Pk1ValC{
        }
        ///PK2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2{}; 
        namespace Pk2ValC{
        }
        ///PK3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3{}; 
        namespace Pk3ValC{
        }
        ///PK4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4{}; 
        namespace Pk4ValC{
        }
    }
    namespace Nonecr{    ///<PK Control Register
        using Addr = Register::Address<0x400c0a04,0xffffffe0,0,unsigned>;
        ///PK0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0c{}; 
        namespace Pk0cValC{
        }
        ///PK1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1c{}; 
        namespace Pk1cValC{
        }
        ///PK2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2c{}; 
        namespace Pk2cValC{
        }
        ///PK3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3c{}; 
        namespace Pk3cValC{
        }
        ///PK4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4c{}; 
        namespace Pk4cValC{
        }
    }
    namespace Nonefr1{    ///<PK Function Register 1
        using Addr = Register::Address<0x400c0a08,0xffffffee,0,unsigned>;
        ///PK0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0f1{}; 
        namespace Pk0f1ValC{
        }
        ///PK4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4f1{}; 
        namespace Pk4f1ValC{
        }
    }
    namespace Nonefr2{    ///<PK Function Register 2
        using Addr = Register::Address<0x400c0a0c,0xffffffe1,0,unsigned>;
        ///PK1F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1f2{}; 
        namespace Pk1f2ValC{
        }
        ///PK2F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2f2{}; 
        namespace Pk2f2ValC{
        }
        ///PK3F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3f2{}; 
        namespace Pk3f2ValC{
        }
        ///PK4F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4f2{}; 
        namespace Pk4f2ValC{
        }
    }
    namespace Nonefr3{    ///<PK Function Register 3
        using Addr = Register::Address<0x400c0a10,0xffffffe1,0,unsigned>;
        ///PK1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1f3{}; 
        namespace Pk1f3ValC{
        }
        ///PK2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2f3{}; 
        namespace Pk2f3ValC{
        }
        ///PK3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3f3{}; 
        namespace Pk3f3ValC{
        }
        ///PK4F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4f3{}; 
        namespace Pk4f3ValC{
        }
    }
    namespace Nonefr4{    ///<PK Function Register 4
        using Addr = Register::Address<0x400c0a14,0xfffffffd,0,unsigned>;
        ///PK1F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1f4{}; 
        namespace Pk1f4ValC{
        }
    }
    namespace Noneod{    ///<PK Open Drain Control Register
        using Addr = Register::Address<0x400c0a28,0xffffffe0,0,unsigned>;
        ///PK0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0od{}; 
        namespace Pk0odValC{
        }
        ///PK1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1od{}; 
        namespace Pk1odValC{
        }
        ///PK2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2od{}; 
        namespace Pk2odValC{
        }
        ///PK3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3od{}; 
        namespace Pk3odValC{
        }
        ///PK4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4od{}; 
        namespace Pk4odValC{
        }
    }
    namespace Nonepup{    ///<PK Pull-Up Control Register
        using Addr = Register::Address<0x400c0a2c,0xffffffe0,0,unsigned>;
        ///PK0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0up{}; 
        namespace Pk0upValC{
        }
        ///PK1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1up{}; 
        namespace Pk1upValC{
        }
        ///PK2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2up{}; 
        namespace Pk2upValC{
        }
        ///PK3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3up{}; 
        namespace Pk3upValC{
        }
        ///PK4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4up{}; 
        namespace Pk4upValC{
        }
    }
    namespace Nonepdn{    ///<PK Pull-Down Control Register
        using Addr = Register::Address<0x400c0a30,0xffffffe0,0,unsigned>;
        ///PK0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0dn{}; 
        namespace Pk0dnValC{
        }
        ///PK1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1dn{}; 
        namespace Pk1dnValC{
        }
        ///PK2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2dn{}; 
        namespace Pk2dnValC{
        }
        ///PK3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3dn{}; 
        namespace Pk3dnValC{
        }
        ///PK4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4dn{}; 
        namespace Pk4dnValC{
        }
    }
    namespace Noneie{    ///<PK Input Enable Control Register
        using Addr = Register::Address<0x400c0a38,0xffffffe0,0,unsigned>;
        ///PK0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0ie{}; 
        namespace Pk0ieValC{
        }
        ///PK1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1ie{}; 
        namespace Pk1ieValC{
        }
        ///PK2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2ie{}; 
        namespace Pk2ieValC{
        }
        ///PK3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3ie{}; 
        namespace Pk3ieValC{
        }
        ///PK4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4ie{}; 
        namespace Pk4ieValC{
        }
    }
}
