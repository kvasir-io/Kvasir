#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefrt_tccp0{
        using Addr = Register::Address<0x40020142,0xffffffff>;
    }
    namespace Nonefrt_tcdt0{
        using Addr = Register::Address<0x40020146,0xffffffff>;
    }
    namespace Nonefrt_tcsa0{
        using Addr = Register::Address<0x40020148,0xffff1c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ECKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IRQZF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IRQZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ICLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ICRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CLK; 
    }
    namespace Nonefrt_tcsc0{
        using Addr = Register::Address<0x4002014a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> MSPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MSZC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> MSPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MSZI; 
    }
    namespace Nonefrt_tccp1{
        using Addr = Register::Address<0x4002014e,0xffffffff>;
    }
    namespace Nonefrt_tcdt1{
        using Addr = Register::Address<0x40020152,0xffffffff>;
    }
    namespace Nonefrt_tcsa1{
        using Addr = Register::Address<0x40020154,0xffffffff>;
    }
    namespace Nonefrt_tcsc1{
        using Addr = Register::Address<0x40020156,0xffffffff>;
    }
    namespace Nonefrt_tccp2{
        using Addr = Register::Address<0x4002015a,0xffffffff>;
    }
    namespace Nonefrt_tcdt2{
        using Addr = Register::Address<0x4002015e,0xffffffff>;
    }
    namespace Nonefrt_tcsa2{
        using Addr = Register::Address<0x40020160,0xffffffff>;
    }
    namespace Nonefrt_tcsc2{
        using Addr = Register::Address<0x40020162,0xffffffff>;
    }
    namespace Nonefrt_tcal{
        using Addr = Register::Address<0x40020164,0xfe00fe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SCLR22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SCLR21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SCLR20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SCLR12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SCLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SCLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SCLR02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SCLR01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SCLR00; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STOP22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STOP21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STOP20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STOP12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STOP11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STOP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STOP02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STOP01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STOP00; 
    }
    namespace Noneocu_occp0{
        using Addr = Register::Address<0x40020102,0xffffffff>;
    }
    namespace Noneocu_occp1{
        using Addr = Register::Address<0x40020106,0xffffffff>;
    }
    namespace Noneocu_occp2{
        using Addr = Register::Address<0x4002010a,0xffffffff>;
    }
    namespace Noneocu_occp3{
        using Addr = Register::Address<0x4002010e,0xffffffff>;
    }
    namespace Noneocu_occp4{
        using Addr = Register::Address<0x40020112,0xffffffff>;
    }
    namespace Noneocu_occp5{
        using Addr = Register::Address<0x40020116,0xffffffff>;
    }
    namespace Noneocu_ocsa10{
        using Addr = Register::Address<0x40020118,0xffffff0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IOP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IOP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IOE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IOE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CST0; 
    }
    namespace Noneocu_ocsb10{
        using Addr = Register::Address<0x40020119,0xffffff6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FM4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OTD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTD0; 
    }
    namespace Noneocu_ocsd10{
        using Addr = Register::Address<0x4002011a,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OFEX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OFEX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OEBM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OEBM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OPBM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OPBM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> OCSE1BUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> OCSE0BUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> OCCP1BUFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> OCCP0BUFE; 
    }
    namespace Noneocu_ocsa32{
        using Addr = Register::Address<0x4002011c,0xffffffff>;
    }
    namespace Noneocu_ocsb32{
        using Addr = Register::Address<0x4002011d,0xffffffff>;
    }
    namespace Noneocu_ocsd32{
        using Addr = Register::Address<0x4002011e,0xffffffff>;
    }
    namespace Noneocu_ocsa54{
        using Addr = Register::Address<0x40020120,0xffffffff>;
    }
    namespace Noneocu_ocsb54{
        using Addr = Register::Address<0x40020121,0xffffffff>;
    }
    namespace Noneocu_ocsd54{
        using Addr = Register::Address<0x40020122,0xffffffff>;
    }
    namespace Noneocu_ocsc{
        using Addr = Register::Address<0x40020124,0xffffc0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MOD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MOD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MOD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MOD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MOD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MOD0; 
    }
    namespace Noneocu_ocse0{
        using Addr = Register::Address<0x40020128,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> OCSE; 
    }
    namespace Noneocu_ocse1{
        using Addr = Register::Address<0x4002012c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> OCSE; 
    }
    namespace Noneocu_ocse2{
        using Addr = Register::Address<0x40020130,0xffffffff>;
    }
    namespace Noneocu_ocse3{
        using Addr = Register::Address<0x40020134,0xffffffff>;
    }
    namespace Noneocu_ocse4{
        using Addr = Register::Address<0x40020138,0xffffffff>;
    }
    namespace Noneocu_ocse5{
        using Addr = Register::Address<0x4002013c,0xffffffff>;
    }
    namespace Noneocu_ocfs10{
        using Addr = Register::Address<0x40020168,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> FSO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FSO0; 
    }
    namespace Noneocu_ocfs32{
        using Addr = Register::Address<0x40020169,0xffffffff>;
    }
    namespace Noneocu_ocfs54{
        using Addr = Register::Address<0x4002016a,0xffffffff>;
    }
    namespace Nonewfg_wftf10{
        using Addr = Register::Address<0x4002018e,0xffffffff>;
    }
    namespace Nonewfg_wfta10{
        using Addr = Register::Address<0x40020190,0xffffffff>;
    }
    namespace Nonewfg_wftb10{
        using Addr = Register::Address<0x40020192,0xffffffff>;
    }
    namespace Nonewfg_wftf32{
        using Addr = Register::Address<0x40020196,0xffffffff>;
    }
    namespace Nonewfg_wfta32{
        using Addr = Register::Address<0x40020198,0xffffffff>;
    }
    namespace Nonewfg_wftb32{
        using Addr = Register::Address<0x4002019a,0xffffffff>;
    }
    namespace Nonewfg_wftf54{
        using Addr = Register::Address<0x4002019e,0xffffffff>;
    }
    namespace Nonewfg_wfta54{
        using Addr = Register::Address<0x400201a0,0xffffffff>;
    }
    namespace Nonewfg_wftb54{
        using Addr = Register::Address<0x400201a2,0xffffffff>;
    }
    namespace Nonewfg_wfsa10{
        using Addr = Register::Address<0x400201a4,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> GTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> TMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DCK; 
    }
    namespace Nonewfg_wfsa32{
        using Addr = Register::Address<0x400201a8,0xffffffff>;
    }
    namespace Nonewfg_wfsa54{
        using Addr = Register::Address<0x400201ac,0xffffffff>;
    }
    namespace Nonewfg_wfir{
        using Addr = Register::Address<0x400201b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TMIS54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TMIE54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TMIC54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TMIF54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TMIS32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TMIE32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TMIC32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TMIF32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TMIS10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TMIE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TMIC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TMIF10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTICB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DTIFB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DTICA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTIFA; 
    }
    namespace Nonewfg_nzcl{
        using Addr = Register::Address<0x400201b4,0xffff8c40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WIM54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> WIM32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WIM10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DIMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DIMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DHOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DTIEB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SDTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> NWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTIEA; 
    }
    namespace Noneicu_icfs10{
        using Addr = Register::Address<0x4002016c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> FSI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FSI0; 
    }
    namespace Noneicu_icfs32{
        using Addr = Register::Address<0x4002016d,0xffffffff>;
    }
    namespace Noneicu_iccp0{
        using Addr = Register::Address<0x40020176,0xffffffff>;
    }
    namespace Noneicu_iccp1{
        using Addr = Register::Address<0x4002017a,0xffffffff>;
    }
    namespace Noneicu_iccp2{
        using Addr = Register::Address<0x4002017e,0xffffffff>;
    }
    namespace Noneicu_iccp3{
        using Addr = Register::Address<0x40020182,0xffffffff>;
    }
    namespace Noneicu_icsa10{
        using Addr = Register::Address<0x40020184,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ICP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ICE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ICE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> EG0; 
    }
    namespace Noneicu_icsb10{
        using Addr = Register::Address<0x40020185,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IEI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IEI0; 
    }
    namespace Noneicu_icsa32{
        using Addr = Register::Address<0x40020188,0xffffffff>;
    }
    namespace Noneicu_icsb32{
        using Addr = Register::Address<0x40020189,0xffffffff>;
    }
    namespace Noneadcmp_acfs10{
        using Addr = Register::Address<0x40020170,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> FSA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FSA0; 
    }
    namespace Noneadcmp_acfs32{
        using Addr = Register::Address<0x40020171,0xffffffff>;
    }
    namespace Noneadcmp_acfs54{
        using Addr = Register::Address<0x40020172,0xffffffff>;
    }
    namespace Noneadcmp_acmp0{
        using Addr = Register::Address<0x400201ba,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ACMP; 
    }
    namespace Noneadcmp_acmp1{
        using Addr = Register::Address<0x400201be,0xffffffff>;
    }
    namespace Noneadcmp_acmp2{
        using Addr = Register::Address<0x400201c2,0xffffffff>;
    }
    namespace Noneadcmp_acmp3{
        using Addr = Register::Address<0x400201c6,0xffffffff>;
    }
    namespace Noneadcmp_acmp4{
        using Addr = Register::Address<0x400201ca,0xffffffff>;
    }
    namespace Noneadcmp_acmp5{
        using Addr = Register::Address<0x400201ce,0xffffffff>;
    }
    namespace Noneadcmp_acsa{
        using Addr = Register::Address<0x400201d0,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SEL54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SEL32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SEL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> CE54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CE32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CE10; 
    }
    namespace Noneadcmp_acsc0{
        using Addr = Register::Address<0x400201d4,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> APBM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> ADSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> BUFE; 
    }
    namespace Noneadcmp_acsd0{
        using Addr = Register::Address<0x400201d5,0xffffff0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OCUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AMOD; 
    }
    namespace Noneadcmp_acmc0{
        using Addr = Register::Address<0x400201d6,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MPCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MZCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> AMC; 
    }
    namespace Noneadcmp_acsc1{
        using Addr = Register::Address<0x400201d8,0xffffffff>;
    }
    namespace Noneadcmp_acsd1{
        using Addr = Register::Address<0x400201d9,0xffffffff>;
    }
    namespace Noneadcmp_acmc1{
        using Addr = Register::Address<0x400201da,0xffffffff>;
    }
    namespace Noneadcmp_acsc2{
        using Addr = Register::Address<0x400201dc,0xffffffff>;
    }
    namespace Noneadcmp_acsd2{
        using Addr = Register::Address<0x400201dd,0xffffffff>;
    }
    namespace Noneadcmp_acmc2{
        using Addr = Register::Address<0x400201de,0xffffffff>;
    }
    namespace Noneadcmp_acsc3{
        using Addr = Register::Address<0x400201e0,0xffffffff>;
    }
    namespace Noneadcmp_acsd3{
        using Addr = Register::Address<0x400201e1,0xffffffff>;
    }
    namespace Noneadcmp_acmc3{
        using Addr = Register::Address<0x400201e2,0xffffffff>;
    }
    namespace Noneadcmp_acsc4{
        using Addr = Register::Address<0x400201e4,0xffffffff>;
    }
    namespace Noneadcmp_acsd4{
        using Addr = Register::Address<0x400201e5,0xffffffff>;
    }
    namespace Noneadcmp_acmc4{
        using Addr = Register::Address<0x400201e6,0xffffffff>;
    }
    namespace Noneadcmp_acsc5{
        using Addr = Register::Address<0x400201e8,0xffffffff>;
    }
    namespace Noneadcmp_acsd5{
        using Addr = Register::Address<0x400201e9,0xffffffff>;
    }
    namespace Noneadcmp_acmc5{
        using Addr = Register::Address<0x400201ea,0xffffffff>;
    }
    namespace Nonefrt_tcsd{
        using Addr = Register::Address<0x400201ec,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OFMD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OFMD1; 
    }
}
