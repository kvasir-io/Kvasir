#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PMERRLOC_elcfg{
        using Addr = Register::Address<0xffffe600,0xffe0fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SECTORSZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> ERRNUM; 
    }
    namespace PMERRLOC_elprim{
        using Addr = Register::Address<0xffffe604,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PRIMITIV; 
    }
    namespace PMERRLOC_elen{
        using Addr = Register::Address<0xffffe608,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ENINIT; 
    }
    namespace PMERRLOC_eldis{
        using Addr = Register::Address<0xffffe60c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIS; 
    }
    namespace PMERRLOC_elsr{
        using Addr = Register::Address<0xffffe610,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUSY; 
    }
    namespace PMERRLOC_elier{
        using Addr = Register::Address<0xffffe614,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DONE; 
    }
    namespace PMERRLOC_elidr{
        using Addr = Register::Address<0xffffe618,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DONE; 
    }
    namespace PMERRLOC_elimr{
        using Addr = Register::Address<0xffffe61c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DONE; 
    }
    namespace PMERRLOC_elisr{
        using Addr = Register::Address<0xffffe620,0xffffe0fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> ERR_CNT; 
    }
    namespace PMERRLOC_sigma0{
        using Addr = Register::Address<0xffffe628,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA0; 
    }
    namespace PMERRLOC_sigma1{
        using Addr = Register::Address<0xffffe62c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA1; 
    }
    namespace PMERRLOC_sigma2{
        using Addr = Register::Address<0xffffe630,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA2; 
    }
    namespace PMERRLOC_sigma3{
        using Addr = Register::Address<0xffffe634,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA3; 
    }
    namespace PMERRLOC_sigma4{
        using Addr = Register::Address<0xffffe638,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA4; 
    }
    namespace PMERRLOC_sigma5{
        using Addr = Register::Address<0xffffe63c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA5; 
    }
    namespace PMERRLOC_sigma6{
        using Addr = Register::Address<0xffffe640,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA6; 
    }
    namespace PMERRLOC_sigma7{
        using Addr = Register::Address<0xffffe644,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA7; 
    }
    namespace PMERRLOC_sigma8{
        using Addr = Register::Address<0xffffe648,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA8; 
    }
    namespace PMERRLOC_sigma9{
        using Addr = Register::Address<0xffffe64c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA9; 
    }
    namespace PMERRLOC_sigma10{
        using Addr = Register::Address<0xffffe650,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA10; 
    }
    namespace PMERRLOC_sigma11{
        using Addr = Register::Address<0xffffe654,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA11; 
    }
    namespace PMERRLOC_sigma12{
        using Addr = Register::Address<0xffffe658,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA12; 
    }
    namespace PMERRLOC_sigma13{
        using Addr = Register::Address<0xffffe65c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA13; 
    }
    namespace PMERRLOC_sigma14{
        using Addr = Register::Address<0xffffe660,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA14; 
    }
    namespace PMERRLOC_sigma15{
        using Addr = Register::Address<0xffffe664,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA15; 
    }
    namespace PMERRLOC_sigma16{
        using Addr = Register::Address<0xffffe668,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA16; 
    }
    namespace PMERRLOC_sigma17{
        using Addr = Register::Address<0xffffe66c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA17; 
    }
    namespace PMERRLOC_sigma18{
        using Addr = Register::Address<0xffffe670,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA18; 
    }
    namespace PMERRLOC_sigma19{
        using Addr = Register::Address<0xffffe674,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA19; 
    }
    namespace PMERRLOC_sigma20{
        using Addr = Register::Address<0xffffe678,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA20; 
    }
    namespace PMERRLOC_sigma21{
        using Addr = Register::Address<0xffffe67c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA21; 
    }
    namespace PMERRLOC_sigma22{
        using Addr = Register::Address<0xffffe680,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA22; 
    }
    namespace PMERRLOC_sigma23{
        using Addr = Register::Address<0xffffe684,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA23; 
    }
    namespace PMERRLOC_sigma24{
        using Addr = Register::Address<0xffffe688,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SIGMA24; 
    }
    namespace PMERRLOC_el0{
        using Addr = Register::Address<0xffffe68c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el1{
        using Addr = Register::Address<0xffffe690,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el2{
        using Addr = Register::Address<0xffffe694,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el3{
        using Addr = Register::Address<0xffffe698,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el4{
        using Addr = Register::Address<0xffffe69c,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el5{
        using Addr = Register::Address<0xffffe6a0,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el6{
        using Addr = Register::Address<0xffffe6a4,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el7{
        using Addr = Register::Address<0xffffe6a8,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el8{
        using Addr = Register::Address<0xffffe6ac,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el9{
        using Addr = Register::Address<0xffffe6b0,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el10{
        using Addr = Register::Address<0xffffe6b4,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el11{
        using Addr = Register::Address<0xffffe6b8,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el12{
        using Addr = Register::Address<0xffffe6bc,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el13{
        using Addr = Register::Address<0xffffe6c0,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el14{
        using Addr = Register::Address<0xffffe6c4,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el15{
        using Addr = Register::Address<0xffffe6c8,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el16{
        using Addr = Register::Address<0xffffe6cc,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el17{
        using Addr = Register::Address<0xffffe6d0,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el18{
        using Addr = Register::Address<0xffffe6d4,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el19{
        using Addr = Register::Address<0xffffe6d8,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el20{
        using Addr = Register::Address<0xffffe6dc,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el21{
        using Addr = Register::Address<0xffffe6e0,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el22{
        using Addr = Register::Address<0xffffe6e4,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
    namespace PMERRLOC_el23{
        using Addr = Register::Address<0xffffe6e8,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> ERRLOCN; 
    }
}
