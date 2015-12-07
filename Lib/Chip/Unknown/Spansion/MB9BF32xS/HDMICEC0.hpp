#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral HDMICEC0 
    namespace Nonetxctrl{    ///< register TXCTRL 
        using Addr = Register::Address<0x40034000,0xffffffc2,0,unsigned char>;
        /// bitfield IBREN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibren{}; 
        namespace IbrenValC{
        }
        /// bitfield ITSTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itsten{}; 
        namespace ItstenValC{
        }
        /// bitfield EOM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eom{}; 
        namespace EomValC{
        }
        /// bitfield START 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        /// bitfield TXEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txen{}; 
        namespace TxenValC{
        }
    }
    namespace Nonetxdata{    ///< register TXDATA 
        using Addr = Register::Address<0x40034004,0xffffff00,0,unsigned char>;
        /// bitfield TXDATA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
    }
    namespace Nonetxsts{    ///< register TXSTS 
        using Addr = Register::Address<0x40034008,0xffffffce,0,unsigned char>;
        /// bitfield IBR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibr{}; 
        namespace IbrValC{
        }
        /// bitfield ITST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itst{}; 
        namespace ItstValC{
        }
        /// bitfield ACKSV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> acksv{}; 
        namespace AcksvValC{
        }
    }
    namespace Nonesfree{    ///< register SFREE 
        using Addr = Register::Address<0x4003400c,0xfffffff0,0,unsigned char>;
        /// bitfield SFREE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfree{}; 
        namespace SfreeValC{
        }
    }
    namespace Nonercst{    ///< register RCST 
        using Addr = Register::Address<0x40034040,0xffffff00,0,unsigned char>;
        /// bitfield STIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stie{}; 
        namespace StieValC{
        }
        /// bitfield ACKIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ackie{}; 
        namespace AckieValC{
        }
        /// bitfield OVFIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovfie{}; 
        namespace OvfieValC{
        }
        /// bitfield OVFSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovfsel{}; 
        namespace OvfselValC{
        }
        /// bitfield ST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
        /// bitfield ACK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        /// bitfield EOM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eom{}; 
        namespace EomValC{
        }
        /// bitfield OVF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        namespace OvfValC{
        }
    }
    namespace Nonerccr{    ///< register RCCR 
        using Addr = Register::Address<0x40034041,0xffffff70,0,unsigned char>;
        /// bitfield THSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thsel{}; 
        namespace ThselValC{
        }
        /// bitfield ADRCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adrce{}; 
        namespace AdrceValC{
        }
        /// bitfield MOD1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mod1{}; 
        namespace Mod1ValC{
        }
        /// bitfield MOD0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mod0{}; 
        namespace Mod0ValC{
        }
        /// bitfield EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonercdahw{    ///< register RCDAHW 
        using Addr = Register::Address<0x40034044,0xffffff00,0,unsigned char>;
        /// bitfield RCDAHW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdahw{}; 
        namespace RcdahwValC{
        }
    }
    namespace Nonercshw{    ///< register RCSHW 
        using Addr = Register::Address<0x40034045,0xffffff00,0,unsigned char>;
        /// bitfield RCSHW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcshw{}; 
        namespace RcshwValC{
        }
    }
    namespace Nonercdbhw{    ///< register RCDBHW 
        using Addr = Register::Address<0x40034049,0xffffff00,0,unsigned char>;
        /// bitfield RCDBHW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdbhw{}; 
        namespace RcdbhwValC{
        }
    }
    namespace Nonercadr2{    ///< register RCADR2 
        using Addr = Register::Address<0x4003404c,0xffffffe0,0,unsigned char>;
        /// bitfield RCADR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr2{}; 
        namespace Rcadr2ValC{
        }
    }
    namespace Nonercadr1{    ///< register RCADR1 
        using Addr = Register::Address<0x4003404d,0xffffffe0,0,unsigned char>;
        /// bitfield RCADR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr1{}; 
        namespace Rcadr1ValC{
        }
    }
    namespace Nonercdthl{    ///< register RCDTHL 
        using Addr = Register::Address<0x40034050,0xffffff00,0,unsigned char>;
        /// bitfield RCDTHL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdthl{}; 
        namespace RcdthlValC{
        }
    }
    namespace Nonercdthh{    ///< register RCDTHH 
        using Addr = Register::Address<0x40034051,0xffffff00,0,unsigned char>;
        /// bitfield RCDTHH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdthh{}; 
        namespace RcdthhValC{
        }
    }
    namespace Nonercdtll{    ///< register RCDTLL 
        using Addr = Register::Address<0x40034054,0xffffff00,0,unsigned char>;
        /// bitfield RCDTLL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdtll{}; 
        namespace RcdtllValC{
        }
    }
    namespace Nonercdtlh{    ///< register RCDTLH 
        using Addr = Register::Address<0x40034055,0xffffff00,0,unsigned char>;
        /// bitfield RCDTLH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdtlh{}; 
        namespace RcdtlhValC{
        }
    }
    namespace Nonercckd{    ///< register RCCKD 
        using Addr = Register::Address<0x40034058,0xffffe000,0,unsigned>;
        /// bitfield CKSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cksel{}; 
        namespace CkselValC{
        }
        /// bitfield CKDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ckdiv{}; 
        namespace CkdivValC{
        }
    }
    namespace Nonercrhw{    ///< register RCRHW 
        using Addr = Register::Address<0x4003405c,0xffffff00,0,unsigned char>;
        /// bitfield RCRHW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcrhw{}; 
        namespace RcrhwValC{
        }
    }
    namespace Nonercrc{    ///< register RCRC 
        using Addr = Register::Address<0x4003405d,0xffffffee,0,unsigned char>;
        /// bitfield RCIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcie{}; 
        namespace RcieValC{
        }
        /// bitfield RC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rc{}; 
        namespace RcValC{
        }
    }
    namespace Nonercle{    ///< register RCLE 
        using Addr = Register::Address<0x40034061,0xffffff04,0,unsigned char>;
        /// bitfield LELIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lelie{}; 
        namespace LelieValC{
        }
        /// bitfield LESIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lesie{}; 
        namespace LesieValC{
        }
        /// bitfield LELE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lele{}; 
        namespace LeleValC{
        }
        /// bitfield LESE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lese{}; 
        namespace LeseValC{
        }
        /// bitfield EPE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epe{}; 
        namespace EpeValC{
        }
        /// bitfield LEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lel{}; 
        namespace LelValC{
        }
        /// bitfield LES 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> les{}; 
        namespace LesValC{
        }
    }
    namespace Nonerclesw{    ///< register RCLESW 
        using Addr = Register::Address<0x40034064,0xffffff00,0,unsigned char>;
        /// bitfield RCLESW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclesw{}; 
        namespace RcleswValC{
        }
    }
    namespace Nonerclelw{    ///< register RCLELW 
        using Addr = Register::Address<0x40034065,0xffffff00,0,unsigned char>;
        /// bitfield RCLELW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclelw{}; 
        namespace RclelwValC{
        }
    }
}
