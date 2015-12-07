#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial controller 2 (Serial peripheral
      interface)
    namespace Nonesc2Spisr{    ///<Serial controller SPI status
          register
        using Addr = Register::Address<0x4000c040,0xfffffff0,0,unsigned>;
        ///IDLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> idle{}; 
        namespace IdleValC{
        }
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///RXNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxne{}; 
        namespace RxneValC{
        }
        ///OVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        namespace OvfValC{
        }
    }
    namespace Nonesc2Spicr{    ///<Serial controller SPI control
          register
        using Addr = Register::Address<0x4000c058,0xffffffc0,0,unsigned>;
        ///RXMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxmode{}; 
        namespace RxmodeValC{
        }
        ///MSTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mstr{}; 
        namespace MstrValC{
        }
        ///RPTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rpten{}; 
        namespace RptenValC{
        }
        ///LSBFIRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        namespace LsbfirstValC{
        }
        ///CPHA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cpha{}; 
        namespace CphaValC{
        }
        ///CPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
    }
}
