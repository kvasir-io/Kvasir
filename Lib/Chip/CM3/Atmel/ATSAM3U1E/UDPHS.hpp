#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace UDPHS_ctrl{
        using Addr = Register::Address<0x400a4000,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> DEV_ADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FADDR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EN_UDPHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DETACH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> REWAKEUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PULLD_DIS; 
    }
    namespace UDPHS_fnum{
        using Addr = Register::Address<0x400a4004,0x7fffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MICRO_FRAME_NUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,3)> FRAME_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FNUM_ERR; 
    }
    namespace UDPHS_ien{
        using Addr = Register::Address<0x400a4010,0x81ff8001>;
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
        using Addr = Register::Address<0x400a4014,0x81ff8000>;
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
        using Addr = Register::Address<0x400a4018,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DET_SUSPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MICRO_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INT_SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENDRESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> WAKE_UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENDOFRSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UPSTR_RES; 
    }
    namespace UDPHS_eptrst{
        using Addr = Register::Address<0x400a401c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPT_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPT_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPT_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPT_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPT_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EPT_6; 
    }
    namespace UDPHS_tst{
        using Addr = Register::Address<0x400a40e0,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SPEED_CFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TST_J; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TST_K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TST_PKT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OPMODE2; 
    }
    namespace UDPHS_eptcfg0{
        using Addr = Register::Address<0x400a4100,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb0{
        using Addr = Register::Address<0x400a4104,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a4104,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a4108,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a4108,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a410c,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a410c,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a4114,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta0_isoendpt{
        using Addr = Register::Address<0x400a4114,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta0{
        using Addr = Register::Address<0x400a4118,0xffff099f>;
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
        using Addr = Register::Address<0x400a4118,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta0{
        using Addr = Register::Address<0x400a411c,0x0000001f>;
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
        using Addr = Register::Address<0x400a411c,0x0000803f>;
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
        using Addr = Register::Address<0x400a4120,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb1{
        using Addr = Register::Address<0x400a4124,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a4124,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a4128,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a4128,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a412c,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a412c,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a4134,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta1_isoendpt{
        using Addr = Register::Address<0x400a4134,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta1{
        using Addr = Register::Address<0x400a4138,0xffff099f>;
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
        using Addr = Register::Address<0x400a4138,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta1{
        using Addr = Register::Address<0x400a413c,0x0000001f>;
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
        using Addr = Register::Address<0x400a413c,0x0000803f>;
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
        using Addr = Register::Address<0x400a4140,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb2{
        using Addr = Register::Address<0x400a4144,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a4144,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a4148,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a4148,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a414c,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a414c,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a4154,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta2_isoendpt{
        using Addr = Register::Address<0x400a4154,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta2{
        using Addr = Register::Address<0x400a4158,0xffff099f>;
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
        using Addr = Register::Address<0x400a4158,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta2{
        using Addr = Register::Address<0x400a415c,0x0000001f>;
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
        using Addr = Register::Address<0x400a415c,0x0000803f>;
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
        using Addr = Register::Address<0x400a4160,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb3{
        using Addr = Register::Address<0x400a4164,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a4164,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a4168,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a4168,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a416c,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a416c,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a4174,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta3_isoendpt{
        using Addr = Register::Address<0x400a4174,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta3{
        using Addr = Register::Address<0x400a4178,0xffff099f>;
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
        using Addr = Register::Address<0x400a4178,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta3{
        using Addr = Register::Address<0x400a417c,0x0000001f>;
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
        using Addr = Register::Address<0x400a417c,0x0000803f>;
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
        using Addr = Register::Address<0x400a4180,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb4{
        using Addr = Register::Address<0x400a4184,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a4184,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a4188,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a4188,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a418c,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a418c,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a4194,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta4_isoendpt{
        using Addr = Register::Address<0x400a4194,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta4{
        using Addr = Register::Address<0x400a4198,0xffff099f>;
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
        using Addr = Register::Address<0x400a4198,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta4{
        using Addr = Register::Address<0x400a419c,0x0000001f>;
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
        using Addr = Register::Address<0x400a419c,0x0000803f>;
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
        using Addr = Register::Address<0x400a41a0,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb5{
        using Addr = Register::Address<0x400a41a4,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a41a4,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a41a8,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a41a8,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a41ac,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a41ac,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a41b4,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta5_isoendpt{
        using Addr = Register::Address<0x400a41b4,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta5{
        using Addr = Register::Address<0x400a41b8,0xffff099f>;
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
        using Addr = Register::Address<0x400a41b8,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta5{
        using Addr = Register::Address<0x400a41bc,0x0000001f>;
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
        using Addr = Register::Address<0x400a41bc,0x0000803f>;
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
        using Addr = Register::Address<0x400a41c0,0x7ffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EPT_SIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPT_DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EPT_TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> BK_NUMBER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> NB_TRANS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EPT_MAPD; 
    }
    namespace UDPHS_eptctlenb6{
        using Addr = Register::Address<0x400a41c4,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a41c4,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a41c8,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a41c8,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a41cc,0x7ffb00e4>;
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
        using Addr = Register::Address<0x400a41cc,0x7ffb8034>;
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
        using Addr = Register::Address<0x400a41d4,0xfffff5df>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRCESTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY; 
    }
    namespace UDPHS_eptsetsta6_isoendpt{
        using Addr = Register::Address<0x400a41d4,0xfffff5ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXRDY_TRER; 
    }
    namespace UDPHS_eptclrsta6{
        using Addr = Register::Address<0x400a41d8,0xffff099f>;
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
        using Addr = Register::Address<0x400a41d8,0xffff89bf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOGGLESQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXRDY_TXKL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TX_COMPLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ERR_FL_ISO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR_CRC_NTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERR_FLUSH; 
    }
    namespace UDPHS_eptsta6{
        using Addr = Register::Address<0x400a41dc,0x0000001f>;
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
        using Addr = Register::Address<0x400a41dc,0x0000803f>;
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
        using Addr = Register::Address<0x400a4300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress0{
        using Addr = Register::Address<0x400a4304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol0{
        using Addr = Register::Address<0x400a4308,0x0000ff00>;
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
        using Addr = Register::Address<0x400a430c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc1{
        using Addr = Register::Address<0x400a4310,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress1{
        using Addr = Register::Address<0x400a4314,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol1{
        using Addr = Register::Address<0x400a4318,0x0000ff00>;
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
        using Addr = Register::Address<0x400a431c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc2{
        using Addr = Register::Address<0x400a4320,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress2{
        using Addr = Register::Address<0x400a4324,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol2{
        using Addr = Register::Address<0x400a4328,0x0000ff00>;
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
        using Addr = Register::Address<0x400a432c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc3{
        using Addr = Register::Address<0x400a4330,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress3{
        using Addr = Register::Address<0x400a4334,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol3{
        using Addr = Register::Address<0x400a4338,0x0000ff00>;
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
        using Addr = Register::Address<0x400a433c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc4{
        using Addr = Register::Address<0x400a4340,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress4{
        using Addr = Register::Address<0x400a4344,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol4{
        using Addr = Register::Address<0x400a4348,0x0000ff00>;
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
        using Addr = Register::Address<0x400a434c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
    namespace UDPHS_dmanxtdsc5{
        using Addr = Register::Address<0x400a4350,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NXT_DSC_ADD; 
    }
    namespace UDPHS_dmaaddress5{
        using Addr = Register::Address<0x400a4354,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> BUFF_ADD; 
    }
    namespace UDPHS_dmacontrol5{
        using Addr = Register::Address<0x400a4358,0x0000ff00>;
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
        using Addr = Register::Address<0x400a435c,0x0000ff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHANN_ENB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHANN_ACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> END_TR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> END_BF_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DESC_LDST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BUFF_COUNT; 
    }
}
