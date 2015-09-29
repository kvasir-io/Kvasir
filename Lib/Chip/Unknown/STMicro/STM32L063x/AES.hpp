#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced encryption standard hardware
      accelerator
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40026000,0xffffe000,0,unsigned>;
        ///Enable DMA management of data output
              phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmaouten{}; 
        ///Enable DMA management of data input
              phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmainen{}; 
        ///Error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> errie{}; 
        ///CCF flag interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ccfie{}; 
        ///Error clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errc{}; 
        ///Computation Complete Flag
              Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ccfc{}; 
        ///AES chaining mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> chmod{}; 
        ///AES operating mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> mode{}; 
        ///Data type selection (for data in and
              data out to/from the cryptographic
              block)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> datatype{}; 
        ///AES enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40026004,0xfffffff8,0,unsigned>;
        ///Write error flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wrerr{}; 
        ///Read error flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rderr{}; 
        ///Computation complete flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccf{}; 
    }
    namespace Nonedinr{    ///<data input register
        using Addr = Register::Address<0x40026008,0x00000000,0,unsigned>;
        ///Data Input Register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesDinr{}; 
    }
    namespace Nonedoutr{    ///<data output register
        using Addr = Register::Address<0x4002600c,0x00000000,0,unsigned>;
        ///Data output register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesDoutr{}; 
    }
    namespace Nonekeyr0{    ///<key register 0
        using Addr = Register::Address<0x40026010,0x00000000,0,unsigned>;
        ///Data Output Register (LSB key
              [31:0])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesKeyr0{}; 
    }
    namespace Nonekeyr1{    ///<key register 1
        using Addr = Register::Address<0x40026014,0x00000000,0,unsigned>;
        ///AES key register (key
              [63:32])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesKeyr1{}; 
    }
    namespace Nonekeyr2{    ///<key register 2
        using Addr = Register::Address<0x40026018,0x00000000,0,unsigned>;
        ///AES key register (key
              [95:64])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesKeyr2{}; 
    }
    namespace Nonekeyr3{    ///<key register 3
        using Addr = Register::Address<0x4002601c,0x00000000,0,unsigned>;
        ///AES key register (MSB key
              [127:96])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesKeyr3{}; 
    }
    namespace Noneivr0{    ///<initialization vector register
          0
        using Addr = Register::Address<0x40026020,0x00000000,0,unsigned>;
        ///initialization vector register (LSB IVR
              [31:0])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesIvr0{}; 
    }
    namespace Noneivr1{    ///<initialization vector register
          1
        using Addr = Register::Address<0x40026024,0x00000000,0,unsigned>;
        ///Initialization Vector Register (IVR
              [63:32])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesIvr1{}; 
    }
    namespace Noneivr2{    ///<initialization vector register
          2
        using Addr = Register::Address<0x40026028,0x00000000,0,unsigned>;
        ///Initialization Vector Register (IVR
              [95:64])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesIvr2{}; 
    }
    namespace Noneivr3{    ///<initialization vector register
          3
        using Addr = Register::Address<0x4002602c,0x00000000,0,unsigned>;
        ///Initialization Vector Register (MSB IVR
              [127:96])
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> aesIvr3{}; 
    }
}
