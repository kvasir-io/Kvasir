#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x4002b000,0xfffcc0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CTCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TWIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ABORT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x4002b004,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CEIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAEIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TWIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TEIF; 
    }
    namespace Noneifcr{
        using Addr = Register::Address<0x4002b008,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CCEIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CCTCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAECIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTWIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTEIF; 
    }
    namespace Nonefgmar{
        using Addr = Register::Address<0x4002b00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Nonefgor{
        using Addr = Register::Address<0x4002b010,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> LO; 
    }
    namespace Nonebgmar{
        using Addr = Register::Address<0x4002b014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Nonebgor{
        using Addr = Register::Address<0x4002b018,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> LO; 
    }
    namespace Nonefgpfccr{
        using Addr = Register::Address<0x4002b01c,0x00fc00c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ALPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> AM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CM; 
    }
    namespace Nonefgcolr{
        using Addr = Register::Address<0x4002b020,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BLUE; 
    }
    namespace Nonebgpfccr{
        using Addr = Register::Address<0x4002b024,0x00fc00c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ALPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> AM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CM; 
    }
    namespace Nonebgcolr{
        using Addr = Register::Address<0x4002b028,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BLUE; 
    }
    namespace Nonefgcmar{
        using Addr = Register::Address<0x4002b02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Nonebgcmar{
        using Addr = Register::Address<0x4002b030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Noneopfccr{
        using Addr = Register::Address<0x4002b034,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CM; 
    }
    namespace Noneocolr{
        using Addr = Register::Address<0x4002b038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> APLHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BLUE; 
    }
    namespace Noneomar{
        using Addr = Register::Address<0x4002b03c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MA; 
    }
    namespace Noneoor{
        using Addr = Register::Address<0x4002b040,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> LO; 
    }
    namespace Nonenlr{
        using Addr = Register::Address<0x4002b044,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> PL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> NL; 
    }
    namespace Nonelwr{
        using Addr = Register::Address<0x4002b048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> LW; 
    }
    namespace Noneamtcr{
        using Addr = Register::Address<0x4002b04c,0xffff00fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonefgclut{
        using Addr = Register::Address<0x4002b400,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> APLHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BLUE; 
    }
    namespace Nonebgclut{
        using Addr = Register::Address<0x4002b800,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> APLHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GREEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BLUE; 
    }
}
