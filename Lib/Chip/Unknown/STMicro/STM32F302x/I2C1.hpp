#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-integrated circuit
    namespace Nonecr1{    ///<Control register 1
        using Addr = Register::Address<0x40005400,0xff000000,0,unsigned>;
        ///Peripheral enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
        ///TX Interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txie{}; 
        ///RX Interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxie{}; 
        ///Address match interrupt enable (slave               only)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> addrie{}; 
        ///Not acknowledge received interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nackie{}; 
        ///STOP detection Interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stopie{}; 
        ///Transfer Complete interrupt               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tcie{}; 
        ///Error interrupts enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> errie{}; 
        ///Digital noise filter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> dnf{}; 
        ///Analog noise filter OFF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> anfoff{}; 
        ///Software reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///DMA transmission requests               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        ///DMA reception requests               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
        ///Slave byte control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sbc{}; 
        ///Clock stretching disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> nostretch{}; 
        ///Wakeup from STOP enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> wupen{}; 
        ///General call enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> gcen{}; 
        ///SMBus Host address enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> smbhen{}; 
        ///SMBus Device Default address               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> smbden{}; 
        ///SMBUS alert enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> alerten{}; 
        ///PEC enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pecen{}; 
    }
    namespace Nonecr2{    ///<Control register 2
        using Addr = Register::Address<0x40005404,0xf8000000,0,unsigned>;
        ///Packet error checking byte
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pecbyte{}; 
        ///Automatic end mode (master               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> autoend{}; 
        ///NBYTES reload mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> reload{}; 
        ///Number of bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nbytes{}; 
        ///NACK generation (slave               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Stop generation (master               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Start generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> start{}; 
        ///10-bit address header only read               direction (master receiver mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> head10r{}; 
        ///10-bit addressing mode (master               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> add10{}; 
        ///Transfer direction (master               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rdWrn{}; 
        ///Slave address bit 9:8 (master               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sadd8{}; 
        ///Slave address bit 7:1 (master               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> sadd1{}; 
        ///Slave address bit 0 (master               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sadd0{}; 
    }
    namespace Noneoar1{    ///<Own address register 1
        using Addr = Register::Address<0x40005408,0xffff7800,0,unsigned>;
        ///Interface address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oa10{}; 
        ///Interface address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> oa11{}; 
        ///Interface address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> oa18{}; 
        ///Own Address 1 10-bit mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oa1mode{}; 
        ///Own Address 1 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oa1en{}; 
    }
    namespace Noneoar2{    ///<Own address register 2
        using Addr = Register::Address<0x4000540c,0xffff7801,0,unsigned>;
        ///Interface address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> oa2{}; 
        ///Own Address 2 masks
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> oa2msk{}; 
        ///Own Address 2 enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> oa2en{}; 
    }
    namespace Nonetimingr{    ///<Timing register
        using Addr = Register::Address<0x40005410,0x0f000000,0,unsigned>;
        ///SCL low period (master               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> scll{}; 
        ///SCL high period (master               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sclh{}; 
        ///Data hold time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> sdadel{}; 
        ///Data setup time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> scldel{}; 
        ///Timing prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> presc{}; 
    }
    namespace Nonetimeoutr{    ///<Status register 1
        using Addr = Register::Address<0x40005414,0x70006000,0,unsigned>;
        ///Bus timeout A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> timeouta{}; 
        ///Idle clock timeout               detection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tidle{}; 
        ///Clock timeout enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> timouten{}; 
        ///Bus timeout B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> timeoutb{}; 
        ///Extended clock timeout               enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> texten{}; 
    }
    namespace Noneisr{    ///<Interrupt and Status register
        using Addr = Register::Address<0x40005418,0xff004000,0,unsigned>;
        ///Address match code (Slave               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,17),Register::ReadWriteAccess,unsigned> addcode{}; 
        ///Transfer direction (Slave               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dir{}; 
        ///Bus busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        ///SMBus alert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alert{}; 
        ///Timeout or t_low detection               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///PEC Error in reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pecerr{}; 
        ///Overrun/Underrun (slave               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Arbitration lost
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arlo{}; 
        ///Bus error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> berr{}; 
        ///Transfer Complete Reload
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcr{}; 
        ///Transfer Complete (master               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc{}; 
        ///Stop detection flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stopf{}; 
        ///Not acknowledge received               flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nackf{}; 
        ///Address matched (slave               mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Receive data register not empty               (receivers)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///Transmit interrupt status               (transmitters)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txis{}; 
        ///Transmit data register empty               (transmitters)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace Noneicr{    ///<Interrupt clear register
        using Addr = Register::Address<0x4000541c,0xffffc0c7,0,unsigned>;
        ///Alert flag clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alertcf{}; 
        ///Timeout detection flag               clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> timoutcf{}; 
        ///PEC Error flag clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> peccf{}; 
        ///Overrun/Underrun flag               clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovrcf{}; 
        ///Arbitration lost flag               clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arlocf{}; 
        ///Bus error flag clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> berrcf{}; 
        ///Stop detection flag clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> stopcf{}; 
        ///Not Acknowledge flag clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nackcf{}; 
        ///Address Matched flag clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> addrcf{}; 
    }
    namespace Nonepecr{    ///<PEC register
        using Addr = Register::Address<0x40005420,0xffffff00,0,unsigned>;
        ///Packet error checking               register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pec{}; 
    }
    namespace Nonerxdr{    ///<Receive data register
        using Addr = Register::Address<0x40005424,0xffffff00,0,unsigned>;
        ///8-bit receive data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace Nonetxdr{    ///<Transmit data register
        using Addr = Register::Address<0x40005428,0xffffff00,0,unsigned>;
        ///8-bit transmit data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
}
