#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40005000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> L; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40005004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SA; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40005008,0xfffffefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CR; 
    }
    namespace Nonedynamiccontrol{
        using Addr = Register::Address<0x40005020,0xffffde58>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,7)> I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DP; 
    }
    namespace Nonedynamicrefresh{
        using Addr = Register::Address<0x40005024,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> REFRESH; 
    }
    namespace Nonedynamicreadconfig{
        using Addr = Register::Address<0x40005028,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RD; 
    }
    namespace Nonedynamicrp{
        using Addr = Register::Address<0x40005030,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> tRP; 
    }
    namespace Nonedynamicras{
        using Addr = Register::Address<0x40005034,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> tRAS; 
    }
    namespace Nonedynamicsrex{
        using Addr = Register::Address<0x40005038,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> tSREX; 
    }
    namespace Nonedynamicapr{
        using Addr = Register::Address<0x4000503c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> tAPR; 
    }
    namespace Nonedynamicdal{
        using Addr = Register::Address<0x40005040,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> tDAL; 
    }
    namespace Nonedynamicwr{
        using Addr = Register::Address<0x40005044,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> tWR; 
    }
    namespace Nonedynamicrc{
        using Addr = Register::Address<0x40005048,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> tRC; 
    }
    namespace Nonedynamicrfc{
        using Addr = Register::Address<0x4000504c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> tRFC; 
    }
    namespace Nonedynamicxsr{
        using Addr = Register::Address<0x40005050,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> tXSR; 
    }
    namespace Nonedynamicrrd{
        using Addr = Register::Address<0x40005054,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> tRRD; 
    }
    namespace Nonedynamicmrd{
        using Addr = Register::Address<0x40005058,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> tMRD; 
    }
    namespace Nonestaticextendedwait{
        using Addr = Register::Address<0x40005080,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> EXTENDEDWAIT; 
    }
    namespace Nonedynamicconfig0{
        using Addr = Register::Address<0x40005100,0xffe7a067>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,7)> AM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonedynamicconfig1{
        using Addr = Register::Address<0x40005120,0xffe7a067>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,7)> AM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonedynamicconfig2{
        using Addr = Register::Address<0x40005140,0xffe7a067>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,7)> AM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonedynamicconfig3{
        using Addr = Register::Address<0x40005160,0xffe7a067>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,7)> AM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonedynamicrascas0{
        using Addr = Register::Address<0x40005104,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CAS; 
    }
    namespace Nonedynamicrascas1{
        using Addr = Register::Address<0x40005124,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CAS; 
    }
    namespace Nonedynamicrascas2{
        using Addr = Register::Address<0x40005144,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CAS; 
    }
    namespace Nonedynamicrascas3{
        using Addr = Register::Address<0x40005164,0xfffffcfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CAS; 
    }
    namespace Nonestaticconfig0{
        using Addr = Register::Address<0x40005200,0xffe7fe34>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonestaticconfig1{
        using Addr = Register::Address<0x40005220,0xffe7fe34>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonestaticconfig2{
        using Addr = Register::Address<0x40005240,0xffe7fe34>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonestaticconfig3{
        using Addr = Register::Address<0x40005260,0xffe7fe34>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P; 
    }
    namespace Nonestaticwaitwen0{
        using Addr = Register::Address<0x40005204,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITWEN; 
    }
    namespace Nonestaticwaitwen1{
        using Addr = Register::Address<0x40005224,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITWEN; 
    }
    namespace Nonestaticwaitwen2{
        using Addr = Register::Address<0x40005244,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITWEN; 
    }
    namespace Nonestaticwaitwen3{
        using Addr = Register::Address<0x40005264,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITWEN; 
    }
    namespace Nonestaticwaitoen0{
        using Addr = Register::Address<0x40005208,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITOEN; 
    }
    namespace Nonestaticwaitoen1{
        using Addr = Register::Address<0x40005228,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITOEN; 
    }
    namespace Nonestaticwaitoen2{
        using Addr = Register::Address<0x40005248,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITOEN; 
    }
    namespace Nonestaticwaitoen3{
        using Addr = Register::Address<0x40005268,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITOEN; 
    }
    namespace Nonestaticwaitrd0{
        using Addr = Register::Address<0x4000520c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITRD; 
    }
    namespace Nonestaticwaitrd1{
        using Addr = Register::Address<0x4000522c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITRD; 
    }
    namespace Nonestaticwaitrd2{
        using Addr = Register::Address<0x4000524c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITRD; 
    }
    namespace Nonestaticwaitrd3{
        using Addr = Register::Address<0x4000526c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITRD; 
    }
    namespace Nonestaticwaitpag0{
        using Addr = Register::Address<0x40005210,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITPAGE; 
    }
    namespace Nonestaticwaitpag1{
        using Addr = Register::Address<0x40005230,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITPAGE; 
    }
    namespace Nonestaticwaitpag2{
        using Addr = Register::Address<0x40005250,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITPAGE; 
    }
    namespace Nonestaticwaitpag3{
        using Addr = Register::Address<0x40005270,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITPAGE; 
    }
    namespace Nonestaticwaitwr0{
        using Addr = Register::Address<0x40005214,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITWR; 
    }
    namespace Nonestaticwaitwr1{
        using Addr = Register::Address<0x40005234,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITWR; 
    }
    namespace Nonestaticwaitwr2{
        using Addr = Register::Address<0x40005254,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITWR; 
    }
    namespace Nonestaticwaitwr3{
        using Addr = Register::Address<0x40005274,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WAITWR; 
    }
    namespace Nonestaticwaitturn0{
        using Addr = Register::Address<0x40005218,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITTURN; 
    }
    namespace Nonestaticwaitturn1{
        using Addr = Register::Address<0x40005238,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITTURN; 
    }
    namespace Nonestaticwaitturn2{
        using Addr = Register::Address<0x40005258,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITTURN; 
    }
    namespace Nonestaticwaitturn3{
        using Addr = Register::Address<0x40005278,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WAITTURN; 
    }
}
