#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CR Trimming Registers
    namespace CrtrimMcrPsr{    ///<High-speed CR oscillation Frequency Division Setup Register
        using Addr = Register::Address<0x4002e000,0xfffffffc,0x00000000,unsigned char>;
        ///High-speed CR oscillation frequency division ratio setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> csr{}; 
    }
    namespace CrtrimMcrFtrm{    ///<High-speed CR oscillation Frequency Trimming Register
        using Addr = Register::Address<0x4002e004,0xffffff00,0x00000000,unsigned>;
        ///Frequency trimming setup bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trd{}; 
    }
    namespace CrtrimMcrRlr{    ///<High-Speed CR Oscillation Register Write-Protect Register 
        using Addr = Register::Address<0x4002e00c,0x00000000,0x00000000,unsigned>;
        ///Register write-protect bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> trmlck{}; 
    }
}
