#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefrt_tcsa0{
        using Addr = Register::Address<0x40020030,0xffff1c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ICRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ICLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IRQZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IRQZF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ECKE; 
    }
    namespace Nonefrt_tcsa1{
        using Addr = Register::Address<0x40020040,0xffffffff>;
    }
    namespace Nonefrt_tcsa2{
        using Addr = Register::Address<0x40020050,0xffffffff>;
    }
    namespace Nonefrt_tcsb0{
        using Addr = Register::Address<0x40020034,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AD0E; 
    }
    namespace Nonefrt_tcsb1{
        using Addr = Register::Address<0x40020044,0xffffffff>;
    }
    namespace Nonefrt_tcsb2{
        using Addr = Register::Address<0x40020054,0xffffffff>;
    }
    namespace Nonefrt_tccp0{
        using Addr = Register::Address<0x40020028,0xffffffff>;
    }
    namespace Nonefrt_tccp1{
        using Addr = Register::Address<0x40020038,0xffffffff>;
    }
    namespace Nonefrt_tccp2{
        using Addr = Register::Address<0x40020048,0xffffffff>;
    }
    namespace Nonefrt_tcdt0{
        using Addr = Register::Address<0x4002002c,0xffffffff>;
    }
    namespace Nonefrt_tcdt1{
        using Addr = Register::Address<0x4002003c,0xffffffff>;
    }
    namespace Nonefrt_tcdt2{
        using Addr = Register::Address<0x4002004c,0xffffffff>;
    }
    namespace Noneocu_ocfs10{
        using Addr = Register::Address<0x40020058,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FSO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> FSO1; 
    }
    namespace Noneocu_ocfs32{
        using Addr = Register::Address<0x40020059,0xffffffff>;
    }
    namespace Noneocu_ocfs54{
        using Addr = Register::Address<0x4002005c,0xffffffff>;
    }
    namespace Noneocu_ocsa10{
        using Addr = Register::Address<0x40020018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BDIS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BDIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IOE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IOE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IOP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IOP1; 
    }
    namespace Noneocu_ocsa32{
        using Addr = Register::Address<0x4002001c,0xffffffff>;
    }
    namespace Noneocu_ocsa54{
        using Addr = Register::Address<0x40020020,0xffffffff>;
    }
    namespace Noneocu_ocsb10{
        using Addr = Register::Address<0x40020019,0xffffff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OTD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OTD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTS1; 
    }
    namespace Noneocu_ocsb32{
        using Addr = Register::Address<0x4002001d,0xffffffff>;
    }
    namespace Noneocu_ocsb54{
        using Addr = Register::Address<0x40020021,0xffffffff>;
    }
    namespace Noneocu_ocsc{
        using Addr = Register::Address<0x40020024,0xffffc0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MOD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MOD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MOD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MOD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MOD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MOD5; 
    }
    namespace Noneocu_occp0{
        using Addr = Register::Address<0x40020000,0xffffffff>;
    }
    namespace Noneocu_occp1{
        using Addr = Register::Address<0x40020004,0xffffffff>;
    }
    namespace Noneocu_occp2{
        using Addr = Register::Address<0x40020008,0xffffffff>;
    }
    namespace Noneocu_occp3{
        using Addr = Register::Address<0x4002000c,0xffffffff>;
    }
    namespace Noneocu_occp4{
        using Addr = Register::Address<0x40020010,0xffffffff>;
    }
    namespace Noneocu_occp5{
        using Addr = Register::Address<0x40020014,0xffffffff>;
    }
    namespace Nonewfg_wfsa10{
        using Addr = Register::Address<0x4002008c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> TMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> GTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> PGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DMOD; 
    }
    namespace Nonewfg_wfsa32{
        using Addr = Register::Address<0x40020090,0xffffffff>;
    }
    namespace Nonewfg_wfsa54{
        using Addr = Register::Address<0x40020094,0xffffffff>;
    }
    namespace Nonewfg_wftm10{
        using Addr = Register::Address<0x40020080,0xffffffff>;
    }
    namespace Nonewfg_wftm32{
        using Addr = Register::Address<0x40020084,0xffffffff>;
    }
    namespace Nonewfg_wftm54{
        using Addr = Register::Address<0x40020088,0xffffffff>;
    }
    namespace Nonewfg_nzcl{
        using Addr = Register::Address<0x4002009c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> NWS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SDTI; 
    }
    namespace Nonewfg_wfir{
        using Addr = Register::Address<0x40020098,0xffff000c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TMIF10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TMIC10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TMIE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TMIS10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TMIF32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TMIC32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TMIE32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TMIS32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TMIF54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TMIC54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TMIE54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TMIS54; 
    }
    namespace Noneicu_icfs10{
        using Addr = Register::Address<0x40020060,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FSI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> FSI1; 
    }
    namespace Noneicu_icfs32{
        using Addr = Register::Address<0x40020061,0xffffffff>;
    }
    namespace Noneicu_icsa10{
        using Addr = Register::Address<0x40020078,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> EG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ICE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ICE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ICP1; 
    }
    namespace Noneicu_icsa32{
        using Addr = Register::Address<0x4002007c,0xffffffff>;
    }
    namespace Noneicu_icsb10{
        using Addr = Register::Address<0x40020079,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IEI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IEI1; 
    }
    namespace Noneicu_icsb32{
        using Addr = Register::Address<0x4002007d,0xffffffff>;
    }
    namespace Noneicu_iccp0{
        using Addr = Register::Address<0x40020068,0xffffffff>;
    }
    namespace Noneicu_iccp1{
        using Addr = Register::Address<0x4002006c,0xffffffff>;
    }
    namespace Noneicu_iccp2{
        using Addr = Register::Address<0x40020070,0xffffffff>;
    }
    namespace Noneicu_iccp3{
        using Addr = Register::Address<0x40020074,0xffffffff>;
    }
    namespace Noneadcmp_acsa{
        using Addr = Register::Address<0x400200bc,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> CE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SEL2; 
    }
    namespace Noneadcmp_acsb{
        using Addr = Register::Address<0x400200b8,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BDIS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BDIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BDIS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTS2; 
    }
    namespace Noneadcmp_accp0{
        using Addr = Register::Address<0x400200a0,0xffffffff>;
    }
    namespace Noneadcmp_accp1{
        using Addr = Register::Address<0x400200a8,0xffffffff>;
    }
    namespace Noneadcmp_accp2{
        using Addr = Register::Address<0x400200b0,0xffffffff>;
    }
    namespace Noneadcmp_accpdn0{
        using Addr = Register::Address<0x400200a4,0xffffffff>;
    }
    namespace Noneadcmp_accpdn1{
        using Addr = Register::Address<0x400200ac,0xffffffff>;
    }
    namespace Noneadcmp_accpdn2{
        using Addr = Register::Address<0x400200b4,0xffffffff>;
    }
    namespace Noneadcmp_atsa{
        using Addr = Register::Address<0x400200c0,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> AD0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> AD0P; 
    }
}
