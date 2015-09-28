#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneexti_cfgr0{
        using Addr = Register::Address<0x40024000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr1{
        using Addr = Register::Address<0x40024004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr2{
        using Addr = Register::Address<0x40024008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr3{
        using Addr = Register::Address<0x4002400c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr4{
        using Addr = Register::Address<0x40024010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr5{
        using Addr = Register::Address<0x40024014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr6{
        using Addr = Register::Address<0x40024018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr7{
        using Addr = Register::Address<0x4002401c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr8{
        using Addr = Register::Address<0x40024020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr9{
        using Addr = Register::Address<0x40024024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr10{
        using Addr = Register::Address<0x40024028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr11{
        using Addr = Register::Address<0x4002402c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr12{
        using Addr = Register::Address<0x40024030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr13{
        using Addr = Register::Address<0x40024034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr14{
        using Addr = Register::Address<0x40024038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cfgr15{
        using Addr = Register::Address<0x4002403c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0)> DBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> SRCTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DBEN; 
    }
    namespace Noneexti_cr{
        using Addr = Register::Address<0x40024040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTI0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTI1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTI2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTI3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTI4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTI5EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTI6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTI7EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTI8EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTI9EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTI10EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTI11EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTI12EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTI13EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTI14EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTI15EN; 
    }
    namespace Noneexti_edgeflgr{
        using Addr = Register::Address<0x40024044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTI0EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTI1EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTI2EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTI3EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTI4EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTI5EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTI6EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTI7EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTI8EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTI9EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTI10EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTI11EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTI12EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTI13EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTI14EDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTI15EDF; 
    }
    namespace Noneexti_edgesr{
        using Addr = Register::Address<0x40024048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTI0EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTI1EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTI2EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTI3EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTI4EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTI5EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTI6EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTI7EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTI8EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTI9EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTI10EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTI11EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTI12EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTI13EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTI14EDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTI15EDS; 
    }
    namespace Noneexti_sscr{
        using Addr = Register::Address<0x4002404c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTI0SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTI1SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTI2SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTI3SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTI4SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTI5SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTI6SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTI7SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTI8SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTI9SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTI10SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTI11SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTI12SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTI13SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTI14SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTI15SC; 
    }
    namespace Noneexti_wakupcr{
        using Addr = Register::Address<0x40024050,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTI0WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTI1WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTI2WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTI3WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTI4WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTI5WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTI6WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTI7WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTI8WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTI9WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTI10WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTI11WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTI12WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTI13WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTI14WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTI15WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EVWUPIEN; 
    }
    namespace Noneexti_wakuppolr{
        using Addr = Register::Address<0x40024054,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTI0POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTI1POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTI2POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTI3POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTI4POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTI5POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTI6POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTI7POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTI8POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTI9POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTI10POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTI11POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTI12POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTI13POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTI14POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTI15POL; 
    }
    namespace Noneexti_wakupflg{
        using Addr = Register::Address<0x40024058,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTI0WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTI1WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTI2WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTI3WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTI4WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTI5WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTI6WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTI7WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EXTI8WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EXTI9WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EXTI10WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EXTI11WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EXTI12WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTI13WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EXTI14WFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EXTI15WFL; 
    }
}
