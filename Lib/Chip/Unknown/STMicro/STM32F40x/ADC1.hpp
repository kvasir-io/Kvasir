#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesr{
        using Addr = Register::Address<0x40012000,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JSTRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JEOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AWD; 
    }
    namespace Nonecr1{
        using Addr = Register::Address<0x40012004,0xf83f0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> OVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> RES; 
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
        using Addr = Register::Address<0x40012008,0x8080f0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> EXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> EXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> JSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> JEXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> JEXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ALIGN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EOCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADON; 
    }
    namespace Nonesmpr1{
        using Addr = Register::Address<0x4001200c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SMPx_x; 
    }
    namespace Nonesmpr2{
        using Addr = Register::Address<0x40012010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SMPx_x; 
    }
    namespace Nonejofr1{
        using Addr = Register::Address<0x40012014,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> JOFFSET1; 
    }
    namespace Nonejofr2{
        using Addr = Register::Address<0x40012018,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> JOFFSET2; 
    }
    namespace Nonejofr3{
        using Addr = Register::Address<0x4001201c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> JOFFSET3; 
    }
    namespace Nonejofr4{
        using Addr = Register::Address<0x40012020,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> JOFFSET4; 
    }
    namespace Nonehtr{
        using Addr = Register::Address<0x40012024,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> HT; 
    }
    namespace Noneltr{
        using Addr = Register::Address<0x40012028,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LT; 
    }
    namespace Nonesqr1{
        using Addr = Register::Address<0x4001202c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> SQ16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> SQ15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> SQ14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SQ13; 
    }
    namespace Nonesqr2{
        using Addr = Register::Address<0x40012030,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25)> SQ12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> SQ11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> SQ10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> SQ9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> SQ8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SQ7; 
    }
    namespace Nonesqr3{
        using Addr = Register::Address<0x40012034,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,25)> SQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> SQ5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> SQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> SQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> SQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SQ1; 
    }
    namespace Nonejsqr{
        using Addr = Register::Address<0x40012038,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> JL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,15)> JSQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,10)> JSQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,5)> JSQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> JSQ1; 
    }
    namespace Nonejdr1{
        using Addr = Register::Address<0x4001203c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA; 
    }
    namespace Nonejdr2{
        using Addr = Register::Address<0x40012040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA; 
    }
    namespace Nonejdr3{
        using Addr = Register::Address<0x40012044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA; 
    }
    namespace Nonejdr4{
        using Addr = Register::Address<0x40012048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x4001204c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
}
