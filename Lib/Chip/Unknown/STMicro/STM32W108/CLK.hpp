#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneclk_sleepcr{
        using Addr = Register::Address<0x40000008,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LSEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LSI10KEN; 
    }
    namespace Noneclk_lsi10kcr{
        using Addr = Register::Address<0x4000000c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TUNE; 
    }
    namespace Noneclk_lsi1kcr{
        using Addr = Register::Address<0x40000010,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> CLKFRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,11)> CALINT; 
    }
    namespace Noneclk_hsecr1{
        using Addr = Register::Address<0x40004004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BIASTRIM; 
    }
    namespace Noneclk_hsicr{
        using Addr = Register::Address<0x40004008,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> TUNE; 
    }
    namespace Noneclk_periodcr{
        using Addr = Register::Address<0x40004010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
    }
    namespace Noneclk_periodsr{
        using Addr = Register::Address<0x40004014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PERIOD; 
    }
    namespace Noneclk_dithercr{
        using Addr = Register::Address<0x40004018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIS; 
    }
    namespace Noneclk_hsecr2{
        using Addr = Register::Address<0x4000401c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EN; 
    }
    namespace Noneclk_cpucr{
        using Addr = Register::Address<0x40004020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SW2; 
    }
}
