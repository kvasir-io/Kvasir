#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ADC_ctrl1{
        using Addr = Register::Address<0x4005c000,0xffff0008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CHNCFG_L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HLMTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LLMTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ZCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOSIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SYNC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> START0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STOP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMAEN0; 
    }
    namespace ADC_ctrl2{
        using Addr = Register::Address<0x4005c002,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> DIV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SIMULT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,7)> CHNCFG_H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOSIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SYNC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> START1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STOP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DMAEN1; 
    }
    namespace ADC_zxctrl1{
        using Addr = Register::Address<0x4005c004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ZCE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> ZCE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> ZCE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> ZCE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ZCE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> ZCE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ZCE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> ZCE7; 
    }
    namespace ADC_zxctrl2{
        using Addr = Register::Address<0x4005c006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ZCE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> ZCE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> ZCE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> ZCE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ZCE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> ZCE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ZCE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> ZCE15; 
    }
    namespace ADC_clist1{
        using Addr = Register::Address<0x4005c008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SAMPLE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SAMPLE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SAMPLE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SAMPLE3; 
    }
    namespace ADC_clist2{
        using Addr = Register::Address<0x4005c00a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SAMPLE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SAMPLE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SAMPLE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SAMPLE7; 
    }
    namespace ADC_clist3{
        using Addr = Register::Address<0x4005c00c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SAMPLE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SAMPLE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SAMPLE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SAMPLE11; 
    }
    namespace ADC_clist4{
        using Addr = Register::Address<0x4005c00e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SAMPLE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> SAMPLE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> SAMPLE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> SAMPLE15; 
    }
    namespace ADC_sdis{
        using Addr = Register::Address<0x4005c010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DS; 
    }
    namespace ADC_stat{
        using Addr = Register::Address<0x4005c012,0xffff2000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> UNDEFINED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HLMTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LLMTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ZCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EOSI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EOSI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CIP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CIP0; 
    }
    namespace ADC_rdy{
        using Addr = Register::Address<0x4005c014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RDY; 
    }
    namespace ADC_lolimstat{
        using Addr = Register::Address<0x4005c016,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LLS; 
    }
    namespace ADC_hilimstat{
        using Addr = Register::Address<0x4005c018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HLS; 
    }
    namespace ADC_zxstat{
        using Addr = Register::Address<0x4005c01a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ZCS; 
    }
    namespace ADC_rslt0{
        using Addr = Register::Address<0x4005c01c,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt1{
        using Addr = Register::Address<0x4005c01e,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt2{
        using Addr = Register::Address<0x4005c020,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt3{
        using Addr = Register::Address<0x4005c022,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt4{
        using Addr = Register::Address<0x4005c024,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt5{
        using Addr = Register::Address<0x4005c026,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt6{
        using Addr = Register::Address<0x4005c028,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt7{
        using Addr = Register::Address<0x4005c02a,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt8{
        using Addr = Register::Address<0x4005c02c,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt9{
        using Addr = Register::Address<0x4005c02e,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt10{
        using Addr = Register::Address<0x4005c030,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt11{
        using Addr = Register::Address<0x4005c032,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt12{
        using Addr = Register::Address<0x4005c034,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt13{
        using Addr = Register::Address<0x4005c036,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt14{
        using Addr = Register::Address<0x4005c038,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_rslt15{
        using Addr = Register::Address<0x4005c03a,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEXT; 
    }
    namespace ADC_lolim0{
        using Addr = Register::Address<0x4005c03c,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim1{
        using Addr = Register::Address<0x4005c03e,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim2{
        using Addr = Register::Address<0x4005c040,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim3{
        using Addr = Register::Address<0x4005c042,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim4{
        using Addr = Register::Address<0x4005c044,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim5{
        using Addr = Register::Address<0x4005c046,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim6{
        using Addr = Register::Address<0x4005c048,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim7{
        using Addr = Register::Address<0x4005c04a,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim8{
        using Addr = Register::Address<0x4005c04c,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim9{
        using Addr = Register::Address<0x4005c04e,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim10{
        using Addr = Register::Address<0x4005c050,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim11{
        using Addr = Register::Address<0x4005c052,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim12{
        using Addr = Register::Address<0x4005c054,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim13{
        using Addr = Register::Address<0x4005c056,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim14{
        using Addr = Register::Address<0x4005c058,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_lolim15{
        using Addr = Register::Address<0x4005c05a,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> LLMT; 
    }
    namespace ADC_hilim0{
        using Addr = Register::Address<0x4005c05c,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim1{
        using Addr = Register::Address<0x4005c05e,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim2{
        using Addr = Register::Address<0x4005c060,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim3{
        using Addr = Register::Address<0x4005c062,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim4{
        using Addr = Register::Address<0x4005c064,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim5{
        using Addr = Register::Address<0x4005c066,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim6{
        using Addr = Register::Address<0x4005c068,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim7{
        using Addr = Register::Address<0x4005c06a,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim8{
        using Addr = Register::Address<0x4005c06c,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim9{
        using Addr = Register::Address<0x4005c06e,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim10{
        using Addr = Register::Address<0x4005c070,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim11{
        using Addr = Register::Address<0x4005c072,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim12{
        using Addr = Register::Address<0x4005c074,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim13{
        using Addr = Register::Address<0x4005c076,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim14{
        using Addr = Register::Address<0x4005c078,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_hilim15{
        using Addr = Register::Address<0x4005c07a,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> HLMT; 
    }
    namespace ADC_offst0{
        using Addr = Register::Address<0x4005c07c,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst1{
        using Addr = Register::Address<0x4005c07e,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst2{
        using Addr = Register::Address<0x4005c080,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst3{
        using Addr = Register::Address<0x4005c082,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst4{
        using Addr = Register::Address<0x4005c084,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst5{
        using Addr = Register::Address<0x4005c086,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst6{
        using Addr = Register::Address<0x4005c088,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst7{
        using Addr = Register::Address<0x4005c08a,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst8{
        using Addr = Register::Address<0x4005c08c,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst9{
        using Addr = Register::Address<0x4005c08e,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst10{
        using Addr = Register::Address<0x4005c090,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst11{
        using Addr = Register::Address<0x4005c092,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst12{
        using Addr = Register::Address<0x4005c094,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst13{
        using Addr = Register::Address<0x4005c096,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst14{
        using Addr = Register::Address<0x4005c098,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_offst15{
        using Addr = Register::Address<0x4005c09a,0xffff8007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3)> OFFSET; 
    }
    namespace ADC_pwr{
        using Addr = Register::Address<0x4005c09c,0xffff7004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> APD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,4)> PUDELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PSTS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PSTS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ASB; 
    }
    namespace ADC_cal{
        using Addr = Register::Address<0x4005c09e,0xffff0fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SEL_VREFLO_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SEL_VREFH_A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SEL_VREFLO_B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SEL_VREFH_B; 
    }
    namespace ADC_gc1{
        using Addr = Register::Address<0x4005c0a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> GAIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> GAIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GAIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> GAIN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> GAIN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> GAIN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> GAIN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> GAIN7; 
    }
    namespace ADC_gc2{
        using Addr = Register::Address<0x4005c0a2,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> GAIN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> GAIN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> GAIN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> GAIN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> GAIN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> GAIN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> GAIN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> GAIN15; 
    }
    namespace ADC_sctrl{
        using Addr = Register::Address<0x4005c0a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SC; 
    }
    namespace ADC_pwr2{
        using Addr = Register::Address<0x4005c0a6,0xffffc0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SPEEDA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SPEEDB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> DIV1; 
    }
    namespace ADC_ctrl3{
        using Addr = Register::Address<0x4005c0a8,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SCNT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> SCNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DMASRC; 
    }
    namespace ADC_schlten{
        using Addr = Register::Address<0x4005c0aa,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SCHLTEN; 
    }
}
