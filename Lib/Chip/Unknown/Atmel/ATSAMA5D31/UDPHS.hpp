#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace UDPHS_ctrl{
        using Addr = Register::Address<0xf8030000,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> DEV_ADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FADDR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EN_UDPHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DETACH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> REWAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PULLD_DIS; 
    }
    namespace UDPHS_fnum{
        using Addr = Register::Address<0xf8030004,0x7fffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MICRO_FRAME_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,3)> FRAME_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FNUM_ERR; 
    }
    namespace UDPHS_ien{
        using Addr = Register::Address<0xf8030010,0x01000001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DET_SUSPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MICRO_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INT_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WAKE_UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDOFRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPSTR_RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPT_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPT_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPT_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPT_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPT_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPT_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPT_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPT_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPT_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPT_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPT_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPT_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPT_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPT_13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPT_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPT_15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DMA_7; 
    }
    namespace UDPHS_intsta{
        using Addr = Register::Address<0xf8030014,0x01000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SPEED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DET_SUSPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MICRO_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INT_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WAKE_UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDOFRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPSTR_RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPT_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPT_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPT_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPT_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPT_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPT_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPT_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPT_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EPT_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> EPT_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EPT_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> EPT_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EPT_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EPT_13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EPT_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> EPT_15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DMA_7; 
    }
    namespace UDPHS_clrint{
        using Addr = Register::Address<0xf8030018,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DET_SUSPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MICRO_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INT_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WAKE_UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDOFRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPSTR_RES; 
    }
    namespace UDPHS_eptrst{
        using Addr = Register::Address<0xf803001c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPT_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPT_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPT_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPT_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPT_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EPT_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EPT_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EPT_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EPT_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EPT_11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EPT_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EPT_13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EPT_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPT_15; 
    }
    namespace UDPHS_tst{
        using Addr = Register::Address<0xf80300e0,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SPEED_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TST_J; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TST_K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TST_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OPMODE2; 
    }
    namespace UDPHS_eptcfg0{
        using Addr = Register::Address<0xf8030100,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb0{
        using Addr = Register::Address<0xf8030104,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb0_isoendpt{
        using Addr = Register::Address<0xf8030104,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis0{
        using Addr = Register::Address<0xf8030108,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis0_isoendpt{
        using Addr = Register::Address<0xf8030108,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl0{
        using Addr = Register::Address<0xf803010c,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl0_isoendpt{
        using Addr = Register::Address<0xf803010c,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta0{
        using Addr = Register::Address<0xf8030114,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta0_isoendpt{
        using Addr = Register::Address<0xf8030114,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta0{
        using Addr = Register::Address<0xf8030118,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta0_isoendpt{
        using Addr = Register::Address<0xf8030118,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta0{
        using Addr = Register::Address<0xf803011c,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta0_isoendpt{
        using Addr = Register::Address<0xf803011c,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg1{
        using Addr = Register::Address<0xf8030120,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb1{
        using Addr = Register::Address<0xf8030124,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb1_isoendpt{
        using Addr = Register::Address<0xf8030124,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis1{
        using Addr = Register::Address<0xf8030128,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis1_isoendpt{
        using Addr = Register::Address<0xf8030128,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl1{
        using Addr = Register::Address<0xf803012c,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl1_isoendpt{
        using Addr = Register::Address<0xf803012c,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta1{
        using Addr = Register::Address<0xf8030134,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta1_isoendpt{
        using Addr = Register::Address<0xf8030134,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta1{
        using Addr = Register::Address<0xf8030138,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta1_isoendpt{
        using Addr = Register::Address<0xf8030138,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta1{
        using Addr = Register::Address<0xf803013c,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta1_isoendpt{
        using Addr = Register::Address<0xf803013c,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg2{
        using Addr = Register::Address<0xf8030140,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb2{
        using Addr = Register::Address<0xf8030144,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb2_isoendpt{
        using Addr = Register::Address<0xf8030144,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis2{
        using Addr = Register::Address<0xf8030148,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis2_isoendpt{
        using Addr = Register::Address<0xf8030148,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl2{
        using Addr = Register::Address<0xf803014c,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl2_isoendpt{
        using Addr = Register::Address<0xf803014c,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta2{
        using Addr = Register::Address<0xf8030154,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta2_isoendpt{
        using Addr = Register::Address<0xf8030154,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta2{
        using Addr = Register::Address<0xf8030158,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta2_isoendpt{
        using Addr = Register::Address<0xf8030158,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta2{
        using Addr = Register::Address<0xf803015c,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta2_isoendpt{
        using Addr = Register::Address<0xf803015c,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg3{
        using Addr = Register::Address<0xf8030160,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb3{
        using Addr = Register::Address<0xf8030164,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb3_isoendpt{
        using Addr = Register::Address<0xf8030164,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis3{
        using Addr = Register::Address<0xf8030168,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis3_isoendpt{
        using Addr = Register::Address<0xf8030168,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl3{
        using Addr = Register::Address<0xf803016c,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl3_isoendpt{
        using Addr = Register::Address<0xf803016c,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta3{
        using Addr = Register::Address<0xf8030174,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta3_isoendpt{
        using Addr = Register::Address<0xf8030174,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta3{
        using Addr = Register::Address<0xf8030178,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta3_isoendpt{
        using Addr = Register::Address<0xf8030178,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta3{
        using Addr = Register::Address<0xf803017c,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta3_isoendpt{
        using Addr = Register::Address<0xf803017c,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg4{
        using Addr = Register::Address<0xf8030180,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb4{
        using Addr = Register::Address<0xf8030184,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb4_isoendpt{
        using Addr = Register::Address<0xf8030184,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis4{
        using Addr = Register::Address<0xf8030188,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis4_isoendpt{
        using Addr = Register::Address<0xf8030188,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl4{
        using Addr = Register::Address<0xf803018c,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl4_isoendpt{
        using Addr = Register::Address<0xf803018c,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta4{
        using Addr = Register::Address<0xf8030194,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta4_isoendpt{
        using Addr = Register::Address<0xf8030194,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta4{
        using Addr = Register::Address<0xf8030198,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta4_isoendpt{
        using Addr = Register::Address<0xf8030198,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta4{
        using Addr = Register::Address<0xf803019c,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta4_isoendpt{
        using Addr = Register::Address<0xf803019c,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg5{
        using Addr = Register::Address<0xf80301a0,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb5{
        using Addr = Register::Address<0xf80301a4,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb5_isoendpt{
        using Addr = Register::Address<0xf80301a4,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis5{
        using Addr = Register::Address<0xf80301a8,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis5_isoendpt{
        using Addr = Register::Address<0xf80301a8,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl5{
        using Addr = Register::Address<0xf80301ac,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl5_isoendpt{
        using Addr = Register::Address<0xf80301ac,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta5{
        using Addr = Register::Address<0xf80301b4,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta5_isoendpt{
        using Addr = Register::Address<0xf80301b4,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta5{
        using Addr = Register::Address<0xf80301b8,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta5_isoendpt{
        using Addr = Register::Address<0xf80301b8,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta5{
        using Addr = Register::Address<0xf80301bc,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta5_isoendpt{
        using Addr = Register::Address<0xf80301bc,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg6{
        using Addr = Register::Address<0xf80301c0,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb6{
        using Addr = Register::Address<0xf80301c4,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb6_isoendpt{
        using Addr = Register::Address<0xf80301c4,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis6{
        using Addr = Register::Address<0xf80301c8,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis6_isoendpt{
        using Addr = Register::Address<0xf80301c8,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl6{
        using Addr = Register::Address<0xf80301cc,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl6_isoendpt{
        using Addr = Register::Address<0xf80301cc,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta6{
        using Addr = Register::Address<0xf80301d4,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta6_isoendpt{
        using Addr = Register::Address<0xf80301d4,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta6{
        using Addr = Register::Address<0xf80301d8,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta6_isoendpt{
        using Addr = Register::Address<0xf80301d8,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta6{
        using Addr = Register::Address<0xf80301dc,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta6_isoendpt{
        using Addr = Register::Address<0xf80301dc,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg7{
        using Addr = Register::Address<0xf80301e0,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb7{
        using Addr = Register::Address<0xf80301e4,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb7_isoendpt{
        using Addr = Register::Address<0xf80301e4,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis7{
        using Addr = Register::Address<0xf80301e8,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis7_isoendpt{
        using Addr = Register::Address<0xf80301e8,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl7{
        using Addr = Register::Address<0xf80301ec,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl7_isoendpt{
        using Addr = Register::Address<0xf80301ec,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta7{
        using Addr = Register::Address<0xf80301f4,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta7_isoendpt{
        using Addr = Register::Address<0xf80301f4,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta7{
        using Addr = Register::Address<0xf80301f8,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta7_isoendpt{
        using Addr = Register::Address<0xf80301f8,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta7{
        using Addr = Register::Address<0xf80301fc,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta7_isoendpt{
        using Addr = Register::Address<0xf80301fc,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg8{
        using Addr = Register::Address<0xf8030200,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb8{
        using Addr = Register::Address<0xf8030204,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb8_isoendpt{
        using Addr = Register::Address<0xf8030204,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis8{
        using Addr = Register::Address<0xf8030208,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis8_isoendpt{
        using Addr = Register::Address<0xf8030208,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl8{
        using Addr = Register::Address<0xf803020c,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl8_isoendpt{
        using Addr = Register::Address<0xf803020c,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta8{
        using Addr = Register::Address<0xf8030214,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta8_isoendpt{
        using Addr = Register::Address<0xf8030214,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta8{
        using Addr = Register::Address<0xf8030218,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta8_isoendpt{
        using Addr = Register::Address<0xf8030218,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta8{
        using Addr = Register::Address<0xf803021c,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta8_isoendpt{
        using Addr = Register::Address<0xf803021c,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg9{
        using Addr = Register::Address<0xf8030220,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb9{
        using Addr = Register::Address<0xf8030224,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb9_isoendpt{
        using Addr = Register::Address<0xf8030224,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis9{
        using Addr = Register::Address<0xf8030228,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis9_isoendpt{
        using Addr = Register::Address<0xf8030228,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl9{
        using Addr = Register::Address<0xf803022c,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl9_isoendpt{
        using Addr = Register::Address<0xf803022c,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta9{
        using Addr = Register::Address<0xf8030234,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta9_isoendpt{
        using Addr = Register::Address<0xf8030234,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta9{
        using Addr = Register::Address<0xf8030238,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta9_isoendpt{
        using Addr = Register::Address<0xf8030238,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta9{
        using Addr = Register::Address<0xf803023c,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta9_isoendpt{
        using Addr = Register::Address<0xf803023c,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg10{
        using Addr = Register::Address<0xf8030240,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb10{
        using Addr = Register::Address<0xf8030244,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb10_isoendpt{
        using Addr = Register::Address<0xf8030244,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis10{
        using Addr = Register::Address<0xf8030248,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis10_isoendpt{
        using Addr = Register::Address<0xf8030248,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl10{
        using Addr = Register::Address<0xf803024c,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl10_isoendpt{
        using Addr = Register::Address<0xf803024c,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta10{
        using Addr = Register::Address<0xf8030254,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta10_isoendpt{
        using Addr = Register::Address<0xf8030254,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta10{
        using Addr = Register::Address<0xf8030258,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta10_isoendpt{
        using Addr = Register::Address<0xf8030258,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta10{
        using Addr = Register::Address<0xf803025c,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta10_isoendpt{
        using Addr = Register::Address<0xf803025c,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg11{
        using Addr = Register::Address<0xf8030260,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb11{
        using Addr = Register::Address<0xf8030264,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb11_isoendpt{
        using Addr = Register::Address<0xf8030264,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis11{
        using Addr = Register::Address<0xf8030268,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis11_isoendpt{
        using Addr = Register::Address<0xf8030268,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl11{
        using Addr = Register::Address<0xf803026c,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl11_isoendpt{
        using Addr = Register::Address<0xf803026c,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta11{
        using Addr = Register::Address<0xf8030274,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta11_isoendpt{
        using Addr = Register::Address<0xf8030274,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta11{
        using Addr = Register::Address<0xf8030278,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta11_isoendpt{
        using Addr = Register::Address<0xf8030278,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta11{
        using Addr = Register::Address<0xf803027c,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta11_isoendpt{
        using Addr = Register::Address<0xf803027c,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg12{
        using Addr = Register::Address<0xf8030280,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb12{
        using Addr = Register::Address<0xf8030284,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb12_isoendpt{
        using Addr = Register::Address<0xf8030284,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis12{
        using Addr = Register::Address<0xf8030288,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis12_isoendpt{
        using Addr = Register::Address<0xf8030288,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl12{
        using Addr = Register::Address<0xf803028c,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl12_isoendpt{
        using Addr = Register::Address<0xf803028c,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta12{
        using Addr = Register::Address<0xf8030294,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta12_isoendpt{
        using Addr = Register::Address<0xf8030294,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta12{
        using Addr = Register::Address<0xf8030298,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta12_isoendpt{
        using Addr = Register::Address<0xf8030298,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta12{
        using Addr = Register::Address<0xf803029c,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta12_isoendpt{
        using Addr = Register::Address<0xf803029c,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg13{
        using Addr = Register::Address<0xf80302a0,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb13{
        using Addr = Register::Address<0xf80302a4,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb13_isoendpt{
        using Addr = Register::Address<0xf80302a4,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis13{
        using Addr = Register::Address<0xf80302a8,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis13_isoendpt{
        using Addr = Register::Address<0xf80302a8,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl13{
        using Addr = Register::Address<0xf80302ac,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl13_isoendpt{
        using Addr = Register::Address<0xf80302ac,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta13{
        using Addr = Register::Address<0xf80302b4,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta13_isoendpt{
        using Addr = Register::Address<0xf80302b4,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta13{
        using Addr = Register::Address<0xf80302b8,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta13_isoendpt{
        using Addr = Register::Address<0xf80302b8,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta13{
        using Addr = Register::Address<0xf80302bc,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta13_isoendpt{
        using Addr = Register::Address<0xf80302bc,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg14{
        using Addr = Register::Address<0xf80302c0,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb14{
        using Addr = Register::Address<0xf80302c4,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb14_isoendpt{
        using Addr = Register::Address<0xf80302c4,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis14{
        using Addr = Register::Address<0xf80302c8,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis14_isoendpt{
        using Addr = Register::Address<0xf80302c8,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl14{
        using Addr = Register::Address<0xf80302cc,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl14_isoendpt{
        using Addr = Register::Address<0xf80302cc,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta14{
        using Addr = Register::Address<0xf80302d4,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta14_isoendpt{
        using Addr = Register::Address<0xf80302d4,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta14{
        using Addr = Register::Address<0xf80302d8,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta14_isoendpt{
        using Addr = Register::Address<0xf80302d8,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta14{
        using Addr = Register::Address<0xf80302dc,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta14_isoendpt{
        using Addr = Register::Address<0xf80302dc,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptcfg15{
        using Addr = Register::Address<0xf80302e0,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb15{
        using Addr = Register::Address<0xf80302e4,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctlenb15_isoendpt{
        using Addr = Register::Address<0xf80302e4,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis15{
        using Addr = Register::Address<0xf80302e8,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctldis15_isoendpt{
        using Addr = Register::Address<0xf80302e8,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_DISABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl15{
        using Addr = Register::Address<0xf80302ec,0x7ffb00e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NYET_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptctl15_isoendpt{
        using Addr = Register::Address<0xf80302ec,0x7ffb8034>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_ENABL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTO_VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INTDIS_DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATAX_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MDATA_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> BUSY_BANK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsetsta15{
        using Addr = Register::Address<0xf80302f4,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta15_isoendpt{
        using Addr = Register::Address<0xf80302f4,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta15{
        using Addr = Register::Address<0xf80302f8,0xffff099f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
    }
    namespace UDPHS_eptclrsta15_isoendpt{
        using Addr = Register::Address<0xf80302f8,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta15{
        using Addr = Register::Address<0xf80302fc,0x0000001f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RX_SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> STALL_SNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> NAK_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NAK_OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK_CTLDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_eptsta15_isoendpt{
        using Addr = Register::Address<0xf80302fc,0x0000803f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TOGGLESQ_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERR_OVFLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CURBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> BUSY_BANK_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,20)> BYTE_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SHRT_PCKT; 
    }
    namespace UDPHS_dmanxtdsc0{
        using Addr = Register::Address<0xf8030300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress0{
        using Addr = Register::Address<0xf8030304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol0{
        using Addr = Register::Address<0xf8030308,0x0000ff00>;
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
    namespace UDPHS_dmastatus0{
        using Addr = Register::Address<0xf803030c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc1{
        using Addr = Register::Address<0xf8030310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress1{
        using Addr = Register::Address<0xf8030314,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol1{
        using Addr = Register::Address<0xf8030318,0x0000ff00>;
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
    namespace UDPHS_dmastatus1{
        using Addr = Register::Address<0xf803031c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc2{
        using Addr = Register::Address<0xf8030320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress2{
        using Addr = Register::Address<0xf8030324,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol2{
        using Addr = Register::Address<0xf8030328,0x0000ff00>;
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
    namespace UDPHS_dmastatus2{
        using Addr = Register::Address<0xf803032c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc3{
        using Addr = Register::Address<0xf8030330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress3{
        using Addr = Register::Address<0xf8030334,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol3{
        using Addr = Register::Address<0xf8030338,0x0000ff00>;
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
    namespace UDPHS_dmastatus3{
        using Addr = Register::Address<0xf803033c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc4{
        using Addr = Register::Address<0xf8030340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress4{
        using Addr = Register::Address<0xf8030344,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol4{
        using Addr = Register::Address<0xf8030348,0x0000ff00>;
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
    namespace UDPHS_dmastatus4{
        using Addr = Register::Address<0xf803034c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc5{
        using Addr = Register::Address<0xf8030350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress5{
        using Addr = Register::Address<0xf8030354,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol5{
        using Addr = Register::Address<0xf8030358,0x0000ff00>;
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
    namespace UDPHS_dmastatus5{
        using Addr = Register::Address<0xf803035c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc6{
        using Addr = Register::Address<0xf8030360,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress6{
        using Addr = Register::Address<0xf8030364,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol6{
        using Addr = Register::Address<0xf8030368,0x0000ff00>;
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
    namespace UDPHS_dmastatus6{
        using Addr = Register::Address<0xf803036c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
}
