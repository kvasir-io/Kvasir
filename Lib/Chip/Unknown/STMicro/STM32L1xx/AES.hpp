#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced encrytion standard hardware
      accelerator
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x50060000,0xffffe000,0,unsigned>;
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
        ///Data type selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> datatype{}; 
        namespace DatatypeValC{
        }
        ///AES enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x50060004,0xfffffff8,0,unsigned>;
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
    namespace Nonedinr{    ///<Data input register
        using Addr = Register::Address<0x50060008,0x00000000,0,unsigned>;
        ///Data input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dinr{}; 
        namespace DinrValC{
        }
    }
    namespace Nonedoutr{    ///<Data output register
        using Addr = Register::Address<0x5006000c,0x00000000,0,unsigned>;
        ///Data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> doutr{}; 
        namespace DoutrValC{
        }
    }
    namespace Nonekeyr0{    ///<AES Key register 0
        using Addr = Register::Address<0x50060010,0x00000000,0,unsigned>;
        ///AES key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr0{}; 
        namespace Keyr0ValC{
        }
    }
    namespace Nonekeyr1{    ///<AES Key register 1
        using Addr = Register::Address<0x50060014,0x00000000,0,unsigned>;
        ///AES key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr1{}; 
        namespace Keyr1ValC{
        }
    }
    namespace Nonekeyr2{    ///<AES Key register 2
        using Addr = Register::Address<0x50060018,0x00000000,0,unsigned>;
        ///AES key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr2{}; 
        namespace Keyr2ValC{
        }
    }
    namespace Nonekeyr3{    ///<AES Key register 3
        using Addr = Register::Address<0x5006001c,0x00000000,0,unsigned>;
        ///AES key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr3{}; 
        namespace Keyr3ValC{
        }
    }
    namespace Noneivr0{    ///<Initialization Vector Register
          0
        using Addr = Register::Address<0x50060020,0x00000000,0,unsigned>;
        ///Initialization Vector
              Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr0{}; 
        namespace Ivr0ValC{
        }
    }
    namespace Noneivr1{    ///<Initialization Vector Register
          1
        using Addr = Register::Address<0x50060024,0x00000000,0,unsigned>;
        ///Initialization Vector
              Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr1{}; 
        namespace Ivr1ValC{
        }
    }
    namespace Noneivr2{    ///<Initialization Vector Register
          2
        using Addr = Register::Address<0x50060028,0x00000000,0,unsigned>;
        ///Initialization Vector
              Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr2{}; 
        namespace Ivr2ValC{
        }
    }
    namespace Noneivr3{    ///<Initialization Vector Register
          3
        using Addr = Register::Address<0x5006002c,0x00000000,0,unsigned>;
        ///Initialization Vector
              Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ivr3{}; 
        namespace Ivr3ValC{
        }
    }
}
