#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input_Output Port (PG)
    namespace PgData{    ///<PG Data Register
        using Addr = Register::Address<0x400c0600,0xfffffffe,0x00000000,unsigned>;
        ///PG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0{}; 
    }
    namespace PgCr{    ///<PG Control Register
        using Addr = Register::Address<0x400c0604,0xfffffffe,0x00000000,unsigned>;
        ///PG0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0c{}; 
    }
    namespace PgFr1{    ///<PG Function Register 1
        using Addr = Register::Address<0x400c0608,0xfffffffe,0x00000000,unsigned>;
        ///PG0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0f1{}; 
    }
    namespace PgFr2{    ///<PG Function Register 2
        using Addr = Register::Address<0x400c060c,0xfffffffe,0x00000000,unsigned>;
        ///PG0F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0f2{}; 
    }
    namespace PgOd{    ///<PG Open Drain Control Register
        using Addr = Register::Address<0x400c0628,0xfffffffe,0x00000000,unsigned>;
        ///PG0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0od{}; 
    }
    namespace PgPup{    ///<PG Pull-Up Control Register
        using Addr = Register::Address<0x400c062c,0xfffffffe,0x00000000,unsigned>;
        ///PG0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0up{}; 
    }
    namespace PgPgn{    ///<PG Pull-Down Control Register
        using Addr = Register::Address<0x400c0630,0xfffffffe,0x00000000,unsigned>;
        ///PG0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0dn{}; 
    }
    namespace PgIe{    ///<PG Input Enable Control Register
        using Addr = Register::Address<0x400c0638,0xfffffffe,0x00000000,unsigned>;
        ///PG0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0ie{}; 
    }
}
