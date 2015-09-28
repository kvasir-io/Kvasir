#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace SYSCTRL_bod33{
        using Addr = Register::Address<0x40000834,0xffc00ca1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HYST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> ACTION; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RUNSTDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16)> LEVEL; 
    }
    namespace SYSCTRL_dfllctrl{
        using Addr = Register::Address<0x40000824,0xfffff001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LLAW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USBCRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RUNSTDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ONDEMAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> QLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BPLCKC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAITLOCK; 
    }
    namespace SYSCTRL_dfllmul{
        using Addr = Register::Address<0x4000082c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MUL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> FSTEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,26)> CSTEP; 
    }
    namespace SYSCTRL_dfllsync{
        using Addr = Register::Address<0x40000830,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> READREQ; 
    }
    namespace SYSCTRL_dfllval{
        using Addr = Register::Address<0x40000828,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> FINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,10)> COARSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> DIFF; 
    }
    namespace SYSCTRL_dpllctrla{
        using Addr = Register::Address<0x40000844,0xffffff3d>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RUNSTDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ONDEMAND; 
    }
    namespace SYSCTRL_dpllctrlb{
        using Addr = Register::Address<0x4000084c,0xf800e8c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FILTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> REFCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> LTIME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LBYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> DIV; 
    }
    namespace SYSCTRL_dpllratio{
        using Addr = Register::Address<0x40000848,0xfff0f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> LDRFRAC; 
    }
    namespace SYSCTRL_dpllstatus{
        using Addr = Register::Address<0x40000850,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLKRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIV; 
    }
    namespace SYSCTRL_intenclr{
        using Addr = Register::Address<0x40000800,0xfffc7000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XOSCRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> XOSC32KRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSC32KRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSC8MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DFLLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DFLLOOB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DFLLLCKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DFLLLCKC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DFLLRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BOD33RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BOD33DET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> B33SRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DPLLLCKR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DPLLLCKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DPLLLTO; 
    }
    namespace SYSCTRL_intenset{
        using Addr = Register::Address<0x40000804,0xfffc7000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XOSCRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> XOSC32KRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSC32KRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSC8MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DFLLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DFLLOOB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DFLLLCKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DFLLLCKC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DFLLRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BOD33RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BOD33DET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> B33SRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DPLLLCKR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DPLLLCKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DPLLLTO; 
    }
    namespace SYSCTRL_intflag{
        using Addr = Register::Address<0x40000808,0xfffc7000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XOSCRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> XOSC32KRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSC32KRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSC8MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DFLLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DFLLOOB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DFLLLCKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DFLLLCKC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DFLLRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BOD33RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BOD33DET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> B33SRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DPLLLCKR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DPLLLCKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DPLLLTO; 
    }
    namespace SYSCTRL_osculp32k{
        using Addr = Register::Address<0x4000081c,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CALIB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WRTLOCK; 
    }
    namespace SYSCTRL_osc8m{
        using Addr = Register::Address<0x40000820,0x3000fc3d>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RUNSTDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ONDEMAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PRESC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> CALIB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> FRANGE; 
    }
    namespace SYSCTRL_osc32k{
        using Addr = Register::Address<0x40000818,0xff80e831>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EN32K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EN1K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RUNSTDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ONDEMAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> STARTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WRTLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> CALIB; 
    }
    namespace SYSCTRL_pclksr{
        using Addr = Register::Address<0x4000080c,0xfffc7000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> XOSCRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> XOSC32KRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSC32KRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSC8MRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DFLLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DFLLOOB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DFLLLCKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DFLLLCKC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DFLLRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BOD33RDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BOD33DET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> B33SRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DPLLLCKR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DPLLLCKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DPLLLTO; 
    }
    namespace SYSCTRL_vref{
        using Addr = Register::Address<0x40000840,0xf800fff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BGOUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> CALIB; 
    }
    namespace SYSCTRL_xosc{
        using Addr = Register::Address<0x40000810,0xffff0039>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> XTALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RUNSTDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ONDEMAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> GAIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AMPGC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> STARTUP; 
    }
    namespace SYSCTRL_xosc32k{
        using Addr = Register::Address<0x40000814,0xffffe801>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> XTALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EN32K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EN1K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AAMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RUNSTDBY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ONDEMAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> STARTUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WRTLOCK; 
    }
}
