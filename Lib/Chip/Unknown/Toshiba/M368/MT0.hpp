#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//16-bit Multi-Purpose Timer (MPT-TMR_IGBT)
    namespace Noneen{    ///<MPT Enable Register
        using Addr = Register::Address<0x400c7000,0xffffff3e,0,unsigned>;
        ///MTMODE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mtmode{}; 
        ///MTHALT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mthalt{}; 
        ///MTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mten{}; 
    }
    namespace Nonerun{    ///<MPT RUN Register
        using Addr = Register::Address<0x400c7004,0xfffffffa,0,unsigned>;
        ///MTRUN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mtrun{}; 
        ///MTPRUN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mtprun{}; 
    }
    namespace Nonetbcr{    ///<MPT Control Register
        using Addr = Register::Address<0x400c7008,0xffffff74,0,unsigned>;
        ///MTTBCSSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mttbcssel{}; 
        ///MTTBTRGSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mttbtrgsel{}; 
        ///MTI2TB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mti2tb{}; 
        ///MTTBWBF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mttbwbf{}; 
    }
    namespace Nonetbmod{    ///<MPT Mode Register
        using Addr = Register::Address<0x400c700c,0xffffff80,0,unsigned>;
        ///MTTBCLK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mttbclk{}; 
        ///MTTBCLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbcle{}; 
        ///MTTBCPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> mttbcpm{}; 
        ///MTTBCP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mttbcp{}; 
        ///MTTBRSWR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mttbrswr{}; 
    }
    namespace Nonetbffcr{    ///<MPT Flip-Flop Control Register
        using Addr = Register::Address<0x400c7010,0xffffffc0,0,unsigned>;
        ///MTTBFF0C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mttbff0c{}; 
        ///MTTBE0T1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbe0t1{}; 
        ///MTTBE1T1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mttbe1t1{}; 
        ///MTTBC0T1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mttbc0t1{}; 
        ///MTTBC1T1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mttbc1t1{}; 
    }
    namespace Nonetbst{    ///<MPT Status Register
        using Addr = Register::Address<0x400c7014,0xfffffff8,0,unsigned>;
        ///MTTBINTTB0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mttbinttb0{}; 
        ///MTTBINTTB1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mttbinttb1{}; 
        ///MTTBINTTBOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbinttbof{}; 
    }
    namespace Nonetbim{    ///<MPT Interrupt Mask Register
        using Addr = Register::Address<0x400c7018,0xfffffff8,0,unsigned>;
        ///MTTBIM0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mttbim0{}; 
        ///MTTBIM1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mttbim1{}; 
        ///MTTBIMOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbimof{}; 
    }
    namespace Nonetbuc{    ///<MPT Read Capture Register
        using Addr = Register::Address<0x400c701c,0xffff0000,0,unsigned>;
        ///MTUC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtuc{}; 
    }
    namespace Nonerg0{    ///<MPT RG0 Timer Register
        using Addr = Register::Address<0x400c7020,0xffff0000,0,unsigned>;
        ///MTRG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtrg0{}; 
    }
    namespace Nonerg1{    ///<MPT RG1 Timer Register
        using Addr = Register::Address<0x400c7024,0xffff0000,0,unsigned>;
        ///MTRG1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtrg1{}; 
    }
    namespace Nonecp0{    ///<MPT CP0 Capture Register
        using Addr = Register::Address<0x400c7028,0xffff0000,0,unsigned>;
        ///MTCP0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtcp0{}; 
    }
    namespace Nonecp1{    ///<MPT CP1 Capture Register
        using Addr = Register::Address<0x400c702c,0xffff0000,0,unsigned>;
        ///MTCP1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtcp1{}; 
    }
    namespace Noneigcr{    ///<IGBT Control Register
        using Addr = Register::Address<0x400c7030,0xfffff880,0,unsigned>;
        ///IGCLK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> igclk{}; 
        ///IGSTA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> igsta{}; 
        ///IGSTP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> igstp{}; 
        ///IGSNGL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> igsngl{}; 
        ///IGPRD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> igprd{}; 
        ///IGIDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> igidis{}; 
    }
    namespace Noneigresta{    ///<IGBT Timer Restart Register
        using Addr = Register::Address<0x400c7034,0xfffffffe,0,unsigned>;
        ///IGRESTA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igresta{}; 
    }
    namespace Noneigst{    ///<IGBT Timer Status Register
        using Addr = Register::Address<0x400c7038,0xfffffffe,0,unsigned>;
        ///IGST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igst{}; 
    }
    namespace Noneigicr{    ///<IGBT Input Control Register
        using Addr = Register::Address<0x400c703c,0xffffff30,0,unsigned>;
        ///IGNCSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> igncsel{}; 
        ///IGTRGSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> igtrgsel{}; 
        ///IGTRGM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> igtrgm{}; 
    }
    namespace Noneigocr{    ///<IGBT Output Control Register
        using Addr = Register::Address<0x400c7040,0xffffffcc,0,unsigned>;
        ///IGOEN0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igoen0{}; 
        ///IGOEN1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igoen1{}; 
        ///IGPOL0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> igpol0{}; 
        ///IGPOL1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> igpol1{}; 
    }
    namespace Noneigrg2{    ///<IGBT RG2 Timer Register
        using Addr = Register::Address<0x400c7044,0xffff0000,0,unsigned>;
        ///IGRG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igrg2{}; 
    }
    namespace Noneigrg3{    ///<IGBT RG3 Timer Register
        using Addr = Register::Address<0x400c7048,0xffff0000,0,unsigned>;
        ///IGRG3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igrg3{}; 
    }
    namespace Noneigrg4{    ///<IGBT RG4 Timer Register
        using Addr = Register::Address<0x400c704c,0xffff0000,0,unsigned>;
        ///IGRG4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igrg4{}; 
    }
    namespace Noneigemgcr{    ///<IGBT EMG Control Register
        using Addr = Register::Address<0x400c7050,0xffffff08,0,unsigned>;
        ///IGEMGEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igemgen{}; 
        ///IGEMGOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igemgoc{}; 
        ///IGEMGRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> igemgrs{}; 
        ///IGEMGCNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> igemgcnt{}; 
    }
    namespace Noneigemgst{    ///<IGBT EMG Status Register
        using Addr = Register::Address<0x400c7054,0xfffffffc,0,unsigned>;
        ///IGEMGST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igemgst{}; 
        ///IGEMGIN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igemgin{}; 
    }
}
