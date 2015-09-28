#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace XBARA_sel0{
        using Addr = Register::Address<0x40059000,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL1; 
    }
    namespace XBARA_sel1{
        using Addr = Register::Address<0x40059002,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL3; 
    }
    namespace XBARA_sel2{
        using Addr = Register::Address<0x40059004,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL5; 
    }
    namespace XBARA_sel3{
        using Addr = Register::Address<0x40059006,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL7; 
    }
    namespace XBARA_sel4{
        using Addr = Register::Address<0x40059008,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL9; 
    }
    namespace XBARA_sel5{
        using Addr = Register::Address<0x4005900a,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL11; 
    }
    namespace XBARA_sel6{
        using Addr = Register::Address<0x4005900c,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL13; 
    }
    namespace XBARA_sel7{
        using Addr = Register::Address<0x4005900e,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL15; 
    }
    namespace XBARA_sel8{
        using Addr = Register::Address<0x40059010,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL17; 
    }
    namespace XBARA_sel9{
        using Addr = Register::Address<0x40059012,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL19; 
    }
    namespace XBARA_sel10{
        using Addr = Register::Address<0x40059014,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL21; 
    }
    namespace XBARA_sel11{
        using Addr = Register::Address<0x40059016,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL23; 
    }
    namespace XBARA_sel12{
        using Addr = Register::Address<0x40059018,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL25; 
    }
    namespace XBARA_sel13{
        using Addr = Register::Address<0x4005901a,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL27; 
    }
    namespace XBARA_sel14{
        using Addr = Register::Address<0x4005901c,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL29; 
    }
    namespace XBARA_sel15{
        using Addr = Register::Address<0x4005901e,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL31; 
    }
    namespace XBARA_sel16{
        using Addr = Register::Address<0x40059020,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL33; 
    }
    namespace XBARA_sel17{
        using Addr = Register::Address<0x40059022,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL35; 
    }
    namespace XBARA_sel18{
        using Addr = Register::Address<0x40059024,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL37; 
    }
    namespace XBARA_sel19{
        using Addr = Register::Address<0x40059026,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL39; 
    }
    namespace XBARA_sel20{
        using Addr = Register::Address<0x40059028,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL41; 
    }
    namespace XBARA_sel21{
        using Addr = Register::Address<0x4005902a,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL43; 
    }
    namespace XBARA_sel22{
        using Addr = Register::Address<0x4005902c,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL45; 
    }
    namespace XBARA_sel23{
        using Addr = Register::Address<0x4005902e,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL47; 
    }
    namespace XBARA_sel24{
        using Addr = Register::Address<0x40059030,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL49; 
    }
    namespace XBARA_sel25{
        using Addr = Register::Address<0x40059032,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL51; 
    }
    namespace XBARA_sel26{
        using Addr = Register::Address<0x40059034,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL53; 
    }
    namespace XBARA_sel27{
        using Addr = Register::Address<0x40059036,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL55; 
    }
    namespace XBARA_sel28{
        using Addr = Register::Address<0x40059038,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> SEL57; 
    }
    namespace XBARA_sel29{
        using Addr = Register::Address<0x4005903a,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SEL58; 
    }
    namespace XBARA_ctrl0{
        using Addr = Register::Address<0x4005903c,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EDGE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STS1; 
    }
    namespace XBARA_ctrl1{
        using Addr = Register::Address<0x4005903e,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EDGE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STS3; 
    }
}
