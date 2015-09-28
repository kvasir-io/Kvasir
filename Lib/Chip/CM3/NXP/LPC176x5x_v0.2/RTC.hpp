#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneilr{
        using Addr = Register::Address<0x40024000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTCCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTCALF; 
    }
    namespace Noneccr{
        using Addr = Register::Address<0x40024008,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CCALEN; 
    }
    namespace Noneciir{
        using Addr = Register::Address<0x4002400c,0xffffff00>;
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
        using Addr = Register::Address<0x40024010,0xffffff00>;
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
        using Addr = Register::Address<0x40024014,0xf8e0c0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SECONDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> MINUTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> HOURS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> DOW; 
    }
    namespace Nonectime1{
        using Addr = Register::Address<0x40024018,0xf000f0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MONTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> YEAR; 
    }
    namespace Nonectime2{
        using Addr = Register::Address<0x4002401c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DOY; 
    }
    namespace Nonesec{
        using Addr = Register::Address<0x40024020,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SECONDS; 
    }
    namespace Nonemin{
        using Addr = Register::Address<0x40024024,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MINUTES; 
    }
    namespace Nonehrs{
        using Addr = Register::Address<0x40024028,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> HOURS; 
    }
    namespace Nonedom{
        using Addr = Register::Address<0x4002402c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DOM; 
    }
    namespace Nonedow{
        using Addr = Register::Address<0x40024030,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DOW; 
    }
    namespace Nonedoy{
        using Addr = Register::Address<0x40024034,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> DOY; 
    }
    namespace Nonemonth{
        using Addr = Register::Address<0x40024038,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MONTH; 
    }
    namespace Noneyear{
        using Addr = Register::Address<0x4002403c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> YEAR; 
    }
    namespace Nonecalibration{
        using Addr = Register::Address<0x40024040,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> CALVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CALDIR; 
    }
    namespace Nonegpreg0{
        using Addr = Register::Address<0x40024044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GP; 
    }
    namespace Nonegpreg1{
        using Addr = Register::Address<0x40024048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GP; 
    }
    namespace Nonegpreg2{
        using Addr = Register::Address<0x4002404c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GP; 
    }
    namespace Nonegpreg3{
        using Addr = Register::Address<0x40024050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GP; 
    }
    namespace Nonegpreg4{
        using Addr = Register::Address<0x40024054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> GP; 
    }
    namespace Nonertc_aux{
        using Addr = Register::Address<0x4002405c,0xffffffaf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTC_OSCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTC_PDOUT; 
    }
    namespace Nonertc_auxen{
        using Addr = Register::Address<0x40024058,0xffffffef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTC_OSCFEN; 
    }
    namespace Noneasec{
        using Addr = Register::Address<0x40024060,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SECONDS; 
    }
    namespace Noneamin{
        using Addr = Register::Address<0x40024064,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> MINUTES; 
    }
    namespace Noneahrs{
        using Addr = Register::Address<0x40024068,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> HOURS; 
    }
    namespace Noneadom{
        using Addr = Register::Address<0x4002406c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DOM; 
    }
    namespace Noneadow{
        using Addr = Register::Address<0x40024070,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DOW; 
    }
    namespace Noneadoy{
        using Addr = Register::Address<0x40024074,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> DOY; 
    }
    namespace Noneamon{
        using Addr = Register::Address<0x40024078,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MONTH; 
    }
    namespace Noneayrs{
        using Addr = Register::Address<0x4002407c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> YEAR; 
    }
}
