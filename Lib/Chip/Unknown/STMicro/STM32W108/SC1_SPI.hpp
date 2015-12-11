#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial controller 1 (Serial peripheral
      interface)
    namespace Nonesc1Spisr{    ///<Serial controller SPI status
          register
        using Addr = Register::Address<0x4000c840,0xfffffff0,0,unsigned>;
        ///IDLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> idle{}; 
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txe{}; 
        ///RXNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///OVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace Nonesc1Spicr{    ///<Serial controller SPI control
          register
        using Addr = Register::Address<0x4000c858,0xffffffc0,0,unsigned>;
        ///RXMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxmode{}; 
        ///MSTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstr{}; 
        ///RPTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rpten{}; 
        ///LSBFIRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///CPHA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cpha{}; 
        ///CPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
    }
}
