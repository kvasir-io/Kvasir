#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneinir{
        using Addr = Register::Address<0x40008000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> Active; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> INIR; 
    }
    namespace Noneaer{
        using Addr = Register::Address<0x40008004,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> AER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ENF; 
    }
    namespace Nonefcr{
        using Addr = Register::Address<0x40008008,0xfffff0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> FRACTION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> INTEGER; 
    }
    namespace Nonetlr{
        using Addr = Register::Address<0x4000800c,0xffc08080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> _1SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> _10SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> _1MIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> _10MIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> _1HR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> _10HR; 
    }
    namespace Noneclr{
        using Addr = Register::Address<0x40008010,0xff00e0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> _1DAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> _10DAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> _1MON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> _10MON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> _1YEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> _10YEAR; 
    }
    namespace Nonetssr{
        using Addr = Register::Address<0x40008014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> _24H_12H; 
    }
    namespace Nonedwr{
        using Addr = Register::Address<0x40008018,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DWR; 
    }
    namespace Nonetar{
        using Addr = Register::Address<0x4000801c,0xffc08080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> _1SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> _10SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> _1MIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> _10MIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> _1HR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> _10HR; 
    }
    namespace Nonecar{
        using Addr = Register::Address<0x40008020,0xff00e0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> _1DAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> _10DAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> _1MON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> _10MON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> _1YEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> _10YEAR; 
    }
    namespace Nonelir{
        using Addr = Register::Address<0x40008024,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LIR; 
    }
    namespace Nonerier{
        using Addr = Register::Address<0x40008028,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AIER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIER; 
    }
    namespace Noneriir{
        using Addr = Register::Address<0x4000802c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIF; 
    }
    namespace Nonettr{
        using Addr = Register::Address<0x40008030,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TWKE; 
    }
}
