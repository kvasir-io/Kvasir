#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial Channel (SC)
    namespace Noneen{    ///<SC Enable Register
        using Addr = Register::Address<0x400e1000,0xfffffffe,0,unsigned>;
        ///SIOE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sioe{}; 
    }
    namespace Nonebuf{    ///<SC Buffer Register
        using Addr = Register::Address<0x400e1004,0xffffff00,0,unsigned>;
        ///TB_RB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tbRb{}; 
    }
    namespace Nonecr{    ///<SC Control Register
        using Addr = Register::Address<0x400e1008,0xffffff00,0,unsigned>;
        ///IOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ioc{}; 
        ///SCLKS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sclks{}; 
        ///FERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ferr{}; 
        ///PERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> perr{}; 
        ///OERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oerr{}; 
        ///PE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        ///EVEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> even{}; 
        ///RB8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rb8{}; 
    }
    namespace Nonemod0{    ///<SC Mode Control Register 0
        using Addr = Register::Address<0x400e100c,0xffffff00,0,unsigned>;
        ///SC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sc{}; 
        ///SM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> sm{}; 
        ///WU
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wu{}; 
        ///RXE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxe{}; 
        ///CTSE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctse{}; 
        ///TB8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tb8{}; 
    }
    namespace Nonebrcr{    ///<SC Baud Rate Generator Control Register
        using Addr = Register::Address<0x400e1010,0xffffff80,0,unsigned>;
        ///BRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brs{}; 
        ///BRCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> brck{}; 
        ///BRADDE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bradde{}; 
    }
    namespace Nonebradd{    ///<SC Baud Rate Generator Control Register 2
        using Addr = Register::Address<0x400e1014,0xfffffff0,0,unsigned>;
        ///BRK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brk{}; 
    }
    namespace Nonemod1{    ///<SC Mode Control Register 1
        using Addr = Register::Address<0x400e1018,0xffffff01,0,unsigned>;
        ///SINT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> sint{}; 
        ///TXE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txe{}; 
        ///FDPX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> fdpx{}; 
        ///I2SC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> i2sc{}; 
    }
    namespace Nonemod2{    ///<SC Mode Control Register 2
        using Addr = Register::Address<0x400e101c,0xffffff00,0,unsigned>;
        ///SWRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///WBUF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wbuf{}; 
        ///DRCHG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> drchg{}; 
        ///SBLEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sblen{}; 
        ///TXRUN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txrun{}; 
        ///RBFLL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rbfll{}; 
        ///TBEMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tbemp{}; 
    }
    namespace Nonerfc{    ///<SC RX FIFO Configuration Register
        using Addr = Register::Address<0x400e1020,0xffffff3c,0,unsigned>;
        ///RIL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ril{}; 
        ///RFIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rfis{}; 
        ///RFCS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfcs{}; 
    }
    namespace Nonetfc{    ///<SC TX FIFO Configuration Register
        using Addr = Register::Address<0x400e1024,0xffffff3c,0,unsigned>;
        ///TIL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> til{}; 
        ///TFIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tfis{}; 
        ///TFCS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tfcs{}; 
    }
    namespace Nonerst{    ///<SC RX FIFO Status Register
        using Addr = Register::Address<0x400e1028,0xffffff78,0,unsigned>;
        ///RLVL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rlvl{}; 
        ///ROR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ror{}; 
    }
    namespace Nonetst{    ///<SC TX FIFO Status Register
        using Addr = Register::Address<0x400e102c,0xffffff78,0,unsigned>;
        ///TLVL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tlvl{}; 
        ///TUR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tur{}; 
    }
    namespace Nonefcnf{    ///<SC FIFO Configuration Register
        using Addr = Register::Address<0x400e1030,0xffffffe0,0,unsigned>;
        ///CNFG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cnfg{}; 
        ///RXTXCNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtxcnt{}; 
        ///RFIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rfie{}; 
        ///TFIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tfie{}; 
        ///RFST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rfst{}; 
    }
    namespace Nonedma{    ///<SC DMA Enable Register
        using Addr = Register::Address<0x400e1034,0xfffffffc,0,unsigned>;
        ///DMAEN0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen0{}; 
        ///DMAEN1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmaen1{}; 
    }
}
