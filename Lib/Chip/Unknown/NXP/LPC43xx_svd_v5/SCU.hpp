#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesfsp0_0{
        using Addr = Register::Address<0x40086000,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
    }
    namespace Nonesfsp0_1{
        using Addr = Register::Address<0x40086004,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
    }
    namespace Nonesfsp1_0{
        using Addr = Register::Address<0x40086080,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_1{
        using Addr = Register::Address<0x40086084,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_2{
        using Addr = Register::Address<0x40086088,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_3{
        using Addr = Register::Address<0x4008608c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_4{
        using Addr = Register::Address<0x40086090,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_5{
        using Addr = Register::Address<0x40086094,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_6{
        using Addr = Register::Address<0x40086098,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_7{
        using Addr = Register::Address<0x4008609c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_8{
        using Addr = Register::Address<0x400860a0,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_9{
        using Addr = Register::Address<0x400860a4,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_10{
        using Addr = Register::Address<0x400860a8,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_11{
        using Addr = Register::Address<0x400860ac,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_12{
        using Addr = Register::Address<0x400860b0,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_13{
        using Addr = Register::Address<0x400860b4,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_14{
        using Addr = Register::Address<0x400860b8,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_15{
        using Addr = Register::Address<0x400860bc,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_16{
        using Addr = Register::Address<0x400860c0,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_17{
        using Addr = Register::Address<0x400860c4,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_18{
        using Addr = Register::Address<0x400860c8,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_19{
        using Addr = Register::Address<0x400860cc,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp1_20{
        using Addr = Register::Address<0x400860d0,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_0{
        using Addr = Register::Address<0x40086100,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_1{
        using Addr = Register::Address<0x40086104,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_2{
        using Addr = Register::Address<0x40086108,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_3{
        using Addr = Register::Address<0x4008610c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_4{
        using Addr = Register::Address<0x40086110,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_5{
        using Addr = Register::Address<0x40086114,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_6{
        using Addr = Register::Address<0x40086118,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_7{
        using Addr = Register::Address<0x4008611c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_8{
        using Addr = Register::Address<0x40086120,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_9{
        using Addr = Register::Address<0x40086124,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_10{
        using Addr = Register::Address<0x40086128,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_11{
        using Addr = Register::Address<0x4008612c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_12{
        using Addr = Register::Address<0x40086130,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp2_13{
        using Addr = Register::Address<0x40086134,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp3_0{
        using Addr = Register::Address<0x40086180,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp3_1{
        using Addr = Register::Address<0x40086184,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp3_2{
        using Addr = Register::Address<0x40086188,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp3_3{
        using Addr = Register::Address<0x4008618c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp3_4{
        using Addr = Register::Address<0x40086190,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp3_5{
        using Addr = Register::Address<0x40086194,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp3_6{
        using Addr = Register::Address<0x40086198,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp3_7{
        using Addr = Register::Address<0x4008619c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp3_8{
        using Addr = Register::Address<0x400861a0,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_0{
        using Addr = Register::Address<0x40086200,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_1{
        using Addr = Register::Address<0x40086204,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_2{
        using Addr = Register::Address<0x40086208,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_3{
        using Addr = Register::Address<0x4008620c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_4{
        using Addr = Register::Address<0x40086210,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_5{
        using Addr = Register::Address<0x40086214,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_6{
        using Addr = Register::Address<0x40086218,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_7{
        using Addr = Register::Address<0x4008621c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_8{
        using Addr = Register::Address<0x40086220,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_9{
        using Addr = Register::Address<0x40086224,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp4_10{
        using Addr = Register::Address<0x40086228,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp5_0{
        using Addr = Register::Address<0x40086280,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp5_1{
        using Addr = Register::Address<0x40086284,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp5_2{
        using Addr = Register::Address<0x40086288,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp5_3{
        using Addr = Register::Address<0x4008628c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp5_4{
        using Addr = Register::Address<0x40086290,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp5_5{
        using Addr = Register::Address<0x40086294,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp5_6{
        using Addr = Register::Address<0x40086298,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp5_7{
        using Addr = Register::Address<0x4008629c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_0{
        using Addr = Register::Address<0x40086300,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_1{
        using Addr = Register::Address<0x40086304,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_2{
        using Addr = Register::Address<0x40086308,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_3{
        using Addr = Register::Address<0x4008630c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_4{
        using Addr = Register::Address<0x40086310,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_5{
        using Addr = Register::Address<0x40086314,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_6{
        using Addr = Register::Address<0x40086318,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_7{
        using Addr = Register::Address<0x4008631c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_8{
        using Addr = Register::Address<0x40086320,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_9{
        using Addr = Register::Address<0x40086324,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_10{
        using Addr = Register::Address<0x40086328,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_11{
        using Addr = Register::Address<0x4008632c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp6_12{
        using Addr = Register::Address<0x40086330,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp7_0{
        using Addr = Register::Address<0x40086380,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp7_1{
        using Addr = Register::Address<0x40086384,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp7_2{
        using Addr = Register::Address<0x40086388,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp7_3{
        using Addr = Register::Address<0x4008638c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp7_4{
        using Addr = Register::Address<0x40086390,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp7_5{
        using Addr = Register::Address<0x40086394,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp7_6{
        using Addr = Register::Address<0x40086398,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp7_7{
        using Addr = Register::Address<0x4008639c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp8_0{
        using Addr = Register::Address<0x40086400,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp8_1{
        using Addr = Register::Address<0x40086404,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp8_2{
        using Addr = Register::Address<0x40086408,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp8_3{
        using Addr = Register::Address<0x4008640c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp8_4{
        using Addr = Register::Address<0x40086410,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp8_5{
        using Addr = Register::Address<0x40086414,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp8_6{
        using Addr = Register::Address<0x40086418,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp8_7{
        using Addr = Register::Address<0x4008641c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp8_8{
        using Addr = Register::Address<0x40086420,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp9_0{
        using Addr = Register::Address<0x40086480,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp9_1{
        using Addr = Register::Address<0x40086484,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp9_2{
        using Addr = Register::Address<0x40086488,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp9_3{
        using Addr = Register::Address<0x4008648c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp9_4{
        using Addr = Register::Address<0x40086490,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp9_5{
        using Addr = Register::Address<0x40086494,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsp9_6{
        using Addr = Register::Address<0x40086498,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspa_0{
        using Addr = Register::Address<0x40086500,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspa_1{
        using Addr = Register::Address<0x40086504,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspa_2{
        using Addr = Register::Address<0x40086508,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspa_3{
        using Addr = Register::Address<0x4008650c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspa_4{
        using Addr = Register::Address<0x40086510,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspb_0{
        using Addr = Register::Address<0x40086580,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspb_1{
        using Addr = Register::Address<0x40086584,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspb_2{
        using Addr = Register::Address<0x40086588,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspb_3{
        using Addr = Register::Address<0x4008658c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspb_4{
        using Addr = Register::Address<0x40086590,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspb_5{
        using Addr = Register::Address<0x40086594,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspb_6{
        using Addr = Register::Address<0x40086598,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_0{
        using Addr = Register::Address<0x40086600,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_1{
        using Addr = Register::Address<0x40086604,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_2{
        using Addr = Register::Address<0x40086608,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_3{
        using Addr = Register::Address<0x4008660c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_4{
        using Addr = Register::Address<0x40086610,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_5{
        using Addr = Register::Address<0x40086614,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_6{
        using Addr = Register::Address<0x40086618,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_7{
        using Addr = Register::Address<0x4008661c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_8{
        using Addr = Register::Address<0x40086620,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_9{
        using Addr = Register::Address<0x40086624,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_10{
        using Addr = Register::Address<0x40086628,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_11{
        using Addr = Register::Address<0x4008662c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_12{
        using Addr = Register::Address<0x40086630,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_13{
        using Addr = Register::Address<0x40086634,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspc_14{
        using Addr = Register::Address<0x40086638,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_0{
        using Addr = Register::Address<0x40086680,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_1{
        using Addr = Register::Address<0x40086684,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_2{
        using Addr = Register::Address<0x40086688,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_3{
        using Addr = Register::Address<0x4008668c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_4{
        using Addr = Register::Address<0x40086690,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_5{
        using Addr = Register::Address<0x40086694,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_6{
        using Addr = Register::Address<0x40086698,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_7{
        using Addr = Register::Address<0x4008669c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_8{
        using Addr = Register::Address<0x400866a0,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_9{
        using Addr = Register::Address<0x400866a4,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_10{
        using Addr = Register::Address<0x400866a8,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_11{
        using Addr = Register::Address<0x400866ac,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_12{
        using Addr = Register::Address<0x400866b0,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_13{
        using Addr = Register::Address<0x400866b4,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_14{
        using Addr = Register::Address<0x400866b8,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_15{
        using Addr = Register::Address<0x400866bc,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspd_16{
        using Addr = Register::Address<0x400866c0,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_0{
        using Addr = Register::Address<0x40086700,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_1{
        using Addr = Register::Address<0x40086704,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_2{
        using Addr = Register::Address<0x40086708,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_3{
        using Addr = Register::Address<0x4008670c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_4{
        using Addr = Register::Address<0x40086710,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_5{
        using Addr = Register::Address<0x40086714,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_6{
        using Addr = Register::Address<0x40086718,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_7{
        using Addr = Register::Address<0x4008671c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_8{
        using Addr = Register::Address<0x40086720,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_9{
        using Addr = Register::Address<0x40086724,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_10{
        using Addr = Register::Address<0x40086728,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_11{
        using Addr = Register::Address<0x4008672c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_12{
        using Addr = Register::Address<0x40086730,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_13{
        using Addr = Register::Address<0x40086734,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_14{
        using Addr = Register::Address<0x40086738,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspe_15{
        using Addr = Register::Address<0x4008673c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_0{
        using Addr = Register::Address<0x40086780,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_1{
        using Addr = Register::Address<0x40086784,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_2{
        using Addr = Register::Address<0x40086788,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_3{
        using Addr = Register::Address<0x4008678c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_4{
        using Addr = Register::Address<0x40086790,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_5{
        using Addr = Register::Address<0x40086794,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_6{
        using Addr = Register::Address<0x40086798,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_7{
        using Addr = Register::Address<0x4008679c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_8{
        using Addr = Register::Address<0x400867a0,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_9{
        using Addr = Register::Address<0x400867a4,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_10{
        using Addr = Register::Address<0x400867a8,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfspf_11{
        using Addr = Register::Address<0x400867ac,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsclk_0{
        using Addr = Register::Address<0x40086c00,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsclk_1{
        using Addr = Register::Address<0x40086c04,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsclk_2{
        using Addr = Register::Address<0x40086c08,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Nonesfsclk_3{
        using Addr = Register::Address<0x40086c0c,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EZI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EHD; 
    }
    namespace Noneenaio0{
        using Addr = Register::Address<0x40086c88,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADC0_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADC0_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADC0_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADC0_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC0_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADC0_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADC0_6; 
    }
    namespace Noneenaio1{
        using Addr = Register::Address<0x40086c8c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADC1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADC1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADC1_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADC1_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADC1_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADC1_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADC1_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADC1_7; 
    }
    namespace Noneenaio2{
        using Addr = Register::Address<0x40086c90,0xffffffee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BG; 
    }
    namespace Nonesfsusb{
        using Addr = Register::Address<0x40086c80,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USB_AIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USB_ESEA; 
    }
    namespace Nonesfsi2c0{
        using Addr = Register::Address<0x40086c84,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SDA_EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCL_EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SCL_ECS; 
    }
    namespace Noneemcdelayclk{
        using Addr = Register::Address<0x40086d00,0x88888888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CLK0_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CLK1_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CLK2_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CLK3_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> CKE0_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> CKE1_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> CKE2_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> CKE3_DELAY; 
    }
    namespace Nonepintsel0{
        using Addr = Register::Address<0x40086e00,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INTPIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> PORTSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> INTPIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> PORTSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> INTPIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> PORTSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> INTPIN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PORTSEL3; 
    }
    namespace Nonepintsel1{
        using Addr = Register::Address<0x40086e04,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> INTPIN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> PORTSEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> INTPIN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> PORTSEL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> INTPIN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> PORTSEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> INTPIN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> PORTSEL7; 
    }
}
