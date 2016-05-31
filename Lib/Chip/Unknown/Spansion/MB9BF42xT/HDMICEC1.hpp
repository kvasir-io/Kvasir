#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral HDMICEC0 
    namespace Hdmicec1Txctrl{    ///< register TXCTRL 
        using Addr = Register::Address<0x40034100,0xffffffc2,0x00000000,unsigned char>;
        /// bitfield IBREN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibren{}; 
        /// bitfield ITSTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itsten{}; 
        /// bitfield EOM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eom{}; 
        /// bitfield START 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> start{}; 
        /// bitfield TXEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txen{}; 
    }
    namespace Hdmicec1Txdata{    ///< register TXDATA 
        using Addr = Register::Address<0x40034104,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TXDATA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Hdmicec1Txsts{    ///< register TXSTS 
        using Addr = Register::Address<0x40034108,0xffffffce,0x00000000,unsigned char>;
        /// bitfield IBR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibr{}; 
        /// bitfield ITST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itst{}; 
        /// bitfield ACKSV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> acksv{}; 
    }
    namespace Hdmicec1Sfree{    ///< register SFREE 
        using Addr = Register::Address<0x4003410c,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield SFREE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfree{}; 
    }
    namespace Hdmicec1Rcst{    ///< register RCST 
        using Addr = Register::Address<0x40034140,0xffffff00,0x00000000,unsigned char>;
        /// bitfield STIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stie{}; 
        /// bitfield ACKIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ackie{}; 
        /// bitfield OVFIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovfie{}; 
        /// bitfield OVFSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovfsel{}; 
        /// bitfield ST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> st{}; 
        /// bitfield ACK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ack{}; 
        /// bitfield EOM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eom{}; 
        /// bitfield OVF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace Hdmicec1Rccr{    ///< register RCCR 
        using Addr = Register::Address<0x40034141,0xffffff70,0x00000000,unsigned char>;
        /// bitfield THSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thsel{}; 
        /// bitfield ADRCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adrce{}; 
        /// bitfield MOD1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mod1{}; 
        /// bitfield MOD0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mod0{}; 
        /// bitfield EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Hdmicec1Rcdahw{    ///< register RCDAHW 
        using Addr = Register::Address<0x40034144,0xffffff00,0x00000000,unsigned char>;
        /// bitfield RCDAHW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdahw{}; 
    }
    namespace Hdmicec1Rcshw{    ///< register RCSHW 
        using Addr = Register::Address<0x40034145,0xffffff00,0x00000000,unsigned char>;
        /// bitfield RCSHW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcshw{}; 
    }
    namespace Hdmicec1Rcdbhw{    ///< register RCDBHW 
        using Addr = Register::Address<0x40034149,0xffffff00,0x00000000,unsigned char>;
        /// bitfield RCDBHW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdbhw{}; 
    }
    namespace Hdmicec1Rcadr2{    ///< register RCADR2 
        using Addr = Register::Address<0x4003414c,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield RCADR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr2{}; 
    }
    namespace Hdmicec1Rcadr1{    ///< register RCADR1 
        using Addr = Register::Address<0x4003414d,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield RCADR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr1{}; 
    }
    namespace Hdmicec1Rcdthl{    ///< register RCDTHL 
        using Addr = Register::Address<0x40034150,0xffffff00,0x00000000,unsigned char>;
        /// bitfield RCDTHL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdthl{}; 
    }
    namespace Hdmicec1Rcdthh{    ///< register RCDTHH 
        using Addr = Register::Address<0x40034151,0xffffff00,0x00000000,unsigned char>;
        /// bitfield RCDTHH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdthh{}; 
    }
    namespace Hdmicec1Rcdtll{    ///< register RCDTLL 
        using Addr = Register::Address<0x40034154,0xffffff00,0x00000000,unsigned char>;
        /// bitfield RCDTLL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdtll{}; 
    }
    namespace Hdmicec1Rcdtlh{    ///< register RCDTLH 
        using Addr = Register::Address<0x40034155,0xffffff00,0x00000000,unsigned char>;
        /// bitfield RCDTLH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdtlh{}; 
    }
    namespace Hdmicec1Rcckd{    ///< register RCCKD 
        using Addr = Register::Address<0x40034158,0xffffe000,0x00000000,unsigned>;
        /// bitfield CKSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cksel{}; 
        /// bitfield CKDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ckdiv{}; 
    }
    namespace Hdmicec1Rcrhw{    ///< register RCRHW 
        using Addr = Register::Address<0x4003415c,0xffffff00,0x00000000,unsigned char>;
        /// bitfield RCRHW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcrhw{}; 
    }
    namespace Hdmicec1Rcrc{    ///< register RCRC 
        using Addr = Register::Address<0x4003415d,0xffffffee,0x00000000,unsigned char>;
        /// bitfield RCIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcie{}; 
        /// bitfield RC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Hdmicec1Rcle{    ///< register RCLE 
        using Addr = Register::Address<0x40034161,0xffffff04,0x00000000,unsigned char>;
        /// bitfield LELIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lelie{}; 
        /// bitfield LESIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lesie{}; 
        /// bitfield LELE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lele{}; 
        /// bitfield LESE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lese{}; 
        /// bitfield EPE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epe{}; 
        /// bitfield LEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lel{}; 
        /// bitfield LES 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> les{}; 
    }
    namespace Hdmicec1Rclesw{    ///< register RCLESW 
        using Addr = Register::Address<0x40034164,0xffffff00,0x00000000,unsigned char>;
        /// bitfield RCLESW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclesw{}; 
    }
    namespace Hdmicec1Rclelw{    ///< register RCLELW 
        using Addr = Register::Address<0x40034165,0xffffff00,0x00000000,unsigned char>;
        /// bitfield RCLELW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclelw{}; 
    }
}
