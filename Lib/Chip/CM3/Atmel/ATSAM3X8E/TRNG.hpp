#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//True Random Number Generator
    namespace TrngCr{    ///<Control Register
        using Addr = Register::Address<0x400bc000,0x000000fe,0,unsigned>;
        ///Enables the TRNG to provide random values
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Security Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace TrngIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400bc010,0xfffffffe,0,unsigned>;
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
    }
    namespace TrngIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400bc014,0xfffffffe,0,unsigned>;
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
    }
    namespace TrngImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400bc018,0xfffffffe,0,unsigned>;
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
    }
    namespace TrngIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x400bc01c,0xfffffffe,0,unsigned>;
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
    }
    namespace TrngOdata{    ///<Output Data Register
        using Addr = Register::Address<0x400bc050,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
}
