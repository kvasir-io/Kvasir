#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40048000,0xff00ff86>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAKECLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PWAKEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PMUASLPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CPMONEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CPMONIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RAM0REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RAM1REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RAM2REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RAM3REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RAM4REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RAM5REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RAM6REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RAM7REN; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40048010,0xfffff28f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VBATMONEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> VDRVSMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> CPLOAD; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40048020,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM8EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PWAKEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PORF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CPSTS; 
    }
    namespace Nonewakeen{
        using Addr = Register::Address<0x40048030,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTC0FWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTC0A0WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP0WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACC0WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LCDMONWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PWAKEWEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LPT0WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UART0WEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPFWEN; 
    }
    namespace Nonewakestatus{
        using Addr = Register::Address<0x40048040,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTC0FWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTC0A0WF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP0WF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACC0WF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LCDMONWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PWAKEWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LPT0WF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UART0WF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CPFWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RSTWF; 
    }
    namespace Nonepwen{
        using Addr = Register::Address<0x40048050,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PW0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PW1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PW2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PW3EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PW4EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PW5EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PW6EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PW7EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PW8EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PW9EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PW10EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PW11EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PW12EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PW13EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PW14EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PW15EN; 
    }
    namespace Nonepwpol{
        using Addr = Register::Address<0x40048060,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PW0POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PW1POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PW2POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PW3POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PW4POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PW5POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PW6POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PW7POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PW8POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PW9POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PW10POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PW11POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PW12POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PW13POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PW14POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PW15POL; 
    }
}
