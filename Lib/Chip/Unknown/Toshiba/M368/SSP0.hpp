#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Synchronous Serial Port
    namespace Nonecr0{    ///<SSP Control Register 0
        using Addr = Register::Address<0x40040000,0xffff0000,0,unsigned>;
        ///DSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dss{}; 
        ///FRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> frf{}; 
        ///SPO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> spo{}; 
        ///SPH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sph{}; 
        ///SCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> scr{}; 
    }
    namespace Nonecr1{    ///<SSP Control Register 1
        using Addr = Register::Address<0x40040004,0xfffffff0,0,unsigned>;
        ///LBM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lbm{}; 
        ///SSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sse{}; 
        ///MS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ms{}; 
        ///SOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sod{}; 
    }
    namespace Nonedr{    ///<SSP Data Register
        using Addr = Register::Address<0x40040008,0xffff0000,0,unsigned>;
        ///DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonesr{    ///<SSP Status Register
        using Addr = Register::Address<0x4004000c,0xffffffe0,0,unsigned>;
        ///TFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tfe{}; 
        ///TNF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tnf{}; 
        ///RNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rne{}; 
        ///RFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rff{}; 
        ///BSY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bsy{}; 
    }
    namespace Nonecpsr{    ///<SSP Clock Prescaler Register
        using Addr = Register::Address<0x40040010,0xffffff00,0,unsigned>;
        ///CPSDVSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cpsdvsr{}; 
    }
    namespace Noneimsc{    ///<SSP Interrupt Mask Set and Clear Register
        using Addr = Register::Address<0x40040014,0xfffffff0,0,unsigned>;
        ///RORIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rorim{}; 
        ///RTIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtim{}; 
        ///RXIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxim{}; 
        ///TXIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txim{}; 
    }
    namespace Noneris{    ///<SSP Raw Interrupt Status Register
        using Addr = Register::Address<0x40040018,0xfffffff0,0,unsigned>;
        ///RORRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rorris{}; 
        ///RTRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtris{}; 
        ///RXRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxris{}; 
        ///TXRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txris{}; 
    }
    namespace Nonemis{    ///<SSP Masked Interrupt Status Register
        using Addr = Register::Address<0x4004001c,0xfffffff0,0,unsigned>;
        ///RORMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rormis{}; 
        ///RTMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtmis{}; 
        ///RXMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxmis{}; 
        ///TXMIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txmis{}; 
    }
    namespace Noneicr{    ///<SSP Interrupt Clear Register
        using Addr = Register::Address<0x40040020,0xfffffffc,0,unsigned>;
        ///RORIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> roric{}; 
        ///RTIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtic{}; 
    }
    namespace Nonedmacr{    ///<SSP DMA Control Register
        using Addr = Register::Address<0x40040024,0xfffffffc,0,unsigned>;
        ///RXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmae{}; 
        ///TXDMAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmae{}; 
    }
}
