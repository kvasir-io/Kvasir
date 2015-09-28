#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesyscr{
        using Addr = Register::Address<0x400f3000,0xffecc8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> GEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PRCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> FPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SCOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FCSTOP; 
    }
    namespace Noneosccr{
        using Addr = Register::Address<0x400f3004,0x000030f4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WUEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WUPSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> XEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> XTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> LOSCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EHCLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> WUPTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> XEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> HOSCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> WUPSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> WUPT; 
    }
    namespace Nonestbycr{
        using Addr = Register::Address<0x400f3008,0xfffefcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> STBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DRVE; 
    }
    namespace Noneehclksel{
        using Addr = Register::Address<0x400f300c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EHCLKSEL; 
    }
    namespace Nonecksel{
        using Addr = Register::Address<0x400f3010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYSCKFLG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYSCK; 
    }
    namespace Noneicrcg{
        using Addr = Register::Address<0x400f3014,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ICRCG; 
    }
    namespace Nonerstflg{
        using Addr = Register::Address<0x400f301c,0xffffffea>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PINRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBGRSTF; 
    }
    namespace Noneimcga{
        using Addr = Register::Address<0x400f3020,0x82828282>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EMST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EMCG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INT1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EMST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> EMCG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INT2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EMST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> EMCG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> INT3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> EMST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> EMCG3; 
    }
    namespace Noneimcgb{
        using Addr = Register::Address<0x400f3024,0xffff8282>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EMST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EMCG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INT5EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EMST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> EMCG5; 
    }
}
