#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Synchronous Serial Port
    namespace Nonecr0{    ///<SSP Control Register 0
        using Addr = Register::Address<0x40040000,0xffff0000,0,unsigned>;
        ///DSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dss{}; 
        namespace DssValC{
        }
        ///FRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> frf{}; 
        namespace FrfValC{
        }
        ///SPO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> spo{}; 
        namespace SpoValC{
        }
        ///SPH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sph{}; 
        namespace SphValC{
        }
        ///SCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scr{}; 
        namespace ScrValC{
        }
    }
    namespace Nonecr1{    ///<SSP Control Register 1
        using Addr = Register::Address<0x40040004,0xfffffff0,0,unsigned>;
        ///LBM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lbm{}; 
        namespace LbmValC{
        }
        ///SSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sse{}; 
        namespace SseValC{
        }
        ///MS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ms{}; 
        namespace MsValC{
        }
        ///SOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sod{}; 
        namespace SodValC{
        }
    }
    namespace Nonedr{    ///<SSP Data Register
        using Addr = Register::Address<0x40040008,0xffff0000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Nonesr{    ///<SSP Status Register
        using Addr = Register::Address<0x4004000c,0xffffffe0,0,unsigned>;
        ///TFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tfe{}; 
        namespace TfeValC{
        }
        ///TNF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tnf{}; 
        namespace TnfValC{
        }
        ///RNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rne{}; 
        namespace RneValC{
        }
        ///RFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rff{}; 
        namespace RffValC{
        }
        ///BSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
    }
    namespace Nonecpsr{    ///<SSP Clock Prescaler Register
        using Addr = Register::Address<0x40040010,0xffffff00,0,unsigned>;
        ///CPSDVSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cpsdvsr{}; 
        namespace CpsdvsrValC{
        }
    }
    namespace Noneimsc{    ///<SSP Interrupt Mask Set and Clear Register
        using Addr = Register::Address<0x40040014,0xfffffff0,0,unsigned>;
        ///RORIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rorim{}; 
        namespace RorimValC{
        }
        ///RTIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtim{}; 
        namespace RtimValC{
        }
        ///RXIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxim{}; 
        namespace RximValC{
        }
        ///TXIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txim{}; 
        namespace TximValC{
        }
    }
    namespace Noneris{    ///<SSP Raw Interrupt Status Register
        using Addr = Register::Address<0x40040018,0xfffffff0,0,unsigned>;
        ///RORRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rorris{}; 
        namespace RorrisValC{
        }
        ///RTRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtris{}; 
        namespace RtrisValC{
        }
        ///RXRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxris{}; 
        namespace RxrisValC{
        }
        ///TXRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txris{}; 
        namespace TxrisValC{
        }
    }
    namespace Nonemis{    ///<SSP Masked Interrupt Status Register
        using Addr = Register::Address<0x4004001c,0xfffffff0,0,unsigned>;
        ///RORMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rormis{}; 
        namespace RormisValC{
        }
        ///RTMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtmis{}; 
        namespace RtmisValC{
        }
        ///RXMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxmis{}; 
        namespace RxmisValC{
        }
        ///TXMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txmis{}; 
        namespace TxmisValC{
        }
    }
    namespace Noneicr{    ///<SSP Interrupt Clear Register
        using Addr = Register::Address<0x40040020,0xfffffffc,0,unsigned>;
        ///RORIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> roric{}; 
        namespace RoricValC{
        }
        ///RTIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtic{}; 
        namespace RticValC{
        }
    }
    namespace Nonedmacr{    ///<SSP DMA Control Register
        using Addr = Register::Address<0x40040024,0xfffffffc,0,unsigned>;
        ///RXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmae{}; 
        namespace RxdmaeValC{
        }
        ///TXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmae{}; 
        namespace TxdmaeValC{
        }
    }
}
