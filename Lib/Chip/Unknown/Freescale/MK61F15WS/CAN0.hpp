#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CAN0_mcr{
        using Addr = Register::Address<0x40024000,0x000ccc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> MAXMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> IDAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LPRIOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IRMQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SRXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> LPMACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> WRNEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SLFWAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SUPV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FRZACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SOFTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> WAKMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> NOTRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> HALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> RFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FRZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MDIS; 
    }
    namespace CAN0_ctrl1{
        using Addr = Register::Address<0x40024004,0x00000300>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PROPSEG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LBUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSYN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BOFFREC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RWRNMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TWRNMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CLKSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERRMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BOFFMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> PSEG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19)> PSEG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> RJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PRESDIV; 
    }
    namespace CAN0_timer{
        using Addr = Register::Address<0x40024008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIMER; 
    }
    namespace CAN0_rxmgmask{
        using Addr = Register::Address<0x40024010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MG; 
    }
    namespace CAN0_rx14mask{
        using Addr = Register::Address<0x40024014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RX14M; 
    }
    namespace CAN0_rx15mask{
        using Addr = Register::Address<0x40024018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RX15M; 
    }
    namespace CAN0_ecr{
        using Addr = Register::Address<0x4002401c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXERRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> RXERRCNT; 
    }
    namespace CAN0_esr1{
        using Addr = Register::Address<0x40024020,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERRINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BOFFINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> FLTCONF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXWRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TXWRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> STFERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FRMERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CRCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ACKERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BIT0ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BIT1ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RWRNINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TWRNINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SYNCH; 
    }
    namespace CAN0_imask2{
        using Addr = Register::Address<0x40024024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFHM; 
    }
    namespace CAN0_imask1{
        using Addr = Register::Address<0x40024028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFLM; 
    }
    namespace CAN0_iflag2{
        using Addr = Register::Address<0x4002402c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFHI; 
    }
    namespace CAN0_iflag1{
        using Addr = Register::Address<0x40024030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> BUF4TO0I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BUF5I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BUF6I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUF7I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> BUF31TO8I; 
    }
    namespace CAN0_ctrl2{
        using Addr = Register::Address<0x40024034,0xe000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> TASD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> RFFN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> WRMFRZ; 
    }
    namespace CAN0_esr2{
        using Addr = Register::Address<0x40024038,0xff809fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> VPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> LPTM; 
    }
    namespace CAN0_crcr{
        using Addr = Register::Address<0x40024044,0xff808000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> TXCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MBCRC; 
    }
    namespace CAN0_rxfgmask{
        using Addr = Register::Address<0x40024048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FGM; 
    }
    namespace CAN0_rxfir{
        using Addr = Register::Address<0x4002404c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> IDHIT; 
    }
    namespace CAN0_cs0{
        using Addr = Register::Address<0x40024080,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id0{
        using Addr = Register::Address<0x40024084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word00{
        using Addr = Register::Address<0x40024088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word10{
        using Addr = Register::Address<0x4002408c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs1{
        using Addr = Register::Address<0x40024090,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id1{
        using Addr = Register::Address<0x40024094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word01{
        using Addr = Register::Address<0x40024098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word11{
        using Addr = Register::Address<0x4002409c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs2{
        using Addr = Register::Address<0x400240a0,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id2{
        using Addr = Register::Address<0x400240a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word02{
        using Addr = Register::Address<0x400240a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word12{
        using Addr = Register::Address<0x400240ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs3{
        using Addr = Register::Address<0x400240b0,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id3{
        using Addr = Register::Address<0x400240b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word03{
        using Addr = Register::Address<0x400240b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word13{
        using Addr = Register::Address<0x400240bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs4{
        using Addr = Register::Address<0x400240c0,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id4{
        using Addr = Register::Address<0x400240c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word04{
        using Addr = Register::Address<0x400240c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word14{
        using Addr = Register::Address<0x400240cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs5{
        using Addr = Register::Address<0x400240d0,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id5{
        using Addr = Register::Address<0x400240d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word05{
        using Addr = Register::Address<0x400240d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word15{
        using Addr = Register::Address<0x400240dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs6{
        using Addr = Register::Address<0x400240e0,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id6{
        using Addr = Register::Address<0x400240e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word06{
        using Addr = Register::Address<0x400240e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word16{
        using Addr = Register::Address<0x400240ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs7{
        using Addr = Register::Address<0x400240f0,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id7{
        using Addr = Register::Address<0x400240f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word07{
        using Addr = Register::Address<0x400240f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word17{
        using Addr = Register::Address<0x400240fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs8{
        using Addr = Register::Address<0x40024100,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id8{
        using Addr = Register::Address<0x40024104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word08{
        using Addr = Register::Address<0x40024108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word18{
        using Addr = Register::Address<0x4002410c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs9{
        using Addr = Register::Address<0x40024110,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id9{
        using Addr = Register::Address<0x40024114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word09{
        using Addr = Register::Address<0x40024118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word19{
        using Addr = Register::Address<0x4002411c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs10{
        using Addr = Register::Address<0x40024120,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id10{
        using Addr = Register::Address<0x40024124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word010{
        using Addr = Register::Address<0x40024128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word110{
        using Addr = Register::Address<0x4002412c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs11{
        using Addr = Register::Address<0x40024130,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id11{
        using Addr = Register::Address<0x40024134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word011{
        using Addr = Register::Address<0x40024138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word111{
        using Addr = Register::Address<0x4002413c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs12{
        using Addr = Register::Address<0x40024140,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id12{
        using Addr = Register::Address<0x40024144,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word012{
        using Addr = Register::Address<0x40024148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word112{
        using Addr = Register::Address<0x4002414c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs13{
        using Addr = Register::Address<0x40024150,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id13{
        using Addr = Register::Address<0x40024154,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word013{
        using Addr = Register::Address<0x40024158,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word113{
        using Addr = Register::Address<0x4002415c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs14{
        using Addr = Register::Address<0x40024160,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id14{
        using Addr = Register::Address<0x40024164,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word014{
        using Addr = Register::Address<0x40024168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word114{
        using Addr = Register::Address<0x4002416c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_cs15{
        using Addr = Register::Address<0x40024170,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
    }
    namespace CAN0_id15{
        using Addr = Register::Address<0x40024174,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN0_word015{
        using Addr = Register::Address<0x40024178,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN0_word115{
        using Addr = Register::Address<0x4002417c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN0_rximr0{
        using Addr = Register::Address<0x40024880,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr1{
        using Addr = Register::Address<0x40024884,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr2{
        using Addr = Register::Address<0x40024888,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr3{
        using Addr = Register::Address<0x4002488c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr4{
        using Addr = Register::Address<0x40024890,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr5{
        using Addr = Register::Address<0x40024894,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr6{
        using Addr = Register::Address<0x40024898,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr7{
        using Addr = Register::Address<0x4002489c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr8{
        using Addr = Register::Address<0x400248a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr9{
        using Addr = Register::Address<0x400248a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr10{
        using Addr = Register::Address<0x400248a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr11{
        using Addr = Register::Address<0x400248ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr12{
        using Addr = Register::Address<0x400248b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr13{
        using Addr = Register::Address<0x400248b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr14{
        using Addr = Register::Address<0x400248b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN0_rximr15{
        using Addr = Register::Address<0x400248bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
}
