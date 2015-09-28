#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesyst_csr{
        using Addr = Register::Address<0xe000e010,0xfffefff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TICKINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COUNTFLAG; 
    }
    namespace Nonesyst_rvr{
        using Addr = Register::Address<0xe000e014,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> RELOAD; 
    }
    namespace Nonesyst_cvr{
        using Addr = Register::Address<0xe000e018,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> CURRENT; 
    }
    namespace Nonenvic_iser{
        using Addr = Register::Address<0xe000e100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETENA; 
    }
    namespace Nonenvic_icer{
        using Addr = Register::Address<0xe000e180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRENA; 
    }
    namespace Nonenvic_ispr{
        using Addr = Register::Address<0xe000e200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETPEND; 
    }
    namespace Nonenvic_icpr{
        using Addr = Register::Address<0xe000e280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRPEND; 
    }
    namespace Nonenvic_ipr0{
        using Addr = Register::Address<0xe000e400,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_3; 
    }
    namespace Nonenvic_ipr1{
        using Addr = Register::Address<0xe000e404,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_7; 
    }
    namespace Nonenvic_ipr2{
        using Addr = Register::Address<0xe000e408,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_11; 
    }
    namespace Nonenvic_ipr3{
        using Addr = Register::Address<0xe000e40c,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_15; 
    }
    namespace Nonenvic_ipr4{
        using Addr = Register::Address<0xe000e410,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_19; 
    }
    namespace Nonenvic_ipr5{
        using Addr = Register::Address<0xe000e414,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_23; 
    }
    namespace Nonenvic_ipr6{
        using Addr = Register::Address<0xe000e418,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_27; 
    }
    namespace Nonenvic_ipr7{
        using Addr = Register::Address<0xe000e41c,0x3f3f3f3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PRI_28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PRI_29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_31; 
    }
    namespace Nonecpuid{
        using Addr = Register::Address<0xe000ed00,0x00f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> REVISION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> PARTNO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> PART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> IMPLEMENTER; 
    }
    namespace Noneicsr{
        using Addr = Register::Address<0xe000ed04,0x61200e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> VECTACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,12)> VECTPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ISRPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ISRPREEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PENDSTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PENDSTSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PENDSVCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PENDSVSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> NMIPENDSET; 
    }
    namespace Noneaircr{
        using Addr = Register::Address<0xe000ed0c,0x0000fff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VECTCLRACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SYSRESETREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> VECTORKEY; 
    }
    namespace Nonescr{
        using Addr = Register::Address<0xe000ed10,0xffffffe9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLEEPONEXIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SLEEPDEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SEVONPEND; 
    }
    namespace Noneshpr2{
        using Addr = Register::Address<0xe000ed1c,0x3fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_11; 
    }
    namespace Noneshpr3{
        using Addr = Register::Address<0xe000ed20,0x3f3fffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> PRI_14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PRI_15; 
    }
}
