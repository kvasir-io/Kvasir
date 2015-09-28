#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace MPDDRC_mr{
        using Addr = Register::Address<0xffffea00,0xffff00f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MRS; 
    }
    namespace MPDDRC_rtr{
        using Addr = Register::Address<0xffffea04,0xff8cf000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADJ_REF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> REF_PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> MR4_VALUE; 
    }
    namespace MPDDRC_cr{
        using Addr = Register::Address<0xffffea08,0xff0c8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> NR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DIC_DS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DIS_DLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> ZQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DQMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ENRDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> NB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> NDQS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DECOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> UNAL; 
    }
    namespace MPDDRC_tpr0{
        using Addr = Register::Address<0xffffea0c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TRCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> TRRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> TWTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RDC_WRRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> TMRD; 
    }
    namespace MPDDRC_tpr1{
        using Addr = Register::Address<0xffffea10,0xf0000080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> TRFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TXSNR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TXSRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TXP; 
    }
    namespace MPDDRC_tpr2{
        using Addr = Register::Address<0xffffea14,0xfff08000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TXARD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TXARDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> TRPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TRTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TFAW; 
    }
    namespace MPDDRC_lpr{
        using Addr = Register::Address<0xffffea1c,0xffcec880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> LPCB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLK_FR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LPDDR2_PWOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PASR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> DS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> APDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> UPD_MR; 
    }
    namespace MPDDRC_md{
        using Addr = Register::Address<0xffffea20,0xffffffe8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBW; 
    }
    namespace MPDDRC_hs{
        using Addr = Register::Address<0xffffea24,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIS_ANTICIP_READ; 
    }
    namespace MPDDRC_lpddr2_lpr{
        using Addr = Register::Address<0xffffea28,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BK_MASK_PASR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> SEG_MASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DS; 
    }
    namespace MPDDRC_lpddr2_cal_mr4{
        using Addr = Register::Address<0xffffea2c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COUNT_CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> MR4_READ; 
    }
    namespace MPDDRC_lpddr2_tim_cal{
        using Addr = Register::Address<0xffffea30,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ZQCS; 
    }
    namespace MPDDRC_io_calibr{
        using Addr = Register::Address<0xffffea34,0xff00f8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> TZQIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> CALCODEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> CALCODEN; 
    }
    namespace MPDDRC_saw0{
        using Addr = Register::Address<0xffffea44,0xffc0c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FLUSH_MAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> INCR_THRESH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> PFCH_THRESH; 
    }
    namespace MPDDRC_saw1{
        using Addr = Register::Address<0xffffea48,0xffc0c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FLUSH_MAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> INCR_THRESH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> PFCH_THRESH; 
    }
    namespace MPDDRC_saw2{
        using Addr = Register::Address<0xffffea4c,0xffc0c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FLUSH_MAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> INCR_THRESH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> PFCH_THRESH; 
    }
    namespace MPDDRC_saw3{
        using Addr = Register::Address<0xffffea50,0xffc0c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FLUSH_MAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> INCR_THRESH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> PFCH_THRESH; 
    }
    namespace MPDDRC_dll_mo{
        using Addr = Register::Address<0xffffea74,0xfffee0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> CLK90OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SELOFF; 
    }
    namespace MPDDRC_dll_sof{
        using Addr = Register::Address<0xffffea78,0xe0e0e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> S0OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> S1OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> S2OFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> S3OFF; 
    }
    namespace MPDDRC_dll_ms{
        using Addr = Register::Address<0xffffea7c,0xffff00f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MDINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MDDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MDOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MDVAL; 
    }
    namespace MPDDRC_dll_ss0{
        using Addr = Register::Address<0xffffea80,0xff0000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SDCOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SDCUDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SDERF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SDVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SDCVAL; 
    }
    namespace MPDDRC_dll_ss1{
        using Addr = Register::Address<0xffffea84,0xff0000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SDCOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SDCUDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SDERF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SDVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SDCVAL; 
    }
    namespace MPDDRC_dll_ss2{
        using Addr = Register::Address<0xffffea88,0xff0000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SDCOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SDCUDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SDERF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SDVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SDCVAL; 
    }
    namespace MPDDRC_dll_ss3{
        using Addr = Register::Address<0xffffea8c,0xff0000f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SDCOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SDCUDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SDERF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SDVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SDCVAL; 
    }
    namespace MPDDRC_wpcr{
        using Addr = Register::Address<0xffffeae4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace MPDDRC_wpsr{
        using Addr = Register::Address<0xffffeae8,0xff0000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8)> WPVSRC; 
    }
}
