#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Single Wire Protocol Master
      Interface
    namespace Nonecr{    ///<SWPMI Configuration/Control
          register
        using Addr = Register::Address<0x40008800,0xfffffbc0,0,unsigned>;
        ///Reception DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdma{}; 
        namespace RxdmaValC{
        }
        ///Transmission DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdma{}; 
        namespace TxdmaValC{
        }
        ///Reception buffering mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxmode{}; 
        namespace RxmodeValC{
        }
        ///Transmission buffering
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txmode{}; 
        namespace TxmodeValC{
        }
        ///Loopback mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lpbk{}; 
        namespace LpbkValC{
        }
        ///Single wire protocol master interface
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> swpme{}; 
        namespace SwpmeValC{
        }
        ///Single wire protocol master interface
              deactivate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> deact{}; 
        namespace DeactValC{
        }
    }
    namespace Nonebrr{    ///<SWPMI Bitrate register
        using Addr = Register::Address<0x40008804,0xffffffc0,0,unsigned>;
        ///Bitrate prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> br{}; 
        namespace BrValC{
        }
    }
    namespace Noneisr{    ///<SWPMI Interrupt and Status
          register
        using Addr = Register::Address<0x4000880c,0xfffff800,0,unsigned>;
        ///Receive buffer full flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbff{}; 
        namespace RxbffValC{
        }
        ///Transmit buffer empty flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txbef{}; 
        namespace TxbefValC{
        }
        ///Receive CRC error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxberf{}; 
        namespace RxberfValC{
        }
        ///Receive overrun error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxovrf{}; 
        namespace RxovrfValC{
        }
        ///Transmit underrun error
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunrf{}; 
        namespace TxunrfValC{
        }
        ///Receive data register not
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxne{}; 
        namespace RxneValC{
        }
        ///Transmit data register
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///Transfer complete flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcf{}; 
        namespace TcfValC{
        }
        ///Slave resume flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srf{}; 
        namespace SrfValC{
        }
        ///SUSPEND flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
        ///DEACTIVATED flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> deactf{}; 
        namespace DeactfValC{
        }
    }
    namespace Noneicr{    ///<SWPMI Interrupt Flag Clear
          register
        using Addr = Register::Address<0x40008810,0xfffffe60,0,unsigned>;
        ///Clear receive buffer full
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crxbff{}; 
        namespace CrxbffValC{
        }
        ///Clear transmit buffer empty
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctxbef{}; 
        namespace CtxbefValC{
        }
        ///Clear receive CRC error
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crxberf{}; 
        namespace CrxberfValC{
        }
        ///Clear receive overrun error
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> crxovrf{}; 
        namespace CrxovrfValC{
        }
        ///Clear transmit underrun error
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctxunrf{}; 
        namespace CtxunrfValC{
        }
        ///Clear transfer complete
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctcf{}; 
        namespace CtcfValC{
        }
        ///Clear slave resume flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csrf{}; 
        namespace CsrfValC{
        }
    }
    namespace Noneier{    ///<SWPMI Interrupt Enable
          register
        using Addr = Register::Address<0x40008814,0xfffffe00,0,unsigned>;
        ///Receive buffer full interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbfie{}; 
        namespace RxbfieValC{
        }
        ///Transmit buffer empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txbeie{}; 
        namespace TxbeieValC{
        }
        ///Receive CRC error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxberie{}; 
        namespace RxberieValC{
        }
        ///Receive overrun error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxovrie{}; 
        namespace RxovrieValC{
        }
        ///Transmit underrun error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunrie{}; 
        namespace TxunrieValC{
        }
        ///Receive interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        ///Transmit interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        ///Transmit complete interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcie{}; 
        namespace TcieValC{
        }
        ///Slave resume interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srie{}; 
        namespace SrieValC{
        }
    }
    namespace Nonerfl{    ///<SWPMI Receive Frame Length
          register
        using Addr = Register::Address<0x40008818,0xffffffe0,0,unsigned>;
        ///Receive frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rfl{}; 
        namespace RflValC{
        }
    }
    namespace Nonetdr{    ///<SWPMI Transmit data register
        using Addr = Register::Address<0x4000881c,0x00000000,0,unsigned>;
        ///Transmit data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> td{}; 
        namespace TdValC{
        }
    }
    namespace Nonerdr{    ///<SWPMI Receive data register
        using Addr = Register::Address<0x40008820,0x00000000,0,unsigned>;
        ///received data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rd{}; 
        namespace RdValC{
        }
    }
}
