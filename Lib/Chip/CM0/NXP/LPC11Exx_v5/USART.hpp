#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonerbr{
        using Addr = Register::Address<0x40008000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RBR; 
    }
    namespace Nonethr{
        using Addr = Register::Address<0x40008000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> THR; 
    }
    namespace Nonedll{
        using Addr = Register::Address<0x40008000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DLLSB; 
    }
    namespace Nonedlm{
        using Addr = Register::Address<0x40008004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DLMSB; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40008004,0xfffffcf0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RBRINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> THREINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RLSINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ABEOINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ABTOINTEN; 
    }
    namespace Noneiir{
        using Addr = Register::Address<0x40008008,0xfffffc30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INTSTATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> INTID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> FIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ABEOINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ABTOINT; 
    }
    namespace Nonefcr{
        using Addr = Register::Address<0x40008008,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FIFOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXFIFORES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXFIFORES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> RXTL; 
    }
    namespace Nonelcr{
        using Addr = Register::Address<0x4000800c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DLAB; 
    }
    namespace Nonemcr{
        using Addr = Register::Address<0x40008010,0xffffff2c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTRCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RTSCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTSEN; 
    }
    namespace Nonelsr{
        using Addr = Register::Address<0x40008014,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> THRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TEMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXERR; 
    }
    namespace Nonemsr{
        using Addr = Register::Address<0x40008018,0xffffff00>;
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
        using Addr = Register::Address<0x4000801c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PAD; 
    }
    namespace Noneacr{
        using Addr = Register::Address<0x40008020,0xfffffcf8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AUTORESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ABEOINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ABTOINTCLR; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x40008024,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRDAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRDAINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FIXPULSEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> PULSEDIV; 
    }
    namespace Nonefdr{
        using Addr = Register::Address<0x40008028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DIVADDVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> MULVAL; 
    }
    namespace Noneosr{
        using Addr = Register::Address<0x4000802c,0xffff8001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> OSFRAC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> OSINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> FDINT; 
    }
    namespace Noneter{
        using Addr = Register::Address<0x40008030,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXEN; 
    }
    namespace Nonehden{
        using Addr = Register::Address<0x40008040,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HDEN; 
    }
    namespace Nonescictrl{
        using Addr = Register::Address<0x40008048,0xffff0018>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> NACKDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PROTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> TXRETRY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> XTRAGUARD; 
    }
    namespace Noners485ctrl{
        using Addr = Register::Address<0x4000804c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NMMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OINV; 
    }
    namespace Noners485adrmatch{
        using Addr = Register::Address<0x40008050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADRMATCH; 
    }
    namespace Noners485dly{
        using Addr = Register::Address<0x40008054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DLY; 
    }
    namespace Nonesyncctrl{
        using Addr = Register::Address<0x40008058,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSBYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CCCLR; 
    }
}
