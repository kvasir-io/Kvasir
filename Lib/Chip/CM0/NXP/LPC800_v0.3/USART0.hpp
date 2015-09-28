#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecfg{
        using Addr = Register::Address<0x40064000,0xffff2582>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DATALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PARITYSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STOPLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SYNCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLKPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SYNCMST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LOOP; 
    }
    namespace Nonectrl{
        using Addr = Register::Address<0x40064004,0xfffffcb9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXBRKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADDRDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLRCC; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x40064008,0xffff0280>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXIDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXIDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DELTACTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDISINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVERRUNINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DELTARXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERRINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERRINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISEINT; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4006400c,0xffff069a>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DELTACTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDISINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVERRUNEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DELTARXBRKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STARTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISEEN; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40064010,0xffff069a>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDYCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDYCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DELTACTSCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDISINTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVERRUNCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DELTARXBRKCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STARTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERRCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERRCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISECLR; 
    }
    namespace Nonerxdata{
        using Addr = Register::Address<0x40064014,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
    }
    namespace Nonerxdatastat{
        using Addr = Register::Address<0x40064018,0xffff1e00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISE; 
    }
    namespace Nonetxdata{
        using Addr = Register::Address<0x4006401c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TXDAT; 
    }
    namespace Nonebrg{
        using Addr = Register::Address<0x40064020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BRGVAL; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x40064024,0xffff069a>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DELTACTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXDISINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OVERRUNINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DELTARXBRK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRAMERRINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYERRINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXNOISEINT; 
    }
}
