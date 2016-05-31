#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CR Trimming Registers
    namespace CrtrimMcrPsr{    ///<High-speed CR Oscillation Frequency Division Setup Register
        using Addr = Register::Address<0x4002e000,0xfffffff8,0x00000000,unsigned char>;
        ///High-speed CR oscillation frequency division ratio setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> csr{}; 
    }
    namespace CrtrimMcrFtrm{    ///<High-speed CR Oscillation Frequency Trimming Register
        using Addr = Register::Address<0x4002e004,0xfffffc00,0x00000000,unsigned>;
        ///Frequency trimming setup bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trd{}; 
    }
    namespace CrtrimMcrTtrm{    ///<High-speed CR Oscillation Temperature Trimming Setup Register
        using Addr = Register::Address<0x4002e008,0xffffffe0,0x00000000,unsigned char>;
        ///Temperature trimming setup bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trt{}; 
    }
    namespace CrtrimMcrRlr{    ///<High-Speed CR Oscillation Register Write-Protect Register
        using Addr = Register::Address<0x4002e00c,0x00000000,0x00000000,unsigned>;
        ///Register write-protect bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> trmlck{}; 
    }
}
