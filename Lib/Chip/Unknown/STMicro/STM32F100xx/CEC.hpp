#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecfgr{
        using Addr = Register::Address<0x40007800,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BPEM; 
    }
    namespace Noneoar{
        using Addr = Register::Address<0x40007804,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> OA; 
    }
    namespace Nonepres{
        using Addr = Register::Address<0x40007808,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> PRESC; 
    }
    namespace Noneesr{
        using Addr = Register::Address<0x4000780c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RBTFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ACKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TBTFE; 
    }
    namespace Nonecsr{
        using Addr = Register::Address<0x40007810,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TEOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TBTRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RSOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RBTF; 
    }
    namespace Nonetxd{
        using Addr = Register::Address<0x40007814,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXD; 
    }
    namespace Nonerxd{
        using Addr = Register::Address<0x40007818,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXD; 
    }
}
