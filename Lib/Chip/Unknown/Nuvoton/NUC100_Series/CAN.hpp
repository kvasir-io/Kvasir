#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecan_con{
        using Addr = Register::Address<0x40180000,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> Init; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> Test; 
    }
    namespace Nonecan_status{
        using Addr = Register::Address<0x40180004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> LEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TxOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RxOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPass; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EWarn; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BOff; 
    }
    namespace Nonecan_err{
        using Addr = Register::Address<0x40180008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> REC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RP; 
    }
    namespace Nonecan_btime{
        using Addr = Register::Address<0x4018000c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> BRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TSeg1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TSeg2; 
    }
    namespace Nonecan_iidr{
        using Addr = Register::Address<0x40180010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IntId; 
    }
    namespace Nonecan_test{
        using Addr = Register::Address<0x40180014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> Res; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> Basic; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> Silent; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LBack; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> Tx; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> Rx; 
    }
    namespace Nonecan_brpe{
        using Addr = Register::Address<0x40180018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BRPE; 
    }
    namespace Nonecan_if1_creq{
        using Addr = Register::Address<0x40180020,0xffff7fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MessageNumber; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> Busy; 
    }
    namespace Nonecan_if1_cmask{
        using Addr = Register::Address<0x40180024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DAT_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DAT_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TxRqstOrNewDat; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ClrIntPnd; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> Control; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> Arb; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> Mask; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WROrRD; 
    }
    namespace Nonecan_if1_mask1{
        using Addr = Register::Address<0x40180028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> Msk_0_15; 
    }
    namespace Nonecan_if1_mask2{
        using Addr = Register::Address<0x4018002c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> Msk_16_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MDir; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MXtd; 
    }
    namespace Nonecan_if1_arb1{
        using Addr = Register::Address<0x40180030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ID_0_15; 
    }
    namespace Nonecan_if1_arb2{
        using Addr = Register::Address<0x40180034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ID_16_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> Dir; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> Xtd; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MsgVal; 
    }
    namespace Nonecan_if1_mcon{
        using Addr = Register::Address<0x40180038,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EoB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TxRqst; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RmtEn; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RxIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TxIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UMask; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IntPnd; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MsgLst; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NewDat; 
    }
    namespace Nonecan_if1_dat_a1{
        using Addr = Register::Address<0x4018003c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Data0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> Data1; 
    }
    namespace Nonecan_if1_dat_a2{
        using Addr = Register::Address<0x40180040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Data2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> Data3; 
    }
    namespace Nonecan_if1_dat_b1{
        using Addr = Register::Address<0x40180044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Data4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> Data5; 
    }
    namespace Nonecan_if1_dat_b2{
        using Addr = Register::Address<0x40180048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Data6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> Data7; 
    }
    namespace Nonecan_if2_creq{
        using Addr = Register::Address<0x40180080,0xffff7fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MessageNumber; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> Busy; 
    }
    namespace Nonecan_if2_cmask{
        using Addr = Register::Address<0x40180084,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DAT_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DAT_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TxRqstOrNewDat; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ClrIntPnd; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> Control; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> Arb; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> Mask; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WROrRD; 
    }
    namespace Nonecan_if2_mask1{
        using Addr = Register::Address<0x40180088,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> Msk_0_15; 
    }
    namespace Nonecan_if2_mask2{
        using Addr = Register::Address<0x4018008c,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> Msk_16_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MDir; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MXtd; 
    }
    namespace Nonecan_if2_arb1{
        using Addr = Register::Address<0x40180090,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ID_0_15; 
    }
    namespace Nonecan_if2_arb2{
        using Addr = Register::Address<0x40180094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> ID_16_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> Dir; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> Xtd; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MsgVal; 
    }
    namespace Nonecan_if2_mcon{
        using Addr = Register::Address<0x40180098,0xffff0070>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EoB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TxRqst; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RmtEn; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RxIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TxIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UMask; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IntPnd; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MsgLst; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NewDat; 
    }
    namespace Nonecan_if2_dat_a1{
        using Addr = Register::Address<0x4018009c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Data0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> Data1; 
    }
    namespace Nonecan_if2_dat_a2{
        using Addr = Register::Address<0x401800a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Data2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> Data3; 
    }
    namespace Nonecan_if2_dat_b1{
        using Addr = Register::Address<0x401800a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Data4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> Data5; 
    }
    namespace Nonecan_if2_dat_b2{
        using Addr = Register::Address<0x401800a8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Data6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> Data7; 
    }
    namespace Nonecan_txreq1{
        using Addr = Register::Address<0x40180100,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TxRqst1_16; 
    }
    namespace Nonecan_txreq2{
        using Addr = Register::Address<0x40180104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TxRqst17_32; 
    }
    namespace Nonecan_ndat1{
        using Addr = Register::Address<0x40180120,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NewData1_16; 
    }
    namespace Nonecan_ndat2{
        using Addr = Register::Address<0x40180124,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NewData17_32; 
    }
    namespace Nonecan_ipnd1{
        using Addr = Register::Address<0x40180140,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IntPnd1_16; 
    }
    namespace Nonecan_ipnd2{
        using Addr = Register::Address<0x40180144,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IntPnd17_32; 
    }
    namespace Nonecan_mvld1{
        using Addr = Register::Address<0x40180160,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MsgVal1_16; 
    }
    namespace Nonecan_mvld2{
        using Addr = Register::Address<0x40180164,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MsgVal17_32; 
    }
    namespace Nonecan_wu_en{
        using Addr = Register::Address<0x40180168,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKUP_EN; 
    }
    namespace Nonecan_wu_status{
        using Addr = Register::Address<0x4018016c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKUP_STS; 
    }
}
