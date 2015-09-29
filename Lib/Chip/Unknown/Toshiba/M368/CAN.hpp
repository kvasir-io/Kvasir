#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CAN Controller (TXCAN)
    namespace Nonemc{    ///<CAN Mailbox Configuration Register
        using Addr = Register::Address<0x40005400,0x00000000,0,unsigned>;
        ///MC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mc{}; 
    }
    namespace Nonemd{    ///<CAN Mailbox Direction Register
        using Addr = Register::Address<0x40005408,0x00000000,0,unsigned>;
        ///MD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> md{}; 
    }
    namespace Nonetrs{    ///<CAN Transmit Request Set Register
        using Addr = Register::Address<0x40005410,0x80000000,0,unsigned>;
        ///TRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> trs{}; 
    }
    namespace Nonetrr{    ///<CAN Transmit Request Reset Register
        using Addr = Register::Address<0x40005418,0x80000000,0,unsigned>;
        ///TRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> trr{}; 
    }
    namespace Noneta{    ///<CAN Transmission Acknowledge Register
        using Addr = Register::Address<0x40005420,0x80000000,0,unsigned>;
        ///TA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> ta{}; 
    }
    namespace Noneaa{    ///<CAN Abort Acknowledge Register
        using Addr = Register::Address<0x40005428,0x80000000,0,unsigned>;
        ///AA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> aa{}; 
    }
    namespace Nonermp{    ///<CAN Receive Message Pending Register
        using Addr = Register::Address<0x40005430,0x00000000,0,unsigned>;
        ///RMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rmp{}; 
    }
    namespace Nonerml{    ///<CAN Receive Message Lost Register
        using Addr = Register::Address<0x40005438,0x00000000,0,unsigned>;
        ///RML
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rml{}; 
    }
    namespace Nonelam{    ///<CAN Local Acceptance Mask Register
        using Addr = Register::Address<0x40005440,0x60000000,0,unsigned>;
        ///LAM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> lam{}; 
        ///LAMI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lami{}; 
    }
    namespace Nonegam{    ///<CAN Global Acceptance Mask Register
        using Addr = Register::Address<0x40005448,0x60000000,0,unsigned>;
        ///GAM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> gam{}; 
        ///GAMI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> gami{}; 
    }
    namespace Nonemcr{    ///<CAN Master Control Register
        using Addr = Register::Address<0x40005450,0xfffff424,0,unsigned>;
        ///SRES
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sres{}; 
        ///TSCC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tscc{}; 
        ///MTOS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mtos{}; 
        ///WUBA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wuba{}; 
        ///SMR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> smr{}; 
        ///CCR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ccr{}; 
        ///TSTERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tsterr{}; 
        ///TSTLB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tstlb{}; 
        ///SUR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sur{}; 
    }
    namespace Nonegsr{    ///<CAN Global Status Register
        using Addr = Register::Address<0x40005458,0xfffe0230,0,unsigned>;
        ///EW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
        ///EP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep{}; 
        ///BO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bo{}; 
        ///TSO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tso{}; 
        ///SMA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sma{}; 
        ///CCE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cce{}; 
        ///SUA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sua{}; 
        ///TM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tm{}; 
        ///RM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rm{}; 
        ///MIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> mis{}; 
    }
    namespace Nonebcr1{    ///<CAN Bit Configuration Register 1
        using Addr = Register::Address<0x40005460,0xfffffc00,0,unsigned>;
        ///BRP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> brp{}; 
    }
    namespace Nonebcr2{    ///<CAN Bit Configuration Register 2
        using Addr = Register::Address<0x40005468,0xfffffc00,0,unsigned>;
        ///TSEG1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tseg1{}; 
        ///TSEG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tseg2{}; 
        ///SAM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sam{}; 
        ///SJW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sjw{}; 
    }
    namespace Nonegif{    ///<CAN Global Interrupt Flag Register
        using Addr = Register::Address<0x40005470,0xffffff00,0,unsigned>;
        ///WLIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wlif{}; 
        ///EPIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epif{}; 
        ///BOIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> boif{}; 
        ///TSOIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsoif{}; 
        ///TRMABF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trmabf{}; 
        ///RMLIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rmlif{}; 
        ///WUIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wuif{}; 
        ///RFPF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfpf{}; 
    }
    namespace Nonegim{    ///<CAN Global Interrupt Mask Register
        using Addr = Register::Address<0x40005478,0xffffff00,0,unsigned>;
        ///WLIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wlim{}; 
        ///EPIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epim{}; 
        ///BOIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> boim{}; 
        ///TSOIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsoim{}; 
        ///TRMABF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trmabf{}; 
        ///RMLIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rmlim{}; 
        ///WUIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wuim{}; 
        ///RFPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfpm{}; 
    }
    namespace Nonembtif{    ///<CAN Mailbox Transmit Interrupt Flag Register
        using Addr = Register::Address<0x40005480,0x80000000,0,unsigned>;
        ///MBTIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> mbtif{}; 
    }
    namespace Nonembrif{    ///<CAN Mailbox Receive Interrupt Flag Register
        using Addr = Register::Address<0x40005488,0x00000000,0,unsigned>;
        ///MBRIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mbrif{}; 
    }
    namespace Nonembim{    ///<CAN Mailbox Interrupt Mask Register
        using Addr = Register::Address<0x40005490,0x00000000,0,unsigned>;
        ///MBIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mbim{}; 
    }
    namespace Nonecdr{    ///<CAN Change Data Request
        using Addr = Register::Address<0x40005498,0x80000000,0,unsigned>;
        ///CDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> cdr{}; 
    }
    namespace Nonerfp{    ///<CAN Remote Frame Pending Register
        using Addr = Register::Address<0x400054a0,0x00000000,0,unsigned>;
        ///RFP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rfp{}; 
    }
    namespace Nonecec{    ///<CAN Error Counter Register
        using Addr = Register::Address<0x400054a8,0xffff0000,0,unsigned>;
        ///REC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rec{}; 
        ///TEC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tec{}; 
    }
    namespace Nonetsp{    ///<CAN Time Stamp Counter Prescaler Register
        using Addr = Register::Address<0x400054b0,0xfffffff0,0,unsigned>;
        ///TSP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tsp{}; 
    }
    namespace Nonetsc{    ///<CAN Time Stamp Counter Register
        using Addr = Register::Address<0x400054b8,0xffff0000,0,unsigned>;
        ///TSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsc{}; 
    }
}
