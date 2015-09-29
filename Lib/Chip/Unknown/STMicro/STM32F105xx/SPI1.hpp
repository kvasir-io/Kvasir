#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial peripheral interface
    namespace Nonecr1{    ///<control register 1
        using Addr = Register::Address<0x40013000,0xffff0000,0,unsigned>;
        ///Bidirectional data mode
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bidimode{}; 
        ///Output enable in bidirectional
              mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bidioe{}; 
        ///Hardware CRC calculation
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///CRC transfer next
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcnext{}; 
        ///Data frame format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dff{}; 
        ///Receive only
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxonly{}; 
        ///Software slave management
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ssm{}; 
        ///Internal slave select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssi{}; 
        ///Frame format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///SPI enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> spe{}; 
        ///Baud rate control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> br{}; 
        ///Master selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mstr{}; 
        ///Clock polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock phase
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpha{}; 
    }
    namespace Nonecr2{    ///<control register 2
        using Addr = Register::Address<0x40013004,0xffffff18,0,unsigned>;
        ///Tx buffer empty interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txeie{}; 
        ///RX buffer not empty interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxneie{}; 
        ///Error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> errie{}; 
        ///SS output enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssoe{}; 
        ///Tx buffer DMA enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        ///Rx buffer DMA enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40013008,0xffffff00,0,unsigned>;
        ///Busy flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bsy{}; 
        ///Overrun flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Mode fault
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> modf{}; 
        ///CRC error flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcerr{}; 
        ///Underrun flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> udr{}; 
        ///Channel side
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chside{}; 
        ///Transmit buffer empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txe{}; 
        ///Receive buffer not empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxne{}; 
    }
    namespace Nonedr{    ///<data register
        using Addr = Register::Address<0x4001300c,0xffff0000,0,unsigned>;
        ///Data register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace Nonecrcpr{    ///<CRC polynomial register
        using Addr = Register::Address<0x40013010,0xffff0000,0,unsigned>;
        ///CRC polynomial register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crcpoly{}; 
    }
    namespace Nonerxcrcr{    ///<RX CRC register
        using Addr = Register::Address<0x40013014,0xffff0000,0,unsigned>;
        ///Rx CRC register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxcrc{}; 
    }
    namespace Nonetxcrcr{    ///<TX CRC register
        using Addr = Register::Address<0x40013018,0xffff0000,0,unsigned>;
        ///Tx CRC register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txcrc{}; 
    }
    namespace Nonei2scfgr{    ///<I2S configuration register
        using Addr = Register::Address<0x4001301c,0xfffff040,0,unsigned>;
        ///I2S mode selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> i2smod{}; 
        ///I2S Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> i2se{}; 
        ///I2S configuration mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> i2scfg{}; 
        ///PCM frame synchronization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pcmsync{}; 
        ///I2S standard selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> i2sstd{}; 
        ///Steady state clock
              polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ckpol{}; 
        ///Data length to be
              transferred
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> datlen{}; 
        ///Channel length (number of bits per audio
              channel)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chlen{}; 
    }
    namespace Nonei2spr{    ///<I2S prescaler register
        using Addr = Register::Address<0x40013020,0xfffffc00,0,unsigned>;
        ///Master clock output enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mckoe{}; 
        ///Odd factor for the
              prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> odd{}; 
        ///I2S Linear prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> i2sdiv{}; 
    }
}
