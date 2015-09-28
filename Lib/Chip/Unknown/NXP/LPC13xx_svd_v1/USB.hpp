#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedevintst{
        using Addr = Register::Address<0x40020000,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DEV_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC_EMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CD_FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RxENDPKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TxENDPKT; 
    }
    namespace Nonedevinten{
        using Addr = Register::Address<0x40020004,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP0_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP2_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP3_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP4_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP5_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP6_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP7_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DEV_STAT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC_EMPTY_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CD_FULL_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXENDPKT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TXENDPKT_EN; 
    }
    namespace Nonedevintctrl{
        using Addr = Register::Address<0x40020008,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP2_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP3_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP4_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP5_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP6_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP7_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DEV_STAT_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC_EMPTY_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CD_FULL_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXENDPKT_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TXENDPKT_CLR; 
    }
    namespace Nonedevintset{
        using Addr = Register::Address<0x4002000c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EP0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EP1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EP2_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EP3_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP4_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP5_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EP6_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP7_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DEV_STAT_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC_EMPTY_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CD_FULL_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXENDPKT_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TXENDPKT_SET; 
    }
    namespace Nonecmdcode{
        using Addr = Register::Address<0x40020010,0xff0000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CMD_PHASE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> CODE_WDATA; 
    }
    namespace Nonecmddata{
        using Addr = Register::Address<0x40020014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CMD_RDATA; 
    }
    namespace Nonerxdata{
        using Addr = Register::Address<0x40020018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RX_DATA; 
    }
    namespace Nonetxdata{
        using Addr = Register::Address<0x4002001c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TX_DATA; 
    }
    namespace Nonerxplen{
        using Addr = Register::Address<0x40020020,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> PKT_LNGTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DV; 
    }
    namespace Nonetxplenn{
        using Addr = Register::Address<0x40020024,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> PKT_LNGTH; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x40020028,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> LOG_ENDPOINT; 
    }
    namespace Nonedevfiqsel{
        using Addr = Register::Address<0x4002002c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRAME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BULKOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BULKIN; 
    }
}
