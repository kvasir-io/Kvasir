#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Random number generator
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40025000,0xfffffff3,0,unsigned>;
        ///Interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ie{}; 
        ///Random number generator
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rngen{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40025004,0xffffff98,0,unsigned>;
        ///Seed error interrupt
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> seis{}; 
        ///Clock error interrupt
              status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ceis{}; 
        ///Seed error current status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> secs{}; 
        ///Clock error current status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cecs{}; 
        ///Data ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> drdy{}; 
    }
    namespace Nonedr{    ///<data register
        using Addr = Register::Address<0x40025008,0x00000000,0,unsigned>;
        ///Random data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rndata{}; 
    }
}
