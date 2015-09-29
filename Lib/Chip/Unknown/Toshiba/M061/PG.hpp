#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PG)
    namespace Nonedata{    ///<PG Data Register
        using Addr = Register::Address<0x400c0600,0xfffffffe,0,unsigned>;
        ///PG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0{}; 
    }
    namespace Nonecr{    ///<PG Control Register
        using Addr = Register::Address<0x400c0604,0xfffffffe,0,unsigned>;
        ///PG0C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0c{}; 
    }
    namespace Nonefr1{    ///<PG Function Register 1
        using Addr = Register::Address<0x400c0608,0xfffffffe,0,unsigned>;
        ///PG0F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0f1{}; 
    }
    namespace Nonefr2{    ///<PG Function Register 2
        using Addr = Register::Address<0x400c060c,0xfffffffe,0,unsigned>;
        ///PG0F2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0f2{}; 
    }
    namespace Noneod{    ///<PG Open Drain Control Register
        using Addr = Register::Address<0x400c0628,0xfffffffe,0,unsigned>;
        ///PG0OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0od{}; 
    }
    namespace Nonepup{    ///<PG Pull-Up Control Register
        using Addr = Register::Address<0x400c062c,0xfffffffe,0,unsigned>;
        ///PG0UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0up{}; 
    }
    namespace Nonepgn{    ///<PG Pull-Down Control Register
        using Addr = Register::Address<0x400c0630,0xfffffffe,0,unsigned>;
        ///PG0DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0dn{}; 
    }
    namespace Noneie{    ///<PG Input Enable Control Register
        using Addr = Register::Address<0x400c0638,0xfffffffe,0,unsigned>;
        ///PG0IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg0ie{}; 
    }
}
