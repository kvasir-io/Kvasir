#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneen{
        using Addr = Register::Address<0x400c4000,0xffffff3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TBHALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TBEN; 
    }
    namespace Nonerun{
        using Addr = Register::Address<0x400c4004,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TBRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBPRUN; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c4008,0xffffff50>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBINSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> I2TB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TBSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TBWBF; 
    }
    namespace Nonemod{
        using Addr = Register::Address<0x400c400c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TBCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TBCLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TBCPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TBCP; 
    }
    namespace Noneffcr{
        using Addr = Register::Address<0x400c4010,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TBFF0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBE0T1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TBE1T1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TBC0T1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TBC1T1; 
    }
    namespace Nonest{
        using Addr = Register::Address<0x400c4014,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTTB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTTB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTTBOF; 
    }
    namespace Noneim{
        using Addr = Register::Address<0x400c4018,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TBIM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TBIM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBIMOF; 
    }
    namespace Noneuc{
        using Addr = Register::Address<0x400c401c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> UC; 
    }
    namespace Nonerg0{
        using Addr = Register::Address<0x400c4020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TBRG0; 
    }
    namespace Nonerg1{
        using Addr = Register::Address<0x400c4024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TBRG1; 
    }
    namespace Nonecp0{
        using Addr = Register::Address<0x400c4028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TBCP0; 
    }
    namespace Nonecp1{
        using Addr = Register::Address<0x400c402c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TBCP1; 
    }
}
