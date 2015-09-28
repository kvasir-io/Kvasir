#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecfg{
        using Addr = Register::Address<0x40048000,0xfffff042>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MASTER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SPOL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SPOL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SPOL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SPOL3; 
    }
    namespace Nonedly{
        using Addr = Register::Address<0x40048004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PRE_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> POST_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FRAME_DELAY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> TRANSFER_DELAY; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x40048008,0xfffffe00>;
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
        using Addr = Register::Address<0x4004800c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSDEN; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40048010,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSDEN; 
    }
    namespace Nonerxdat{
        using Addr = Register::Address<0x40048014,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXSSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXSSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RXSSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXSSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SOT; 
    }
    namespace Nonetxdatctl{
        using Addr = Register::Address<0x40048018,0xf0800000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXSSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXSSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TXSSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TXSSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXIGNORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> FLEN; 
    }
    namespace Nonetxdat{
        using Addr = Register::Address<0x4004801c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DATA; 
    }
    namespace Nonetxctl{
        using Addr = Register::Address<0x40048020,0xf080ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXSSEL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXSSEL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TXSSEL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TXSSEL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> EOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RXIGNORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> FLEN; 
    }
    namespace Nonediv{
        using Addr = Register::Address<0x40048024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DIVVAL; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x40048028,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXOV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXUR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSD; 
    }
}
