#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedr{
        using Addr = Register::Address<0x40048000,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OE; 
    }
    namespace Nonersr{
        using Addr = Register::Address<0x40048004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OE; 
    }
    namespace Noneecr{
        using Addr = Register::Address<0x40048004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OE; 
    }
    namespace Nonefr{
        using Addr = Register::Address<0x40048018,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RI; 
    }
    namespace Noneilpr{
        using Addr = Register::Address<0x40048020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ILPDVSR; 
    }
    namespace Noneibdr{
        using Addr = Register::Address<0x40048024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BAUDDIVINT; 
    }
    namespace Nonefbdr{
        using Addr = Register::Address<0x40048028,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> BAUDDIVFRAC; 
    }
    namespace Nonelcr_h{
        using Addr = Register::Address<0x4004802c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> WLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SPS; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x40048030,0xffff30f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UARTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SIREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SIRLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTSEN; 
    }
    namespace Noneifls{
        using Addr = Register::Address<0x40048034,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TXIFLSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> RXIFLSEL; 
    }
    namespace Noneimsc{
        using Addr = Register::Address<0x40048038,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RIMIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTSMIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DCDMIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSRMIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BEIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OEIM; 
    }
    namespace Noneris{
        using Addr = Register::Address<0x4004803c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RIRMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTSRMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DCDRMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSRRMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FERIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PERIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BERIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OERIS; 
    }
    namespace Nonemis{
        using Addr = Register::Address<0x40048040,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RIMMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTSMMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DCDMMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSRMMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BEMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OEMIS; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x40048044,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RIMIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTSMIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DCDMIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DSRMIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BEIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OEIC; 
    }
    namespace Nonedmacr{
        using Addr = Register::Address<0x40048048,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMAONERR; 
    }
}
