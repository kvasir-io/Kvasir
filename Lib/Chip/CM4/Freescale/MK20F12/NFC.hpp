#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace NFC_cmd1{
        using Addr = Register::Address<0x400abf00,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BYTE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> BYTE2; 
    }
    namespace NFC_cmd2{
        using Addr = Register::Address<0x400abf04,0x000000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUSY_START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> BUFNO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> BYTE1; 
    }
    namespace NFC_car{
        using Addr = Register::Address<0x400abf08,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BYTE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> BYTE2; 
    }
    namespace NFC_rar{
        using Addr = Register::Address<0x400abf0c,0xcc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BYTE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> BYTE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> BYTE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CS1; 
    }
    namespace NFC_rpt{
        using Addr = Register::Address<0x400abf10,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COUNT; 
    }
    namespace NFC_rai{
        using Addr = Register::Address<0x400abf14,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> INC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> INC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> INC3; 
    }
    namespace NFC_sr1{
        using Addr = Register::Address<0x400abf18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> ID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ID1; 
    }
    namespace NFC_sr2{
        using Addr = Register::Address<0x400abf1c,0x00ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> STATUS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ID5; 
    }
    namespace NFC_dma1{
        using Addr = Register::Address<0x400abf20,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDRESS; 
    }
    namespace NFC_dmacfg{
        using Addr = Register::Address<0x400abf24,0x000001fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9)> OFFSET2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,13)> COUNT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> COUNT1; 
    }
    namespace NFC_swap{
        using Addr = Register::Address<0x400abf28,0xf001f001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,1)> ADDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,17)> ADDR1; 
    }
    namespace NFC_secsz{
        using Addr = Register::Address<0x400abf2c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> SIZE; 
    }
    namespace NFC_cfg{
        using Addr = Register::Address<0x400abf30,0x00000040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PAGECNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AIBN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AIAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BITWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> IDCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> ECCMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DMAREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ECCSRAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,22)> ECCAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> STOPWERR; 
    }
    namespace NFC_dma2{
        using Addr = Register::Address<0x400abf34,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDRESS; 
    }
    namespace NFC_isr{
        using Addr = Register::Address<0x400abf38,0x1001ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DMABN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> ECCBN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RESBN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IDLECLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DONECLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> WERRCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IDLEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DONEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> WERREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DMABUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ECCBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RESBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CMDBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> WERRNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WERR; 
    }
}
