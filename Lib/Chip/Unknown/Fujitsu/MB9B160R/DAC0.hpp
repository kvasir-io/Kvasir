#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//D/A Converter 0
    namespace Nonedacr{    ///<D/A Control Register
        using Addr = Register::Address<0x40033000,0xffffffcc,0,unsigned char>;
        ///10-bit mode data allocation selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ddas{}; 
        namespace DdasValC{
        }
        ///10-bit mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dac10{}; 
        namespace Dac10ValC{
        }
        ///D/A converter operation enable state bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> drdy{}; 
        namespace DrdyValC{
        }
        ///D/A converter operating enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dae{}; 
        namespace DaeValC{
        }
    }
    namespace Nonedadr{    ///<D/A Data Register
        using Addr = Register::Address<0x40033004,0xfffff000,0,unsigned>;
        ///D/A Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> da{}; 
        namespace DaValC{
        }
    }
}
