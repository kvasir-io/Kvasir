#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced encryption standard hardware
      accelerator
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40026000,0xffffe000,0,unsigned>;
        ///Enable DMA management of data output
              phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmaouten{}; 
        namespace DmaoutenValC{
        }
        ///Enable DMA management of data input
              phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmainen{}; 
        namespace DmainenValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///CCF flag interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ccfie{}; 
        namespace CcfieValC{
        }
        ///Error clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errc{}; 
        namespace ErrcValC{
        }
        ///Computation Complete Flag
              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ccfc{}; 
        namespace CcfcValC{
        }
        ///AES chaining mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> chmod{}; 
        namespace ChmodValC{
        }
        ///AES operating mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
        ///Data type selection (for data in and
              data out to/from the cryptographic
              block)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> datatype{}; 
        namespace DatatypeValC{
        }
        ///AES enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40026004,0xfffffff8,0,unsigned>;
        ///Write error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wrerr{}; 
        namespace WrerrValC{
        }
        ///Read error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rderr{}; 
        namespace RderrValC{
        }
        ///Computation complete flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccf{}; 
        namespace CcfValC{
        }
    }
    namespace Nonedinr{    ///<data input register
        using Addr = Register::Address<0x40026008,0x00000000,0,unsigned>;
        ///Data Input Register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesDinr{}; 
        namespace AesdinrValC{
        }
    }
    namespace Nonedoutr{    ///<data output register
        using Addr = Register::Address<0x4002600c,0x00000000,0,unsigned>;
        ///Data output register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesDoutr{}; 
        namespace AesdoutrValC{
        }
    }
    namespace Nonekeyr0{    ///<key register 0
        using Addr = Register::Address<0x40026010,0x00000000,0,unsigned>;
        ///Data Output Register (LSB key
              [31:0])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesKeyr0{}; 
        namespace Aeskeyr0ValC{
        }
    }
    namespace Nonekeyr1{    ///<key register 1
        using Addr = Register::Address<0x40026014,0x00000000,0,unsigned>;
        ///AES key register (key
              [63:32])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesKeyr1{}; 
        namespace Aeskeyr1ValC{
        }
    }
    namespace Nonekeyr2{    ///<key register 2
        using Addr = Register::Address<0x40026018,0x00000000,0,unsigned>;
        ///AES key register (key
              [95:64])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesKeyr2{}; 
        namespace Aeskeyr2ValC{
        }
    }
    namespace Nonekeyr3{    ///<key register 3
        using Addr = Register::Address<0x4002601c,0x00000000,0,unsigned>;
        ///AES key register (MSB key
              [127:96])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesKeyr3{}; 
        namespace Aeskeyr3ValC{
        }
    }
    namespace Noneivr0{    ///<initialization vector register
          0
        using Addr = Register::Address<0x40026020,0x00000000,0,unsigned>;
        ///initialization vector register (LSB IVR
              [31:0])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesIvr0{}; 
        namespace Aesivr0ValC{
        }
    }
    namespace Noneivr1{    ///<initialization vector register
          1
        using Addr = Register::Address<0x40026024,0x00000000,0,unsigned>;
        ///Initialization Vector Register (IVR
              [63:32])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesIvr1{}; 
        namespace Aesivr1ValC{
        }
    }
    namespace Noneivr2{    ///<initialization vector register
          2
        using Addr = Register::Address<0x40026028,0x00000000,0,unsigned>;
        ///Initialization Vector Register (IVR
              [95:64])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesIvr2{}; 
        namespace Aesivr2ValC{
        }
    }
    namespace Noneivr3{    ///<initialization vector register
          3
        using Addr = Register::Address<0x4002602c,0x00000000,0,unsigned>;
        ///Initialization Vector Register (MSB IVR
              [127:96])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesIvr3{}; 
        namespace Aesivr3ValC{
        }
    }
}
