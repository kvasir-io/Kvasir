#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneen{
        using Addr = Register::Address<0x400c7000,0xffffff3e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MTMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MTHALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MTEN; 
    }
    namespace Nonerun{
        using Addr = Register::Address<0x400c7004,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MTRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MTPRUN; 
    }
    namespace Nonetbcr{
        using Addr = Register::Address<0x400c7008,0xffffff74>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MTTBCSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MTTBTRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MTI2TB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MTTBWBF; 
    }
    namespace Nonetbmod{
        using Addr = Register::Address<0x400c700c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MTTBCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MTTBCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MTTBCPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MTTBCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MTTBRSWR; 
    }
    namespace Nonetbffcr{
        using Addr = Register::Address<0x400c7010,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MTTBFF0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MTTBE0T1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MTTBE1T1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MTTBC0T1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MTTBC1T1; 
    }
    namespace Nonetbst{
        using Addr = Register::Address<0x400c7014,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MTTBINTTB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MTTBINTTB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MTTBINTTBOF; 
    }
    namespace Nonetbim{
        using Addr = Register::Address<0x400c7018,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MTTBIM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MTTBIM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MTTBIMOF; 
    }
    namespace Nonetbuc{
        using Addr = Register::Address<0x400c701c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTUC; 
    }
    namespace Nonerg0{
        using Addr = Register::Address<0x400c7020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTRG0; 
    }
    namespace Nonerg1{
        using Addr = Register::Address<0x400c7024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTRG1; 
    }
    namespace Nonecp0{
        using Addr = Register::Address<0x400c7028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTCP0; 
    }
    namespace Nonecp1{
        using Addr = Register::Address<0x400c702c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MTCP1; 
    }
    namespace Noneigcr{
        using Addr = Register::Address<0x400c7030,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> IGCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IGSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> IGSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IGSNGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IGCLSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> IGPRD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IGIDIS; 
    }
    namespace Noneigresta{
        using Addr = Register::Address<0x400c7034,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IGRESTA; 
    }
    namespace Noneigst{
        using Addr = Register::Address<0x400c7038,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IGST; 
    }
    namespace Noneigicr{
        using Addr = Register::Address<0x400c703c,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> IGNCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IGTRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IGTRGM; 
    }
    namespace Noneigocr{
        using Addr = Register::Address<0x400c7040,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IGOEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IGOEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IGPOL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IGPOL1; 
    }
    namespace Noneigrg2{
        using Addr = Register::Address<0x400c7044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IGRG2; 
    }
    namespace Noneigrg3{
        using Addr = Register::Address<0x400c7048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IGRG3; 
    }
    namespace Noneigrg4{
        using Addr = Register::Address<0x400c704c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IGRG4; 
    }
    namespace Noneigemgcr{
        using Addr = Register::Address<0x400c7050,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IGEMGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IGEMGOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IGEMGRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IGEMGCNT; 
    }
    namespace Noneigemgst{
        using Addr = Register::Address<0x400c7054,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IGEMGST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IGEMGIN; 
    }
    namespace Noneigtrg{
        using Addr = Register::Address<0x400c7058,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> IGTRG; 
    }
}
