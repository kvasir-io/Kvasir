#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneua_rbr{
        using Addr = Register::Address<0x40050000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> _8_bitReceivedData; 
    }
    namespace Noneua_thr{
        using Addr = Register::Address<0x40050000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> _8_bitTransmittedData; 
    }
    namespace Noneua_ier{
        using Addr = Register::Address<0x40050004,0xffffc780>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDA_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> THRE_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLS_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> Modem_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTO_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BUF_ERR_IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> Wake_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> Time_Out_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> Auto_RTS_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> Auto_CTS_EN; 
    }
    namespace Noneua_fcr{
        using Addr = Register::Address<0x40050008,0xfff0fe09>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> RFITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RX_DIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RTS_Tri_Lev; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> Lev_RTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RTS_St; 
    }
    namespace Noneua_msr{
        using Addr = Register::Address<0x40050014,0xfffffeee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCTSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTS_St; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> Lev_CTS; 
    }
    namespace Noneua_fsr{
        using Addr = Register::Address<0x40050018,0xee000086>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> Rx_Over_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RS_485_Add_Det; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> Rx_Pointer; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> Rx_Empty; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> Rx_Full; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> Tx_Pointer; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> Tx_Empty; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> Tx_Full; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> Tx_Over_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TE_Flag; 
    }
    namespace Noneua_isr{
        using Addr = Register::Address<0x4005001c,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDA_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> THRE_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLS_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> Modem_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> Tout_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> Buf_Err_IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RDA_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> THRE_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RLS_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> Modem_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> Tout_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> Buf_Err_INT; 
    }
    namespace Noneua_tor{
        using Addr = Register::Address<0x40050020,0xffff0080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> TOIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DLY; 
    }
    namespace Noneua_baud{
        using Addr = Register::Address<0x40050024,0xc0ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BRD_LowByte; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> BRD_HighByte; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> Divider_X; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> DIV_X_ONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DIV_X_EN; 
    }
    namespace Noneua_ircr{
        using Addr = Register::Address<0x40050028,0xffffff99>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> Tx_SELECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> INV_Tx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV_Rx; 
    }
    namespace Noneua_act_csr{
        using Addr = Register::Address<0x4005002c,0x00ff78ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RS_485_NMM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RS_485_AAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RS_485_AUD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RS_485_Add_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ADDR_MATCH; 
    }
    namespace Noneua_fun_sel{
        using Addr = Register::Address<0x40050030,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FUN_SEL; 
    }
}
