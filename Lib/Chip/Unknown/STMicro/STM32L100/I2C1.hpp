#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-integrated circuit
    namespace Nonecr1{    ///<CR1
        using Addr = Register::Address<0x40005400,0xffff4004,0,unsigned>;
        ///Software reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///SMBus alert
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alert{}; 
        ///Packet error checking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pec{}; 
        ///Acknowledge/PEC Position (for data
              reception)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Acknowledge enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Stop generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Start generation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> start{}; 
        ///Clock stretching disable (Slave
              mode)
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
    namespace Nonecr2{    ///<CR2
        using Addr = Register::Address<0x40005404,0xffffe0c0,0,unsigned>;
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
    namespace Noneoar1{    ///<OAR1
        using Addr = Register::Address<0x40005408,0xffff7c00,0,unsigned>;
        ///ADDMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> addmode{}; 
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> add89{}; 
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> add17{}; 
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> add0{}; 
    }
    namespace Noneoar2{    ///<OAR2
        using Addr = Register::Address<0x4000540c,0xffffff00,0,unsigned>;
        ///Interface address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> add2{}; 
        ///Dual addressing mode
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> endual{}; 
    }
    namespace Nonedr{    ///<DR
        using Addr = Register::Address<0x40005410,0xffffff00,0,unsigned>;
        ///-bit data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace Nonesr1{    ///<SR1
        using Addr = Register::Address<0x40005414,0xffff2020,0,unsigned>;
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
        ///Arbitration lost (master
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arlo{}; 
        ///Bus error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> berr{}; 
        ///Data register empty
              (transmitters)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txe{}; 
        ///Data register not empty
              (receivers)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///Stop detection (slave
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stopf{}; 
        ///10-bit header sent (Master
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> add10{}; 
        ///Byte transfer finished
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btf{}; 
        ///Address sent (master mode)/matched
              (slave mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Start bit (Master mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sb{}; 
    }
    namespace Nonesr2{    ///<SR2
        using Addr = Register::Address<0x40005418,0xffff0008,0,unsigned>;
        ///acket error checking
              register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pec{}; 
        ///Dual flag (Slave mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dualf{}; 
        ///SMBus host header (Slave
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> smbhost{}; 
        ///SMBus device default address (Slave
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> smbdefault{}; 
        ///General call address (Slave
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gencall{}; 
        ///Transmitter/receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tra{}; 
        ///Bus busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busy{}; 
        ///Master/slave
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msl{}; 
    }
    namespace Noneccr{    ///<CCR
        using Addr = Register::Address<0x4000541c,0xffff3000,0,unsigned>;
        ///I2C master mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fS{}; 
        ///Fast mode duty cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> duty{}; 
        ///Clock control register in Fast/Standard
              mode (Master mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace Nonetrise{    ///<TRISE
        using Addr = Register::Address<0x40005420,0xffffffc0,0,unsigned>;
        ///Maximum rise time in Fast/Standard mode
              (Master mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trise{}; 
    }
}
