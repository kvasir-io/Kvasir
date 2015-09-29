#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Inter-integrated circuit
    namespace Nonecr1{    ///<Control register 1
        using Addr = Register::Address<0x40005c00,0xffff4004,0,unsigned>;
        ///Software reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///SMBus alert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> alert{}; 
        ///Packet error checking
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pec{}; 
        ///Acknowledge/PEC Position (for data
              reception)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pos{}; 
        ///Acknowledge enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Stop generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Start generation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> start{}; 
        ///Clock stretching disable (Slave
              mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nostretch{}; 
        ///General call enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> engc{}; 
        ///PEC enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enpec{}; 
        ///ARP enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enarp{}; 
        ///SMBus type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> smbtype{}; 
        ///SMBus mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> smbus{}; 
        ///Peripheral enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe{}; 
    }
    namespace Nonecr2{    ///<Control register 2
        using Addr = Register::Address<0x40005c04,0xffffe0c0,0,unsigned>;
        ///DMA last transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> last{}; 
        ///DMA requests enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Buffer interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> itbufen{}; 
        ///Event interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> itevten{}; 
        ///Error interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iterren{}; 
        ///Peripheral clock frequency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> freq{}; 
    }
    namespace Noneoar1{    ///<Own address register 1
        using Addr = Register::Address<0x40005c08,0xffff7c00,0,unsigned>;
        ///Addressing mode (slave
              mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> addmode{}; 
        ///Interface address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> add10{}; 
        ///Interface address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> add7{}; 
        ///Interface address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> add0{}; 
    }
    namespace Noneoar2{    ///<Own address register 2
        using Addr = Register::Address<0x40005c0c,0xffffff00,0,unsigned>;
        ///Interface address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> add2{}; 
        ///Dual addressing mode
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> endual{}; 
    }
    namespace Nonedr{    ///<Data register
        using Addr = Register::Address<0x40005c10,0xffffff00,0,unsigned>;
        ///8-bit data register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace Nonesr1{    ///<Status register 1
        using Addr = Register::Address<0x40005c14,0xffff2020,0,unsigned>;
        ///SMBus alert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> smbalert{}; 
        ///Timeout or Tlow error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///PEC Error in reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pecerr{}; 
        ///Overrun/Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///Acknowledge failure
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> af{}; 
        ///Arbitration lost (master
              mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arlo{}; 
        ///Bus error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> berr{}; 
        ///Data register empty
              (transmitters)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txe{}; 
        ///Data register not empty
              (receivers)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxne{}; 
        ///Stop detection (slave
              mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> stopf{}; 
        ///10-bit header sent (Master
              mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> add10{}; 
        ///Byte transfer finished
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btf{}; 
        ///Address sent (master mode)/matched
              (slave mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Start bit (Master mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sb{}; 
    }
    namespace Nonesr2{    ///<Status register 2
        using Addr = Register::Address<0x40005c18,0xffff0008,0,unsigned>;
        ///acket error checking
              register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pec{}; 
        ///Dual flag (Slave mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dualf{}; 
        ///SMBus host header (Slave
              mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> smbhost{}; 
        ///SMBus device default address (Slave
              mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> smbdefault{}; 
        ///General call address (Slave
              mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gencall{}; 
        ///Transmitter/receiver
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tra{}; 
        ///Bus busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busy{}; 
        ///Master/slave
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msl{}; 
    }
    namespace Noneccr{    ///<Clock control register
        using Addr = Register::Address<0x40005c1c,0xffff3000,0,unsigned>;
        ///I2C master mode selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fS{}; 
        ///Fast mode duty cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> duty{}; 
        ///Clock control register in Fast/Standard
              mode (Master mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace Nonetrise{    ///<TRISE register
        using Addr = Register::Address<0x40005c20,0xffffffc0,0,unsigned>;
        ///Maximum rise time in Fast/Standard mode
              (Master mode)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> trise{}; 
    }
}
