#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonerbr{
        using Addr = Register::Address<0x40010000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RBR; 
    }
    namespace Nonethr{
        using Addr = Register::Address<0x40010000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> THR; 
    }
    namespace Nonedll{
        using Addr = Register::Address<0x40010000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DLLSB; 
    }
    namespace Nonedlm{
        using Addr = Register::Address<0x40010004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DLMSB; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40010004,0xfffffc70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RBRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> THREIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ABEOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ABTOIE; 
    }
    namespace Noneiir{
        using Addr = Register::Address<0x40010008,0xfffffc30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTSTATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> INTID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> FIFOENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ABEOINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ABTOINT; 
    }
    namespace Nonefcr{
        using Addr = Register::Address<0x40010008,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXFIFORES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXFIFORES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMAMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> RXTRIGLVL; 
    }
    namespace Nonelcr{
        using Addr = Register::Address<0x4001000c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DLAB; 
    }
    namespace Nonemcr{
        using Addr = Register::Address<0x40010010,0xffffff2c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTRCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTSCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTSEN; 
    }
    namespace Nonelsr{
        using Addr = Register::Address<0x40010014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> THRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TEMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXFE; 
    }
    namespace Nonemsr{
        using Addr = Register::Address<0x40010018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DCTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DDSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TERI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DDCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DCD; 
    }
    namespace Nonescr{
        using Addr = Register::Address<0x4001001c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> Pad; 
    }
    namespace Noneacr{
        using Addr = Register::Address<0x40010020,0xfffffcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AUTORESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ABEOINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ABTOINTCLR; 
    }
    namespace Nonefdr{
        using Addr = Register::Address<0x40010028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DIVADDVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> MULVAL; 
    }
    namespace Noneter{
        using Addr = Register::Address<0x40010030,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXEN; 
    }
    namespace Noners485ctrl{
        using Addr = Register::Address<0x4001004c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NMMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OINV; 
    }
    namespace Noners485adrmatch{
        using Addr = Register::Address<0x40010050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADRMATCH; 
    }
    namespace Noners485dly{
        using Addr = Register::Address<0x40010054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DLY; 
    }
}
