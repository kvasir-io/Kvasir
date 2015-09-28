#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecfg{
        using Addr = Register::Address<0x40058000,0xfffffe42>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> Enable; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> Master; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> Loop; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SPOL; 
    }
    namespace Nonedly{
        using Addr = Register::Address<0x40058004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PRE_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> POST_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FRAME_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TRANSFER_DELAY; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x40058008,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STALLED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENDTRANSFER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IDLE; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x4005800c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSDEN; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40058010,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSDEN; 
    }
    namespace Nonerxdat{
        using Addr = Register::Address<0x40058014,0xffee0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXSSELN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SOT; 
    }
    namespace Nonetxdatctl{
        using Addr = Register::Address<0x40058018,0xf08e0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXSSELN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXIGNORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> FLEN; 
    }
    namespace Nonetxdat{
        using Addr = Register::Address<0x4005801c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Nonetxctl{
        using Addr = Register::Address<0x40058020,0xf08effff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TX_SSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXIGNORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> FLEN; 
    }
    namespace Nonediv{
        using Addr = Register::Address<0x40058024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DIVVAL; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x40058028,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSD; 
    }
}
