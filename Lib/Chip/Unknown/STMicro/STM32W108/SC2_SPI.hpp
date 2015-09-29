#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial controller 2 (Serial peripheral
      interface)
    namespace Nonesc2Spisr{    ///<Serial controller SPI status
          register
        using Addr = Register::Address<0x4000c040,0xfffffff0,0,unsigned>;
        ///IDLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> idle{}; 
        ///TXE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txe{}; 
        ///RXNE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///OVF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace Nonesc2Spicr{    ///<Serial controller SPI control
          register
        using Addr = Register::Address<0x4000c058,0xffffffc0,0,unsigned>;
        ///RXMODE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxmode{}; 
        ///MSTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstr{}; 
        ///RPTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rpten{}; 
        ///LSBFIRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///CPHA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cpha{}; 
        ///CPOL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
    }
}
