#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet: DMA controller operation
    namespace Nonedmabmr{    ///<Ethernet DMA bus mode register
        using Addr = Register::Address<0x40029000,0xf8000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sr{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> dsl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> edfe{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pbl{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> rtpr{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fb{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,17),Register::ReadWriteAccess,unsigned> rdp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usp{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fpm{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> aab{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mb{}; 
    }
    namespace Nonedmatpdr{    ///<Ethernet DMA transmit poll demand
          register
        using Addr = Register::Address<0x40029004,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tpd{}; 
    }
    namespace Nonedmarpdr{    ///<EHERNET DMA receive poll demand
          register
        using Addr = Register::Address<0x40029008,0x00000000,0,unsigned>;
        ///RPD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rpd{}; 
    }
    namespace Nonedmardlar{    ///<Ethernet DMA receive descriptor list address
          register
        using Addr = Register::Address<0x4002900c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> srl{}; 
    }
    namespace Nonedmatdlar{    ///<Ethernet DMA transmit descriptor list
          address register
        using Addr = Register::Address<0x40029010,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> stl{}; 
    }
    namespace Nonedmasr{    ///<Ethernet DMA status register
        using Addr = Register::Address<0x40029014,0xc4001800,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpss{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbus{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjts{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ros{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tus{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rs{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbus{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rpss{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwts{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ets{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbes{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ers{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ais{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nis{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> rps{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> tps{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ebs{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mmcs{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pmts{}; 
        ///no description available
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tpsie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbuie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tjtie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> roie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tuie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rbuie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rpsie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwtie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> etie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbeie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> erie{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> aise{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> nise{}; 
    }
    namespace Nonedmamfbocr{    ///<Ethernet DMA missed frame and buffer
          overflow counter register
        using Addr = Register::Address<0x40029020,0xe0000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mfc{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> omfc{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> mfa{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ofoc{}; 
    }
    namespace Nonedmarswtr{    ///<Ethernet DMA receive status watchdog timer
          register
        using Addr = Register::Address<0x40029024,0xffffff00,0,unsigned>;
        ///RSWTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rswtc{}; 
    }
    namespace Nonedmachtdr{    ///<Ethernet DMA current host transmit
          descriptor register
        using Addr = Register::Address<0x40029048,0x00000000,0,unsigned>;
        ///HTDAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htdap{}; 
    }
    namespace Nonedmachrdr{    ///<Ethernet DMA current host receive descriptor
          register
        using Addr = Register::Address<0x4002904c,0x00000000,0,unsigned>;
        ///HRDAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrdap{}; 
    }
    namespace Nonedmachtbar{    ///<Ethernet DMA current host transmit buffer
          address register
        using Addr = Register::Address<0x40029050,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> htbap{}; 
    }
    namespace Nonedmachrbar{    ///<Ethernet DMA current host receive buffer
          address register
        using Addr = Register::Address<0x40029054,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> hrbap{}; 
    }
}
