#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet: DMA controller operation
    namespace Nonedmabmr{    ///<Ethernet DMA bus mode register
        using Addr = Register::Address<0x40029000,0xfc000080,0,unsigned>;
        ///Software reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sr{}; 
        ///DMA Arbitration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da{}; 
        ///Descriptor skip length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> dsl{}; 
        ///Programmable burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pbl{}; 
        ///Rx Tx priority ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> rtpr{}; 
        ///Fixed burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fb{}; 
        ///Rx DMA PBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,17),Register::ReadWriteAccess,unsigned> rdp{}; 
        ///Use separate PBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usp{}; 
        ///4xPBL mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fpm{}; 
        ///Address-aligned beats
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> aab{}; 
    }
    namespace Nonedmatpdr{    ///<Ethernet DMA transmit poll demand
          register
        using Addr = Register::Address<0x40029004,0x00000000,0,unsigned>;
        ///Transmit poll demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tpd{}; 
    }
    namespace Nonedmarpdr{    ///<EHERNET DMA receive poll demand
          register
        using Addr = Register::Address<0x40029008,0x00000000,0,unsigned>;
        ///Receive poll demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rpd{}; 
    }
    namespace Nonedmardlar{    ///<Ethernet DMA receive descriptor list address
          register
        using Addr = Register::Address<0x4002900c,0x00000000,0,unsigned>;
        ///Start of receive list
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srl{}; 
    }
    namespace Nonedmatdlar{    ///<Ethernet DMA transmit descriptor list
          address register
        using Addr = Register::Address<0x40029010,0x00000000,0,unsigned>;
        ///Start of transmit list
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> stl{}; 
    }
    namespace Nonedmasr{    ///<Ethernet DMA status register
        using Addr = Register::Address<0x40029014,0xc4001800,0,unsigned>;
        ///Transmit status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts{}; 
        ///Transmit process stopped
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpss{}; 
        ///Transmit buffer unavailable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbus{}; 
        ///Transmit jabber timeout
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjts{}; 
        ///Receive overflow status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ros{}; 
        ///Transmit underflow status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tus{}; 
        ///Receive status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rs{}; 
        ///Receive buffer unavailable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbus{}; 
        ///Receive process stopped
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rpss{}; 
        ///Receive watchdog timeout
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwts{}; 
        ///Early transmit status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ets{}; 
        ///Fatal bus error status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbes{}; 
        ///Early receive status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ers{}; 
        ///Abnormal interrupt summary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ais{}; 
        ///Normal interrupt summary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nis{}; 
        ///Receive process state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> rps{}; 
        ///Transmit process state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> tps{}; 
        ///Error bits status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ebs{}; 
        ///MMC status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mmcs{}; 
        ///PMT status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmts{}; 
        ///Time stamp trigger status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tsts{}; 
    }
    namespace Nonedmaomr{    ///<Ethernet DMA operation mode
          register
        using Addr = Register::Address<0x40029018,0xf8ce1f21,0,unsigned>;
        ///SR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sr{}; 
        ///OSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osf{}; 
        ///RTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> rtc{}; 
        ///FUGF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fugf{}; 
        ///FEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fef{}; 
        ///ST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> st{}; 
        ///TTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,unsigned> ttc{}; 
        ///FTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ftf{}; 
        ///TSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tsf{}; 
        ///DFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dfrf{}; 
        ///RSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rsf{}; 
        ///DTCEFD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dtcefd{}; 
    }
    namespace Nonedmaier{    ///<Ethernet DMA interrupt enable
          register
        using Addr = Register::Address<0x4002901c,0xfffe1800,0,unsigned>;
        ///Transmit interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Transmit process stopped interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpsie{}; 
        ///Transmit buffer unavailable interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbuie{}; 
        ///Transmit jabber timeout interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjtie{}; 
        ///Overflow interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> roie{}; 
        ///Underflow interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tuie{}; 
        ///Receive interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Receive buffer unavailable interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbuie{}; 
        ///Receive process stopped interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rpsie{}; 
        ///receive watchdog timeout interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwtie{}; 
        ///Early transmit interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> etie{}; 
        ///Fatal bus error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbeie{}; 
        ///Early receive interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> erie{}; 
        ///Abnormal interrupt summary
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aise{}; 
        ///Normal interrupt summary
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nise{}; 
    }
    namespace Nonedmamfbocr{    ///<Ethernet DMA missed frame and buffer
          overflow counter register
        using Addr = Register::Address<0x40029020,0xe0000000,0,unsigned>;
        ///Missed frames by the
              controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mfc{}; 
        ///Overflow bit for missed frame
              counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> omfc{}; 
        ///Missed frames by the
              application
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> mfa{}; 
        ///Overflow bit for FIFO overflow
              counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ofoc{}; 
    }
    namespace Nonedmachtdr{    ///<Ethernet DMA current host transmit
          descriptor register
        using Addr = Register::Address<0x40029048,0x00000000,0,unsigned>;
        ///Host transmit descriptor address
              pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htdap{}; 
    }
    namespace Nonedmachrdr{    ///<Ethernet DMA current host receive descriptor
          register
        using Addr = Register::Address<0x4002904c,0x00000000,0,unsigned>;
        ///Host receive descriptor address
              pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrdap{}; 
    }
    namespace Nonedmachtbar{    ///<Ethernet DMA current host transmit buffer
          address register
        using Addr = Register::Address<0x40029050,0x00000000,0,unsigned>;
        ///Host transmit buffer address
              pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htbap{}; 
    }
    namespace Nonedmachrbar{    ///<Ethernet DMA current host receive buffer
          address register
        using Addr = Register::Address<0x40029054,0x00000000,0,unsigned>;
        ///Host receive buffer address
              pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrbap{}; 
    }
}
