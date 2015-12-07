#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CAN Controller (TXCAN)
    namespace Nonemc{    ///<CAN Mailbox Configuration Register
        using Addr = Register::Address<0x40005400,0x00000000,0,unsigned>;
        ///MC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mc{}; 
        namespace McValC{
        }
    }
    namespace Nonemd{    ///<CAN Mailbox Direction Register
        using Addr = Register::Address<0x40005408,0x00000000,0,unsigned>;
        ///MD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
    }
    namespace Nonetrs{    ///<CAN Transmit Request Set Register
        using Addr = Register::Address<0x40005410,0x80000000,0,unsigned>;
        ///TRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> trs{}; 
        namespace TrsValC{
        }
    }
    namespace Nonetrr{    ///<CAN Transmit Request Reset Register
        using Addr = Register::Address<0x40005418,0x80000000,0,unsigned>;
        ///TRR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> trr{}; 
        namespace TrrValC{
        }
    }
    namespace Noneta{    ///<CAN Transmission Acknowledge Register
        using Addr = Register::Address<0x40005420,0x80000000,0,unsigned>;
        ///TA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> ta{}; 
        namespace TaValC{
        }
    }
    namespace Noneaa{    ///<CAN Abort Acknowledge Register
        using Addr = Register::Address<0x40005428,0x80000000,0,unsigned>;
        ///AA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> aa{}; 
        namespace AaValC{
        }
    }
    namespace Nonermp{    ///<CAN Receive Message Pending Register
        using Addr = Register::Address<0x40005430,0x00000000,0,unsigned>;
        ///RMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rmp{}; 
        namespace RmpValC{
        }
    }
    namespace Nonerml{    ///<CAN Receive Message Lost Register
        using Addr = Register::Address<0x40005438,0x00000000,0,unsigned>;
        ///RML
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rml{}; 
        namespace RmlValC{
        }
    }
    namespace Nonelam{    ///<CAN Local Acceptance Mask Register
        using Addr = Register::Address<0x40005440,0x60000000,0,unsigned>;
        ///LAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> lam{}; 
        namespace LamValC{
        }
        ///LAMI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lami{}; 
        namespace LamiValC{
        }
    }
    namespace Nonegam{    ///<CAN Global Acceptance Mask Register
        using Addr = Register::Address<0x40005448,0x60000000,0,unsigned>;
        ///GAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,0),Register::ReadWriteAccess,unsigned> gam{}; 
        namespace GamValC{
        }
        ///GAMI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> gami{}; 
        namespace GamiValC{
        }
    }
    namespace Nonemcr{    ///<CAN Master Control Register
        using Addr = Register::Address<0x40005450,0xfffff424,0,unsigned>;
        ///SRES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sres{}; 
        namespace SresValC{
        }
        ///TSCC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tscc{}; 
        namespace TsccValC{
        }
        ///MTOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mtos{}; 
        namespace MtosValC{
        }
        ///WUBA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wuba{}; 
        namespace WubaValC{
        }
        ///SMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> smr{}; 
        namespace SmrValC{
        }
        ///CCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ccr{}; 
        namespace CcrValC{
        }
        ///TSTERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tsterr{}; 
        namespace TsterrValC{
        }
        ///TSTLB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tstlb{}; 
        namespace TstlbValC{
        }
        ///SUR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sur{}; 
        namespace SurValC{
        }
    }
    namespace Nonegsr{    ///<CAN Global Status Register
        using Addr = Register::Address<0x40005458,0xfffe0230,0,unsigned>;
        ///EW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ew{}; 
        namespace EwValC{
        }
        ///EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ep{}; 
        namespace EpValC{
        }
        ///BO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bo{}; 
        namespace BoValC{
        }
        ///TSO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tso{}; 
        namespace TsoValC{
        }
        ///SMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sma{}; 
        namespace SmaValC{
        }
        ///CCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cce{}; 
        namespace CceValC{
        }
        ///SUA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sua{}; 
        namespace SuaValC{
        }
        ///TM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tm{}; 
        namespace TmValC{
        }
        ///RM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rm{}; 
        namespace RmValC{
        }
        ///MIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> mis{}; 
        namespace MisValC{
        }
    }
    namespace Nonebcr1{    ///<CAN Bit Configuration Register 1
        using Addr = Register::Address<0x40005460,0xfffffc00,0,unsigned>;
        ///BRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> brp{}; 
        namespace BrpValC{
        }
    }
    namespace Nonebcr2{    ///<CAN Bit Configuration Register 2
        using Addr = Register::Address<0x40005468,0xfffffc00,0,unsigned>;
        ///TSEG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tseg1{}; 
        namespace Tseg1ValC{
        }
        ///TSEG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tseg2{}; 
        namespace Tseg2ValC{
        }
        ///SAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sam{}; 
        namespace SamValC{
        }
        ///SJW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sjw{}; 
        namespace SjwValC{
        }
    }
    namespace Nonegif{    ///<CAN Global Interrupt Flag Register
        using Addr = Register::Address<0x40005470,0xffffff00,0,unsigned>;
        ///WLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wlif{}; 
        namespace WlifValC{
        }
        ///EPIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epif{}; 
        namespace EpifValC{
        }
        ///BOIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> boif{}; 
        namespace BoifValC{
        }
        ///TSOIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsoif{}; 
        namespace TsoifValC{
        }
        ///TRMABF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trmabf{}; 
        namespace TrmabfValC{
        }
        ///RMLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rmlif{}; 
        namespace RmlifValC{
        }
        ///WUIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wuif{}; 
        namespace WuifValC{
        }
        ///RFPF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfpf{}; 
        namespace RfpfValC{
        }
    }
    namespace Nonegim{    ///<CAN Global Interrupt Mask Register
        using Addr = Register::Address<0x40005478,0xffffff00,0,unsigned>;
        ///WLIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wlim{}; 
        namespace WlimValC{
        }
        ///EPIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epim{}; 
        namespace EpimValC{
        }
        ///BOIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> boim{}; 
        namespace BoimValC{
        }
        ///TSOIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsoim{}; 
        namespace TsoimValC{
        }
        ///TRMABF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trmabf{}; 
        namespace TrmabfValC{
        }
        ///RMLIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rmlim{}; 
        namespace RmlimValC{
        }
        ///WUIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wuim{}; 
        namespace WuimValC{
        }
        ///RFPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfpm{}; 
        namespace RfpmValC{
        }
    }
    namespace Nonembtif{    ///<CAN Mailbox Transmit Interrupt Flag Register
        using Addr = Register::Address<0x40005480,0x80000000,0,unsigned>;
        ///MBTIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> mbtif{}; 
        namespace MbtifValC{
        }
    }
    namespace Nonembrif{    ///<CAN Mailbox Receive Interrupt Flag Register
        using Addr = Register::Address<0x40005488,0x00000000,0,unsigned>;
        ///MBRIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mbrif{}; 
        namespace MbrifValC{
        }
    }
    namespace Nonembim{    ///<CAN Mailbox Interrupt Mask Register
        using Addr = Register::Address<0x40005490,0x00000000,0,unsigned>;
        ///MBIM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mbim{}; 
        namespace MbimValC{
        }
    }
    namespace Nonecdr{    ///<CAN Change Data Request
        using Addr = Register::Address<0x40005498,0x80000000,0,unsigned>;
        ///CDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> cdr{}; 
        namespace CdrValC{
        }
    }
    namespace Nonerfp{    ///<CAN Remote Frame Pending Register
        using Addr = Register::Address<0x400054a0,0x00000000,0,unsigned>;
        ///RFP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rfp{}; 
        namespace RfpValC{
        }
    }
    namespace Nonecec{    ///<CAN Error Counter Register
        using Addr = Register::Address<0x400054a8,0xffff0000,0,unsigned>;
        ///REC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///TEC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tec{}; 
        namespace TecValC{
        }
    }
    namespace Nonetsp{    ///<CAN Time Stamp Counter Prescaler Register
        using Addr = Register::Address<0x400054b0,0xfffffff0,0,unsigned>;
        ///TSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tsp{}; 
        namespace TspValC{
        }
    }
    namespace Nonetsc{    ///<CAN Time Stamp Counter Register
        using Addr = Register::Address<0x400054b8,0xffff0000,0,unsigned>;
        ///TSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsc{}; 
        namespace TscValC{
        }
    }
}
