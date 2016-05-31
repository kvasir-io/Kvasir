#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial controller 2 (Serial peripheral      interface)
    namespace Sc2SpiSc2Spisr{    ///<Serial controller SPI status          register
        using Addr = Register::Address<0x4000c040,0xfffffff0,0x00000000,unsigned>;
        ///IDLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> idle{}; 
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txe{}; 
        ///RXNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///OVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace Sc2SpiSc2Spicr{    ///<Serial controller SPI control          register
        using Addr = Register::Address<0x4000c058,0xffffffc0,0x00000000,unsigned>;
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
