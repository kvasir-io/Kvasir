#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonep0_0{
        using Addr = Register::Address<0x4002c000,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_1{
        using Addr = Register::Address<0x4002c004,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_2{
        using Addr = Register::Address<0x4002c008,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_3{
        using Addr = Register::Address<0x4002c00c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_4{
        using Addr = Register::Address<0x4002c010,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_5{
        using Addr = Register::Address<0x4002c014,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_6{
        using Addr = Register::Address<0x4002c018,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_7{
        using Addr = Register::Address<0x4002c01c,0xfffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_8{
        using Addr = Register::Address<0x4002c020,0xfffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_9{
        using Addr = Register::Address<0x4002c024,0xfffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_10{
        using Addr = Register::Address<0x4002c028,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_11{
        using Addr = Register::Address<0x4002c02c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_12{
        using Addr = Register::Address<0x4002c030,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep0_13{
        using Addr = Register::Address<0x4002c034,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep0_14{
        using Addr = Register::Address<0x4002c038,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_15{
        using Addr = Register::Address<0x4002c03c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_16{
        using Addr = Register::Address<0x4002c040,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_17{
        using Addr = Register::Address<0x4002c044,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_18{
        using Addr = Register::Address<0x4002c048,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_19{
        using Addr = Register::Address<0x4002c04c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_20{
        using Addr = Register::Address<0x4002c050,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_21{
        using Addr = Register::Address<0x4002c054,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_22{
        using Addr = Register::Address<0x4002c058,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep0_23{
        using Addr = Register::Address<0x4002c05c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep0_24{
        using Addr = Register::Address<0x4002c060,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep0_25{
        using Addr = Register::Address<0x4002c064,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep0_26{
        using Addr = Register::Address<0x4002c068,0xfffefa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DACEN; 
    }
    namespace Nonep0_27{
        using Addr = Register::Address<0x4002c06c,0xfffffcb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HIDRIVE; 
    }
    namespace Nonep0_28{
        using Addr = Register::Address<0x4002c070,0xfffffcb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HIDRIVE; 
    }
    namespace Nonep0_29{
        using Addr = Register::Address<0x4002c074,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep0_30{
        using Addr = Register::Address<0x4002c078,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep0_31{
        using Addr = Register::Address<0x4002c07c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep1_0{
        using Addr = Register::Address<0x4002c080,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_1{
        using Addr = Register::Address<0x4002c084,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_2{
        using Addr = Register::Address<0x4002c088,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_3{
        using Addr = Register::Address<0x4002c08c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_4{
        using Addr = Register::Address<0x4002c090,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_5{
        using Addr = Register::Address<0x4002c094,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_6{
        using Addr = Register::Address<0x4002c098,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_7{
        using Addr = Register::Address<0x4002c09c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_8{
        using Addr = Register::Address<0x4002c0a0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_9{
        using Addr = Register::Address<0x4002c0a4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_10{
        using Addr = Register::Address<0x4002c0a8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_11{
        using Addr = Register::Address<0x4002c0ac,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_12{
        using Addr = Register::Address<0x4002c0b0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_13{
        using Addr = Register::Address<0x4002c0b4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_14{
        using Addr = Register::Address<0x4002c0b8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_15{
        using Addr = Register::Address<0x4002c0bc,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_16{
        using Addr = Register::Address<0x4002c0c0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_17{
        using Addr = Register::Address<0x4002c0c4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_18{
        using Addr = Register::Address<0x4002c0c8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_19{
        using Addr = Register::Address<0x4002c0cc,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_20{
        using Addr = Register::Address<0x4002c0d0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_21{
        using Addr = Register::Address<0x4002c0d4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_22{
        using Addr = Register::Address<0x4002c0d8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_23{
        using Addr = Register::Address<0x4002c0dc,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_24{
        using Addr = Register::Address<0x4002c0e0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_25{
        using Addr = Register::Address<0x4002c0e4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_26{
        using Addr = Register::Address<0x4002c0e8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_27{
        using Addr = Register::Address<0x4002c0ec,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_28{
        using Addr = Register::Address<0x4002c0f0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_29{
        using Addr = Register::Address<0x4002c0f4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep1_30{
        using Addr = Register::Address<0x4002c0f8,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep1_31{
        using Addr = Register::Address<0x4002c0fc,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep2_0{
        using Addr = Register::Address<0x4002c100,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_1{
        using Addr = Register::Address<0x4002c104,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_2{
        using Addr = Register::Address<0x4002c108,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_3{
        using Addr = Register::Address<0x4002c10c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_4{
        using Addr = Register::Address<0x4002c110,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_5{
        using Addr = Register::Address<0x4002c114,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_6{
        using Addr = Register::Address<0x4002c118,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_7{
        using Addr = Register::Address<0x4002c11c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_8{
        using Addr = Register::Address<0x4002c120,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_9{
        using Addr = Register::Address<0x4002c124,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_10{
        using Addr = Register::Address<0x4002c128,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep2_11{
        using Addr = Register::Address<0x4002c12c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep2_12{
        using Addr = Register::Address<0x4002c130,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep2_13{
        using Addr = Register::Address<0x4002c134,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
    }
    namespace Nonep2_14{
        using Addr = Register::Address<0x4002c138,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_15{
        using Addr = Register::Address<0x4002c13c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_16{
        using Addr = Register::Address<0x4002c140,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_17{
        using Addr = Register::Address<0x4002c144,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_18{
        using Addr = Register::Address<0x4002c148,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_19{
        using Addr = Register::Address<0x4002c14c,0xfffffa00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FILTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_20{
        using Addr = Register::Address<0x4002c150,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_21{
        using Addr = Register::Address<0x4002c154,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_22{
        using Addr = Register::Address<0x4002c158,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_23{
        using Addr = Register::Address<0x4002c15c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_24{
        using Addr = Register::Address<0x4002c160,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_25{
        using Addr = Register::Address<0x4002c164,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_26{
        using Addr = Register::Address<0x4002c168,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_27{
        using Addr = Register::Address<0x4002c16c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_28{
        using Addr = Register::Address<0x4002c170,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_29{
        using Addr = Register::Address<0x4002c174,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_30{
        using Addr = Register::Address<0x4002c178,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep2_31{
        using Addr = Register::Address<0x4002c17c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_0{
        using Addr = Register::Address<0x4002c180,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_1{
        using Addr = Register::Address<0x4002c184,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_2{
        using Addr = Register::Address<0x4002c188,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_3{
        using Addr = Register::Address<0x4002c18c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_4{
        using Addr = Register::Address<0x4002c190,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_5{
        using Addr = Register::Address<0x4002c194,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_6{
        using Addr = Register::Address<0x4002c198,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_7{
        using Addr = Register::Address<0x4002c19c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_8{
        using Addr = Register::Address<0x4002c1a0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_9{
        using Addr = Register::Address<0x4002c1a4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_10{
        using Addr = Register::Address<0x4002c1a8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_11{
        using Addr = Register::Address<0x4002c1ac,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_12{
        using Addr = Register::Address<0x4002c1b0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_13{
        using Addr = Register::Address<0x4002c1b4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_14{
        using Addr = Register::Address<0x4002c1b8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_15{
        using Addr = Register::Address<0x4002c1bc,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_16{
        using Addr = Register::Address<0x4002c1c0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_17{
        using Addr = Register::Address<0x4002c1c4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_18{
        using Addr = Register::Address<0x4002c1c8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_19{
        using Addr = Register::Address<0x4002c1cc,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_20{
        using Addr = Register::Address<0x4002c1d0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_21{
        using Addr = Register::Address<0x4002c1d4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_22{
        using Addr = Register::Address<0x4002c1d8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_23{
        using Addr = Register::Address<0x4002c1dc,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_24{
        using Addr = Register::Address<0x4002c1e0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_25{
        using Addr = Register::Address<0x4002c1e4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_26{
        using Addr = Register::Address<0x4002c1e8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_27{
        using Addr = Register::Address<0x4002c1ec,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_28{
        using Addr = Register::Address<0x4002c1f0,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_29{
        using Addr = Register::Address<0x4002c1f4,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_30{
        using Addr = Register::Address<0x4002c1f8,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep3_31{
        using Addr = Register::Address<0x4002c1fc,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_0{
        using Addr = Register::Address<0x4002c200,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_1{
        using Addr = Register::Address<0x4002c204,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_2{
        using Addr = Register::Address<0x4002c208,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_3{
        using Addr = Register::Address<0x4002c20c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_4{
        using Addr = Register::Address<0x4002c210,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_5{
        using Addr = Register::Address<0x4002c214,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_6{
        using Addr = Register::Address<0x4002c218,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_7{
        using Addr = Register::Address<0x4002c21c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_8{
        using Addr = Register::Address<0x4002c220,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_9{
        using Addr = Register::Address<0x4002c224,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_10{
        using Addr = Register::Address<0x4002c228,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_11{
        using Addr = Register::Address<0x4002c22c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_12{
        using Addr = Register::Address<0x4002c230,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_13{
        using Addr = Register::Address<0x4002c234,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_14{
        using Addr = Register::Address<0x4002c238,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_15{
        using Addr = Register::Address<0x4002c23c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_16{
        using Addr = Register::Address<0x4002c240,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_17{
        using Addr = Register::Address<0x4002c244,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_18{
        using Addr = Register::Address<0x4002c248,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_19{
        using Addr = Register::Address<0x4002c24c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_20{
        using Addr = Register::Address<0x4002c250,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_21{
        using Addr = Register::Address<0x4002c254,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_22{
        using Addr = Register::Address<0x4002c258,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_23{
        using Addr = Register::Address<0x4002c25c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_24{
        using Addr = Register::Address<0x4002c260,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_25{
        using Addr = Register::Address<0x4002c264,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_26{
        using Addr = Register::Address<0x4002c268,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_27{
        using Addr = Register::Address<0x4002c26c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_28{
        using Addr = Register::Address<0x4002c270,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_29{
        using Addr = Register::Address<0x4002c274,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_30{
        using Addr = Register::Address<0x4002c278,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep4_31{
        using Addr = Register::Address<0x4002c27c,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep5_0{
        using Addr = Register::Address<0x4002c280,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep5_1{
        using Addr = Register::Address<0x4002c284,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
    namespace Nonep5_2{
        using Addr = Register::Address<0x4002c288,0xfffffcb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HIDRIVE; 
    }
    namespace Nonep5_3{
        using Addr = Register::Address<0x4002c28c,0xfffffcb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> HS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HIDRIVE; 
    }
    namespace Nonep5_4{
        using Addr = Register::Address<0x4002c290,0xfffff980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FUNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SLEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OD; 
    }
}
