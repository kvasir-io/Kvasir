#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//True Random Number Generator
    namespace TrngCr{    ///<Control Register
        using Addr = Register::Address<0xf8048000,0x000000fe,0,unsigned>;
        ///Enables the TRNG to provide random values
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
        ///Security Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace TrngIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf8048010,0xfffffffe,0,unsigned>;
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        namespace DatrdyValC{
        }
    }
    namespace TrngIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf8048014,0xfffffffe,0,unsigned>;
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        namespace DatrdyValC{
        }
    }
    namespace TrngImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf8048018,0xfffffffe,0,unsigned>;
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        namespace DatrdyValC{
        }
    }
    namespace TrngIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf804801c,0xfffffffe,0,unsigned>;
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        namespace DatrdyValC{
        }
    }
    namespace TrngOdata{    ///<Output Data Register
        using Addr = Register::Address<0xf8048050,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
        namespace OdataValC{
        }
    }
}
