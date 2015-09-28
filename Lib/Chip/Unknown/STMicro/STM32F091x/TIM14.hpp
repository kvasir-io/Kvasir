#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40002000,0xfffffc78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CKD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
    }
    namespace Nonedier{
        using Addr = Register::Address<0x4000200c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIE; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40002010,0xfffffdfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIF; 
    }
    namespace Noneegr{
        using Addr = Register::Address<0x40002014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UG; 
    }
    namespace Noneccmr1_output{
        using Addr = Register::Address<0x40002018,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC1FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC1M; 
    }
    namespace Noneccmr1_input{
        using Addr = Register::Address<0x40002018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC1PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccer{
        using Addr = Register::Address<0x40002020,0xfffffff4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC1NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CC1E; 
    }
    namespace Nonecnt{
        using Addr = Register::Address<0x40002024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace Nonepsc{
        using Addr = Register::Address<0x40002028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSC; 
    }
    namespace Nonearr{
        using Addr = Register::Address<0x4000202c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ARR; 
    }
    namespace Noneccr1{
        using Addr = Register::Address<0x40002034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR1; 
    }
    namespace Noneor{
        using Addr = Register::Address<0x40002050,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RMP; 
    }
}
