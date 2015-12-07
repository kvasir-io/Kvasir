#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//16-bit Multi-Purpose Timer (MPT-TMR_IGBT)
    namespace Noneen{    ///<MPT Enable Register
        using Addr = Register::Address<0x400c7000,0xffffff3e,0,unsigned>;
        ///MTMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mtmode{}; 
        namespace MtmodeValC{
        }
        ///MTHALT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mthalt{}; 
        namespace MthaltValC{
        }
        ///MTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mten{}; 
        namespace MtenValC{
        }
    }
    namespace Nonerun{    ///<MPT RUN Register
        using Addr = Register::Address<0x400c7004,0xfffffffa,0,unsigned>;
        ///MTRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mtrun{}; 
        namespace MtrunValC{
        }
        ///MTPRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mtprun{}; 
        namespace MtprunValC{
        }
    }
    namespace Nonetbcr{    ///<MPT Control Register
        using Addr = Register::Address<0x400c7008,0xffffff74,0,unsigned>;
        ///MTTBCSSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mttbcssel{}; 
        namespace MttbcsselValC{
        }
        ///MTTBTRGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mttbtrgsel{}; 
        namespace MttbtrgselValC{
        }
        ///MTI2TB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mti2tb{}; 
        namespace Mti2tbValC{
        }
        ///MTTBWBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mttbwbf{}; 
        namespace MttbwbfValC{
        }
    }
    namespace Nonetbmod{    ///<MPT Mode Register
        using Addr = Register::Address<0x400c700c,0xffffff80,0,unsigned>;
        ///MTTBCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mttbclk{}; 
        namespace MttbclkValC{
        }
        ///MTTBCLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbcle{}; 
        namespace MttbcleValC{
        }
        ///MTTBCPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> mttbcpm{}; 
        namespace MttbcpmValC{
        }
        ///MTTBCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mttbcp{}; 
        namespace MttbcpValC{
        }
        ///MTTBRSWR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mttbrswr{}; 
        namespace MttbrswrValC{
        }
    }
    namespace Nonetbffcr{    ///<MPT Flip-Flop Control Register
        using Addr = Register::Address<0x400c7010,0xffffffc0,0,unsigned>;
        ///MTTBFF0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mttbff0c{}; 
        namespace Mttbff0cValC{
        }
        ///MTTBE0T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbe0t1{}; 
        namespace Mttbe0t1ValC{
        }
        ///MTTBE1T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mttbe1t1{}; 
        namespace Mttbe1t1ValC{
        }
        ///MTTBC0T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mttbc0t1{}; 
        namespace Mttbc0t1ValC{
        }
        ///MTTBC1T1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mttbc1t1{}; 
        namespace Mttbc1t1ValC{
        }
    }
    namespace Nonetbst{    ///<MPT Status Register
        using Addr = Register::Address<0x400c7014,0xfffffff8,0,unsigned>;
        ///MTTBINTTB0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mttbinttb0{}; 
        namespace Mttbinttb0ValC{
        }
        ///MTTBINTTB1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mttbinttb1{}; 
        namespace Mttbinttb1ValC{
        }
        ///MTTBINTTBOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbinttbof{}; 
        namespace MttbinttbofValC{
        }
    }
    namespace Nonetbim{    ///<MPT Interrupt Mask Register
        using Addr = Register::Address<0x400c7018,0xfffffff8,0,unsigned>;
        ///MTTBIM0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mttbim0{}; 
        namespace Mttbim0ValC{
        }
        ///MTTBIM1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mttbim1{}; 
        namespace Mttbim1ValC{
        }
        ///MTTBIMOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mttbimof{}; 
        namespace MttbimofValC{
        }
    }
    namespace Nonetbuc{    ///<MPT Read Capture Register
        using Addr = Register::Address<0x400c701c,0xffff0000,0,unsigned>;
        ///MTUC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtuc{}; 
        namespace MtucValC{
        }
    }
    namespace Nonerg0{    ///<MPT RG0 Timer Register
        using Addr = Register::Address<0x400c7020,0xffff0000,0,unsigned>;
        ///MTRG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtrg0{}; 
        namespace Mtrg0ValC{
        }
    }
    namespace Nonerg1{    ///<MPT RG1 Timer Register
        using Addr = Register::Address<0x400c7024,0xffff0000,0,unsigned>;
        ///MTRG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtrg1{}; 
        namespace Mtrg1ValC{
        }
    }
    namespace Nonecp0{    ///<MPT CP0 Capture Register
        using Addr = Register::Address<0x400c7028,0xffff0000,0,unsigned>;
        ///MTCP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtcp0{}; 
        namespace Mtcp0ValC{
        }
    }
    namespace Nonecp1{    ///<MPT CP1 Capture Register
        using Addr = Register::Address<0x400c702c,0xffff0000,0,unsigned>;
        ///MTCP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mtcp1{}; 
        namespace Mtcp1ValC{
        }
    }
    namespace Noneigcr{    ///<IGBT Control Register
        using Addr = Register::Address<0x400c7030,0xfffff800,0,unsigned>;
        ///IGCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> igclk{}; 
        namespace IgclkValC{
        }
        ///IGSTA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> igsta{}; 
        namespace IgstaValC{
        }
        ///IGSTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> igstp{}; 
        namespace IgstpValC{
        }
        ///IGSNGL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> igsngl{}; 
        namespace IgsnglValC{
        }
        ///IGCLSYNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> igclsync{}; 
        namespace IgclsyncValC{
        }
        ///IGPRD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> igprd{}; 
        namespace IgprdValC{
        }
        ///IGIDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> igidis{}; 
        namespace IgidisValC{
        }
    }
    namespace Noneigresta{    ///<IGBT Timer Restart Register
        using Addr = Register::Address<0x400c7034,0xfffffffe,0,unsigned>;
        ///IGRESTA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igresta{}; 
        namespace IgrestaValC{
        }
    }
    namespace Noneigst{    ///<IGBT Timer Status Register
        using Addr = Register::Address<0x400c7038,0xfffffffe,0,unsigned>;
        ///IGST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igst{}; 
        namespace IgstValC{
        }
    }
    namespace Noneigicr{    ///<IGBT Input Control Register
        using Addr = Register::Address<0x400c703c,0xffffff30,0,unsigned>;
        ///IGNCSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> igncsel{}; 
        namespace IgncselValC{
        }
        ///IGTRGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> igtrgsel{}; 
        namespace IgtrgselValC{
        }
        ///IGTRGM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> igtrgm{}; 
        namespace IgtrgmValC{
        }
    }
    namespace Noneigocr{    ///<IGBT Output Control Register
        using Addr = Register::Address<0x400c7040,0xffffffcc,0,unsigned>;
        ///IGOEN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igoen0{}; 
        namespace Igoen0ValC{
        }
        ///IGOEN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igoen1{}; 
        namespace Igoen1ValC{
        }
        ///IGPOL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> igpol0{}; 
        namespace Igpol0ValC{
        }
        ///IGPOL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> igpol1{}; 
        namespace Igpol1ValC{
        }
    }
    namespace Noneigrg2{    ///<IGBT RG2 Timer Register
        using Addr = Register::Address<0x400c7044,0xffff0000,0,unsigned>;
        ///IGRG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igrg2{}; 
        namespace Igrg2ValC{
        }
    }
    namespace Noneigrg3{    ///<IGBT RG3 Timer Register
        using Addr = Register::Address<0x400c7048,0xffff0000,0,unsigned>;
        ///IGRG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igrg3{}; 
        namespace Igrg3ValC{
        }
    }
    namespace Noneigrg4{    ///<IGBT RG4 Timer Register
        using Addr = Register::Address<0x400c704c,0xffff0000,0,unsigned>;
        ///IGRG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igrg4{}; 
        namespace Igrg4ValC{
        }
    }
    namespace Noneigemgcr{    ///<IGBT EMG Control Register
        using Addr = Register::Address<0x400c7050,0xffffff08,0,unsigned>;
        ///IGEMGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igemgen{}; 
        namespace IgemgenValC{
        }
        ///IGEMGOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igemgoc{}; 
        namespace IgemgocValC{
        }
        ///IGEMGRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> igemgrs{}; 
        namespace IgemgrsValC{
        }
        ///IGEMGCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> igemgcnt{}; 
        namespace IgemgcntValC{
        }
    }
    namespace Noneigemgst{    ///<IGBT EMG Status Register
        using Addr = Register::Address<0x400c7054,0xfffffffc,0,unsigned>;
        ///IGEMGST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igemgst{}; 
        namespace IgemgstValC{
        }
        ///IGEMGIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igemgin{}; 
        namespace IgemginValC{
        }
    }
    namespace Noneigtrg{    ///<IGBT Trigger Register
        using Addr = Register::Address<0x400c7058,0xffff0000,0,unsigned>;
        ///IGTRG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> igtrg{}; 
        namespace IgtrgValC{
        }
    }
}
