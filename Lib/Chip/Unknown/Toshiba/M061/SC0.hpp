#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneen{
        using Addr = Register::Address<0x400e1000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SIOE; 
    }
    namespace Nonebuf{
        using Addr = Register::Address<0x400e1004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TB_RB; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400e1008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RB8; 
    }
    namespace Nonemod0{
        using Addr = Register::Address<0x400e100c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TB8; 
    }
    namespace Nonebrcr{
        using Addr = Register::Address<0x400e1010,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> BRCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BRADDE; 
    }
    namespace Nonebradd{
        using Addr = Register::Address<0x400e1014,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> BRK; 
    }
    namespace Nonemod1{
        using Addr = Register::Address<0x400e1018,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> SINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> FDPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> I2SC; 
    }
    namespace Nonemod2{
        using Addr = Register::Address<0x400e101c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WBUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DRCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SBLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXRUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RBFLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TBEMP; 
    }
}
