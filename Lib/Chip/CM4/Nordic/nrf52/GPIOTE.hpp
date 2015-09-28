#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_out0{
        using Addr = Register::Address<0x40006000,0xffffffff>;
    }
    namespace Nonetasks_out1{
        using Addr = Register::Address<0x40006004,0xffffffff>;
    }
    namespace Nonetasks_out2{
        using Addr = Register::Address<0x40006008,0xffffffff>;
    }
    namespace Nonetasks_out3{
        using Addr = Register::Address<0x4000600c,0xffffffff>;
    }
    namespace Nonetasks_out4{
        using Addr = Register::Address<0x40006010,0xffffffff>;
    }
    namespace Nonetasks_out5{
        using Addr = Register::Address<0x40006014,0xffffffff>;
    }
    namespace Nonetasks_out6{
        using Addr = Register::Address<0x40006018,0xffffffff>;
    }
    namespace Nonetasks_out7{
        using Addr = Register::Address<0x4000601c,0xffffffff>;
    }
    namespace Nonetasks_set0{
        using Addr = Register::Address<0x40006030,0xffffffff>;
    }
    namespace Nonetasks_set1{
        using Addr = Register::Address<0x40006034,0xffffffff>;
    }
    namespace Nonetasks_set2{
        using Addr = Register::Address<0x40006038,0xffffffff>;
    }
    namespace Nonetasks_set3{
        using Addr = Register::Address<0x4000603c,0xffffffff>;
    }
    namespace Nonetasks_set4{
        using Addr = Register::Address<0x40006040,0xffffffff>;
    }
    namespace Nonetasks_set5{
        using Addr = Register::Address<0x40006044,0xffffffff>;
    }
    namespace Nonetasks_set6{
        using Addr = Register::Address<0x40006048,0xffffffff>;
    }
    namespace Nonetasks_set7{
        using Addr = Register::Address<0x4000604c,0xffffffff>;
    }
    namespace Nonetasks_clr0{
        using Addr = Register::Address<0x40006060,0xffffffff>;
    }
    namespace Nonetasks_clr1{
        using Addr = Register::Address<0x40006064,0xffffffff>;
    }
    namespace Nonetasks_clr2{
        using Addr = Register::Address<0x40006068,0xffffffff>;
    }
    namespace Nonetasks_clr3{
        using Addr = Register::Address<0x4000606c,0xffffffff>;
    }
    namespace Nonetasks_clr4{
        using Addr = Register::Address<0x40006070,0xffffffff>;
    }
    namespace Nonetasks_clr5{
        using Addr = Register::Address<0x40006074,0xffffffff>;
    }
    namespace Nonetasks_clr6{
        using Addr = Register::Address<0x40006078,0xffffffff>;
    }
    namespace Nonetasks_clr7{
        using Addr = Register::Address<0x4000607c,0xffffffff>;
    }
    namespace Noneevents_in0{
        using Addr = Register::Address<0x40006100,0xffffffff>;
    }
    namespace Noneevents_in1{
        using Addr = Register::Address<0x40006104,0xffffffff>;
    }
    namespace Noneevents_in2{
        using Addr = Register::Address<0x40006108,0xffffffff>;
    }
    namespace Noneevents_in3{
        using Addr = Register::Address<0x4000610c,0xffffffff>;
    }
    namespace Noneevents_in4{
        using Addr = Register::Address<0x40006110,0xffffffff>;
    }
    namespace Noneevents_in5{
        using Addr = Register::Address<0x40006114,0xffffffff>;
    }
    namespace Noneevents_in6{
        using Addr = Register::Address<0x40006118,0xffffffff>;
    }
    namespace Noneevents_in7{
        using Addr = Register::Address<0x4000611c,0xffffffff>;
    }
    namespace Noneevents_port{
        using Addr = Register::Address<0x4000617c,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40006304,0x7fffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PORT; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40006308,0x7fffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PORT; 
    }
    namespace Noneconfig0{
        using Addr = Register::Address<0x40006510,0xffece0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUTINIT; 
    }
    namespace Noneconfig1{
        using Addr = Register::Address<0x40006514,0xffece0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUTINIT; 
    }
    namespace Noneconfig2{
        using Addr = Register::Address<0x40006518,0xffece0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUTINIT; 
    }
    namespace Noneconfig3{
        using Addr = Register::Address<0x4000651c,0xffece0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUTINIT; 
    }
    namespace Noneconfig4{
        using Addr = Register::Address<0x40006520,0xffece0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUTINIT; 
    }
    namespace Noneconfig5{
        using Addr = Register::Address<0x40006524,0xffece0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUTINIT; 
    }
    namespace Noneconfig6{
        using Addr = Register::Address<0x40006528,0xffece0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUTINIT; 
    }
    namespace Noneconfig7{
        using Addr = Register::Address<0x4000652c,0xffece0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> POLARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OUTINIT; 
    }
}
