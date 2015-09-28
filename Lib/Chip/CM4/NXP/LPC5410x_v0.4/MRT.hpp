#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneintval0{
        using Addr = Register::Address<0x40074000,0x7f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> IVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOAD; 
    }
    namespace Noneintval1{
        using Addr = Register::Address<0x40074010,0x7f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> IVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOAD; 
    }
    namespace Noneintval2{
        using Addr = Register::Address<0x40074020,0x7f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> IVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOAD; 
    }
    namespace Noneintval3{
        using Addr = Register::Address<0x40074030,0x7f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> IVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOAD; 
    }
    namespace Nonetimer0{
        using Addr = Register::Address<0x40074004,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> VALUE; 
    }
    namespace Nonetimer1{
        using Addr = Register::Address<0x40074014,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> VALUE; 
    }
    namespace Nonetimer2{
        using Addr = Register::Address<0x40074024,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> VALUE; 
    }
    namespace Nonetimer3{
        using Addr = Register::Address<0x40074034,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> VALUE; 
    }
    namespace Nonectrl0{
        using Addr = Register::Address<0x40074008,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MODE; 
    }
    namespace Nonectrl1{
        using Addr = Register::Address<0x40074018,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MODE; 
    }
    namespace Nonectrl2{
        using Addr = Register::Address<0x40074028,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MODE; 
    }
    namespace Nonectrl3{
        using Addr = Register::Address<0x40074038,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MODE; 
    }
    namespace Nonestat0{
        using Addr = Register::Address<0x4007400c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INUSE; 
    }
    namespace Nonestat1{
        using Addr = Register::Address<0x4007401c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INUSE; 
    }
    namespace Nonestat2{
        using Addr = Register::Address<0x4007402c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INUSE; 
    }
    namespace Nonestat3{
        using Addr = Register::Address<0x4007403c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INUSE; 
    }
    namespace Nonemodcfg{
        using Addr = Register::Address<0x400740f0,0x7ffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> NOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,4)> NOB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MULTITASK; 
    }
    namespace Noneidle_ch{
        using Addr = Register::Address<0x400740f4,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CHAN; 
    }
    namespace Noneirq_flag{
        using Addr = Register::Address<0x400740f8,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GFLAG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GFLAG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GFLAG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GFLAG3; 
    }
}
