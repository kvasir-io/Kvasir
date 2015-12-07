#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet: DMA controller operation
    namespace Nonedmabmr{    ///<Ethernet DMA bus mode register
        using Addr = Register::Address<0x40029000,0xf8000000,0,unsigned>;
        ///Software reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sr{}; 
        namespace SrValC{
        }
        ///DMA Arbitration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da{}; 
        namespace DaValC{
        }
        ///Descriptor skip length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> dsl{}; 
        namespace DslValC{
        }
        ///Enhanced descriptor format
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> edfe{}; 
        namespace EdfeValC{
        }
        ///Programmable burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pbl{}; 
        namespace PblValC{
        }
        ///Rx Tx priority ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> rtpr{}; 
        namespace RtprValC{
        }
        ///Fixed burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fb{}; 
        namespace FbValC{
        }
        ///Rx DMA PBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,17),Register::ReadWriteAccess,unsigned> rdp{}; 
        namespace RdpValC{
        }
        ///Use separate PBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usp{}; 
        namespace UspValC{
        }
        ///4xPBL mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fpm{}; 
        namespace FpmValC{
        }
        ///Address-aligned beats
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> aab{}; 
        namespace AabValC{
        }
        ///Mixed burst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mb{}; 
        namespace MbValC{
        }
    }
    namespace Nonedmatpdr{    ///<Ethernet DMA transmit poll demand
          register
        using Addr = Register::Address<0x40029004,0x00000000,0,unsigned>;
        ///Transmit poll demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tpd{}; 
        namespace TpdValC{
        }
    }
    namespace Nonedmarpdr{    ///<EHERNET DMA receive poll demand
          register
        using Addr = Register::Address<0x40029008,0x00000000,0,unsigned>;
        ///Receive poll demand
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rpd{}; 
        namespace RpdValC{
        }
    }
    namespace Nonedmardlar{    ///<Ethernet DMA receive descriptor list address
          register
        using Addr = Register::Address<0x4002900c,0x00000000,0,unsigned>;
        ///Start of receive list
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srl{}; 
        namespace SrlValC{
        }
    }
    namespace Nonedmatdlar{    ///<Ethernet DMA transmit descriptor list
          address register
        using Addr = Register::Address<0x40029010,0x00000000,0,unsigned>;
        ///Start of transmit list
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> stl{}; 
        namespace StlValC{
        }
    }
    namespace Nonedmasr{    ///<Ethernet DMA status register
        using Addr = Register::Address<0x40029014,0xc4001800,0,unsigned>;
        ///Transmit status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts{}; 
        namespace TsValC{
        }
        ///Transmit process stopped
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpss{}; 
        namespace TpssValC{
        }
        ///Transmit buffer unavailable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbus{}; 
        namespace TbusValC{
        }
        ///Transmit jabber timeout
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjts{}; 
        namespace TjtsValC{
        }
        ///Receive overflow status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ros{}; 
        namespace RosValC{
        }
        ///Transmit underflow status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tus{}; 
        namespace TusValC{
        }
        ///Receive status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rs{}; 
        namespace RsValC{
        }
        ///Receive buffer unavailable
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbus{}; 
        namespace RbusValC{
        }
        ///Receive process stopped
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rpss{}; 
        namespace RpssValC{
        }
        ///Receive watchdog timeout
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwts{}; 
        namespace PwtsValC{
        }
        ///Early transmit status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ets{}; 
        namespace EtsValC{
        }
        ///Fatal bus error status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbes{}; 
        namespace FbesValC{
        }
        ///Early receive status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ers{}; 
        namespace ErsValC{
        }
        ///Abnormal interrupt summary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ais{}; 
        namespace AisValC{
        }
        ///Normal interrupt summary
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nis{}; 
        namespace NisValC{
        }
        ///Receive process state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> rps{}; 
        namespace RpsValC{
        }
        ///Transmit process state
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> tps{}; 
        namespace TpsValC{
        }
        ///Error bits status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ebs{}; 
        namespace EbsValC{
        }
        ///MMC status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mmcs{}; 
        namespace MmcsValC{
        }
        ///PMT status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmts{}; 
        namespace PmtsValC{
        }
        ///Time stamp trigger status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tsts{}; 
        namespace TstsValC{
        }
    }
    namespace Nonedmaomr{    ///<Ethernet DMA operation mode
          register
        using Addr = Register::Address<0x40029018,0xf8ce1f21,0,unsigned>;
        ///SR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sr{}; 
        namespace SrValC{
        }
        ///OSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osf{}; 
        namespace OsfValC{
        }
        ///RTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> rtc{}; 
        namespace RtcValC{
        }
        ///FUGF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fugf{}; 
        namespace FugfValC{
        }
        ///FEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fef{}; 
        namespace FefValC{
        }
        ///ST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
        ///TTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,14),Register::ReadWriteAccess,unsigned> ttc{}; 
        namespace TtcValC{
        }
        ///FTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ftf{}; 
        namespace FtfValC{
        }
        ///TSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> tsf{}; 
        namespace TsfValC{
        }
        ///DFRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dfrf{}; 
        namespace DfrfValC{
        }
        ///RSF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rsf{}; 
        namespace RsfValC{
        }
        ///DTCEFD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dtcefd{}; 
        namespace DtcefdValC{
        }
    }
    namespace Nonedmaier{    ///<Ethernet DMA interrupt enable
          register
        using Addr = Register::Address<0x4002901c,0xfffe1800,0,unsigned>;
        ///Transmit interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        ///Transmit process stopped interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpsie{}; 
        namespace TpsieValC{
        }
        ///Transmit buffer unavailable interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbuie{}; 
        namespace TbuieValC{
        }
        ///Transmit jabber timeout interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjtie{}; 
        namespace TjtieValC{
        }
        ///Overflow interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> roie{}; 
        namespace RoieValC{
        }
        ///Underflow interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tuie{}; 
        namespace TuieValC{
        }
        ///Receive interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        ///Receive buffer unavailable interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbuie{}; 
        namespace RbuieValC{
        }
        ///Receive process stopped interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rpsie{}; 
        namespace RpsieValC{
        }
        ///receive watchdog timeout interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwtie{}; 
        namespace RwtieValC{
        }
        ///Early transmit interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> etie{}; 
        namespace EtieValC{
        }
        ///Fatal bus error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbeie{}; 
        namespace FbeieValC{
        }
        ///Early receive interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> erie{}; 
        namespace ErieValC{
        }
        ///Abnormal interrupt summary
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aise{}; 
        namespace AiseValC{
        }
        ///Normal interrupt summary
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nise{}; 
        namespace NiseValC{
        }
    }
    namespace Nonedmamfbocr{    ///<Ethernet DMA missed frame and buffer
          overflow counter register
        using Addr = Register::Address<0x40029020,0xe0000000,0,unsigned>;
        ///Missed frames by the
              controller
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mfc{}; 
        namespace MfcValC{
        }
        ///Overflow bit for missed frame
              counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> omfc{}; 
        namespace OmfcValC{
        }
        ///Missed frames by the
              application
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> mfa{}; 
        namespace MfaValC{
        }
        ///Overflow bit for FIFO overflow
              counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ofoc{}; 
        namespace OfocValC{
        }
    }
    namespace Nonedmarswtr{    ///<Ethernet DMA receive status watchdog timer
          register
        using Addr = Register::Address<0x40029024,0xffffff00,0,unsigned>;
        ///Receive status watchdog timer
              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rswtc{}; 
        namespace RswtcValC{
        }
    }
    namespace Nonedmachtdr{    ///<Ethernet DMA current host transmit
          descriptor register
        using Addr = Register::Address<0x40029048,0x00000000,0,unsigned>;
        ///Host transmit descriptor address
              pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htdap{}; 
        namespace HtdapValC{
        }
    }
    namespace Nonedmachrdr{    ///<Ethernet DMA current host receive descriptor
          register
        using Addr = Register::Address<0x4002904c,0x00000000,0,unsigned>;
        ///Host receive descriptor address
              pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrdap{}; 
        namespace HrdapValC{
        }
    }
    namespace Nonedmachtbar{    ///<Ethernet DMA current host transmit buffer
          address register
        using Addr = Register::Address<0x40029050,0x00000000,0,unsigned>;
        ///Host transmit buffer address
              pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htbap{}; 
        namespace HtbapValC{
        }
    }
    namespace Nonedmachrbar{    ///<Ethernet DMA current host receive buffer
          address register
        using Addr = Register::Address<0x40029054,0x00000000,0,unsigned>;
        ///Host receive buffer address
              pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrbap{}; 
        namespace HrbapValC{
        }
    }
}
