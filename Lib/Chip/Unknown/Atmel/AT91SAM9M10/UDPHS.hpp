#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace UDPHS_ctrl{
        using Addr = Register::Address<0xfff78000,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> DEV_ADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FADDR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EN_UDPHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DETACH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> REWAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PULLD_DIS; 
    }
    namespace UDPHS_fnum{
        using Addr = Register::Address<0xfff78004,0x7fffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MICRO_FRAME_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,3)> FRAME_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FNUM_ERR; 
    }
    namespace UDPHS_ien{
        using Addr = Register::Address<0xfff78010,0x81ff8001>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UDPHS_intsta{
        using Addr = Register::Address<0xfff78014,0x81ff8000>;
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMA_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DMA_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DMA_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DMA_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DMA_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMA_6; 
    }
    namespace UDPHS_clrint{
        using Addr = Register::Address<0xfff78018,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DET_SUSPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MICRO_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INT_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WAKE_UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDOFRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPSTR_RES; 
    }
    namespace UDPHS_eptrst{
        using Addr = Register::Address<0xfff7801c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPT_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPT_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPT_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPT_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPT_6; 
    }
    namespace UDPHS_tst{
        using Addr = Register::Address<0xfff780e0,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SPEED_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TST_J; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TST_K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TST_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OPMODE2; 
    }
    namespace UDPHS_eptcfg0{
        using Addr = Register::Address<0xfff78100,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb0{
        using Addr = Register::Address<0xfff78104,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff78104,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff78108,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff78108,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff7810c,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff7810c,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff78114,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta0_isoendpt{
        using Addr = Register::Address<0xfff78114,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta0{
        using Addr = Register::Address<0xfff78118,0xffff099f>;
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
        using Addr = Register::Address<0xfff78118,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta0{
        using Addr = Register::Address<0xfff7811c,0x0000001f>;
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
        using Addr = Register::Address<0xfff7811c,0x0000803f>;
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
        using Addr = Register::Address<0xfff78120,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb1{
        using Addr = Register::Address<0xfff78124,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff78124,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff78128,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff78128,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff7812c,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff7812c,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff78134,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta1_isoendpt{
        using Addr = Register::Address<0xfff78134,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta1{
        using Addr = Register::Address<0xfff78138,0xffff099f>;
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
        using Addr = Register::Address<0xfff78138,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta1{
        using Addr = Register::Address<0xfff7813c,0x0000001f>;
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
        using Addr = Register::Address<0xfff7813c,0x0000803f>;
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
        using Addr = Register::Address<0xfff78140,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb2{
        using Addr = Register::Address<0xfff78144,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff78144,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff78148,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff78148,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff7814c,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff7814c,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff78154,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta2_isoendpt{
        using Addr = Register::Address<0xfff78154,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta2{
        using Addr = Register::Address<0xfff78158,0xffff099f>;
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
        using Addr = Register::Address<0xfff78158,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta2{
        using Addr = Register::Address<0xfff7815c,0x0000001f>;
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
        using Addr = Register::Address<0xfff7815c,0x0000803f>;
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
        using Addr = Register::Address<0xfff78160,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb3{
        using Addr = Register::Address<0xfff78164,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff78164,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff78168,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff78168,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff7816c,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff7816c,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff78174,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta3_isoendpt{
        using Addr = Register::Address<0xfff78174,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta3{
        using Addr = Register::Address<0xfff78178,0xffff099f>;
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
        using Addr = Register::Address<0xfff78178,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta3{
        using Addr = Register::Address<0xfff7817c,0x0000001f>;
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
        using Addr = Register::Address<0xfff7817c,0x0000803f>;
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
        using Addr = Register::Address<0xfff78180,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb4{
        using Addr = Register::Address<0xfff78184,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff78184,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff78188,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff78188,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff7818c,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff7818c,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff78194,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta4_isoendpt{
        using Addr = Register::Address<0xfff78194,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta4{
        using Addr = Register::Address<0xfff78198,0xffff099f>;
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
        using Addr = Register::Address<0xfff78198,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta4{
        using Addr = Register::Address<0xfff7819c,0x0000001f>;
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
        using Addr = Register::Address<0xfff7819c,0x0000803f>;
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
        using Addr = Register::Address<0xfff781a0,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb5{
        using Addr = Register::Address<0xfff781a4,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff781a4,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff781a8,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff781a8,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff781ac,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff781ac,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff781b4,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta5_isoendpt{
        using Addr = Register::Address<0xfff781b4,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta5{
        using Addr = Register::Address<0xfff781b8,0xffff099f>;
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
        using Addr = Register::Address<0xfff781b8,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta5{
        using Addr = Register::Address<0xfff781bc,0x0000001f>;
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
        using Addr = Register::Address<0xfff781bc,0x0000803f>;
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
        using Addr = Register::Address<0xfff781c0,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb6{
        using Addr = Register::Address<0xfff781c4,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff781c4,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff781c8,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff781c8,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff781cc,0x7ffb00e4>;
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
        using Addr = Register::Address<0xfff781cc,0x7ffb8034>;
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
        using Addr = Register::Address<0xfff781d4,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta6_isoendpt{
        using Addr = Register::Address<0xfff781d4,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta6{
        using Addr = Register::Address<0xfff781d8,0xffff099f>;
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
        using Addr = Register::Address<0xfff781d8,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta6{
        using Addr = Register::Address<0xfff781dc,0x0000001f>;
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
        using Addr = Register::Address<0xfff781dc,0x0000803f>;
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
        using Addr = Register::Address<0xfff78300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress0{
        using Addr = Register::Address<0xfff78304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol0{
        using Addr = Register::Address<0xfff78308,0x0000ff00>;
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
        using Addr = Register::Address<0xfff7830c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc1{
        using Addr = Register::Address<0xfff78310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress1{
        using Addr = Register::Address<0xfff78314,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol1{
        using Addr = Register::Address<0xfff78318,0x0000ff00>;
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
        using Addr = Register::Address<0xfff7831c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc2{
        using Addr = Register::Address<0xfff78320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress2{
        using Addr = Register::Address<0xfff78324,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol2{
        using Addr = Register::Address<0xfff78328,0x0000ff00>;
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
        using Addr = Register::Address<0xfff7832c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc3{
        using Addr = Register::Address<0xfff78330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress3{
        using Addr = Register::Address<0xfff78334,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol3{
        using Addr = Register::Address<0xfff78338,0x0000ff00>;
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
        using Addr = Register::Address<0xfff7833c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc4{
        using Addr = Register::Address<0xfff78340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress4{
        using Addr = Register::Address<0xfff78344,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol4{
        using Addr = Register::Address<0xfff78348,0x0000ff00>;
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
        using Addr = Register::Address<0xfff7834c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc5{
        using Addr = Register::Address<0xfff78350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress5{
        using Addr = Register::Address<0xfff78354,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol5{
        using Addr = Register::Address<0xfff78358,0x0000ff00>;
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
        using Addr = Register::Address<0xfff7835c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
}
