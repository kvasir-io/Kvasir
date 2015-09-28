#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace UOTGHS_devctrl{
        using Addr = Register::Address<0x400ac000,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> UADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DETACH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RMWKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SPDCONF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TSTJ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TSTK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TSTPCKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OPMODE2; 
    }
    namespace UOTGHS_devisr{
        using Addr = Register::Address<0x400ac004,0x81c00f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EORST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EORSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UPRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEP_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEP_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEP_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEP_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PEP_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PEP_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PEP_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PEP_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PEP_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PEP_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UOTGHS_devicr{
        using Addr = Register::Address<0x400ac008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUSPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSOFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EORSTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WAKEUPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EORSMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UPRSMC; 
    }
    namespace UOTGHS_devifr{
        using Addr = Register::Address<0x400ac00c,0x81ffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUSPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSOFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EORSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WAKEUPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EORSMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UPRSMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UOTGHS_devimr{
        using Addr = Register::Address<0x400ac010,0x81c00f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUSPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSOFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EORSTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WAKEUPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EORSME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UPRSME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEP_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEP_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEP_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEP_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PEP_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PEP_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PEP_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PEP_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PEP_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PEP_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UOTGHS_devidr{
        using Addr = Register::Address<0x400ac014,0x81c00f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUSPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSOFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EORSTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WAKEUPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EORSMEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UPRSMEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEP_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEP_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEP_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEP_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PEP_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PEP_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PEP_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PEP_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PEP_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PEP_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UOTGHS_devier{
        using Addr = Register::Address<0x400ac018,0x81c00f80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUSPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSOFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EORSTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WAKEUPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EORSMES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UPRSMES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEP_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEP_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEP_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEP_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PEP_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PEP_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PEP_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PEP_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PEP_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PEP_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UOTGHS_devept{
        using Addr = Register::Address<0x400ac01c,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPRST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPRST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPRST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPRST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPRST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPRST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPRST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPRST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EPRST8; 
    }
    namespace UOTGHS_devfnum{
        using Addr = Register::Address<0x400ac020,0xffff4000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,3)> FNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FNCERR; 
    }
    namespace UOTGHS_deveptcfg0{
        using Addr = Register::Address<0x400ac100,0xffff8481>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> NBTRANS; 
    }
    namespace UOTGHS_deveptcfg1{
        using Addr = Register::Address<0x400ac104,0xffff8481>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> NBTRANS; 
    }
    namespace UOTGHS_deveptcfg2{
        using Addr = Register::Address<0x400ac108,0xffff8481>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> NBTRANS; 
    }
    namespace UOTGHS_deveptcfg3{
        using Addr = Register::Address<0x400ac10c,0xffff8481>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> NBTRANS; 
    }
    namespace UOTGHS_deveptcfg4{
        using Addr = Register::Address<0x400ac110,0xffff8481>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> NBTRANS; 
    }
    namespace UOTGHS_deveptcfg5{
        using Addr = Register::Address<0x400ac114,0xffff8481>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> NBTRANS; 
    }
    namespace UOTGHS_deveptcfg6{
        using Addr = Register::Address<0x400ac118,0xffff8481>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> NBTRANS; 
    }
    namespace UOTGHS_deveptcfg7{
        using Addr = Register::Address<0x400ac11c,0xffff8481>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> NBTRANS; 
    }
    namespace UOTGHS_deveptcfg8{
        using Addr = Register::Address<0x400ac120,0xffff8481>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> NBTRANS; 
    }
    namespace UOTGHS_deveptcfg9{
        using Addr = Register::Address<0x400ac124,0xffff8481>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EPBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> NBTRANS; 
    }
    namespace UOTGHS_deveptisr0{
        using Addr = Register::Address<0x400ac130,0x80080c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTRLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_deveptisr1{
        using Addr = Register::Address<0x400ac134,0x80080c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTRLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_deveptisr2{
        using Addr = Register::Address<0x400ac138,0x80080c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTRLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_deveptisr3{
        using Addr = Register::Address<0x400ac13c,0x80080c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTRLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_deveptisr4{
        using Addr = Register::Address<0x400ac140,0x80080c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTRLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_deveptisr5{
        using Addr = Register::Address<0x400ac144,0x80080c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTRLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_deveptisr6{
        using Addr = Register::Address<0x400ac148,0x80080c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTRLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_deveptisr7{
        using Addr = Register::Address<0x400ac14c,0x80080c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTRLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_deveptisr8{
        using Addr = Register::Address<0x400ac150,0x80080c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTRLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_deveptisr9{
        using Addr = Register::Address<0x400ac154,0x80080c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CTRLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_deveptisr0_isoenpt{
        using Addr = Register::Address<0x400ac130,0x800a0800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HBISOINERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HBISOFLUSHI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERRORTRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYCT; 
    }
    namespace UOTGHS_devepticr0{
        using Addr = Register::Address<0x400ac160,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_devepticr1{
        using Addr = Register::Address<0x400ac164,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_devepticr2{
        using Addr = Register::Address<0x400ac168,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_devepticr3{
        using Addr = Register::Address<0x400ac16c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_devepticr4{
        using Addr = Register::Address<0x400ac170,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_devepticr5{
        using Addr = Register::Address<0x400ac174,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_devepticr6{
        using Addr = Register::Address<0x400ac178,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_devepticr7{
        using Addr = Register::Address<0x400ac17c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_devepticr8{
        using Addr = Register::Address<0x400ac180,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_devepticr9{
        using Addr = Register::Address<0x400ac184,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_devepticr0_isoenpt{
        using Addr = Register::Address<0x400ac160,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HBISOINERRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HBISOFLUSHIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETC; 
    }
    namespace UOTGHS_deveptifr0{
        using Addr = Register::Address<0x400ac190,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptifr1{
        using Addr = Register::Address<0x400ac194,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptifr2{
        using Addr = Register::Address<0x400ac198,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptifr3{
        using Addr = Register::Address<0x400ac19c,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptifr4{
        using Addr = Register::Address<0x400ac1a0,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptifr5{
        using Addr = Register::Address<0x400ac1a4,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptifr6{
        using Addr = Register::Address<0x400ac1a8,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptifr7{
        using Addr = Register::Address<0x400ac1ac,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptifr8{
        using Addr = Register::Address<0x400ac1b0,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptifr9{
        using Addr = Register::Address<0x400ac1b4,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptifr0_isoenpt{
        using Addr = Register::Address<0x400ac190,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HBISOINERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HBISOFLUSHIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_deveptimr0{
        using Addr = Register::Address<0x400ac1c0,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQ; 
    }
    namespace UOTGHS_deveptimr1{
        using Addr = Register::Address<0x400ac1c4,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQ; 
    }
    namespace UOTGHS_deveptimr2{
        using Addr = Register::Address<0x400ac1c8,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQ; 
    }
    namespace UOTGHS_deveptimr3{
        using Addr = Register::Address<0x400ac1cc,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQ; 
    }
    namespace UOTGHS_deveptimr4{
        using Addr = Register::Address<0x400ac1d0,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQ; 
    }
    namespace UOTGHS_deveptimr5{
        using Addr = Register::Address<0x400ac1d4,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQ; 
    }
    namespace UOTGHS_deveptimr6{
        using Addr = Register::Address<0x400ac1d8,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQ; 
    }
    namespace UOTGHS_deveptimr7{
        using Addr = Register::Address<0x400ac1dc,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQ; 
    }
    namespace UOTGHS_deveptimr8{
        using Addr = Register::Address<0x400ac1e0,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQ; 
    }
    namespace UOTGHS_deveptimr9{
        using Addr = Register::Address<0x400ac1e4,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQ; 
    }
    namespace UOTGHS_deveptimr0_isoenpt{
        using Addr = Register::Address<0x400ac1c0,0xfffa8800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HBISOINERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HBISOFLUSHE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MDATAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DATAXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERRORTRANSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_deveptier0{
        using Addr = Register::Address<0x400ac1f0,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptier1{
        using Addr = Register::Address<0x400ac1f4,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptier2{
        using Addr = Register::Address<0x400ac1f8,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptier3{
        using Addr = Register::Address<0x400ac1fc,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptier4{
        using Addr = Register::Address<0x400ac200,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptier5{
        using Addr = Register::Address<0x400ac204,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptier6{
        using Addr = Register::Address<0x400ac208,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptier7{
        using Addr = Register::Address<0x400ac20c,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptier8{
        using Addr = Register::Address<0x400ac210,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptier9{
        using Addr = Register::Address<0x400ac214,0xfff08f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptier0_isoenpt{
        using Addr = Register::Address<0x400ac1f0,0xfff28800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HBISOINERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HBISOFLUSHES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MDATAES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DATAXES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERRORTRANSES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> KILLBKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQS; 
    }
    namespace UOTGHS_deveptidr0{
        using Addr = Register::Address<0x400ac220,0xfff4af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQC; 
    }
    namespace UOTGHS_deveptidr1{
        using Addr = Register::Address<0x400ac224,0xfff4af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQC; 
    }
    namespace UOTGHS_deveptidr2{
        using Addr = Register::Address<0x400ac228,0xfff4af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQC; 
    }
    namespace UOTGHS_deveptidr3{
        using Addr = Register::Address<0x400ac22c,0xfff4af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQC; 
    }
    namespace UOTGHS_deveptidr4{
        using Addr = Register::Address<0x400ac230,0xfff4af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQC; 
    }
    namespace UOTGHS_deveptidr5{
        using Addr = Register::Address<0x400ac234,0xfff4af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQC; 
    }
    namespace UOTGHS_deveptidr6{
        using Addr = Register::Address<0x400ac238,0xfff4af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQC; 
    }
    namespace UOTGHS_deveptidr7{
        using Addr = Register::Address<0x400ac23c,0xfff4af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQC; 
    }
    namespace UOTGHS_deveptidr8{
        using Addr = Register::Address<0x400ac240,0xfff4af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQC; 
    }
    namespace UOTGHS_deveptidr9{
        using Addr = Register::Address<0x400ac244,0xfff4af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NAKOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NYETDISC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> STALLRQC; 
    }
    namespace UOTGHS_deveptidr0_isoenpt{
        using Addr = Register::Address<0x400ac220,0xfffea800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HBISOINERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HBISOFLUSHEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MDATEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DATAXEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERRORTRANSEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPDISHDMAC; 
    }
    namespace UOTGHS_devdmanxtdsc1{
        using Addr = Register::Address<0x400ac310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_devdmaaddress1{
        using Addr = Register::Address<0x400ac314,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_devdmacontrol1{
        using Addr = Register::Address<0x400ac318,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_devdmastatus1{
        using Addr = Register::Address<0x400ac31c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_devdmanxtdsc2{
        using Addr = Register::Address<0x400ac320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_devdmaaddress2{
        using Addr = Register::Address<0x400ac324,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_devdmacontrol2{
        using Addr = Register::Address<0x400ac328,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_devdmastatus2{
        using Addr = Register::Address<0x400ac32c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_devdmanxtdsc3{
        using Addr = Register::Address<0x400ac330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_devdmaaddress3{
        using Addr = Register::Address<0x400ac334,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_devdmacontrol3{
        using Addr = Register::Address<0x400ac338,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_devdmastatus3{
        using Addr = Register::Address<0x400ac33c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_devdmanxtdsc4{
        using Addr = Register::Address<0x400ac340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_devdmaaddress4{
        using Addr = Register::Address<0x400ac344,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_devdmacontrol4{
        using Addr = Register::Address<0x400ac348,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_devdmastatus4{
        using Addr = Register::Address<0x400ac34c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_devdmanxtdsc5{
        using Addr = Register::Address<0x400ac350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_devdmaaddress5{
        using Addr = Register::Address<0x400ac354,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_devdmacontrol5{
        using Addr = Register::Address<0x400ac358,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_devdmastatus5{
        using Addr = Register::Address<0x400ac35c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_devdmanxtdsc6{
        using Addr = Register::Address<0x400ac360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_devdmaaddress6{
        using Addr = Register::Address<0x400ac364,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_devdmacontrol6{
        using Addr = Register::Address<0x400ac368,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_devdmastatus6{
        using Addr = Register::Address<0x400ac36c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_devdmanxtdsc7{
        using Addr = Register::Address<0x400ac370,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_devdmaaddress7{
        using Addr = Register::Address<0x400ac374,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_devdmacontrol7{
        using Addr = Register::Address<0x400ac378,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_devdmastatus7{
        using Addr = Register::Address<0x400ac37c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_hstctrl{
        using Addr = Register::Address<0x400ac400,0xffffc8ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SOFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RESUME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SPDCONF; 
    }
    namespace UOTGHS_hstisr{
        using Addr = Register::Address<0x400ac404,0x81fc0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCONNI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DDISCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSMEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRSMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HSOFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HWUPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEP_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PEP_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PEP_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PEP_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEP_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEP_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEP_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEP_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PEP_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PEP_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UOTGHS_hsticr{
        using Addr = Register::Address<0x400ac408,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCONNIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DDISCIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSMEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRSMIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HSOFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HWUPIC; 
    }
    namespace UOTGHS_hstifr{
        using Addr = Register::Address<0x400ac40c,0x81ffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCONNIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DDISCIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSMEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRSMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HSOFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HWUPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UOTGHS_hstimr{
        using Addr = Register::Address<0x400ac410,0x81fc0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCONNIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DDISCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSMEDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRSMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HSOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HWUPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEP_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PEP_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PEP_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PEP_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEP_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEP_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEP_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEP_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PEP_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PEP_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UOTGHS_hstidr{
        using Addr = Register::Address<0x400ac414,0x81fc0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCONNIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DDISCIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSMEDIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRSMIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HSOFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HWUPIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEP_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PEP_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PEP_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PEP_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEP_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEP_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEP_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEP_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PEP_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PEP_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UOTGHS_hstier{
        using Addr = Register::Address<0x400ac418,0x81fc0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCONNIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DDISCIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSMEDIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRSMIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HSOFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HWUPIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEP_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PEP_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PEP_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PEP_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEP_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEP_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEP_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEP_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PEP_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PEP_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UOTGHS_hstpip{
        using Addr = Register::Address<0x400ac41c,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PRST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PRST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PRST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PRST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PRST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PRST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PRST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PRST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PRST8; 
    }
    namespace UOTGHS_hstfnum{
        using Addr = Register::Address<0x400ac420,0xff00c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MFNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,3)> FNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> FLENHIGH; 
    }
    namespace UOTGHS_hstaddr1{
        using Addr = Register::Address<0x400ac424,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> HSTADDRP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> HSTADDRP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> HSTADDRP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> HSTADDRP3; 
    }
    namespace UOTGHS_hstaddr2{
        using Addr = Register::Address<0x400ac428,0x80808080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> HSTADDRP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> HSTADDRP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> HSTADDRP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24)> HSTADDRP7; 
    }
    namespace UOTGHS_hstaddr3{
        using Addr = Register::Address<0x400ac42c,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> HSTADDRP8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> HSTADDRP9; 
    }
    namespace UOTGHS_hstpipcfg0{
        using Addr = Register::Address<0x400ac500,0x00f0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTFRQ; 
    }
    namespace UOTGHS_hstpipcfg1{
        using Addr = Register::Address<0x400ac504,0x00f0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTFRQ; 
    }
    namespace UOTGHS_hstpipcfg2{
        using Addr = Register::Address<0x400ac508,0x00f0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTFRQ; 
    }
    namespace UOTGHS_hstpipcfg3{
        using Addr = Register::Address<0x400ac50c,0x00f0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTFRQ; 
    }
    namespace UOTGHS_hstpipcfg4{
        using Addr = Register::Address<0x400ac510,0x00f0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTFRQ; 
    }
    namespace UOTGHS_hstpipcfg5{
        using Addr = Register::Address<0x400ac514,0x00f0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTFRQ; 
    }
    namespace UOTGHS_hstpipcfg6{
        using Addr = Register::Address<0x400ac518,0x00f0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTFRQ; 
    }
    namespace UOTGHS_hstpipcfg7{
        using Addr = Register::Address<0x400ac51c,0x00f0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTFRQ; 
    }
    namespace UOTGHS_hstpipcfg8{
        using Addr = Register::Address<0x400ac520,0x00f0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTFRQ; 
    }
    namespace UOTGHS_hstpipcfg9{
        using Addr = Register::Address<0x400ac524,0x00f0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> INTFRQ; 
    }
    namespace UOTGHS_hstpipcfg0_hsbohscp{
        using Addr = Register::Address<0x400ac500,0x00e0c881>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALLOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AUTOSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> PTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PEPNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PINGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> BINTERVAL; 
    }
    namespace UOTGHS_hstpipisr0{
        using Addr = Register::Address<0x400ac530,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr1{
        using Addr = Register::Address<0x400ac534,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr2{
        using Addr = Register::Address<0x400ac538,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr3{
        using Addr = Register::Address<0x400ac53c,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr4{
        using Addr = Register::Address<0x400ac540,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr5{
        using Addr = Register::Address<0x400ac544,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr6{
        using Addr = Register::Address<0x400ac548,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr7{
        using Addr = Register::Address<0x400ac54c,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr8{
        using Addr = Register::Address<0x400ac550,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr9{
        using Addr = Register::Address<0x400ac554,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr0_intpipes{
        using Addr = Register::Address<0x400ac530,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipisr0_isopipes{
        using Addr = Register::Address<0x400ac530,0x800a0c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DTSEQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> NBUSYBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CURRBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CFGOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> PBYCT; 
    }
    namespace UOTGHS_hstpipicr0{
        using Addr = Register::Address<0x400ac560,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr1{
        using Addr = Register::Address<0x400ac564,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr2{
        using Addr = Register::Address<0x400ac568,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr3{
        using Addr = Register::Address<0x400ac56c,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr4{
        using Addr = Register::Address<0x400ac570,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr5{
        using Addr = Register::Address<0x400ac574,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr6{
        using Addr = Register::Address<0x400ac578,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr7{
        using Addr = Register::Address<0x400ac57c,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr8{
        using Addr = Register::Address<0x400ac580,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr9{
        using Addr = Register::Address<0x400ac584,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr0_intpipes{
        using Addr = Register::Address<0x400ac560,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipicr0_isopipes{
        using Addr = Register::Address<0x400ac560,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIC; 
    }
    namespace UOTGHS_hstpipifr0{
        using Addr = Register::Address<0x400ac590,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr1{
        using Addr = Register::Address<0x400ac594,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr2{
        using Addr = Register::Address<0x400ac598,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr3{
        using Addr = Register::Address<0x400ac59c,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr4{
        using Addr = Register::Address<0x400ac5a0,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr5{
        using Addr = Register::Address<0x400ac5a4,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr6{
        using Addr = Register::Address<0x400ac5a8,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr7{
        using Addr = Register::Address<0x400ac5ac,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr8{
        using Addr = Register::Address<0x400ac5b0,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr9{
        using Addr = Register::Address<0x400ac5b4,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr0_intpipes{
        using Addr = Register::Address<0x400ac590,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipifr0_isopipes{
        using Addr = Register::Address<0x400ac590,0xffffef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKS; 
    }
    namespace UOTGHS_hstpipimr0{
        using Addr = Register::Address<0x400ac5c0,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr1{
        using Addr = Register::Address<0x400ac5c4,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr2{
        using Addr = Register::Address<0x400ac5c8,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr3{
        using Addr = Register::Address<0x400ac5cc,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr4{
        using Addr = Register::Address<0x400ac5d0,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr5{
        using Addr = Register::Address<0x400ac5d4,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr6{
        using Addr = Register::Address<0x400ac5d8,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr7{
        using Addr = Register::Address<0x400ac5dc,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr8{
        using Addr = Register::Address<0x400ac5e0,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr9{
        using Addr = Register::Address<0x400ac5e4,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr0_intpipes{
        using Addr = Register::Address<0x400ac5c0,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipimr0_isopipes{
        using Addr = Register::Address<0x400ac5c0,0xfff8af00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDT; 
    }
    namespace UOTGHS_hstpipier0{
        using Addr = Register::Address<0x400ac5f0,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier1{
        using Addr = Register::Address<0x400ac5f4,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier2{
        using Addr = Register::Address<0x400ac5f8,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier3{
        using Addr = Register::Address<0x400ac5fc,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier4{
        using Addr = Register::Address<0x400ac600,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier5{
        using Addr = Register::Address<0x400ac604,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier6{
        using Addr = Register::Address<0x400ac608,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier7{
        using Addr = Register::Address<0x400ac60c,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier8{
        using Addr = Register::Address<0x400ac610,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier9{
        using Addr = Register::Address<0x400ac614,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier0_intpipes{
        using Addr = Register::Address<0x400ac5f0,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipier0_isopipes{
        using Addr = Register::Address<0x400ac5f0,0xfff8ef00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERRES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RSTDTS; 
    }
    namespace UOTGHS_hstpipidr0{
        using Addr = Register::Address<0x400ac620,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr1{
        using Addr = Register::Address<0x400ac624,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr2{
        using Addr = Register::Address<0x400ac628,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr3{
        using Addr = Register::Address<0x400ac62c,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr4{
        using Addr = Register::Address<0x400ac630,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr5{
        using Addr = Register::Address<0x400ac634,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr6{
        using Addr = Register::Address<0x400ac638,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr7{
        using Addr = Register::Address<0x400ac63c,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr8{
        using Addr = Register::Address<0x400ac640,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr9{
        using Addr = Register::Address<0x400ac644,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXSTPEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr0_intpipes{
        using Addr = Register::Address<0x400ac620,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXSTALLDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipidr0_isopipes{
        using Addr = Register::Address<0x400ac620,0xfffcaf00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXOUTEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UNDERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NAKEDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVERFIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CRCERREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHORTPACKETIEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NBUSYBKEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FIFOCONC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PDISHDMAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PFREEZEC; 
    }
    namespace UOTGHS_hstpipinrq0{
        using Addr = Register::Address<0x400ac650,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INMODE; 
    }
    namespace UOTGHS_hstpipinrq1{
        using Addr = Register::Address<0x400ac654,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INMODE; 
    }
    namespace UOTGHS_hstpipinrq2{
        using Addr = Register::Address<0x400ac658,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INMODE; 
    }
    namespace UOTGHS_hstpipinrq3{
        using Addr = Register::Address<0x400ac65c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INMODE; 
    }
    namespace UOTGHS_hstpipinrq4{
        using Addr = Register::Address<0x400ac660,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INMODE; 
    }
    namespace UOTGHS_hstpipinrq5{
        using Addr = Register::Address<0x400ac664,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INMODE; 
    }
    namespace UOTGHS_hstpipinrq6{
        using Addr = Register::Address<0x400ac668,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INMODE; 
    }
    namespace UOTGHS_hstpipinrq7{
        using Addr = Register::Address<0x400ac66c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INMODE; 
    }
    namespace UOTGHS_hstpipinrq8{
        using Addr = Register::Address<0x400ac670,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INMODE; 
    }
    namespace UOTGHS_hstpipinrq9{
        using Addr = Register::Address<0x400ac674,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INMODE; 
    }
    namespace UOTGHS_hstpiperr0{
        using Addr = Register::Address<0x400ac680,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATATGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> COUNTER; 
    }
    namespace UOTGHS_hstpiperr1{
        using Addr = Register::Address<0x400ac684,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATATGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> COUNTER; 
    }
    namespace UOTGHS_hstpiperr2{
        using Addr = Register::Address<0x400ac688,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATATGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> COUNTER; 
    }
    namespace UOTGHS_hstpiperr3{
        using Addr = Register::Address<0x400ac68c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATATGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> COUNTER; 
    }
    namespace UOTGHS_hstpiperr4{
        using Addr = Register::Address<0x400ac690,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATATGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> COUNTER; 
    }
    namespace UOTGHS_hstpiperr5{
        using Addr = Register::Address<0x400ac694,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATATGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> COUNTER; 
    }
    namespace UOTGHS_hstpiperr6{
        using Addr = Register::Address<0x400ac698,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATATGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> COUNTER; 
    }
    namespace UOTGHS_hstpiperr7{
        using Addr = Register::Address<0x400ac69c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATATGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> COUNTER; 
    }
    namespace UOTGHS_hstpiperr8{
        using Addr = Register::Address<0x400ac6a0,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATATGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> COUNTER; 
    }
    namespace UOTGHS_hstpiperr9{
        using Addr = Register::Address<0x400ac6a4,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATATGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATAPID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> COUNTER; 
    }
    namespace UOTGHS_hstdmanxtdsc1{
        using Addr = Register::Address<0x400ac710,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_hstdmaaddress1{
        using Addr = Register::Address<0x400ac714,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_hstdmacontrol1{
        using Addr = Register::Address<0x400ac718,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_hstdmastatus1{
        using Addr = Register::Address<0x400ac71c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_hstdmanxtdsc2{
        using Addr = Register::Address<0x400ac720,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_hstdmaaddress2{
        using Addr = Register::Address<0x400ac724,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_hstdmacontrol2{
        using Addr = Register::Address<0x400ac728,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_hstdmastatus2{
        using Addr = Register::Address<0x400ac72c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_hstdmanxtdsc3{
        using Addr = Register::Address<0x400ac730,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_hstdmaaddress3{
        using Addr = Register::Address<0x400ac734,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_hstdmacontrol3{
        using Addr = Register::Address<0x400ac738,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_hstdmastatus3{
        using Addr = Register::Address<0x400ac73c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_hstdmanxtdsc4{
        using Addr = Register::Address<0x400ac740,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_hstdmaaddress4{
        using Addr = Register::Address<0x400ac744,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_hstdmacontrol4{
        using Addr = Register::Address<0x400ac748,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_hstdmastatus4{
        using Addr = Register::Address<0x400ac74c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_hstdmanxtdsc5{
        using Addr = Register::Address<0x400ac750,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_hstdmaaddress5{
        using Addr = Register::Address<0x400ac754,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_hstdmacontrol5{
        using Addr = Register::Address<0x400ac758,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_hstdmastatus5{
        using Addr = Register::Address<0x400ac75c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_hstdmanxtdsc6{
        using Addr = Register::Address<0x400ac760,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_hstdmaaddress6{
        using Addr = Register::Address<0x400ac764,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_hstdmacontrol6{
        using Addr = Register::Address<0x400ac768,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_hstdmastatus6{
        using Addr = Register::Address<0x400ac76c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_hstdmanxtdsc7{
        using Addr = Register::Address<0x400ac770,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UOTGHS_hstdmaaddress7{
        using Addr = Register::Address<0x400ac774,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UOTGHS_hstdmacontrol7{
        using Addr = Register::Address<0x400ac778,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LDNXT_DSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> END_TR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> END_B_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BUFFIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LD_IT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BURST_LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_LENGTH; 
    }
    namespace UOTGHS_hstdmastatus7{
        using Addr = Register::Address<0x400ac77c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UOTGHS_ctrl{
        using Addr = Register::Address<0x400ac800,0xfc8c0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IDTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VBUSTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VBERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BCERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ROLEEXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HNPERRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> VBUSHWC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SRPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SRPREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HNPREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OTGPADE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> VBUSPO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FRZCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> USBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TIMVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIMPAGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> UNLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> UIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> UIMOD; 
    }
    namespace UOTGHS_sr{
        using Addr = Register::Address<0x400ac804,0xffff8100>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IDTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VBUSTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VBERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BCERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ROLEEXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HNPERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STOI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> VBUSRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> VBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SPEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CLKUSABLE; 
    }
    namespace UOTGHS_scr{
        using Addr = Register::Address<0x400ac808,0xfffffd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IDTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VBUSTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRPIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VBERRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BCERRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ROLEEXIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HNPERRIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STOIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> VBUSRQC; 
    }
    namespace UOTGHS_sfr{
        using Addr = Register::Address<0x400ac80c,0xfffffd00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IDTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VBUSTIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRPIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> VBERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BCERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ROLEEXIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HNPERRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STOIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> VBUSRQS; 
    }
    namespace UOTGHS_fsm{
        using Addr = Register::Address<0x400ac82c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DRDSTATE; 
    }
}
