#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Dual Flash Memory
    namespace Nonedfaszr{    ///<Dual Flash Access Size Register
        using Addr = Register::Address<0x40000400,0xfffffffc,0,unsigned>;
        ///Dual Flash Access Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> dasz{}; 
        namespace DaszValC{
        }
    }
    namespace Nonedfrwtr{    ///<Dual Flash Read Wait Register
        using Addr = Register::Address<0x40000404,0xfffffffc,0,unsigned>;
        ///Dual Flash Read Wait Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> drwt{}; 
        namespace DrwtValC{
        }
    }
    namespace Nonedfstr{    ///<Dual Flash ECC Error
        using Addr = Register::Address<0x40000408,0xfffffff8,0,unsigned>;
        ///Dual Flash ECC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dferr{}; 
        namespace DferrValC{
        }
        ///Dual Flash Hang
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dfhng{}; 
        namespace DfhngValC{
        }
        ///Dual Flash Rdy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dfrdy{}; 
        namespace DfrdyValC{
        }
    }
}
