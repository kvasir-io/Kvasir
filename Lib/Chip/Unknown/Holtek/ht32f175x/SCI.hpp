#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SCI
    namespace NonesciCr{    ///<SCI_CR
        using Addr = Register::Address<0x40043000,0xfffffc80,0,unsigned>;
        ///CONV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> conv{}; 
        namespace ConvValC{
        }
        ///CREP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crep{}; 
        namespace CrepValC{
        }
        ///WTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wten{}; 
        namespace WtenValC{
        }
        ///SCIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scim{}; 
        namespace ScimValC{
        }
        ///RETRY4_5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> retry45{}; 
        namespace Retry45ValC{
        }
        ///ENSCI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ensci{}; 
        namespace EnsciValC{
        }
        ///DETCNF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> detcnf{}; 
        namespace DetcnfValC{
        }
        ///TXDMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txdma{}; 
        namespace TxdmaValC{
        }
        ///RXDMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxdma{}; 
        namespace RxdmaValC{
        }
    }
    namespace NonesciSr{    ///<SCI_SR
        using Addr = Register::Address<0x40043004,0xffffff30,0,unsigned>;
        ///PARF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> parf{}; 
        namespace ParfValC{
        }
        ///RXCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxcf{}; 
        namespace RxcfValC{
        }
        ///TXCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txcf{}; 
        namespace TxcfValC{
        }
        ///WTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wtf{}; 
        namespace WtfValC{
        }
        ///CPREF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpref{}; 
        namespace CprefValC{
        }
        ///TXBEF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txbef{}; 
        namespace TxbefValC{
        }
    }
    namespace NonesciCcr{    ///<SCI_CCR
        using Addr = Register::Address<0x40043008,0xffffff73,0,unsigned>;
        ///CCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cclk{}; 
        namespace CclkValC{
        }
        ///CDIO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cdio{}; 
        namespace CdioValC{
        }
        ///CLKSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clksel{}; 
        namespace ClkselValC{
        }
    }
    namespace NonesciEtu{    ///<SCI_ETU
        using Addr = Register::Address<0x4004300c,0xffff7800,0,unsigned>;
        ///ETU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> etu{}; 
        namespace EtuValC{
        }
        ///COMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp{}; 
        namespace CompValC{
        }
    }
    namespace NonesciGt{    ///<SCI_GT
        using Addr = Register::Address<0x40043010,0xfffffe00,0,unsigned>;
        ///GT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> gt{}; 
        namespace GtValC{
        }
    }
    namespace NonesciWt{    ///<SCI_WT
        using Addr = Register::Address<0x40043014,0xff000000,0,unsigned>;
        ///WT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> wt{}; 
        namespace WtValC{
        }
    }
    namespace NonesciIer{    ///<SCI_IER
        using Addr = Register::Address<0x40043018,0xffffff30,0,unsigned>;
        ///PARE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pare{}; 
        namespace PareValC{
        }
        ///RXCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxce{}; 
        namespace RxceValC{
        }
        ///TXCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txce{}; 
        namespace TxceValC{
        }
        ///WTE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wte{}; 
        namespace WteValC{
        }
        ///CARDIRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cardire{}; 
        namespace CardireValC{
        }
        ///TXBEE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txbee{}; 
        namespace TxbeeValC{
        }
    }
    namespace NonesciIpr{    ///<SCI_IPR
        using Addr = Register::Address<0x4004301c,0xffffff30,0,unsigned>;
        ///PARP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> parp{}; 
        namespace ParpValC{
        }
        ///RXCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxcp{}; 
        namespace RxcpValC{
        }
        ///TXCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txcp{}; 
        namespace TxcpValC{
        }
        ///WTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wtp{}; 
        namespace WtpValC{
        }
        ///CARDIRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cardirp{}; 
        namespace CardirpValC{
        }
        ///TXBEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txbep{}; 
        namespace TxbepValC{
        }
    }
    namespace NonesciTxb{    ///<SCI_TXB
        using Addr = Register::Address<0x40043020,0xffffff00,0,unsigned>;
        ///TB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tb{}; 
        namespace TbValC{
        }
    }
    namespace NonesciRxb{    ///<SCI_RXB
        using Addr = Register::Address<0x40043024,0xffffff00,0,unsigned>;
        ///RB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rb{}; 
        namespace RbValC{
        }
    }
    namespace NonesciPsc{    ///<SCI_PSC
        using Addr = Register::Address<0x40043028,0xffffffc0,0,unsigned>;
        ///PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> psc{}; 
        namespace PscValC{
        }
    }
}
