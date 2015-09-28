#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecancntl{
        using Addr = Register::Address<0x40050000,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TEST; 
    }
    namespace Nonecanstat{
        using Addr = Register::Address<0x40050004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EWARN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BOFF; 
    }
    namespace Nonecanec{
        using Addr = Register::Address<0x40050008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TEC_7_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> REC_6_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RP; 
    }
    namespace Nonecanbt{
        using Addr = Register::Address<0x4005000c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> BRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TSEG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TSEG2; 
    }
    namespace Nonecanint{
        using Addr = Register::Address<0x40050010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INTID; 
    }
    namespace Nonecantest{
        using Addr = Register::Address<0x40050014,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BASIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SILENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LBACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RX; 
    }
    namespace Nonecanbrpe{
        using Addr = Register::Address<0x40050018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BRPE; 
    }
    namespace Nonecanif1_cmdreq{
        using Addr = Register::Address<0x40050020,0xffff7fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BUSY; 
    }
    namespace Nonecanif2_cmdreq{
        using Addr = Register::Address<0x40050080,0xffff7fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BUSY; 
    }
    namespace Nonecanif1_cmdmsk_w{
        using Addr = Register::Address<0x40050024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATA_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATA_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRQST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRINTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WR_RD; 
    }
    namespace Nonecanif2_cmdmsk_w{
        using Addr = Register::Address<0x40050084,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATA_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATA_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRQST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRINTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WR_RD; 
    }
    namespace Nonecanif1_cmdmsk_r{
        using Addr = Register::Address<0x40050024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATA_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATA_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEWDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRINTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WR_RD; 
    }
    namespace Nonecanif2_cmdmsk_r{
        using Addr = Register::Address<0x40050084,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATA_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATA_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEWDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRINTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WR_RD; 
    }
    namespace Nonecanif1_msk1{
        using Addr = Register::Address<0x40050028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MSK_15_0; 
    }
    namespace Nonecanif2_msk1{
        using Addr = Register::Address<0x40050088,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MSK_15_0; 
    }
    namespace Nonecanif1_msk2{
        using Addr = Register::Address<0x4005002c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> MSK_28_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MXTD; 
    }
    namespace Nonecanif2_msk2{
        using Addr = Register::Address<0x4005008c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> MSK_28_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MXTD; 
    }
    namespace Nonecanif1_arb1{
        using Addr = Register::Address<0x40050030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ID_15_0; 
    }
    namespace Nonecanif2_arb1{
        using Addr = Register::Address<0x40050090,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ID_15_0; 
    }
    namespace Nonecanif1_arb2{
        using Addr = Register::Address<0x40050034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ID_28_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> XTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSGVAL; 
    }
    namespace Nonecanif2_arb2{
        using Addr = Register::Address<0x40050094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ID_28_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> XTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSGVAL; 
    }
    namespace Nonecanif1_mctrl{
        using Addr = Register::Address<0x40050038,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC_3_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXRQST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RMTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MSGLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NEWDAT; 
    }
    namespace Nonecanif2_mctrl{
        using Addr = Register::Address<0x40050098,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC_3_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXRQST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RMTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MSGLST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NEWDAT; 
    }
    namespace Nonecanif1_da1{
        using Addr = Register::Address<0x4005003c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA1; 
    }
    namespace Nonecanif2_da1{
        using Addr = Register::Address<0x4005009c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA1; 
    }
    namespace Nonecanif1_da2{
        using Addr = Register::Address<0x40050040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA3; 
    }
    namespace Nonecanif2_da2{
        using Addr = Register::Address<0x400500a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA3; 
    }
    namespace Nonecanif1_db1{
        using Addr = Register::Address<0x40050044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA5; 
    }
    namespace Nonecanif2_db1{
        using Addr = Register::Address<0x400500a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA5; 
    }
    namespace Nonecanif1_db2{
        using Addr = Register::Address<0x40050048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA7; 
    }
    namespace Nonecanif2_db2{
        using Addr = Register::Address<0x400500a8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA7; 
    }
    namespace Nonecantxreq1{
        using Addr = Register::Address<0x40050100,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXRQST_16_1; 
    }
    namespace Nonecantxreq2{
        using Addr = Register::Address<0x40050104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXRQST_32_17; 
    }
    namespace Nonecannd1{
        using Addr = Register::Address<0x40050120,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NEWDAT_16_1; 
    }
    namespace Nonecannd2{
        using Addr = Register::Address<0x40050124,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NEWDAT_32_17; 
    }
    namespace Nonecanir1{
        using Addr = Register::Address<0x40050140,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INTPND_16_1; 
    }
    namespace Nonecanir2{
        using Addr = Register::Address<0x40050144,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INTPND_32_17; 
    }
    namespace Nonecanmsgv1{
        using Addr = Register::Address<0x40050160,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MSGVAL_16_1; 
    }
    namespace Nonecanmsgv2{
        using Addr = Register::Address<0x40050164,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MSGVAL_32_17; 
    }
    namespace Nonecanclkdiv{
        using Addr = Register::Address<0x40050180,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CLKDIVVAL; 
    }
}
