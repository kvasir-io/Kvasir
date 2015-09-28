#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x2009c000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> L; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x2009c004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SA; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x2009c008,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLKR; 
    }
    namespace Nonedynamiccontrol{
        using Addr = Register::Address<0x2009c020,0xfffffe58>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> I; 
    }
    namespace Nonedynamicrefresh{
        using Addr = Register::Address<0x2009c024,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> REFRESH; 
    }
    namespace Nonedynamicreadconfig{
        using Addr = Register::Address<0x2009c028,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RD; 
    }
    namespace Nonedynamicrp{
        using Addr = Register::Address<0x2009c030,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRP; 
    }
    namespace Nonedynamicras{
        using Addr = Register::Address<0x2009c034,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRAS; 
    }
    namespace Nonedynamicsrex{
        using Addr = Register::Address<0x2009c038,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TSREX; 
    }
    namespace Nonedynamicapr{
        using Addr = Register::Address<0x2009c03c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TAPR; 
    }
    namespace Nonedynamicdal{
        using Addr = Register::Address<0x2009c040,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TDAL; 
    }
    namespace Nonedynamicwr{
        using Addr = Register::Address<0x2009c044,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TWR; 
    }
    namespace Nonedynamicrc{
        using Addr = Register::Address<0x2009c048,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TRC; 
    }
    namespace Nonedynamicrfc{
        using Addr = Register::Address<0x2009c04c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TRFC; 
    }
    namespace Nonedynamicxsr{
        using Addr = Register::Address<0x2009c050,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TXSR; 
    }
    namespace Nonedynamicrrd{
        using Addr = Register::Address<0x2009c054,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TRRD; 
    }
    namespace Nonedynamicmrd{
        using Addr = Register::Address<0x2009c058,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TMRD; 
    }
    namespace Nonestaticextendedwait{
        using Addr = Register::Address<0x2009c080,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EXTENDEDWAIT; 
    }
    namespace Nonedynamicconfig0{
        using Addr = Register::Address<0x2009c100,0xffe7a067>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,7)> AM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonedynamicconfig1{
        using Addr = Register::Address<0x2009c120,0xffe7a067>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,7)> AM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonedynamicconfig2{
        using Addr = Register::Address<0x2009c140,0xffe7a067>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,7)> AM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonedynamicconfig3{
        using Addr = Register::Address<0x2009c160,0xffe7a067>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,7)> AM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonedynamicrascas0{
        using Addr = Register::Address<0x2009c104,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CAS; 
    }
    namespace Nonedynamicrascas1{
        using Addr = Register::Address<0x2009c124,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CAS; 
    }
    namespace Nonedynamicrascas2{
        using Addr = Register::Address<0x2009c144,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CAS; 
    }
    namespace Nonedynamicrascas3{
        using Addr = Register::Address<0x2009c164,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CAS; 
    }
    namespace Nonestaticconfig0{
        using Addr = Register::Address<0x2009c200,0xffe7fe34>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonestaticconfig1{
        using Addr = Register::Address<0x2009c220,0xffe7fe34>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonestaticconfig2{
        using Addr = Register::Address<0x2009c240,0xffe7fe34>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonestaticconfig3{
        using Addr = Register::Address<0x2009c260,0xffe7fe34>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonestaticwaitwen0{
        using Addr = Register::Address<0x2009c204,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITWEN; 
    }
    namespace Nonestaticwaitwen1{
        using Addr = Register::Address<0x2009c224,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITWEN; 
    }
    namespace Nonestaticwaitwen2{
        using Addr = Register::Address<0x2009c244,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITWEN; 
    }
    namespace Nonestaticwaitwen3{
        using Addr = Register::Address<0x2009c264,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITWEN; 
    }
    namespace Nonestaticwaitoen0{
        using Addr = Register::Address<0x2009c208,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITOEN; 
    }
    namespace Nonestaticwaitoen1{
        using Addr = Register::Address<0x2009c228,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITOEN; 
    }
    namespace Nonestaticwaitoen2{
        using Addr = Register::Address<0x2009c248,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITOEN; 
    }
    namespace Nonestaticwaitoen3{
        using Addr = Register::Address<0x2009c268,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITOEN; 
    }
    namespace Nonestaticwaitrd0{
        using Addr = Register::Address<0x2009c20c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITRD; 
    }
    namespace Nonestaticwaitrd1{
        using Addr = Register::Address<0x2009c22c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITRD; 
    }
    namespace Nonestaticwaitrd2{
        using Addr = Register::Address<0x2009c24c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITRD; 
    }
    namespace Nonestaticwaitrd3{
        using Addr = Register::Address<0x2009c26c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITRD; 
    }
    namespace Nonestaticwaitpage0{
        using Addr = Register::Address<0x2009c210,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITPAGE; 
    }
    namespace Nonestaticwaitpage1{
        using Addr = Register::Address<0x2009c230,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITPAGE; 
    }
    namespace Nonestaticwaitpage2{
        using Addr = Register::Address<0x2009c250,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITPAGE; 
    }
    namespace Nonestaticwaitpage3{
        using Addr = Register::Address<0x2009c270,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITPAGE; 
    }
    namespace Nonestaticwaitwr0{
        using Addr = Register::Address<0x2009c214,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITWR; 
    }
    namespace Nonestaticwaitwr1{
        using Addr = Register::Address<0x2009c234,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITWR; 
    }
    namespace Nonestaticwaitwr2{
        using Addr = Register::Address<0x2009c254,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITWR; 
    }
    namespace Nonestaticwaitwr3{
        using Addr = Register::Address<0x2009c274,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITWR; 
    }
    namespace Nonestaticwaitturn0{
        using Addr = Register::Address<0x2009c218,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITTURN; 
    }
    namespace Nonestaticwaitturn1{
        using Addr = Register::Address<0x2009c238,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITTURN; 
    }
    namespace Nonestaticwaitturn2{
        using Addr = Register::Address<0x2009c258,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITTURN; 
    }
    namespace Nonestaticwaitturn3{
        using Addr = Register::Address<0x2009c278,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITTURN; 
    }
}
