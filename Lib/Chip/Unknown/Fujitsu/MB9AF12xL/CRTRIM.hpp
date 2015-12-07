#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CR Trimming Registers
    namespace NonemcrPsr{    ///<High-speed CR oscillation Frequency Division Setup Register
        using Addr = Register::Address<0x4002e000,0xfffffffc,0,unsigned char>;
        ///High-speed CR oscillation frequency division ratio setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> csr{}; 
        namespace CsrValC{
        }
    }
    namespace NonemcrFtrm{    ///<High-speed CR oscillation Frequency Trimming Register
        using Addr = Register::Address<0x4002e004,0xfffffc00,0,unsigned>;
        ///Frequency trimming setup bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trd{}; 
        namespace TrdValC{
        }
    }
    namespace NonemcrTtrm{    ///<High-speed CR oscillation Temperature Trimming Register
        using Addr = Register::Address<0x4002e008,0xffffffe0,0,unsigned char>;
        ///Temperature trimming setup bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trt{}; 
        namespace TrtValC{
        }
    }
    namespace NonemcrRlr{    ///<High-Speed CR Oscillation Register Write-Protect Register 
        using Addr = Register::Address<0x4002e00c,0x00000000,0,unsigned>;
        ///Register write-protect bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> trmlck{}; 
        namespace TrmlckValC{
        }
    }
}
