#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneilr{
        using Addr = Register::Address<0x40046000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTCCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTCALF; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x40046008,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CCALEN; 
    }
    namespace Noneciir{
        using Addr = Register::Address<0x4004600c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IMSEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IMMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IMHOUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IMDOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IMDOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IMDOY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IMMON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IMYEAR; 
    }
    namespace Noneamr{
        using Addr = Register::Address<0x40046010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AMRSEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AMRMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AMRHOUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AMRDOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AMRDOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AMRDOY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AMRMON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AMRYEAR; 
    }
    namespace Nonectime0{
        using Addr = Register::Address<0x40046014,0xf8e0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SECONDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> MINUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> HOURS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> DOW; 
    }
    namespace Nonectime1{
        using Addr = Register::Address<0x40046018,0xf000f0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MONTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> YEAR; 
    }
    namespace Nonectime2{
        using Addr = Register::Address<0x4004601c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DOY; 
    }
    namespace Nonesec{
        using Addr = Register::Address<0x40046020,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SECONDS; 
    }
    namespace Nonemin{
        using Addr = Register::Address<0x40046024,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MINUTES; 
    }
    namespace Nonehrs{
        using Addr = Register::Address<0x40046028,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> HOURS; 
    }
    namespace Nonedom{
        using Addr = Register::Address<0x4004602c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DOM; 
    }
    namespace Nonedow{
        using Addr = Register::Address<0x40046030,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DOW; 
    }
    namespace Nonedoy{
        using Addr = Register::Address<0x40046034,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> DOY; 
    }
    namespace Nonemonth{
        using Addr = Register::Address<0x40046038,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MONTH; 
    }
    namespace Noneyear{
        using Addr = Register::Address<0x4004603c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> YEAR; 
    }
    namespace Nonecalibration{
        using Addr = Register::Address<0x40046040,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> CALVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CALDIR; 
    }
    namespace Noneasec{
        using Addr = Register::Address<0x40046060,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SECONDS; 
    }
    namespace Noneamin{
        using Addr = Register::Address<0x40046064,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MINUTES; 
    }
    namespace Noneahrs{
        using Addr = Register::Address<0x40046068,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> HOURS; 
    }
    namespace Noneadom{
        using Addr = Register::Address<0x4004606c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DOM; 
    }
    namespace Noneadow{
        using Addr = Register::Address<0x40046070,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DOW; 
    }
    namespace Noneadoy{
        using Addr = Register::Address<0x40046074,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> DOY; 
    }
    namespace Noneamon{
        using Addr = Register::Address<0x40046078,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MONTH; 
    }
    namespace Noneayrs{
        using Addr = Register::Address<0x4004607c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> YEAR; 
    }
}
