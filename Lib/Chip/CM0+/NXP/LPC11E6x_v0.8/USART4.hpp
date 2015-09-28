#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecfg{
        using Addr = Register::Address<0x4004c000,0xff032502>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DATALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PARITYSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STOPLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MODE32K; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SYNCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SYNCMST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LOOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OETA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> AUTOADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> OESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> OEPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TXPOL; 
    }
    namespace Nonectl{
        using Addr = Register::Address<0x4004c004,0xfffefcb9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXBRKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADDRDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRCCONRX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AUTOBAUD; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x4004c008,0xfffe0280>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXIDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXIDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DELTACTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDISSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVERRUNINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DELTARXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERRINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERRINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISEINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ABERR; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4004c00c,0xfffe0692>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXIDLEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DELTACTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDISEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVERRUNEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DELTARXBRKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STARTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ABERREN; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x4004c010,0xfffe0692>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDYCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDYCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXIDLECLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DELTACTSCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDISINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVERRUNCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DELTARXBRKCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STARTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERRCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERRCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISECLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ABERRCLR; 
    }
    namespace Nonerxdat{
        using Addr = Register::Address<0x4004c014,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
    }
    namespace Nonerxdatstat{
        using Addr = Register::Address<0x4004c018,0xffff1e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISE; 
    }
    namespace Nonetxdat{
        using Addr = Register::Address<0x4004c01c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TXDAT; 
    }
    namespace Nonebrg{
        using Addr = Register::Address<0x4004c020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BRGVAL; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x4004c024,0xfffe0692>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXIDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DELTACTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDISINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVERRUNINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DELTARXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERRINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERRINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISEINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ABERR; 
    }
    namespace Noneosr{
        using Addr = Register::Address<0x4004c028,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> OSRVAL; 
    }
    namespace Noneaddr{
        using Addr = Register::Address<0x4004c02c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADDRESS; 
    }
}
