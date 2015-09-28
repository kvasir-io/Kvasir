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
    namespace Noneevents_port{
        using Addr = Register::Address<0x4000617c,0xffffffff>;
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40006304,0x7ffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PORT; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40006308,0x7ffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IN3; 
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
    namespace Nonepower{
        using Addr = Register::Address<0x40006ffc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER; 
    }
}
