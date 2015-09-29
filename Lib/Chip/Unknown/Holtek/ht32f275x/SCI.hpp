#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SCI
    namespace NonesciCr{    ///<SCI_CR
        using Addr = Register::Address<0x40043000,0xfffffc80,0,unsigned>;
        ///CONV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> conv{}; 
        ///CREP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crep{}; 
        ///WTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wten{}; 
        ///SCIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scim{}; 
        ///RETRY4_5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> retry45{}; 
        ///ENSCI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ensci{}; 
        ///DETCNF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> detcnf{}; 
        ///TXDMA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txdma{}; 
        ///RXDMA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxdma{}; 
    }
    namespace NonesciSr{    ///<SCI_SR
        using Addr = Register::Address<0x40043004,0xffffff30,0,unsigned>;
        ///PARF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> parf{}; 
        ///RXCF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxcf{}; 
        ///TXCF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txcf{}; 
        ///WTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wtf{}; 
        ///CPREF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpref{}; 
        ///TXBEF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txbef{}; 
    }
    namespace NonesciCcr{    ///<SCI_CCR
        using Addr = Register::Address<0x40043008,0xffffff73,0,unsigned>;
        ///CCLK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cclk{}; 
        ///CDIO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cdio{}; 
        ///CLKSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clksel{}; 
    }
    namespace NonesciEtu{    ///<SCI_ETU
        using Addr = Register::Address<0x4004300c,0xffff7800,0,unsigned>;
        ///ETU
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> etu{}; 
        ///COMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace NonesciGt{    ///<SCI_GT
        using Addr = Register::Address<0x40043010,0xfffffe00,0,unsigned>;
        ///GT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> gt{}; 
    }
    namespace NonesciWt{    ///<SCI_WT
        using Addr = Register::Address<0x40043014,0xff000000,0,unsigned>;
        ///WT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> wt{}; 
    }
    namespace NonesciIer{    ///<SCI_IER
        using Addr = Register::Address<0x40043018,0xffffff30,0,unsigned>;
        ///PARE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pare{}; 
        ///RXCE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxce{}; 
        ///TXCE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txce{}; 
        ///WTE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wte{}; 
        ///CARDIRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cardire{}; 
        ///TXBEE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txbee{}; 
    }
    namespace NonesciIpr{    ///<SCI_IPR
        using Addr = Register::Address<0x4004301c,0xffffff30,0,unsigned>;
        ///PARP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> parp{}; 
        ///RXCP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxcp{}; 
        ///TXCP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txcp{}; 
        ///WTP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wtp{}; 
        ///CARDIRP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cardirp{}; 
        ///TXBEP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txbep{}; 
    }
    namespace NonesciTxb{    ///<SCI_TXB
        using Addr = Register::Address<0x40043020,0xffffff00,0,unsigned>;
        ///TB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tb{}; 
    }
    namespace NonesciRxb{    ///<SCI_RXB
        using Addr = Register::Address<0x40043024,0xffffff00,0,unsigned>;
        ///RB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rb{}; 
    }
    namespace NonesciPsc{    ///<SCI_PSC
        using Addr = Register::Address<0x40043028,0xffffffc0,0,unsigned>;
        ///PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
}
