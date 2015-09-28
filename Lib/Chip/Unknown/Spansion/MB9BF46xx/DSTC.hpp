#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedestp{
        using Addr = Register::Address<0x40061000,0xffffffff>;
    }
    namespace Nonehwdesp{
        using Addr = Register::Address<0x40061004,0xc000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> HWDESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CHANNEL; 
    }
    namespace Nonecmd{
        using Addr = Register::Address<0x40061008,0xffffffff>;
    }
    namespace Nonecfg{
        using Addr = Register::Address<0x40061009,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> SWPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ESTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RBDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERINTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWINTE; 
    }
    namespace Noneswtr{
        using Addr = Register::Address<0x4006100a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SWST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SWREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> SWDESP; 
    }
    namespace Nonemoners{
        using Addr = Register::Address<0x4006100c,0xc00000a0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16)> EDESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> ECH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> EST; 
    }
    namespace Nonedreqenb0{
        using Addr = Register::Address<0x40061010,0xffffffff>;
    }
    namespace Nonedreqenb1{
        using Addr = Register::Address<0x40061014,0xffffffff>;
    }
    namespace Nonedreqenb2{
        using Addr = Register::Address<0x40061018,0xffffffff>;
    }
    namespace Nonedreqenb3{
        using Addr = Register::Address<0x4006101c,0xffffffff>;
    }
    namespace Nonedreqenb4{
        using Addr = Register::Address<0x40061020,0xffffffff>;
    }
    namespace Nonedreqenb5{
        using Addr = Register::Address<0x40061024,0xffffffff>;
    }
    namespace Nonedreqenb6{
        using Addr = Register::Address<0x40061028,0xffffffff>;
    }
    namespace Nonedreqenb7{
        using Addr = Register::Address<0x4006102c,0xffffffff>;
    }
    namespace Nonehwint0{
        using Addr = Register::Address<0x40061030,0xffffffff>;
    }
    namespace Nonehwint1{
        using Addr = Register::Address<0x40061034,0xffffffff>;
    }
    namespace Nonehwint2{
        using Addr = Register::Address<0x40061038,0xffffffff>;
    }
    namespace Nonehwint3{
        using Addr = Register::Address<0x4006103c,0xffffffff>;
    }
    namespace Nonehwint4{
        using Addr = Register::Address<0x40061040,0xffffffff>;
    }
    namespace Nonehwint5{
        using Addr = Register::Address<0x40061044,0xffffffff>;
    }
    namespace Nonehwint6{
        using Addr = Register::Address<0x40061048,0xffffffff>;
    }
    namespace Nonehwint7{
        using Addr = Register::Address<0x4006104c,0xffffffff>;
    }
    namespace Nonedqmsk0{
        using Addr = Register::Address<0x40061070,0xffffffff>;
    }
    namespace Nonedqmsk1{
        using Addr = Register::Address<0x40061074,0xffffffff>;
    }
    namespace Nonedqmsk2{
        using Addr = Register::Address<0x40061078,0xffffffff>;
    }
    namespace Nonedqmsk3{
        using Addr = Register::Address<0x4006107c,0xffffffff>;
    }
    namespace Nonedqmsk4{
        using Addr = Register::Address<0x40061080,0xffffffff>;
    }
    namespace Nonedqmsk5{
        using Addr = Register::Address<0x40061084,0xffffffff>;
    }
    namespace Nonedqmsk6{
        using Addr = Register::Address<0x40061088,0xffffffff>;
    }
    namespace Nonedqmsk7{
        using Addr = Register::Address<0x4006108c,0xffffffff>;
    }
    namespace Nonedqmskclr0{
        using Addr = Register::Address<0x40061090,0xffffffff>;
    }
    namespace Nonedqmskclr1{
        using Addr = Register::Address<0x40061094,0xffffffff>;
    }
    namespace Nonedqmskclr2{
        using Addr = Register::Address<0x40061098,0xffffffff>;
    }
    namespace Nonedqmskclr3{
        using Addr = Register::Address<0x4006109c,0xffffffff>;
    }
    namespace Nonedqmskclr4{
        using Addr = Register::Address<0x400610a0,0xffffffff>;
    }
    namespace Nonedqmskclr5{
        using Addr = Register::Address<0x400610a4,0xffffffff>;
    }
    namespace Nonedqmskclr6{
        using Addr = Register::Address<0x400610a8,0xffffffff>;
    }
    namespace Nonedqmskclr7{
        using Addr = Register::Address<0x400610ac,0xffffffff>;
    }
}
