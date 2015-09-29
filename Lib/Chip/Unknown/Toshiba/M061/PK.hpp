#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PK)
    namespace Nonedata{    ///<PK Data Register
        using Addr = Register::Address<0x400c0a00,0xfffffffc,0,unsigned>;
        ///PK0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0{}; 
        ///PK1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1{}; 
    }
    namespace Nonecr{    ///<PK Control Register
        using Addr = Register::Address<0x400c0a04,0xfffffffc,0,unsigned>;
        ///PK0C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0c{}; 
        ///PK1C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1c{}; 
    }
    namespace Nonefr1{    ///<PK Function Register 1
        using Addr = Register::Address<0x400c0a08,0xfffffffc,0,unsigned>;
        ///PK0F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0f1{}; 
        ///PK1F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1f1{}; 
    }
    namespace Noneod{    ///<PK Open Drain Control Register
        using Addr = Register::Address<0x400c0a28,0xfffffffc,0,unsigned>;
        ///PK0OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0od{}; 
        ///PK1OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1od{}; 
    }
    namespace Nonepup{    ///<PK Pull-Up Control Register
        using Addr = Register::Address<0x400c0a2c,0xfffffffc,0,unsigned>;
        ///PK0UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0up{}; 
        ///PK1UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1up{}; 
    }
    namespace Nonepkn{    ///<PK Pull-Down Control Register
        using Addr = Register::Address<0x400c0a30,0xfffffffc,0,unsigned>;
        ///PK0DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0dn{}; 
        ///PK1DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1dn{}; 
    }
    namespace Noneie{    ///<PK Input Enable Control Register
        using Addr = Register::Address<0x400c0a38,0xfffffffc,0,unsigned>;
        ///PK0IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pk0ie{}; 
        ///PK1IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pk1ie{}; 
    }
}
