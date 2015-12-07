#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet: DMA controller operation
    namespace Nonedmabmr{    ///<Ethernet DMA bus mode register
        using Addr = Register::Address<0x40029000,0xf8000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sr{}; 
        namespace SrValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da{}; 
        namespace DaValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> dsl{}; 
        namespace DslValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> edfe{}; 
        namespace EdfeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pbl{}; 
        namespace PblValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> rtpr{}; 
        namespace RtprValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fb{}; 
        namespace FbValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,17),Register::ReadWriteAccess,unsigned> rdp{}; 
        namespace RdpValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usp{}; 
        namespace UspValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fpm{}; 
        namespace FpmValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> aab{}; 
        namespace AabValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mb{}; 
        namespace MbValC{
        }
    }
    namespace Nonedmatpdr{    ///<Ethernet DMA transmit poll demand
          register
        using Addr = Register::Address<0x40029004,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tpd{}; 
        namespace TpdValC{
        }
    }
    namespace Nonedmarpdr{    ///<EHERNET DMA receive poll demand
          register
        using Addr = Register::Address<0x40029008,0x00000000,0,unsigned>;
        ///RPD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rpd{}; 
        namespace RpdValC{
        }
    }
    namespace Nonedmardlar{    ///<Ethernet DMA receive descriptor list address
          register
        using Addr = Register::Address<0x4002900c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srl{}; 
        namespace SrlValC{
        }
    }
    namespace Nonedmatdlar{    ///<Ethernet DMA transmit descriptor list
          address register
        using Addr = Register::Address<0x40029010,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> stl{}; 
        namespace StlValC{
        }
    }
    namespace Nonedmasr{    ///<Ethernet DMA status register
        using Addr = Register::Address<0x40029014,0xc4001800,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts{}; 
        namespace TsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpss{}; 
        namespace TpssValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbus{}; 
        namespace TbusValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjts{}; 
        namespace TjtsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ros{}; 
        namespace RosValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tus{}; 
        namespace TusValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rs{}; 
        namespace RsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbus{}; 
        namespace RbusValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rpss{}; 
        namespace RpssValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwts{}; 
        namespace PwtsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ets{}; 
        namespace EtsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbes{}; 
        namespace FbesValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ers{}; 
        namespace ErsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ais{}; 
        namespace AisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nis{}; 
        namespace NisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> rps{}; 
        namespace RpsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> tps{}; 
        namespace TpsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ebs{}; 
        namespace EbsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mmcs{}; 
        namespace MmcsValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmts{}; 
        namespace PmtsValC{
        }
        ///no description available
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpsie{}; 
        namespace TpsieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbuie{}; 
        namespace TbuieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjtie{}; 
        namespace TjtieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> roie{}; 
        namespace RoieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tuie{}; 
        namespace TuieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbuie{}; 
        namespace RbuieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rpsie{}; 
        namespace RpsieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwtie{}; 
        namespace RwtieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> etie{}; 
        namespace EtieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbeie{}; 
        namespace FbeieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> erie{}; 
        namespace ErieValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aise{}; 
        namespace AiseValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nise{}; 
        namespace NiseValC{
        }
    }
    namespace Nonedmamfbocr{    ///<Ethernet DMA missed frame and buffer
          overflow counter register
        using Addr = Register::Address<0x40029020,0xe0000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mfc{}; 
        namespace MfcValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> omfc{}; 
        namespace OmfcValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> mfa{}; 
        namespace MfaValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ofoc{}; 
        namespace OfocValC{
        }
    }
    namespace Nonedmarswtr{    ///<Ethernet DMA receive status watchdog timer
          register
        using Addr = Register::Address<0x40029024,0xffffff00,0,unsigned>;
        ///RSWTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rswtc{}; 
        namespace RswtcValC{
        }
    }
    namespace Nonedmachtdr{    ///<Ethernet DMA current host transmit
          descriptor register
        using Addr = Register::Address<0x40029048,0x00000000,0,unsigned>;
        ///HTDAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htdap{}; 
        namespace HtdapValC{
        }
    }
    namespace Nonedmachrdr{    ///<Ethernet DMA current host receive descriptor
          register
        using Addr = Register::Address<0x4002904c,0x00000000,0,unsigned>;
        ///HRDAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrdap{}; 
        namespace HrdapValC{
        }
    }
    namespace Nonedmachtbar{    ///<Ethernet DMA current host transmit buffer
          address register
        using Addr = Register::Address<0x40029050,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htbap{}; 
        namespace HtbapValC{
        }
    }
    namespace Nonedmachrbar{    ///<Ethernet DMA current host receive buffer
          address register
        using Addr = Register::Address<0x40029054,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrbap{}; 
        namespace HrbapValC{
        }
    }
}
