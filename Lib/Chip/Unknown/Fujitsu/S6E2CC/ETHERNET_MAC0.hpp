#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemcr{
        using Addr = Register::Address<0x40064000,0xfc000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> WD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> JD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> JE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> IFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DCRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LUD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> BL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
    }
    namespace Nonemffr{
        using Addr = Register::Address<0x40064004,0x7ffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SAIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DAIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HUC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PR; 
    }
    namespace Nonemhtrh{
        using Addr = Register::Address<0x40064008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTH; 
    }
    namespace Nonemhtrl{
        using Addr = Register::Address<0x4006400c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTL; 
    }
    namespace Nonegar{
        using Addr = Register::Address<0x40064010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> PA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> GR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> CR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GB; 
    }
    namespace Nonegdr{
        using Addr = Register::Address<0x40064014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GD; 
    }
    namespace Nonefcr{
        using Addr = Register::Address<0x40064018,0x0000ff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DZPQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FCB_BPA; 
    }
    namespace Nonevtr{
        using Addr = Register::Address<0x4006401c,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ETV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VL; 
    }
    namespace Nonerwffr{
        using Addr = Register::Address<0x40064028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RWFFR; 
    }
    namespace Nonepmtr{
        using Addr = Register::Address<0x4006402c,0x7ffffd98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RWFFRPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
    }
    namespace Nonelpicsr{
        using Addr = Register::Address<0x40064030,0xfff0fcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> LPITXA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PLSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RLPIST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TLPIST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RLPIEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TLPIEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TLPIEN; 
    }
    namespace Nonelpitcr{
        using Addr = Register::Address<0x40064034,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> LIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TWT; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x40064038,0xfffff906>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LPIIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TSIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> COIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RGIS; 
    }
    namespace Noneimr{
        using Addr = Register::Address<0x4006403c,0xfffff9f6>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LPIIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TSIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RGIM; 
    }
    namespace Nonemar0h{
        using Addr = Register::Address<0x40064040,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> A0; 
    }
    namespace Nonemar0l{
        using Addr = Register::Address<0x40064044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> A0; 
    }
    namespace Nonemar1h{
        using Addr = Register::Address<0x40064048,0x00ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> MBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> A; 
    }
    namespace Nonemar1l{
        using Addr = Register::Address<0x4006404c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> A; 
    }
    namespace Nonemar2h{
        using Addr = Register::Address<0x40064050,0xffffffff>;
    }
    namespace Nonemar2l{
        using Addr = Register::Address<0x40064054,0xffffffff>;
    }
    namespace Nonemar3h{
        using Addr = Register::Address<0x40064058,0xffffffff>;
    }
    namespace Nonemar3l{
        using Addr = Register::Address<0x4006405c,0xffffffff>;
    }
    namespace Nonemar4h{
        using Addr = Register::Address<0x40064060,0xffffffff>;
    }
    namespace Nonemar4l{
        using Addr = Register::Address<0x40064064,0xffffffff>;
    }
    namespace Nonemar5h{
        using Addr = Register::Address<0x40064068,0xffffffff>;
    }
    namespace Nonemar5l{
        using Addr = Register::Address<0x4006406c,0xffffffff>;
    }
    namespace Nonemar6h{
        using Addr = Register::Address<0x40064070,0xffffffff>;
    }
    namespace Nonemar6l{
        using Addr = Register::Address<0x40064074,0xffffffff>;
    }
    namespace Nonemar7h{
        using Addr = Register::Address<0x40064078,0xffffffff>;
    }
    namespace Nonemar7l{
        using Addr = Register::Address<0x4006407c,0xffffffff>;
    }
    namespace Nonemar8h{
        using Addr = Register::Address<0x40064080,0xffffffff>;
    }
    namespace Nonemar8l{
        using Addr = Register::Address<0x40064084,0xffffffff>;
    }
    namespace Nonemar9h{
        using Addr = Register::Address<0x40064088,0xffffffff>;
    }
    namespace Nonemar9l{
        using Addr = Register::Address<0x4006408c,0xffffffff>;
    }
    namespace Nonemar10h{
        using Addr = Register::Address<0x40064090,0xffffffff>;
    }
    namespace Nonemar10l{
        using Addr = Register::Address<0x40064094,0xffffffff>;
    }
    namespace Nonemar11h{
        using Addr = Register::Address<0x40064098,0xffffffff>;
    }
    namespace Nonemar11l{
        using Addr = Register::Address<0x4006409c,0xffffffff>;
    }
    namespace Nonemar12h{
        using Addr = Register::Address<0x400640a0,0xffffffff>;
    }
    namespace Nonemar12l{
        using Addr = Register::Address<0x400640a4,0xffffffff>;
    }
    namespace Nonemar13h{
        using Addr = Register::Address<0x400640a8,0xffffffff>;
    }
    namespace Nonemar13l{
        using Addr = Register::Address<0x400640ac,0xffffffff>;
    }
    namespace Nonemar14h{
        using Addr = Register::Address<0x400640b0,0xffffffff>;
    }
    namespace Nonemar14l{
        using Addr = Register::Address<0x400640b4,0xffffffff>;
    }
    namespace Nonemar15h{
        using Addr = Register::Address<0x400640b8,0xffffffff>;
    }
    namespace Nonemar15l{
        using Addr = Register::Address<0x400640bc,0xffffffff>;
    }
    namespace Nonergsr{
        using Addr = Register::Address<0x400640d8,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> LSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LM; 
    }
    namespace Nonemmc_cntl{
        using Addr = Register::Address<0x40064100,0xffffffff>;
    }
    namespace Nonemmc_intr_rx{
        using Addr = Register::Address<0x40064104,0xffffffff>;
    }
    namespace Nonemmc_intr_tx{
        using Addr = Register::Address<0x40064108,0xffffffff>;
    }
    namespace Nonemmc_intr_mask_rx{
        using Addr = Register::Address<0x4006410c,0xffffffff>;
    }
    namespace Nonemmc_intr_mask_tx{
        using Addr = Register::Address<0x40064110,0xffffffff>;
    }
    namespace Nonetxoctetcount_gb{
        using Addr = Register::Address<0x40064114,0xffffffff>;
    }
    namespace Nonetxframecount_gb{
        using Addr = Register::Address<0x40064118,0xffffffff>;
    }
    namespace Nonetxbroadcastframes_g{
        using Addr = Register::Address<0x4006411c,0xffffffff>;
    }
    namespace Nonetxmulticastframes_g{
        using Addr = Register::Address<0x40064120,0xffffffff>;
    }
    namespace Nonetx64octets_gb{
        using Addr = Register::Address<0x40064124,0xffffffff>;
    }
    namespace Nonetx65to127octets_gb{
        using Addr = Register::Address<0x40064128,0xffffffff>;
    }
    namespace Nonetx128to255octets_gb{
        using Addr = Register::Address<0x4006412c,0xffffffff>;
    }
    namespace Nonetx256to511octets_gb{
        using Addr = Register::Address<0x40064130,0xffffffff>;
    }
    namespace Nonetx512to1023octets_gb{
        using Addr = Register::Address<0x40064134,0xffffffff>;
    }
    namespace Nonetx1024tomaxoctets_gb{
        using Addr = Register::Address<0x40064138,0xffffffff>;
    }
    namespace Nonetxunicastframes_gb{
        using Addr = Register::Address<0x4006413c,0xffffffff>;
    }
    namespace Nonetxmulticastframes_gb{
        using Addr = Register::Address<0x40064140,0xffffffff>;
    }
    namespace Nonetxbroadcastframes_gb{
        using Addr = Register::Address<0x40064144,0xffffffff>;
    }
    namespace Nonetxunderflowerror{
        using Addr = Register::Address<0x40064148,0xffffffff>;
    }
    namespace Nonetxsinglecol_g{
        using Addr = Register::Address<0x4006414c,0xffffffff>;
    }
    namespace Nonetxmulticol_g{
        using Addr = Register::Address<0x40064150,0xffffffff>;
    }
    namespace Nonetxdeferred{
        using Addr = Register::Address<0x40064154,0xffffffff>;
    }
    namespace Nonetxlatecol{
        using Addr = Register::Address<0x40064158,0xffffffff>;
    }
    namespace Nonetxexesscol{
        using Addr = Register::Address<0x4006415c,0xffffffff>;
    }
    namespace Nonetxcarriererror{
        using Addr = Register::Address<0x40064160,0xffffffff>;
    }
    namespace Nonetxoctetcount_g{
        using Addr = Register::Address<0x40064164,0xffffffff>;
    }
    namespace Nonetxframecount_g{
        using Addr = Register::Address<0x40064168,0xffffffff>;
    }
    namespace Nonetxexecessdef_g{
        using Addr = Register::Address<0x4006416c,0xffffffff>;
    }
    namespace Nonetxpauseframes{
        using Addr = Register::Address<0x40064170,0xffffffff>;
    }
    namespace Nonetxvlanframes_g{
        using Addr = Register::Address<0x40064174,0xffffffff>;
    }
    namespace Nonerxframecount_gb{
        using Addr = Register::Address<0x40064180,0xffffffff>;
    }
    namespace Nonerxoctetcount_gb{
        using Addr = Register::Address<0x40064184,0xffffffff>;
    }
    namespace Nonerxoctetcount_g{
        using Addr = Register::Address<0x40064188,0xffffffff>;
    }
    namespace Nonerxbroadcastframes_g{
        using Addr = Register::Address<0x4006418c,0xffffffff>;
    }
    namespace Nonerxmulticastframes_g{
        using Addr = Register::Address<0x40064190,0xffffffff>;
    }
    namespace Nonerxcrcerror{
        using Addr = Register::Address<0x40064194,0xffffffff>;
    }
    namespace Nonerxallignmenterror{
        using Addr = Register::Address<0x40064198,0xffffffff>;
    }
    namespace Nonerxrunterror{
        using Addr = Register::Address<0x4006419c,0xffffffff>;
    }
    namespace Nonerxjabbererror{
        using Addr = Register::Address<0x400641a0,0xffffffff>;
    }
    namespace Nonerxundersize_g{
        using Addr = Register::Address<0x400641a4,0xffffffff>;
    }
    namespace Nonerxoversize_g{
        using Addr = Register::Address<0x400641a8,0xffffffff>;
    }
    namespace Nonerx64octets_gb{
        using Addr = Register::Address<0x400641ac,0xffffffff>;
    }
    namespace Nonerx65to127octets_gb{
        using Addr = Register::Address<0x400641b0,0xffffffff>;
    }
    namespace Nonerx128to255octets_gb{
        using Addr = Register::Address<0x400641b4,0xffffffff>;
    }
    namespace Nonerx256to511octets_gb{
        using Addr = Register::Address<0x400641b8,0xffffffff>;
    }
    namespace Nonerx512to1023octets_gb{
        using Addr = Register::Address<0x400641bc,0xffffffff>;
    }
    namespace Nonerx1024tomaxoctets_gb{
        using Addr = Register::Address<0x400641c0,0xffffffff>;
    }
    namespace Nonerxunicastframes_g{
        using Addr = Register::Address<0x400641c4,0xffffffff>;
    }
    namespace Nonerxlengtherror{
        using Addr = Register::Address<0x400641c8,0xffffffff>;
    }
    namespace Nonerxoutofrangetype{
        using Addr = Register::Address<0x400641cc,0xffffffff>;
    }
    namespace Nonerxpauseframes{
        using Addr = Register::Address<0x400641d0,0xffffffff>;
    }
    namespace Nonerxfifooverflow{
        using Addr = Register::Address<0x400641d4,0xffffffff>;
    }
    namespace Nonerxvlanframes_gb{
        using Addr = Register::Address<0x400641d8,0xffffffff>;
    }
    namespace Nonerxwatchdogerror{
        using Addr = Register::Address<0x400641dc,0xffffffff>;
    }
    namespace Nonemmc_ipc_intr_mask_rx{
        using Addr = Register::Address<0x40064200,0xffffffff>;
    }
    namespace Nonemmc_ipc_intr_rx{
        using Addr = Register::Address<0x40064208,0xffffffff>;
    }
    namespace Nonerxipv4_gd_frms{
        using Addr = Register::Address<0x40064210,0xffffffff>;
    }
    namespace Nonerxipv4_hdrerr_frms{
        using Addr = Register::Address<0x40064214,0xffffffff>;
    }
    namespace Nonerxipv4_nopay_frms{
        using Addr = Register::Address<0x40064218,0xffffffff>;
    }
    namespace Nonerxipv4_frag_frms{
        using Addr = Register::Address<0x4006421c,0xffffffff>;
    }
    namespace Nonerxipv4_udsbl_frms{
        using Addr = Register::Address<0x40064220,0xffffffff>;
    }
    namespace Nonerxipv6_gd_frms{
        using Addr = Register::Address<0x40064224,0xffffffff>;
    }
    namespace Nonerxipv6_hdrerr_frms{
        using Addr = Register::Address<0x40064228,0xffffffff>;
    }
    namespace Nonerxipv6_nopay_frms{
        using Addr = Register::Address<0x4006422c,0xffffffff>;
    }
    namespace Nonerxudp_gd_frms{
        using Addr = Register::Address<0x40064230,0xffffffff>;
    }
    namespace Nonerxudp_err_frms{
        using Addr = Register::Address<0x40064234,0xffffffff>;
    }
    namespace Nonerxtcp_gd_frms{
        using Addr = Register::Address<0x40064238,0xffffffff>;
    }
    namespace Nonerxtcp_err_frms{
        using Addr = Register::Address<0x4006423c,0xffffffff>;
    }
    namespace Nonerxicmp_gd_frms{
        using Addr = Register::Address<0x40064240,0xffffffff>;
    }
    namespace Nonerxicmp_err_frms{
        using Addr = Register::Address<0x40064244,0xffffffff>;
    }
    namespace Nonerxipv4_gd_octets{
        using Addr = Register::Address<0x40064250,0xffffffff>;
    }
    namespace Nonerxipv4_hdrerr_octets{
        using Addr = Register::Address<0x40064254,0xffffffff>;
    }
    namespace Nonerxipv4_nopay_octets{
        using Addr = Register::Address<0x40064258,0xffffffff>;
    }
    namespace Nonerxipv4_frag_octets{
        using Addr = Register::Address<0x4006425c,0xffffffff>;
    }
    namespace Nonerxipv4_udsbl_octets{
        using Addr = Register::Address<0x40064260,0xffffffff>;
    }
    namespace Nonerxipv6_gd_octets{
        using Addr = Register::Address<0x40064264,0xffffffff>;
    }
    namespace Nonerxipv6_hdrerr_octets{
        using Addr = Register::Address<0x40064268,0xffffffff>;
    }
    namespace Nonerxipv6_nopay_octets{
        using Addr = Register::Address<0x4006426c,0xffffffff>;
    }
    namespace Nonerxudp_gd_octets{
        using Addr = Register::Address<0x40064270,0xffffffff>;
    }
    namespace Nonerxudp_err_octets{
        using Addr = Register::Address<0x40064274,0xffffffff>;
    }
    namespace Nonerxtcp_gd_octets{
        using Addr = Register::Address<0x40064278,0xffffffff>;
    }
    namespace Nonerxtcp_err_octets{
        using Addr = Register::Address<0x4006427c,0xffffffff>;
    }
    namespace Nonerxicmp_gd_octets{
        using Addr = Register::Address<0x40064280,0xffffffff>;
    }
    namespace Nonerxicmp_err_octets{
        using Addr = Register::Address<0x40064284,0xffffffff>;
    }
    namespace Nonetscr{
        using Addr = Register::Address<0x40064700,0xfef800c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ATSFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TSENMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TSPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TSMRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TETSEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TSIP4E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TSIP6E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TETSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TSV2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TSDB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TSEA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TARU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TITE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFCU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSE; 
    }
    namespace Nonessir{
        using Addr = Register::Address<0x40064704,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SSINC; 
    }
    namespace Nonestsr{
        using Addr = Register::Address<0x40064708,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSS; 
    }
    namespace Nonestnr{
        using Addr = Register::Address<0x4006470c,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> TSSS; 
    }
    namespace Nonestsur{
        using Addr = Register::Address<0x40064710,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSS; 
    }
    namespace Nonestnur{
        using Addr = Register::Address<0x40064714,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADDSUB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> TSSS; 
    }
    namespace Nonetsar{
        using Addr = Register::Address<0x40064718,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSAR; 
    }
    namespace Nonettsr{
        using Addr = Register::Address<0x4006471c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSTR; 
    }
    namespace Nonettnr{
        using Addr = Register::Address<0x40064720,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> TSTR; 
    }
    namespace Nonesthwsr{
        using Addr = Register::Address<0x40064724,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSHWR; 
    }
    namespace Nonetsr{
        using Addr = Register::Address<0x40064728,0xf0fffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> ATSNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ATSSTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TRGTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ATSTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSSOVF; 
    }
    namespace Noneppscr{
        using Addr = Register::Address<0x4006472c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PPSCTRL; 
    }
    namespace Noneatnr{
        using Addr = Register::Address<0x40064730,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> ATN; 
    }
    namespace Noneatsr{
        using Addr = Register::Address<0x40064734,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ATS; 
    }
    namespace Nonemar16h{
        using Addr = Register::Address<0x40064800,0xffffffff>;
    }
    namespace Nonemar16l{
        using Addr = Register::Address<0x40064804,0xffffffff>;
    }
    namespace Nonemar17h{
        using Addr = Register::Address<0x40064808,0xffffffff>;
    }
    namespace Nonemar17l{
        using Addr = Register::Address<0x4006480c,0xffffffff>;
    }
    namespace Nonemar18h{
        using Addr = Register::Address<0x40064810,0xffffffff>;
    }
    namespace Nonemar18l{
        using Addr = Register::Address<0x40064814,0xffffffff>;
    }
    namespace Nonemar19h{
        using Addr = Register::Address<0x40064818,0xffffffff>;
    }
    namespace Nonemar19l{
        using Addr = Register::Address<0x4006481c,0xffffffff>;
    }
    namespace Nonemar20h{
        using Addr = Register::Address<0x40064820,0xffffffff>;
    }
    namespace Nonemar20l{
        using Addr = Register::Address<0x40064824,0xffffffff>;
    }
    namespace Nonemar21h{
        using Addr = Register::Address<0x40064828,0xffffffff>;
    }
    namespace Nonemar21l{
        using Addr = Register::Address<0x4006482c,0xffffffff>;
    }
    namespace Nonemar22h{
        using Addr = Register::Address<0x40064830,0xffffffff>;
    }
    namespace Nonemar22l{
        using Addr = Register::Address<0x40064834,0xffffffff>;
    }
    namespace Nonemar23h{
        using Addr = Register::Address<0x40064838,0xffffffff>;
    }
    namespace Nonemar23l{
        using Addr = Register::Address<0x4006483c,0xffffffff>;
    }
    namespace Nonemar24h{
        using Addr = Register::Address<0x40064840,0xffffffff>;
    }
    namespace Nonemar24l{
        using Addr = Register::Address<0x40064844,0xffffffff>;
    }
    namespace Nonemar25h{
        using Addr = Register::Address<0x40064848,0xffffffff>;
    }
    namespace Nonemar25l{
        using Addr = Register::Address<0x4006484c,0xffffffff>;
    }
    namespace Nonemar26h{
        using Addr = Register::Address<0x40064850,0xffffffff>;
    }
    namespace Nonemar26l{
        using Addr = Register::Address<0x40064854,0xffffffff>;
    }
    namespace Nonemar27h{
        using Addr = Register::Address<0x40064858,0xffffffff>;
    }
    namespace Nonemar27l{
        using Addr = Register::Address<0x4006485c,0xffffffff>;
    }
    namespace Nonemar28h{
        using Addr = Register::Address<0x40064860,0xffffffff>;
    }
    namespace Nonemar28l{
        using Addr = Register::Address<0x40064864,0xffffffff>;
    }
    namespace Nonemar29h{
        using Addr = Register::Address<0x40064868,0xffffffff>;
    }
    namespace Nonemar29l{
        using Addr = Register::Address<0x4006486c,0xffffffff>;
    }
    namespace Nonemar30h{
        using Addr = Register::Address<0x40064870,0xffffffff>;
    }
    namespace Nonemar30l{
        using Addr = Register::Address<0x40064874,0xffffffff>;
    }
    namespace Nonemar31h{
        using Addr = Register::Address<0x40064878,0xffffffff>;
    }
    namespace Nonemar31l{
        using Addr = Register::Address<0x4006487c,0xffffffff>;
    }
    namespace Nonebmr{
        using Addr = Register::Address<0x40065000,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TXPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> _8XPBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,17)> RPBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> PBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ATDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2)> DSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWR; 
    }
    namespace Nonetpdr{
        using Addr = Register::Address<0x40065004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TPD; 
    }
    namespace Nonerpdr{
        using Addr = Register::Address<0x40065008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RPD; 
    }
    namespace Nonerdlar{
        using Addr = Register::Address<0x4006500c,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> SRL; 
    }
    namespace Nonetdlar{
        using Addr = Register::Address<0x40065010,0x00000003>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2)> STL; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40065014,0x80001800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> GLPII; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> GPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> GMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> GLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23)> EB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UNF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TJT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TI; 
    }
    namespace Noneomr{
        using Addr = Register::Address<0x40065018,0xf8ce1f21>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14)> TTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SR; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x4006501c,0xfffe1800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TJE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIE; 
    }
    namespace Nonemfbocr{
        using Addr = Register::Address<0x40065020,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ONMFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,17)> NMFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ONMFH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NMFH; 
    }
    namespace Noneriwtr{
        using Addr = Register::Address<0x40065024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RIWT; 
    }
    namespace Noneahbsr{
        using Addr = Register::Address<0x4006502c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AHBS; 
    }
    namespace Nonechtdr{
        using Addr = Register::Address<0x40065048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTDAP; 
    }
    namespace Nonechrdr{
        using Addr = Register::Address<0x4006504c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HRDAP; 
    }
    namespace Nonechtbar{
        using Addr = Register::Address<0x40065050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTBAR; 
    }
    namespace Nonechrbar{
        using Addr = Register::Address<0x40065054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HRBAR; 
    }
}
