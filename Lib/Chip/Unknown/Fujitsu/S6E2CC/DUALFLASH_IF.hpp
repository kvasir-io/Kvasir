#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Dual Flash Memory
    namespace Nonedfaszr{    ///<Dual Flash Access Size Register
        using Addr = Register::Address<0x40000400,0xfffffffc,0,unsigned>;
        ///Dual Flash Access Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> dasz{}; 
    }
    namespace Nonedfrwtr{    ///<Dual Flash Read Wait Register
        using Addr = Register::Address<0x40000404,0xfffffffc,0,unsigned>;
        ///Dual Flash Read Wait Cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> drwt{}; 
    }
    namespace Nonedfstr{    ///<Dual Flash ECC Error
        using Addr = Register::Address<0x40000408,0xfffffff8,0,unsigned>;
        ///Dual Flash ECC Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dferr{}; 
        ///Dual Flash Hang
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dfhng{}; 
        ///Dual Flash Rdy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfrdy{}; 
    }
}
