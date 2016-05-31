#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input_Output Port (PK)
    namespace PkData{    ///<PK Data Register
        using Addr = Register::Address<0x400c0a00,0xffffffe0,0x00000000,unsigned>;
        ///PK0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0{}; 
        ///PK1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1{}; 
        ///PK2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2{}; 
        ///PK3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3{}; 
        ///PK4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4{}; 
    }
    namespace PkCr{    ///<PK Control Register
        using Addr = Register::Address<0x400c0a04,0xffffffe0,0x00000000,unsigned>;
        ///PK0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0c{}; 
        ///PK1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1c{}; 
        ///PK2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2c{}; 
        ///PK3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3c{}; 
        ///PK4C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4c{}; 
    }
    namespace PkFr1{    ///<PK Function Register 1
        using Addr = Register::Address<0x400c0a08,0xffffffe0,0x00000000,unsigned>;
        ///PK0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0f1{}; 
        ///PK1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1f1{}; 
        ///PK2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2f1{}; 
        ///PK3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3f1{}; 
        ///PK4F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4f1{}; 
    }
    namespace PkFr2{    ///<PK Function Register 2
        using Addr = Register::Address<0x400c0a0c,0xffffffe1,0x00000000,unsigned>;
        ///PK1F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1f2{}; 
        ///PK2F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2f2{}; 
        ///PK3F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3f2{}; 
        ///PK4F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4f2{}; 
    }
    namespace PkFr3{    ///<PK Function Register 3
        using Addr = Register::Address<0x400c0a10,0xffffffe1,0x00000000,unsigned>;
        ///PK1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1f3{}; 
        ///PK2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2f3{}; 
        ///PK3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3f3{}; 
        ///PK4F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4f3{}; 
    }
    namespace PkFr4{    ///<PK Function Register 4
        using Addr = Register::Address<0x400c0a14,0xfffffffd,0x00000000,unsigned>;
        ///PK1F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1f4{}; 
    }
    namespace PkOd{    ///<PK Open Drain Control Register
        using Addr = Register::Address<0x400c0a28,0xffffffe0,0x00000000,unsigned>;
        ///PK0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0od{}; 
        ///PK1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1od{}; 
        ///PK2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2od{}; 
        ///PK3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3od{}; 
        ///PK4OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4od{}; 
    }
    namespace PkPup{    ///<PK Pull-Up Control Register
        using Addr = Register::Address<0x400c0a2c,0xffffffe0,0x00000000,unsigned>;
        ///PK0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0up{}; 
        ///PK1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1up{}; 
        ///PK2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2up{}; 
        ///PK3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3up{}; 
        ///PK4UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4up{}; 
    }
    namespace PkPdn{    ///<PK Pull-Down Control Register
        using Addr = Register::Address<0x400c0a30,0xffffffe0,0x00000000,unsigned>;
        ///PK0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0dn{}; 
        ///PK1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1dn{}; 
        ///PK2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2dn{}; 
        ///PK3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3dn{}; 
        ///PK4DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4dn{}; 
    }
    namespace PkIe{    ///<PK Input Enable Control Register
        using Addr = Register::Address<0x400c0a38,0xffffffe0,0x00000000,unsigned>;
        ///PK0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0ie{}; 
        ///PK1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1ie{}; 
        ///PK2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pk2ie{}; 
        ///PK3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pk3ie{}; 
        ///PK4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pk4ie{}; 
    }
}
