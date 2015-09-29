#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//cyclic redundancy check calculation
      unit
    namespace Nonedr{    ///<Data register
        using Addr = Register::Address<0x40023000,0x00000000,0,unsigned>;
        ///Data register bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace Noneidr{    ///<Independent data register
        using Addr = Register::Address<0x40023004,0xffffff00,0,unsigned>;
        ///General-purpose 8-bit data register
              bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> idr{}; 
    }
    namespace Nonecr{    ///<Control register
        using Addr = Register::Address<0x40023008,0xfffffffe,0,unsigned>;
        ///reset bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reset{}; 
    }
}
