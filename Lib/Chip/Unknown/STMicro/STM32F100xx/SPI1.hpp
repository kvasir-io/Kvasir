#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial peripheral interface
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40013000,0xffff0000,0,unsigned>;
        ///Bidirectional data mode
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bidimode{}; 
        namespace BidimodeValC{
        }
        ///Output enable in bidirectional
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bidioe{}; 
        namespace BidioeValC{
        }
        ///Hardware CRC calculation
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> crcen{}; 
        namespace CrcenValC{
        }
        ///CRC transfer next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcnext{}; 
        namespace CrcnextValC{
        }
        ///Data frame format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dff{}; 
        namespace DffValC{
        }
        ///Receive only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxonly{}; 
        namespace RxonlyValC{
        }
        ///Software slave management
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ssm{}; 
        namespace SsmValC{
        }
        ///Internal slave select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssi{}; 
        namespace SsiValC{
        }
        ///Frame format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        namespace LsbfirstValC{
        }
        ///SPI enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> spe{}; 
        namespace SpeValC{
        }
        ///Baud rate control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> br{}; 
        namespace BrValC{
        }
        ///Master selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mstr{}; 
        namespace MstrValC{
        }
        ///Clock polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cpol{}; 
        namespace CpolValC{
        }
        ///Clock phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpha{}; 
        namespace CphaValC{
        }
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40013004,0xffffff18,0,unsigned>;
        ///Tx buffer empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txeie{}; 
        namespace TxeieValC{
        }
        ///RX buffer not empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxneie{}; 
        namespace RxneieValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///SS output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssoe{}; 
        namespace SsoeValC{
        }
        ///Tx buffer DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        namespace TxdmaenValC{
        }
        ///Rx buffer DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        namespace RxdmaenValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40013008,0xffffff0c,0,unsigned>;
        ///Busy flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
        ///Overrun flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
        ///Mode fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> modf{}; 
        namespace ModfValC{
        }
        ///CRC error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcerr{}; 
        namespace CrcerrValC{
        }
        ///Transmit buffer empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///Receive buffer not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxne{}; 
        namespace RxneValC{
        }
    }
    namespace Nonedr{    ///<data register
        using Addr = Register::Address<0x4001300c,0xffff0000,0,unsigned>;
        ///Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr{}; 
        namespace DrValC{
        }
    }
    namespace Nonecrcpr{    ///<CRC polynomial register
        using Addr = Register::Address<0x40013010,0xffff0000,0,unsigned>;
        ///CRC polynomial register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crcpoly{}; 
        namespace CrcpolyValC{
        }
    }
    namespace Nonerxcrcr{    ///<RX CRC register
        using Addr = Register::Address<0x40013014,0xffff0000,0,unsigned>;
        ///Rx CRC register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxcrc{}; 
        namespace RxcrcValC{
        }
    }
    namespace Nonetxcrcr{    ///<TX CRC register
        using Addr = Register::Address<0x40013018,0xffff0000,0,unsigned>;
        ///Tx CRC register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txcrc{}; 
        namespace TxcrcValC{
        }
    }
}
