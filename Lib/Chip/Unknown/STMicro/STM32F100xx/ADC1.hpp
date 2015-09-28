#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesr{
        using Addr = Register::Address<0x40012400,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JSTRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JEOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AWD; 
    }
    namespace Nonecr1{
        using Addr = Register::Address<0x40012404,0xff3f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> AWDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> JAWDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> DISCNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> JDISCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DISCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> JAUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AWDSGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> JEOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AWDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> AWDCH; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40012408,0xff0106f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TSVREFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> JSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EXTTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> EXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> JEXTTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> JEXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ALIGN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSTCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADON; 
    }
    namespace Nonesmpr1{
        using Addr = Register::Address<0x4001240c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMP10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> SMP11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> SMP12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> SMP13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SMP14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> SMP15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SMP16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> SMP17; 
    }
    namespace Nonesmpr2{
        using Addr = Register::Address<0x40012410,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> SMP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> SMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> SMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> SMP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SMP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> SMP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> SMP8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27)> SMP9; 
    }
    namespace Nonejofr1{
        using Addr = Register::Address<0x40012414,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> JOFFSET1; 
    }
    namespace Nonejofr2{
        using Addr = Register::Address<0x40012418,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> JOFFSET2; 
    }
    namespace Nonejofr3{
        using Addr = Register::Address<0x4001241c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> JOFFSET3; 
    }
    namespace Nonejofr4{
        using Addr = Register::Address<0x40012420,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> JOFFSET4; 
    }
    namespace Nonehtr{
        using Addr = Register::Address<0x40012424,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> HT; 
    }
    namespace Noneltr{
        using Addr = Register::Address<0x40012428,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LT; 
    }
    namespace Nonesqr1{
        using Addr = Register::Address<0x4001242c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> SQ16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> SQ15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> SQ14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SQ13; 
    }
    namespace Nonesqr2{
        using Addr = Register::Address<0x40012430,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25)> SQ12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> SQ11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> SQ10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> SQ9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> SQ8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SQ7; 
    }
    namespace Nonesqr3{
        using Addr = Register::Address<0x40012434,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25)> SQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> SQ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> SQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> SQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> SQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SQ1; 
    }
    namespace Nonejsqr{
        using Addr = Register::Address<0x40012438,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> JL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> JSQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> JSQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> JSQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> JSQ1; 
    }
    namespace Nonejdr1{
        using Addr = Register::Address<0x4001243c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA; 
    }
    namespace Nonejdr2{
        using Addr = Register::Address<0x40012440,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA; 
    }
    namespace Nonejdr3{
        using Addr = Register::Address<0x40012444,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA; 
    }
    namespace Nonejdr4{
        using Addr = Register::Address<0x40012448,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x4001244c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
}
