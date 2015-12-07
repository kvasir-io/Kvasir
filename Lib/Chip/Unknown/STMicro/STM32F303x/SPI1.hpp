#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial peripheral interface/Inter-IC
      sound
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
        using Addr = Register::Address<0x40013004,0xffff8000,0,unsigned>;
        ///Rx buffer DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        namespace RxdmaenValC{
        }
        ///Tx buffer DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        namespace TxdmaenValC{
        }
        ///SS output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssoe{}; 
        namespace SsoeValC{
        }
        ///NSS pulse management
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nssp{}; 
        namespace NsspValC{
        }
        ///Frame format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> frf{}; 
        namespace FrfValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///RX buffer not empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxneie{}; 
        namespace RxneieValC{
        }
        ///Tx buffer empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txeie{}; 
        namespace TxeieValC{
        }
        ///Data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ds{}; 
        namespace DsValC{
        }
        ///FIFO reception threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> frxth{}; 
        namespace FrxthValC{
        }
        ///Last DMA transfer for
              reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ldmaRx{}; 
        namespace LdmarxValC{
        }
        ///Last DMA transfer for
              transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ldmaTx{}; 
        namespace LdmatxValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40013008,0xffffe000,0,unsigned>;
        ///Receive buffer not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxne{}; 
        namespace RxneValC{
        }
        ///Transmit buffer empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///Channel side
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chside{}; 
        namespace ChsideValC{
        }
        ///Underrun flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> udr{}; 
        namespace UdrValC{
        }
        ///CRC error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcerr{}; 
        namespace CrcerrValC{
        }
        ///Mode fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> modf{}; 
        namespace ModfValC{
        }
        ///Overrun flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
        ///Busy flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
        ///TI frame format error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tifrfe{}; 
        namespace TifrfeValC{
        }
        ///FIFO reception level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> frlvl{}; 
        namespace FrlvlValC{
        }
        ///FIFO transmission level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> ftlvl{}; 
        namespace FtlvlValC{
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
    namespace Nonei2scfgr{    ///<I2S configuration register
        using Addr = Register::Address<0x4001301c,0xfffff040,0,unsigned>;
        ///I2S mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> i2smod{}; 
        namespace I2smodValC{
        }
        ///I2S Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> i2se{}; 
        namespace I2seValC{
        }
        ///I2S configuration mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> i2scfg{}; 
        namespace I2scfgValC{
        }
        ///PCM frame synchronization
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pcmsync{}; 
        namespace PcmsyncValC{
        }
        ///I2S standard selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> i2sstd{}; 
        namespace I2sstdValC{
        }
        ///Steady state clock
              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ckpol{}; 
        namespace CkpolValC{
        }
        ///Data length to be
              transferred
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> datlen{}; 
        namespace DatlenValC{
        }
        ///Channel length (number of bits per audio
              channel)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chlen{}; 
        namespace ChlenValC{
        }
    }
    namespace Nonei2spr{    ///<I2S prescaler register
        using Addr = Register::Address<0x40013020,0xfffffc00,0,unsigned>;
        ///Master clock output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mckoe{}; 
        namespace MckoeValC{
        }
        ///Odd factor for the
              prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> odd{}; 
        namespace OddValC{
        }
        ///I2S Linear prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> i2sdiv{}; 
        namespace I2sdivValC{
        }
    }
}
