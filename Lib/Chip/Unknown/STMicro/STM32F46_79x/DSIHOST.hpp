#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedsi_vr{
        using Addr = Register::Address<0x40016c00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> VERSION; 
    }
    namespace Nonedsi_cr{
        using Addr = Register::Address<0x40016c04,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonedsihsot_ccr{
        using Addr = Register::Address<0x40016c08,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TOCKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXECKDIV; 
    }
    namespace Nonedsi_lvcidr{
        using Addr = Register::Address<0x40016c0c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> VCID; 
    }
    namespace Nonedsi_lcolcr{
        using Addr = Register::Address<0x40016c10,0xfffffef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> COLC; 
    }
    namespace Nonedsi_lpcr{
        using Addr = Register::Address<0x40016c14,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DEP; 
    }
    namespace Nonedsi_lpmcr{
        using Addr = Register::Address<0x40016c18,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> LPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> VLPSIZE; 
    }
    namespace Nonedsi_pcr{
        using Addr = Register::Address<0x40016c2c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRCRXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ECCRXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ETRXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ETTXE; 
    }
    namespace Nonedsi_gvcidr{
        using Addr = Register::Address<0x40016c30,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> VCID; 
    }
    namespace Nonedsi_mcr{
        using Addr = Register::Address<0x40016c34,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDM; 
    }
    namespace Nonedsi_vmcr{
        using Addr = Register::Address<0x40016c38,0xfeee00fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PGO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PGM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LPCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FBTAAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LPHFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LPHBPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LVAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LPVFPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LPVBPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LPVSAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> VMT; 
    }
    namespace Nonedsi_vpcr{
        using Addr = Register::Address<0x40016c3c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> VPSIZE; 
    }
    namespace Nonedsi_vccr{
        using Addr = Register::Address<0x40016c40,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> NUMC; 
    }
    namespace Nonedsi_vnpcr{
        using Addr = Register::Address<0x40016c44,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> NPSIZE; 
    }
    namespace Nonedsi_vhsacr{
        using Addr = Register::Address<0x40016c48,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> HSA; 
    }
    namespace Nonedsi_vhbpcr{
        using Addr = Register::Address<0x40016c4c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> HBP; 
    }
    namespace Nonedsi_vlcr{
        using Addr = Register::Address<0x40016c50,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> HLINE; 
    }
    namespace Nonedsi_vvsacr{
        using Addr = Register::Address<0x40016c54,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> VSA; 
    }
    namespace Nonedsi_vvbpcr{
        using Addr = Register::Address<0x40016c58,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> VBP; 
    }
    namespace Nonedsi_vvfpcr{
        using Addr = Register::Address<0x40016c5c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> VFP; 
    }
    namespace Nonedsi_vvacr{
        using Addr = Register::Address<0x40016c60,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> VA; 
    }
    namespace Nonedsi_lccr{
        using Addr = Register::Address<0x40016c64,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CMDSIZE; 
    }
    namespace Nonedsi_cmcr{
        using Addr = Register::Address<0x40016c68,0xfef080fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MRDPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DLWTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DSR0TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DSW1TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DSW0TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> GLWTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> GSR2TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> GSR1TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GSR0TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GSW2TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GSW1TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GSW0TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEARE; 
    }
    namespace Nonedsi_ghcr{
        using Addr = Register::Address<0x40016c6c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> WCMSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> WCLSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> VCID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> DT; 
    }
    namespace Nonedsi_gpdr{
        using Addr = Register::Address<0x40016c70,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA1; 
    }
    namespace Nonedsi_gpsr{
        using Addr = Register::Address<0x40016c74,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RCB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PRDFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PRDFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWRFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PWRFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMDFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMDFE; 
    }
    namespace Nonedsi_tccr1{
        using Addr = Register::Address<0x40016c78,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> HSTX_TOCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LPRX_TOCNT; 
    }
    namespace Nonedsi_tccr2{
        using Addr = Register::Address<0x40016c7c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HSRD_TOCNT; 
    }
    namespace Nonedsi_tccr3{
        using Addr = Register::Address<0x40016c80,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LPRD_TOCNT; 
    }
    namespace Nonedsi_tccr4{
        using Addr = Register::Address<0x40016c84,0xfeff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HSWR_TOCNT; 
    }
    namespace Nonedsi_tccr5{
        using Addr = Register::Address<0x40016c88,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LSWR_TOCNT; 
    }
    namespace Nonedsi_tccr6{
        using Addr = Register::Address<0x40016c8c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BTA_TOCNT; 
    }
    namespace Nonedsi_clcr{
        using Addr = Register::Address<0x40016c94,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DPCC; 
    }
    namespace Nonedsi_cltcr{
        using Addr = Register::Address<0x40016c98,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> HS2LP_TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> LP2HS_TIME; 
    }
    namespace Nonedsi_dltcr{
        using Addr = Register::Address<0x40016c9c,0x00008000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HS2LP_TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> LP2HS_TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> MRD_TIME; 
    }
    namespace Nonedsi_pctlr{
        using Addr = Register::Address<0x40016ca0,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEN; 
    }
    namespace Nonedsi_pcconfr{
        using Addr = Register::Address<0x40016ca4,0xffff00fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SW_TIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> NL; 
    }
    namespace Nonedsi_pucr{
        using Addr = Register::Address<0x40016ca8,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UEDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UECL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> URCL; 
    }
    namespace Nonedsi_pttcr{
        using Addr = Register::Address<0x40016cac,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TX_TRIG; 
    }
    namespace Nonedsi_psr{
        using Addr = Register::Address<0x40016cb0,0xfffffe01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UAN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PSS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RUE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UAN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PSS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UANC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PSSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD; 
    }
    namespace Nonedsi_isr0{
        using Addr = Register::Address<0x40016cbc,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AE15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AE0; 
    }
    namespace Nonedsi_isr1{
        using Addr = Register::Address<0x40016cc0,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> GPRXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GPRDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GPTXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPWRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GCWRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LPWRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ECCME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ECCSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TOLPRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TOHSTX; 
    }
    namespace Nonedsi_ier0{
        using Addr = Register::Address<0x40016cc4,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PE4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PE3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PE2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PE1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PE0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AE15IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AE14IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AE13IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AE12IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AE11IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AE10IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AE9IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AE8IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AE7IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AE6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AE5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AE4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AE3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AE2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AE1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AE0IE; 
    }
    namespace Nonedsi_ier1{
        using Addr = Register::Address<0x40016cc8,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> GPRXEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GPRDEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GPTXEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GPWREIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GCWREIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LPWREIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EOTPEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PSEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRCEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ECCMEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ECCSEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TOLPRXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TOHSTXIE; 
    }
    namespace Nonedsi_fir0{
        using Addr = Register::Address<0x40016cd8,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FPE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> FPE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FAE15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FAE14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FAE13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FAE12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FAE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FAE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FAE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FAE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FAE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FAE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FAE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FAE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FAE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FAE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FAE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FAE0; 
    }
    namespace Nonedsi_fir1{
        using Addr = Register::Address<0x40016cdc,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FGPRXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FGPRDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FGPTXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FGPWRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FGCWRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLPWRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FEOTPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FPSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FCRCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FECCME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FECCSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FTOLPRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTOHSTX; 
    }
    namespace Nonedsi_vscr{
        using Addr = Register::Address<0x40016d00,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonedsi_lcvcidr{
        using Addr = Register::Address<0x40016d0c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> VCID; 
    }
    namespace Nonedsi_lcccr{
        using Addr = Register::Address<0x40016d10,0xfffffef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> COLC; 
    }
    namespace Nonedsi_lpmccr{
        using Addr = Register::Address<0x40016d18,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> LPSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> VLPSIZE; 
    }
    namespace Nonedsi_vmccr{
        using Addr = Register::Address<0x40016d38,0xffff00fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LPCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FBTAAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LPHFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LPHBPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> LVAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LPVFPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LPVBPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LPVSAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> VMT; 
    }
    namespace Nonedsi_vpccr{
        using Addr = Register::Address<0x40016d3c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> VPSIZE; 
    }
    namespace Nonedsi_vcccr{
        using Addr = Register::Address<0x40016d40,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> NUMC; 
    }
    namespace Nonedsi_vnpccr{
        using Addr = Register::Address<0x40016d44,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> NPSIZE; 
    }
    namespace Nonedsi_vhsaccr{
        using Addr = Register::Address<0x40016d48,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> HSA; 
    }
    namespace Nonedsi_vhbpccr{
        using Addr = Register::Address<0x40016d4c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> HBP; 
    }
    namespace Nonedsi_vlccr{
        using Addr = Register::Address<0x40016d50,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> HLINE; 
    }
    namespace Nonedsi_vvsaccr{
        using Addr = Register::Address<0x40016d54,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> VSA; 
    }
    namespace Nonedsi_vvbpccr{
        using Addr = Register::Address<0x40016d58,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> VBP; 
    }
    namespace Nonedsi_vvfpccr{
        using Addr = Register::Address<0x40016d5c,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> VFP; 
    }
    namespace Nonedsi_vvaccr{
        using Addr = Register::Address<0x40016d60,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> VA; 
    }
    namespace Nonedsi_wcfgr{
        using Addr = Register::Address<0x40017000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> VSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TEPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TESRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> COLMUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DSIM; 
    }
    namespace Nonedsi_wcr{
        using Addr = Register::Address<0x40017004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LTDCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SHTDN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COLM; 
    }
    namespace Nonedsi_wier{
        using Addr = Register::Address<0x40017008,0xffffd9fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PLLUIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PLLLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEIE; 
    }
    namespace Nonedsi_wisr{
        using Addr = Register::Address<0x4001700c,0xffffc8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RRIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PLLUIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PLLLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PLLLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEIF; 
    }
    namespace Nonedsi_wifcr{
        using Addr = Register::Address<0x40017010,0xffffd9fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CRRIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CPLLUIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPLLLIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CERIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTEIF; 
    }
    namespace Nonedsi_wpcr1{
        using Addr = Register::Address<0x40017018,0xf0028000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TCLKPOSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TLPXCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> THSEXITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TLPXDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> THSZEROEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> THSTRAILEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> THSPREPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TCLKZEROEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TCLKPREPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TDDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CDOFFDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FTXSMDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FTXSMCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HSIDL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HSIDL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HSICL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWDL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWDL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SWCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> UIX4; 
    }
    namespace Nonedsi_wpcr2{
        using Addr = Register::Address<0x4001701c,0xf9b0ec30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25)> LPRXFT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FLPRXLPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> HSTXSRCDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> HSTXSRCCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SDCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> LPSRDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> LPSRCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> HSTXDLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> HSTXDCL; 
    }
    namespace Nonedsi_wpcr3{
        using Addr = Register::Address<0x40017020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> THSTRAIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> THSPREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TCLKZEO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TCLKPREP; 
    }
    namespace Nonedsi_wpcr4{
        using Addr = Register::Address<0x40017024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TLPXC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> THSEXIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> TLPXD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> THSZERO; 
    }
    namespace Nonedsi_wpcr5{
        using Addr = Register::Address<0x40017028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> THSZERO; 
    }
    namespace Nonedsi_wrpcr{
        using Addr = Register::Address<0x40017030,0xfefc8602>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> REGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> ODF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,11)> IDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,2)> NDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PLLEN; 
    }
}
