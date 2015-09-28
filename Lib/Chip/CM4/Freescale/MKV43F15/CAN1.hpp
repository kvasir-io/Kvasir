#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CAN1_mcr{
        using Addr = Register::Address<0x40025000,0x00004c80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> MAXMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> IDAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LPRIOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IRMQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SRXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DOZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> WAKSRC; 
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
    namespace CAN1_ctrl1{
        using Addr = Register::Address<0x40025004,0x00000300>;
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
    namespace CAN1_timer{
        using Addr = Register::Address<0x40025008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIMER; 
    }
    namespace CAN1_rxmgmask{
        using Addr = Register::Address<0x40025010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MG; 
    }
    namespace CAN1_rx14mask{
        using Addr = Register::Address<0x40025014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RX14M; 
    }
    namespace CAN1_rx15mask{
        using Addr = Register::Address<0x40025018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RX15M; 
    }
    namespace CAN1_ecr{
        using Addr = Register::Address<0x4002501c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXERRCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> RXERRCNT; 
    }
    namespace CAN1_esr1{
        using Addr = Register::Address<0x40025020,0xffd00000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> BOFFDONEINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERROVR; 
    }
    namespace CAN1_imask1{
        using Addr = Register::Address<0x40025028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUF31TO0M; 
    }
    namespace CAN1_iflag1{
        using Addr = Register::Address<0x40025030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUF0I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> BUF4TO1I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BUF5I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BUF6I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BUF7I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> BUF31TO8I; 
    }
    namespace CAN1_ctrl2{
        using Addr = Register::Address<0x40025034,0xb000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> TASD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> RFFN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BOFFDONEMSK; 
    }
    namespace CAN1_esr2{
        using Addr = Register::Address<0x40025038,0xff809fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> VPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> LPTM; 
    }
    namespace CAN1_crcr{
        using Addr = Register::Address<0x40025044,0xff808000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> TXCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> MBCRC; 
    }
    namespace CAN1_rxfgmask{
        using Addr = Register::Address<0x40025048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FGM; 
    }
    namespace CAN1_rxfir{
        using Addr = Register::Address<0x4002504c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> IDHIT; 
    }
    namespace CAN1_cbt{
        using Addr = Register::Address<0x40025050,0x00100000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> EPSEG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> EPSEG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> EPROPSEG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> ERJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,21)> EPRESDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> BTF; 
    }
    namespace CAN1_cs0{
        using Addr = Register::Address<0x40025080,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id0{
        using Addr = Register::Address<0x40025084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word00{
        using Addr = Register::Address<0x40025088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word10{
        using Addr = Register::Address<0x4002508c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs1{
        using Addr = Register::Address<0x40025090,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id1{
        using Addr = Register::Address<0x40025094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word01{
        using Addr = Register::Address<0x40025098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word11{
        using Addr = Register::Address<0x4002509c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs2{
        using Addr = Register::Address<0x400250a0,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id2{
        using Addr = Register::Address<0x400250a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word02{
        using Addr = Register::Address<0x400250a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word12{
        using Addr = Register::Address<0x400250ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs3{
        using Addr = Register::Address<0x400250b0,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id3{
        using Addr = Register::Address<0x400250b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word03{
        using Addr = Register::Address<0x400250b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word13{
        using Addr = Register::Address<0x400250bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs4{
        using Addr = Register::Address<0x400250c0,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id4{
        using Addr = Register::Address<0x400250c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word04{
        using Addr = Register::Address<0x400250c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word14{
        using Addr = Register::Address<0x400250cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs5{
        using Addr = Register::Address<0x400250d0,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id5{
        using Addr = Register::Address<0x400250d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word05{
        using Addr = Register::Address<0x400250d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word15{
        using Addr = Register::Address<0x400250dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs6{
        using Addr = Register::Address<0x400250e0,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id6{
        using Addr = Register::Address<0x400250e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word06{
        using Addr = Register::Address<0x400250e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word16{
        using Addr = Register::Address<0x400250ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs7{
        using Addr = Register::Address<0x400250f0,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id7{
        using Addr = Register::Address<0x400250f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word07{
        using Addr = Register::Address<0x400250f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word17{
        using Addr = Register::Address<0x400250fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs8{
        using Addr = Register::Address<0x40025100,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id8{
        using Addr = Register::Address<0x40025104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word08{
        using Addr = Register::Address<0x40025108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word18{
        using Addr = Register::Address<0x4002510c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs9{
        using Addr = Register::Address<0x40025110,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id9{
        using Addr = Register::Address<0x40025114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word09{
        using Addr = Register::Address<0x40025118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word19{
        using Addr = Register::Address<0x4002511c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs10{
        using Addr = Register::Address<0x40025120,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id10{
        using Addr = Register::Address<0x40025124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word010{
        using Addr = Register::Address<0x40025128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word110{
        using Addr = Register::Address<0x4002512c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs11{
        using Addr = Register::Address<0x40025130,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id11{
        using Addr = Register::Address<0x40025134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word011{
        using Addr = Register::Address<0x40025138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word111{
        using Addr = Register::Address<0x4002513c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs12{
        using Addr = Register::Address<0x40025140,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id12{
        using Addr = Register::Address<0x40025144,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word012{
        using Addr = Register::Address<0x40025148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word112{
        using Addr = Register::Address<0x4002514c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs13{
        using Addr = Register::Address<0x40025150,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id13{
        using Addr = Register::Address<0x40025154,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word013{
        using Addr = Register::Address<0x40025158,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word113{
        using Addr = Register::Address<0x4002515c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs14{
        using Addr = Register::Address<0x40025160,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id14{
        using Addr = Register::Address<0x40025164,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word014{
        using Addr = Register::Address<0x40025168,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word114{
        using Addr = Register::Address<0x4002516c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_cs15{
        using Addr = Register::Address<0x40025170,0x10800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TIME_STAMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> CODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ESI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EDL; 
    }
    namespace CAN1_id15{
        using Addr = Register::Address<0x40025174,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,0)> EXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,18)> STD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PRIO; 
    }
    namespace CAN1_word015{
        using Addr = Register::Address<0x40025178,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_0; 
    }
    namespace CAN1_word115{
        using Addr = Register::Address<0x4002517c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA_BYTE_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA_BYTE_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA_BYTE_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA_BYTE_4; 
    }
    namespace CAN1_rximr0{
        using Addr = Register::Address<0x40025880,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr1{
        using Addr = Register::Address<0x40025884,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr2{
        using Addr = Register::Address<0x40025888,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr3{
        using Addr = Register::Address<0x4002588c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr4{
        using Addr = Register::Address<0x40025890,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr5{
        using Addr = Register::Address<0x40025894,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr6{
        using Addr = Register::Address<0x40025898,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr7{
        using Addr = Register::Address<0x4002589c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr8{
        using Addr = Register::Address<0x400258a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr9{
        using Addr = Register::Address<0x400258a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr10{
        using Addr = Register::Address<0x400258a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr11{
        using Addr = Register::Address<0x400258ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr12{
        using Addr = Register::Address<0x400258b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr13{
        using Addr = Register::Address<0x400258b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr14{
        using Addr = Register::Address<0x400258b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
    namespace CAN1_rximr15{
        using Addr = Register::Address<0x400258bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MI; 
    }
}
