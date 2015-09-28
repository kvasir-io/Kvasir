#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecntl{
        using Addr = Register::Address<0x400f0000,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TEST; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x400f0004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EWARN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BOFF; 
    }
    namespace Noneec{
        using Addr = Register::Address<0x400f0008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TEC7_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> REC6_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RP; 
    }
    namespace Nonebt{
        using Addr = Register::Address<0x400f000c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> BRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TSEG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TSEG2; 
    }
    namespace Noneint{
        using Addr = Register::Address<0x400f0010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INTID; 
    }
    namespace Nonetest{
        using Addr = Register::Address<0x400f0014,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BASIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SILENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LBACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RX; 
    }
    namespace Nonebrpe{
        using Addr = Register::Address<0x400f0018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BRPE; 
    }
    namespace Noneif1_cmdreq{
        using Addr = Register::Address<0x400f0020,0xffff7fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BUSY; 
    }
    namespace Noneif2_cmdreq{
        using Addr = Register::Address<0x400f0080,0xffff7fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BUSY; 
    }
    namespace Noneif1_cmdmsk_w{
        using Addr = Register::Address<0x400f0024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATA_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATA_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRQST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRINTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WR_RD; 
    }
    namespace Noneif2_cmdmsk_w{
        using Addr = Register::Address<0x400f0084,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATA_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATA_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRQST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRINTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WR_RD; 
    }
    namespace Noneif1_cmdmsk_r{
        using Addr = Register::Address<0x400f0024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATA_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATA_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEWDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRINTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WR_RD; 
    }
    namespace Noneif2_cmdmsk_r{
        using Addr = Register::Address<0x400f0084,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATA_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATA_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NEWDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLRINTPND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ARB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WR_RD; 
    }
    namespace Noneif1_msk1{
        using Addr = Register::Address<0x400f0028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MSK15_0; 
    }
    namespace Noneif2_msk1{
        using Addr = Register::Address<0x400f0088,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MSK15_0; 
    }
    namespace Noneif1_msk2{
        using Addr = Register::Address<0x400f002c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> MSK28_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MXTD; 
    }
    namespace Noneif2_msk2{
        using Addr = Register::Address<0x400f008c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> MSK28_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MXTD; 
    }
    namespace Noneif1_arb1{
        using Addr = Register::Address<0x400f0030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ID15_0; 
    }
    namespace Noneif2_arb1{
        using Addr = Register::Address<0x400f0090,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ID15_0; 
    }
    namespace Noneif1_arb2{
        using Addr = Register::Address<0x400f0034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ID28_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> XTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSGVAL; 
    }
    namespace Noneif2_arb2{
        using Addr = Register::Address<0x400f0094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ID28_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> XTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MSGVAL; 
    }
    namespace Noneif1_mctrl{
        using Addr = Register::Address<0x400f0038,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC3_0; 
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
    namespace Noneif2_mctrl{
        using Addr = Register::Address<0x400f0098,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC3_0; 
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
    namespace Noneif1_da1{
        using Addr = Register::Address<0x400f003c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA1; 
    }
    namespace Noneif2_da1{
        using Addr = Register::Address<0x400f009c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA1; 
    }
    namespace Noneif1_da2{
        using Addr = Register::Address<0x400f0040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA3; 
    }
    namespace Noneif2_da2{
        using Addr = Register::Address<0x400f00a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA3; 
    }
    namespace Noneif1_db1{
        using Addr = Register::Address<0x400f0044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA5; 
    }
    namespace Noneif2_db1{
        using Addr = Register::Address<0x400f00a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA5; 
    }
    namespace Noneif1_db2{
        using Addr = Register::Address<0x400f0048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA7; 
    }
    namespace Noneif2_db2{
        using Addr = Register::Address<0x400f00a8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA7; 
    }
    namespace Nonetxreq1{
        using Addr = Register::Address<0x400f0100,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXRQST16_1; 
    }
    namespace Nonetxreq2{
        using Addr = Register::Address<0x400f0104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXRQST32_17; 
    }
    namespace Nonend1{
        using Addr = Register::Address<0x400f0120,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NEWDAT16_1; 
    }
    namespace Nonend2{
        using Addr = Register::Address<0x400f0124,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NEWDAT32_17; 
    }
    namespace Noneir1{
        using Addr = Register::Address<0x400f0140,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INTPND16_1; 
    }
    namespace Noneir2{
        using Addr = Register::Address<0x400f0144,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INTPND32_17; 
    }
    namespace Nonemsgv1{
        using Addr = Register::Address<0x400f0160,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MSGVAL16_1; 
    }
    namespace Nonemsgv2{
        using Addr = Register::Address<0x400f0164,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MSGVAL32_17; 
    }
    namespace Noneclkdiv{
        using Addr = Register::Address<0x400f0180,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CLKDIVVAL; 
    }
}
