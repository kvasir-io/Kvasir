#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x40008000,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x40008004,0xffffffff>;
    }
    namespace Nonetasks_count{
        using Addr = Register::Address<0x40008008,0xffffffff>;
    }
    namespace Nonetasks_clear{
        using Addr = Register::Address<0x4000800c,0xffffffff>;
    }
    namespace Nonetasks_shutdown{
        using Addr = Register::Address<0x40008010,0xffffffff>;
    }
    namespace Nonetasks_capture0{
        using Addr = Register::Address<0x40008040,0xffffffff>;
    }
    namespace Nonetasks_capture1{
        using Addr = Register::Address<0x40008044,0xffffffff>;
    }
    namespace Nonetasks_capture2{
        using Addr = Register::Address<0x40008048,0xffffffff>;
    }
    namespace Nonetasks_capture3{
        using Addr = Register::Address<0x4000804c,0xffffffff>;
    }
    namespace Nonetasks_capture4{
        using Addr = Register::Address<0x40008050,0xffffffff>;
    }
    namespace Nonetasks_capture5{
        using Addr = Register::Address<0x40008054,0xffffffff>;
    }
    namespace Noneevents_compare0{
        using Addr = Register::Address<0x40008140,0xffffffff>;
    }
    namespace Noneevents_compare1{
        using Addr = Register::Address<0x40008144,0xffffffff>;
    }
    namespace Noneevents_compare2{
        using Addr = Register::Address<0x40008148,0xffffffff>;
    }
    namespace Noneevents_compare3{
        using Addr = Register::Address<0x4000814c,0xffffffff>;
    }
    namespace Noneevents_compare4{
        using Addr = Register::Address<0x40008150,0xffffffff>;
    }
    namespace Noneevents_compare5{
        using Addr = Register::Address<0x40008154,0xffffffff>;
    }
    namespace Noneshorts{
        using Addr = Register::Address<0x40008200,0xffffc0c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMPARE0_CLEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMPARE1_CLEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> COMPARE2_CLEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> COMPARE3_CLEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> COMPARE4_CLEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMPARE5_CLEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> COMPARE0_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> COMPARE1_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> COMPARE2_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> COMPARE3_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> COMPARE4_STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> COMPARE5_STOP; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40008304,0xffc0ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPARE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> COMPARE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> COMPARE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> COMPARE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> COMPARE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> COMPARE5; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40008308,0xffc0ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> COMPARE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> COMPARE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> COMPARE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> COMPARE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> COMPARE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> COMPARE5; 
    }
    namespace Nonemode{
        using Addr = Register::Address<0x40008504,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
    }
    namespace Nonebitmode{
        using Addr = Register::Address<0x40008508,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> BITMODE; 
    }
    namespace Noneprescaler{
        using Addr = Register::Address<0x40008510,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PRESCALER; 
    }
    namespace Nonecc0{
        using Addr = Register::Address<0x40008540,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CC; 
    }
    namespace Nonecc1{
        using Addr = Register::Address<0x40008544,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CC; 
    }
    namespace Nonecc2{
        using Addr = Register::Address<0x40008548,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CC; 
    }
    namespace Nonecc3{
        using Addr = Register::Address<0x4000854c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CC; 
    }
    namespace Nonecc4{
        using Addr = Register::Address<0x40008550,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CC; 
    }
    namespace Nonecc5{
        using Addr = Register::Address<0x40008554,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CC; 
    }
}
