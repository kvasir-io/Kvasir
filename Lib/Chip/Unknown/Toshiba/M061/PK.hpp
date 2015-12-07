#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PK)
    namespace Nonedata{    ///<PK Data Register
        using Addr = Register::Address<0x400c0a00,0xfffffffc,0,unsigned>;
        ///PK0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0{}; 
        namespace Pk0ValC{
        }
        ///PK1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1{}; 
        namespace Pk1ValC{
        }
    }
    namespace Nonecr{    ///<PK Control Register
        using Addr = Register::Address<0x400c0a04,0xfffffffc,0,unsigned>;
        ///PK0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0c{}; 
        namespace Pk0cValC{
        }
        ///PK1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1c{}; 
        namespace Pk1cValC{
        }
    }
    namespace Nonefr1{    ///<PK Function Register 1
        using Addr = Register::Address<0x400c0a08,0xfffffffc,0,unsigned>;
        ///PK0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0f1{}; 
        namespace Pk0f1ValC{
        }
        ///PK1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1f1{}; 
        namespace Pk1f1ValC{
        }
    }
    namespace Noneod{    ///<PK Open Drain Control Register
        using Addr = Register::Address<0x400c0a28,0xfffffffc,0,unsigned>;
        ///PK0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0od{}; 
        namespace Pk0odValC{
        }
        ///PK1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1od{}; 
        namespace Pk1odValC{
        }
    }
    namespace Nonepup{    ///<PK Pull-Up Control Register
        using Addr = Register::Address<0x400c0a2c,0xfffffffc,0,unsigned>;
        ///PK0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0up{}; 
        namespace Pk0upValC{
        }
        ///PK1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1up{}; 
        namespace Pk1upValC{
        }
    }
    namespace Nonepkn{    ///<PK Pull-Down Control Register
        using Addr = Register::Address<0x400c0a30,0xfffffffc,0,unsigned>;
        ///PK0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0dn{}; 
        namespace Pk0dnValC{
        }
        ///PK1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1dn{}; 
        namespace Pk1dnValC{
        }
    }
    namespace Noneie{    ///<PK Input Enable Control Register
        using Addr = Register::Address<0x400c0a38,0xfffffffc,0,unsigned>;
        ///PK0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0ie{}; 
        namespace Pk0ieValC{
        }
        ///PK1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1ie{}; 
        namespace Pk1ieValC{
        }
    }
}
