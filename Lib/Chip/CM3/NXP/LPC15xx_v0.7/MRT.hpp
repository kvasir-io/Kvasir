#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneintval0{
        using Addr = Register::Address<0x400a0000,0x7f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> IVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOAD; 
    }
    namespace Noneintval1{
        using Addr = Register::Address<0x400a0010,0x7f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> IVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOAD; 
    }
    namespace Noneintval2{
        using Addr = Register::Address<0x400a0020,0x7f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> IVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOAD; 
    }
    namespace Noneintval3{
        using Addr = Register::Address<0x400a0030,0x7f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> IVALUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LOAD; 
    }
    namespace Nonetimer0{
        using Addr = Register::Address<0x400a0004,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> VALUE; 
    }
    namespace Nonetimer1{
        using Addr = Register::Address<0x400a0014,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> VALUE; 
    }
    namespace Nonetimer2{
        using Addr = Register::Address<0x400a0024,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> VALUE; 
    }
    namespace Nonetimer3{
        using Addr = Register::Address<0x400a0034,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> VALUE; 
    }
    namespace Nonectrl0{
        using Addr = Register::Address<0x400a0008,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MODE; 
    }
    namespace Nonectrl1{
        using Addr = Register::Address<0x400a0018,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MODE; 
    }
    namespace Nonectrl2{
        using Addr = Register::Address<0x400a0028,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MODE; 
    }
    namespace Nonectrl3{
        using Addr = Register::Address<0x400a0038,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> MODE; 
    }
    namespace Nonestat0{
        using Addr = Register::Address<0x400a000c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RUN; 
    }
    namespace Nonestat1{
        using Addr = Register::Address<0x400a001c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RUN; 
    }
    namespace Nonestat2{
        using Addr = Register::Address<0x400a002c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RUN; 
    }
    namespace Nonestat3{
        using Addr = Register::Address<0x400a003c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RUN; 
    }
    namespace Noneidle_ch{
        using Addr = Register::Address<0x400a00f4,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CHAN; 
    }
    namespace Noneirq_flag{
        using Addr = Register::Address<0x400a00f8,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GFLAG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GFLAG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GFLAG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GFLAG3; 
    }
}
