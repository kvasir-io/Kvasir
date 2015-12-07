#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PK)
    namespace Nonedata{    ///<PK Data Register
        using Addr = Register::Address<0x400c0a00,0xfffffff0,0,unsigned>;
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
    }
    namespace Nonecr{    ///<PK Control Register
        using Addr = Register::Address<0x400c0a04,0xfffffff0,0,unsigned>;
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
    }
    namespace Nonefr2{    ///<PK Function Register 2
        using Addr = Register::Address<0x400c0a0c,0xfffffffc,0,unsigned>;
        ///PK0F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0f2{}; 
        namespace Pk0f2ValC{
        }
        ///PK1F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1f2{}; 
        namespace Pk1f2ValC{
        }
    }
    namespace Nonefr3{    ///<PK Function Register 3
        using Addr = Register::Address<0x400c0a10,0xfffffff0,0,unsigned>;
        ///PK0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0f3{}; 
        namespace Pk0f3ValC{
        }
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
    }
    namespace Nonepup{    ///<PK Pull-Up Control Register
        using Addr = Register::Address<0x400c0a2c,0xfffffff0,0,unsigned>;
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
    }
    namespace Noneie{    ///<PK Input Enable Control Register
        using Addr = Register::Address<0x400c0a38,0xfffffff0,0,unsigned>;
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
    }
}
