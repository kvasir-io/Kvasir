#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_trigger0{
        using Addr = Register::Address<0x40014000,0xffffffff>;
    }
    namespace Nonetasks_trigger1{
        using Addr = Register::Address<0x40014004,0xffffffff>;
    }
    namespace Nonetasks_trigger2{
        using Addr = Register::Address<0x40014008,0xffffffff>;
    }
    namespace Nonetasks_trigger3{
        using Addr = Register::Address<0x4001400c,0xffffffff>;
    }
    namespace Nonetasks_trigger4{
        using Addr = Register::Address<0x40014010,0xffffffff>;
    }
    namespace Nonetasks_trigger5{
        using Addr = Register::Address<0x40014014,0xffffffff>;
    }
    namespace Nonetasks_trigger6{
        using Addr = Register::Address<0x40014018,0xffffffff>;
    }
    namespace Nonetasks_trigger7{
        using Addr = Register::Address<0x4001401c,0xffffffff>;
    }
    namespace Nonetasks_trigger8{
        using Addr = Register::Address<0x40014020,0xffffffff>;
    }
    namespace Nonetasks_trigger9{
        using Addr = Register::Address<0x40014024,0xffffffff>;
    }
    namespace Nonetasks_trigger10{
        using Addr = Register::Address<0x40014028,0xffffffff>;
    }
    namespace Nonetasks_trigger11{
        using Addr = Register::Address<0x4001402c,0xffffffff>;
    }
    namespace Nonetasks_trigger12{
        using Addr = Register::Address<0x40014030,0xffffffff>;
    }
    namespace Nonetasks_trigger13{
        using Addr = Register::Address<0x40014034,0xffffffff>;
    }
    namespace Nonetasks_trigger14{
        using Addr = Register::Address<0x40014038,0xffffffff>;
    }
    namespace Nonetasks_trigger15{
        using Addr = Register::Address<0x4001403c,0xffffffff>;
    }
    namespace Noneevents_triggered0{
        using Addr = Register::Address<0x40014100,0xffffffff>;
    }
    namespace Noneevents_triggered1{
        using Addr = Register::Address<0x40014104,0xffffffff>;
    }
    namespace Noneevents_triggered2{
        using Addr = Register::Address<0x40014108,0xffffffff>;
    }
    namespace Noneevents_triggered3{
        using Addr = Register::Address<0x4001410c,0xffffffff>;
    }
    namespace Noneevents_triggered4{
        using Addr = Register::Address<0x40014110,0xffffffff>;
    }
    namespace Noneevents_triggered5{
        using Addr = Register::Address<0x40014114,0xffffffff>;
    }
    namespace Noneevents_triggered6{
        using Addr = Register::Address<0x40014118,0xffffffff>;
    }
    namespace Noneevents_triggered7{
        using Addr = Register::Address<0x4001411c,0xffffffff>;
    }
    namespace Noneevents_triggered8{
        using Addr = Register::Address<0x40014120,0xffffffff>;
    }
    namespace Noneevents_triggered9{
        using Addr = Register::Address<0x40014124,0xffffffff>;
    }
    namespace Noneevents_triggered10{
        using Addr = Register::Address<0x40014128,0xffffffff>;
    }
    namespace Noneevents_triggered11{
        using Addr = Register::Address<0x4001412c,0xffffffff>;
    }
    namespace Noneevents_triggered12{
        using Addr = Register::Address<0x40014130,0xffffffff>;
    }
    namespace Noneevents_triggered13{
        using Addr = Register::Address<0x40014134,0xffffffff>;
    }
    namespace Noneevents_triggered14{
        using Addr = Register::Address<0x40014138,0xffffffff>;
    }
    namespace Noneevents_triggered15{
        using Addr = Register::Address<0x4001413c,0xffffffff>;
    }
    namespace Noneinten{
        using Addr = Register::Address<0x40014300,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRIGGERED0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRIGGERED1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIGGERED2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TRIGGERED3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGGERED4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGGERED5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGGERED6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TRIGGERED7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TRIGGERED8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TRIGGERED9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TRIGGERED10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TRIGGERED11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRIGGERED12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TRIGGERED13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TRIGGERED14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TRIGGERED15; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40014304,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRIGGERED0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRIGGERED1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIGGERED2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TRIGGERED3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGGERED4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGGERED5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGGERED6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TRIGGERED7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TRIGGERED8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TRIGGERED9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TRIGGERED10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TRIGGERED11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRIGGERED12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TRIGGERED13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TRIGGERED14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TRIGGERED15; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40014308,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TRIGGERED0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRIGGERED1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TRIGGERED2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TRIGGERED3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRIGGERED4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGGERED5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TRIGGERED6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TRIGGERED7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TRIGGERED8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TRIGGERED9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TRIGGERED10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TRIGGERED11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRIGGERED12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TRIGGERED13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TRIGGERED14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TRIGGERED15; 
    }
}
