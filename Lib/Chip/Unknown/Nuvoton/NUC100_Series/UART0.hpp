#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneua_rbr{
        using Addr = Register::Address<0x40050000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RBR; 
    }
    namespace Noneua_thr{
        using Addr = Register::Address<0x40050000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> THR; 
    }
    namespace Noneua_ier{
        using Addr = Register::Address<0x40050004,0xffff0680>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDA_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> THRE_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLS_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MODEM_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTO_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BUF_ERR_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WAKE_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LIN_RX_BRK_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TIME_OUT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AUTO_RTS_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AUTO_CTS_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DMA_TX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMA_RX_EN; 
    }
    namespace Noneua_fcr{
        using Addr = Register::Address<0x40050008,0xfff0fe09>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RFITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RX_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RTS_TRI_LEV; 
    }
    namespace Noneua_lcr{
        using Addr = Register::Address<0x4005000c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BCB; 
    }
    namespace Noneua_mcr{
        using Addr = Register::Address<0x40050010,0xffffddfd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LEV_RTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RTS_ST; 
    }
    namespace Noneua_msr{
        using Addr = Register::Address<0x40050014,0xfffffeee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCTSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTS_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LEV_CTS; 
    }
    namespace Noneua_fsr{
        using Addr = Register::Address<0x40050018,0xee000086>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RX_OVER_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RS485_ADD_DETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> RX_POINTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RX_EMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RX_FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> TX_POINTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TX_EMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TX_FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TX_OVER_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TE_FLAG; 
    }
    namespace Noneua_isr{
        using Addr = Register::Address<0x4005001c,0x43434040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDA_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> THRE_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLS_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MODEM_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TOUT_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BUF_ERR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LIN_RX_BREAK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RDA_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> THRE_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RLS_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MODEM_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TOUT_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BUF_ERR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LIN_RX_BREAK_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HW_RLS_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> HW_MODEM_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> HW_TOUT_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> HW_BUF_ERR_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> HW_LIN_RX_BREAK_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> HW_RLS_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> HW_MODEM_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> HW_TOUT_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> HW_BUF_ERR_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> HW_LIN_RX_BREAK_INT; 
    }
    namespace Noneua_tor{
        using Addr = Register::Address<0x40050020,0xffff0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> TOIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DLY; 
    }
    namespace Noneua_baud{
        using Addr = Register::Address<0x40050024,0xc0ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DIVIDER_X; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DIV_X_ONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DIV_X_EN; 
    }
    namespace Noneua_ircr{
        using Addr = Register::Address<0x40050028,0xffffff9d>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TX_SELECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INV_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV_RX; 
    }
    namespace Noneua_alt_csr{
        using Addr = Register::Address<0x4005002c,0x00ff7830>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> UA_LIN_BKFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LIN_RX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LIN_TX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RS485_NMM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RS485_AAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RS485_AUD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RS485_ADD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ADDR_MATCH; 
    }
    namespace Noneua_fun_sel{
        using Addr = Register::Address<0x40050030,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FUN_SEL; 
    }
}
