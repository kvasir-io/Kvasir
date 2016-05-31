#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Inter integrated circuit
    namespace I2c1Cr1{    ///<Control register 1
        using Addr = Register::Address<0x40005400,0xffff4004,0x00000000,unsigned>;
        ///Software reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///SMBus alert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alert{}; 
        ///Packet error checking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pec{}; 
        ///Acknowledge/PEC Position (for data              reception)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Acknowledge enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Stop generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Start generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> start{}; 
        ///Clock stretching disable (Slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nostretch{}; 
        ///General call enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> engc{}; 
        ///PEC enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enpec{}; 
        ///ARP enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enarp{}; 
        ///SMBus type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> smbtype{}; 
        ///SMBus mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> smbus{}; 
        ///Peripheral enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
    }
    namespace I2c1Cr2{    ///<Control register 2
        using Addr = Register::Address<0x40005404,0xffffe0c0,0x00000000,unsigned>;
        ///DMA last transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> last{}; 
        ///DMA requests enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Buffer interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> itbufen{}; 
        ///Event interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> itevten{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iterren{}; 
        ///Peripheral clock frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> freq{}; 
    }
    namespace I2c1Oar1{    ///<Own address register 1
        using Addr = Register::Address<0x40005408,0xffff7c00,0x00000000,unsigned>;
        ///Addressing mode (slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> addmode{}; 
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> add10{}; 
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> add7{}; 
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> add0{}; 
    }
    namespace I2c1Oar2{    ///<Own address register 2
        using Addr = Register::Address<0x4000540c,0xffffff00,0x00000000,unsigned>;
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> add2{}; 
        ///Dual addressing mode              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> endual{}; 
    }
    namespace I2c1Dr{    ///<Data register
        using Addr = Register::Address<0x40005410,0xffffff00,0x00000000,unsigned>;
        ///8-bit data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace I2c1Sr1{    ///<Status register 1
        using Addr = Register::Address<0x40005414,0xffff2020,0x00000000,unsigned>;
        ///SMBus alert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> smbalert{}; 
        ///Timeout or Tlow error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///PEC Error in reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pecerr{}; 
        ///Overrun/Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Acknowledge failure
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> af{}; 
        ///Arbitration lost (master              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arlo{}; 
        ///Bus error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> berr{}; 
        ///Data register empty              (transmitters)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txe{}; 
        ///Data register not empty              (receivers)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxne{}; 
        ///Stop detection (slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stopf{}; 
        ///10-bit header sent (Master              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> add10{}; 
        ///Byte transfer finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btf{}; 
        ///Address sent (master mode)/matched              (slave mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addr{}; 
        ///Start bit (Master mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sb{}; 
    }
    namespace I2c1Sr2{    ///<Status register 2
        using Addr = Register::Address<0x40005418,0xffff0008,0x00000000,unsigned>;
        ///acket error checking              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pec{}; 
        ///Dual flag (Slave mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dualf{}; 
        ///SMBus host header (Slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> smbhost{}; 
        ///SMBus device default address (Slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> smbdefault{}; 
        ///General call address (Slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gencall{}; 
        ///Transmitter/receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tra{}; 
        ///Bus busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busy{}; 
        ///Master/slave
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msl{}; 
    }
    namespace I2c1Ccr{    ///<Clock control register
        using Addr = Register::Address<0x4000541c,0xffff3000,0x00000000,unsigned>;
        ///I2C master mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fS{}; 
        ///Fast mode duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> duty{}; 
        ///Clock control register in Fast/Standard              mode (Master mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace I2c1Trise{    ///<TRISE register
        using Addr = Register::Address<0x40005420,0xffffffc0,0x00000000,unsigned>;
        ///Maximum rise time in Fast/Standard mode              (Master mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trise{}; 
    }
}
