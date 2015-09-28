#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FB_csar0{
        using Addr = Register::Address<0x4000c000,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BA; 
    }
    namespace FB_csar1{
        using Addr = Register::Address<0x4000c00c,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BA; 
    }
    namespace FB_csar2{
        using Addr = Register::Address<0x4000c018,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BA; 
    }
    namespace FB_csar3{
        using Addr = Register::Address<0x4000c024,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BA; 
    }
    namespace FB_csar4{
        using Addr = Register::Address<0x4000c030,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BA; 
    }
    namespace FB_csar5{
        using Addr = Register::Address<0x4000c03c,0x0000ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BA; 
    }
    namespace FB_csmr0{
        using Addr = Register::Address<0x4000c004,0x0000fefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BAM; 
    }
    namespace FB_csmr1{
        using Addr = Register::Address<0x4000c010,0x0000fefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BAM; 
    }
    namespace FB_csmr2{
        using Addr = Register::Address<0x4000c01c,0x0000fefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BAM; 
    }
    namespace FB_csmr3{
        using Addr = Register::Address<0x4000c028,0x0000fefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BAM; 
    }
    namespace FB_csmr4{
        using Addr = Register::Address<0x4000c034,0x0000fefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BAM; 
    }
    namespace FB_csmr5{
        using Addr = Register::Address<0x4000c040,0x0000fefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> V; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BAM; 
    }
    namespace FB_cscr0{
        using Addr = Register::Address<0x4000c008,0x03000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BSTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> WRAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> RDAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> ASET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> SWS; 
    }
    namespace FB_cscr1{
        using Addr = Register::Address<0x4000c014,0x03000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BSTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> WRAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> RDAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> ASET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> SWS; 
    }
    namespace FB_cscr2{
        using Addr = Register::Address<0x4000c020,0x03000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BSTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> WRAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> RDAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> ASET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> SWS; 
    }
    namespace FB_cscr3{
        using Addr = Register::Address<0x4000c02c,0x03000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BSTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> WRAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> RDAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> ASET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> SWS; 
    }
    namespace FB_cscr4{
        using Addr = Register::Address<0x4000c038,0x03000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BSTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> WRAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> RDAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> ASET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> SWS; 
    }
    namespace FB_cscr5{
        using Addr = Register::Address<0x4000c044,0x03000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BSTW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> WS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> WRAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> RDAH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> ASET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> EXTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SWSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> SWS; 
    }
    namespace FB_cspmcr{
        using Addr = Register::Address<0x4000c060,0x00000fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> GROUP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> GROUP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> GROUP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> GROUP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> GROUP1; 
    }
}
