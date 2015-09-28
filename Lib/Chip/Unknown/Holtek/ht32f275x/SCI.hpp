#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonesci_cr{
        using Addr = Register::Address<0x40043000,0xfffffc80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CONV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CREP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SCIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RETRY4_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENSCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DETCNF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TXDMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RXDMA; 
    }
    namespace Nonesci_sr{
        using Addr = Register::Address<0x40043004,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PARF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CPREF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXBEF; 
    }
    namespace Nonesci_ccr{
        using Addr = Register::Address<0x40043008,0xffffff73>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CDIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLKSEL; 
    }
    namespace Nonesci_etu{
        using Addr = Register::Address<0x4004300c,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> ETU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> COMP; 
    }
    namespace Nonesci_gt{
        using Addr = Register::Address<0x40043010,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> GT; 
    }
    namespace Nonesci_wt{
        using Addr = Register::Address<0x40043014,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> WT; 
    }
    namespace Nonesci_ier{
        using Addr = Register::Address<0x40043018,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PARE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CARDIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXBEE; 
    }
    namespace Nonesci_ipr{
        using Addr = Register::Address<0x4004301c,0xffffff30>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PARP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RXCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CARDIRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXBEP; 
    }
    namespace Nonesci_txb{
        using Addr = Register::Address<0x40043020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TB; 
    }
    namespace Nonesci_rxb{
        using Addr = Register::Address<0x40043024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RB; 
    }
    namespace Nonesci_psc{
        using Addr = Register::Address<0x40043028,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> PSC; 
    }
}
