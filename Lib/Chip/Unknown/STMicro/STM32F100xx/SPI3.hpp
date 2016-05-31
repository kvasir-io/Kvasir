#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Serial peripheral interface
    namespace Spi3Cr1{    ///<control register 1
        using Addr = Register::Address<0x40003c00,0xffff0000,0x00000000,unsigned>;
        ///Bidirectional data mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bidimode{}; 
        ///Output enable in bidirectional              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bidioe{}; 
        ///Hardware CRC calculation              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///CRC transfer next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcnext{}; 
        ///Data frame format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dff{}; 
        ///Receive only
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxonly{}; 
        ///Software slave management
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ssm{}; 
        ///Internal slave select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssi{}; 
        ///Frame format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lsbfirst{}; 
        ///SPI enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> spe{}; 
        ///Baud rate control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> br{}; 
        ///Master selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mstr{}; 
        ///Clock polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cpol{}; 
        ///Clock phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cpha{}; 
    }
    namespace Spi3Cr2{    ///<control register 2
        using Addr = Register::Address<0x40003c04,0xffffff18,0x00000000,unsigned>;
        ///Tx buffer empty interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txeie{}; 
        ///RX buffer not empty interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxneie{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> errie{}; 
        ///SS output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssoe{}; 
        ///Tx buffer DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        ///Rx buffer DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
    }
    namespace Spi3Sr{    ///<status register
        using Addr = Register::Address<0x40003c08,0xffffff0c,0x00000000,unsigned>;
        ///Busy flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bsy{}; 
        ///Overrun flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr{}; 
        ///Mode fault
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> modf{}; 
        ///CRC error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcerr{}; 
        ///Transmit buffer empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txe{}; 
        ///Receive buffer not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxne{}; 
    }
    namespace Spi3Dr{    ///<data register
        using Addr = Register::Address<0x40003c0c,0xffff0000,0x00000000,unsigned>;
        ///Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace Spi3Crcpr{    ///<CRC polynomial register
        using Addr = Register::Address<0x40003c10,0xffff0000,0x00000000,unsigned>;
        ///CRC polynomial register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crcpoly{}; 
    }
    namespace Spi3Rxcrcr{    ///<RX CRC register
        using Addr = Register::Address<0x40003c14,0xffff0000,0x00000000,unsigned>;
        ///Rx CRC register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxcrc{}; 
    }
    namespace Spi3Txcrcr{    ///<TX CRC register
        using Addr = Register::Address<0x40003c18,0xffff0000,0x00000000,unsigned>;
        ///Tx CRC register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txcrc{}; 
    }
}
