#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneaddr0{
        using Addr = Register::Address<0x400e0000,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> VALID; 
    }
    namespace Noneaddr1{
        using Addr = Register::Address<0x400e0004,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> VALID; 
    }
    namespace Noneaddr2{
        using Addr = Register::Address<0x400e0008,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> VALID; 
    }
    namespace Noneaddr3{
        using Addr = Register::Address<0x400e000c,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> VALID; 
    }
    namespace Noneaddr4{
        using Addr = Register::Address<0x400e0010,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> VALID; 
    }
    namespace Noneaddr5{
        using Addr = Register::Address<0x400e0014,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> VALID; 
    }
    namespace Noneaddr6{
        using Addr = Register::Address<0x400e0018,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> VALID; 
    }
    namespace Noneaddr7{
        using Addr = Register::Address<0x400e001c,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RSLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVERRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> VALID; 
    }
    namespace Noneadcr{
        using Addr = Register::Address<0x400e0020,0x7ffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> ADMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TRGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> TRGCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DIFFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ADST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DMOF; 
    }
    namespace Noneadcher{
        using Addr = Register::Address<0x400e0024,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CHEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CHEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CHEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CHEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CHEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PRESEL; 
    }
    namespace Noneadcmpr0{
        using Addr = Register::Address<0x400e0028,0xf000f0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMPCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> CMPCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CMPMATCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> CMPD; 
    }
    namespace Noneadcmpr1{
        using Addr = Register::Address<0x400e002c,0xf000f0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMPCOND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> CMPCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CMPMATCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> CMPD; 
    }
    namespace Noneadsr{
        using Addr = Register::Address<0x400e0030,0xff000080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMPF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMPF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> VALID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> OVERRUN; 
    }
    namespace Noneadcalr{
        using Addr = Register::Address<0x400e0034,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CALDONE; 
    }
    namespace Noneadpdma{
        using Addr = Register::Address<0x400e0040,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> AD_PDMA; 
    }
}
