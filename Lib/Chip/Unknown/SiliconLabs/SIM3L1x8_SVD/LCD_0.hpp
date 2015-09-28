#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x4004d000,0xb0c08002>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CPFPDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RTCCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BIASEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DCDCBIASEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCDCSTDBYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> HCVLPMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> VBMLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CPOLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CMPBLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BIASSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RBGSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CPACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FBIASCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,18)> BIASBGR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> HCVCBYPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> HCVCFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> HCVCHMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> HCVCBMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CPSMD; 
    }
    namespace Noneclkcontrol{
        using Addr = Register::Address<0x4004d020,0xcffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> RTCCLKDIV; 
    }
    namespace Noneblkcontrol{
        using Addr = Register::Address<0x4004d030,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BLKMASK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BLKREXP; 
    }
    namespace Nonesegcontrol{
        using Addr = Register::Address<0x4004d040,0xfffffe08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BIASMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> SEGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BLANKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RPHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> RPHMD; 
    }
    namespace Nonectrstcontrol{
        using Addr = Register::Address<0x4004d060,0xdffeffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CTRSTBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CPCDEN; 
    }
    namespace Nonevbmcontrol{
        using Addr = Register::Address<0x4004d070,0x1e3effe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> VBMTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> VBMBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,22)> VBMCLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> VBMCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> VBMOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> VBMEN; 
    }
    namespace Nonesegmask0{
        using Addr = Register::Address<0x4004d080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SEGEN; 
    }
    namespace Nonesegmask1{
        using Addr = Register::Address<0x4004d090,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SEGEN; 
    }
    namespace Nonesegdata0{
        using Addr = Register::Address<0x4004d0a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SEGDATA0; 
    }
    namespace Nonesegdata1{
        using Addr = Register::Address<0x4004d0b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SEGDATA1; 
    }
    namespace Nonesegdata2{
        using Addr = Register::Address<0x4004d0c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SEGDATA2; 
    }
    namespace Nonesegdata3{
        using Addr = Register::Address<0x4004d0d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SEGDATA3; 
    }
    namespace Nonesegdata4{
        using Addr = Register::Address<0x4004d0e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SEGDATA4; 
    }
}
