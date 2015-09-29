#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced encrytion standard hardware
      accelerator
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x50060000,0xffffe000,0,unsigned>;
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
        ///Data type selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> datatype{}; 
        ///AES enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x50060004,0xfffffff8,0,unsigned>;
        ///Write error flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wrerr{}; 
        ///Read error flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rderr{}; 
        ///Computation complete flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccf{}; 
    }
    namespace Nonedinr{    ///<Data input register
        using Addr = Register::Address<0x50060008,0x00000000,0,unsigned>;
        ///Data input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dinr{}; 
    }
    namespace Nonedoutr{    ///<Data output register
        using Addr = Register::Address<0x5006000c,0x00000000,0,unsigned>;
        ///Data output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> doutr{}; 
    }
    namespace Nonekeyr0{    ///<AES Key register 0
        using Addr = Register::Address<0x50060010,0x00000000,0,unsigned>;
        ///AES key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr0{}; 
    }
    namespace Nonekeyr1{    ///<AES Key register 1
        using Addr = Register::Address<0x50060014,0x00000000,0,unsigned>;
        ///AES key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr1{}; 
    }
    namespace Nonekeyr2{    ///<AES Key register 2
        using Addr = Register::Address<0x50060018,0x00000000,0,unsigned>;
        ///AES key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr2{}; 
    }
    namespace Nonekeyr3{    ///<AES Key register 3
        using Addr = Register::Address<0x5006001c,0x00000000,0,unsigned>;
        ///AES key
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr3{}; 
    }
    namespace Noneivr0{    ///<Initialization Vector Register
          0
        using Addr = Register::Address<0x50060020,0x00000000,0,unsigned>;
        ///Initialization Vector
              Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr0{}; 
    }
    namespace Noneivr1{    ///<Initialization Vector Register
          1
        using Addr = Register::Address<0x50060024,0x00000000,0,unsigned>;
        ///Initialization Vector
              Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr1{}; 
    }
    namespace Noneivr2{    ///<Initialization Vector Register
          2
        using Addr = Register::Address<0x50060028,0x00000000,0,unsigned>;
        ///Initialization Vector
              Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr2{}; 
    }
    namespace Noneivr3{    ///<Initialization Vector Register
          3
        using Addr = Register::Address<0x5006002c,0x00000000,0,unsigned>;
        ///Initialization Vector
              Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr3{}; 
    }
}
