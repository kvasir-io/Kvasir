#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefmsstart{
        using Addr = Register::Address<0x00200020,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> START; 
    }
    namespace Nonefmsstop{
        using Addr = Register::Address<0x00200024,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,0)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> SIG_START; 
    }
    namespace Nonefmsw0{
        using Addr = Register::Address<0x0020002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SW0_31_0; 
    }
    namespace Nonefmsw1{
        using Addr = Register::Address<0x00200030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SW1_63_32; 
    }
    namespace Nonefmsw2{
        using Addr = Register::Address<0x00200034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SW2_95_64; 
    }
    namespace Nonefmsw3{
        using Addr = Register::Address<0x00200038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SW3_127_96; 
    }
    namespace Noneeecmd{
        using Addr = Register::Address<0x00200080,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RDPREFETCH; 
    }
    namespace Noneeewdata{
        using Addr = Register::Address<0x00200088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> WDATA; 
    }
    namespace Noneeerdata{
        using Addr = Register::Address<0x0020008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDATA; 
    }
    namespace Noneeewstate{
        using Addr = Register::Address<0x00200090,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PHASE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PHASE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> PHASE1; 
    }
    namespace Noneeeclkdiv{
        using Addr = Register::Address<0x00200094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CLKDIV; 
    }
    namespace Noneeepwrdwn{
        using Addr = Register::Address<0x00200098,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWRDWN; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x00200fe0,0xebfffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SIG_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> END_OF_RDWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> END_OF_PROG1; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x00200fe4,0xebffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EE_RW_DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EE_PROG_DONE; 
    }
    namespace Nonestatclr{
        using Addr = Register::Address<0x00200fe8,0xebfffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SIG_DONE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RDWR_CLR_ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROG1_CLR_ST; 
    }
    namespace Noneenclr{
        using Addr = Register::Address<0x00200fd8,0xebffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RDWR_CLR_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROG1_CLR_EN; 
    }
    namespace Noneenset{
        using Addr = Register::Address<0x00200fdc,0xebffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RDWR_SET_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROG1_SET_EN; 
    }
}
