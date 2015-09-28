#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesyscr{
        using Addr = Register::Address<0x400f3000,0xffece8f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> GEAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> PRCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> FPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SCOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FCSTOP; 
    }
    namespace Noneosccr{
        using Addr = Register::Address<0x400f3004,0x000008f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WUEON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WUEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PLLON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WUPSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> XEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> XTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> XEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DRVOSCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DRVOSCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> WUPTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> XEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OSCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> EHOSCSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> WUPSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> WUPT; 
    }
    namespace Nonestbycr{
        using Addr = Register::Address<0x400f3008,0xfffcfff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> STBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DRVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PTKEEP; 
    }
    namespace Nonepllsel{
        using Addr = Register::Address<0x400f300c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PLLSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,1)> PLLSET; 
    }
    namespace Nonepckstp{
        using Addr = Register::Address<0x400f3018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBDSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USBHSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CANSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EMSTP; 
    }
    namespace Noneprotect{
        using Addr = Register::Address<0x400f303c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CGPROTECT; 
    }
    namespace Noneimcga{
        using Addr = Register::Address<0x400f3040,0x82828282>;
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
        using Addr = Register::Address<0x400f3044,0x82828282>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EMST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EMCG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INT5EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EMST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> EMCG5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INT6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EMST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> EMCG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> INT7EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> EMST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> EMCG7; 
    }
    namespace Noneimcgc{
        using Addr = Register::Address<0x400f3048,0x82828282>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT8EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EMST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EMCG8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INT9EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EMST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> EMCG9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INTAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EMSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> EMCGA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> INTBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> EMSTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> EMCGB; 
    }
    namespace Noneimcgd{
        using Addr = Register::Address<0x400f304c,0x82828282>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTUSBWKUPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EMSTUSBWKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> EMCGUSBWKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> INTDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EMSTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> EMCGD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INTRTCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EMSTRTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> EMCGRTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> INTRMCRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> EMSTRMCRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> EMCGRMCRX; 
    }
    namespace Noneicrcg{
        using Addr = Register::Address<0x400f3060,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ICRCG; 
    }
    namespace Nonerstflg{
        using Addr = Register::Address<0x400f3064,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PONRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PINRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDTRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STOP2RSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DBGRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OFDRSTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LVDRSTF; 
    }
    namespace Nonenmiflg{
        using Addr = Register::Address<0x400f3068,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NMIFLG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NMIFLG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NMIFLG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NMIFLG3; 
    }
}
