#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Inter-integrated circuit
    namespace I2c3Cr1{    ///<Control register 1
        using Addr = Register::Address<0x40005c00,0xff002000,0x00000000,unsigned>;
        ///Peripheral enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
        ///TX Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txie{}; 
        ///RX Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxie{}; 
        ///Address match interrupt enable (slave              only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> addrie{}; 
        ///Not acknowledge received interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nackie{}; 
        ///STOP detection Interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stopie{}; 
        ///Transfer Complete interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Error interrupts enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Digital noise filter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> dnf{}; 
        ///Analog noise filter OFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> anfoff{}; 
        ///DMA transmission requests              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        ///DMA reception requests              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        ///Slave byte control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbc{}; 
        ///Clock stretching disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nostretch{}; 
        ///Wakeup from STOP enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> wupen{}; 
        ///General call enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///SMBus Host address enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> smbhen{}; 
        ///SMBus Device Default address              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> smbden{}; 
        ///SMBUS alert enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> alerten{}; 
        ///PEC enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pecen{}; 
    }
    namespace I2c3Cr2{    ///<Control register 2
        using Addr = Register::Address<0x40005c04,0xf8000000,0x00000000,unsigned>;
        ///Packet error checking byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pecbyte{}; 
        ///Automatic end mode (master              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> autoend{}; 
        ///NBYTES reload mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> reload{}; 
        ///Number of bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///NACK generation (slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Stop generation (master              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Start generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> start{}; 
        ///10-bit address header only read              direction (master receiver mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> head10r{}; 
        ///10-bit addressing mode (master              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> add10{}; 
        ///Transfer direction (master              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rdWrn{}; 
        ///Slave address bit (master              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> sadd{}; 
    }
    namespace I2c3Oar1{    ///<Own address register 1
        using Addr = Register::Address<0x40005c08,0xffff7800,0x00000000,unsigned>;
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> oa1{}; 
        ///Own Address 1 10-bit mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oa1mode{}; 
        ///Own Address 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oa1en{}; 
    }
    namespace I2c3Oar2{    ///<Own address register 2
        using Addr = Register::Address<0x40005c0c,0xffff7801,0x00000000,unsigned>;
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> oa2{}; 
        ///Own Address 2 masks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> oa2msk{}; 
        ///Own Address 2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oa2en{}; 
    }
    namespace I2c3Timingr{    ///<Timing register
        using Addr = Register::Address<0x40005c10,0x0f000000,0x00000000,unsigned>;
        ///SCL low period (master              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scll{}; 
        ///SCL high period (master              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sclh{}; 
        ///Data hold time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> sdadel{}; 
        ///Data setup time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> scldel{}; 
        ///Timing prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> presc{}; 
    }
    namespace I2c3Timeoutr{    ///<Status register 1
        using Addr = Register::Address<0x40005c14,0x70006000,0x00000000,unsigned>;
        ///Bus timeout A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> timeouta{}; 
        ///Idle clock timeout              detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tidle{}; 
        ///Clock timeout enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timouten{}; 
        ///Bus timeout B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> timeoutb{}; 
        ///Extended clock timeout              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> texten{}; 
    }
    namespace I2c3Isr{    ///<Interrupt and Status register
        using Addr = Register::Address<0x40005c18,0xff004000,0x00000000,unsigned>;
        ///Address match code (Slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addcode{}; 
        ///Transfer direction (Slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dir{}; 
        ///Bus busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///SMBus alert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> alert{}; 
        ///Timeout or t_low detection              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timeout{}; 
        ///PEC Error in reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pecerr{}; 
        ///Overrun/Underrun (slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovr{}; 
        ///Arbitration lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> arlo{}; 
        ///Bus error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> berr{}; 
        ///Transfer Complete Reload
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tcr{}; 
        ///Transfer Complete (master              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tc{}; 
        ///Stop detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stopf{}; 
        ///Not acknowledge received              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nackf{}; 
        ///Address matched (slave              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addr{}; 
        ///Receive data register not empty              (receivers)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxne{}; 
        ///Transmit interrupt status              (transmitters)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txis{}; 
        ///Transmit data register empty              (transmitters)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace I2c3Icr{    ///<Interrupt clear register
        using Addr = Register::Address<0x40005c1c,0xffffc0c7,0x00000000,unsigned>;
        ///Alert flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alertcf{}; 
        ///Timeout detection flag              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timoutcf{}; 
        ///PEC Error flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> peccf{}; 
        ///Overrun/Underrun flag              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovrcf{}; 
        ///Arbitration lost flag              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arlocf{}; 
        ///Bus error flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> berrcf{}; 
        ///Stop detection flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stopcf{}; 
        ///Not Acknowledge flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nackcf{}; 
        ///Address Matched flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> addrcf{}; 
    }
    namespace I2c3Pecr{    ///<PEC register
        using Addr = Register::Address<0x40005c20,0xffffff00,0x00000000,unsigned>;
        ///Packet error checking              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pec{}; 
    }
    namespace I2c3Rxdr{    ///<Receive data register
        using Addr = Register::Address<0x40005c24,0xffffff00,0x00000000,unsigned>;
        ///8-bit receive data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace I2c3Txdr{    ///<Transmit data register
        using Addr = Register::Address<0x40005c28,0xffffff00,0x00000000,unsigned>;
        ///8-bit transmit data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
}
