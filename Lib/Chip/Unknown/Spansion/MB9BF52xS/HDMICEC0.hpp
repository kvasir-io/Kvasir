#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral HDMICEC0 
    namespace Nonetxctrl{    ///< register TXCTRL 
        using Addr = Register::Address<0x40034000,0xffffffc2,0,unsigned char>;
        /// bitfield IBREN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibren{}; 
        /// bitfield ITSTEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itsten{}; 
        /// bitfield EOM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eom{}; 
        /// bitfield START 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> start{}; 
        /// bitfield TXEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txen{}; 
    }
    namespace Nonetxdata{    ///< register TXDATA 
        using Addr = Register::Address<0x40034004,0xffffff00,0,unsigned char>;
        /// bitfield TXDATA 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Nonetxsts{    ///< register TXSTS 
        using Addr = Register::Address<0x40034008,0xffffffce,0,unsigned char>;
        /// bitfield IBR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibr{}; 
        /// bitfield ITST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itst{}; 
        /// bitfield ACKSV 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> acksv{}; 
    }
    namespace Nonesfree{    ///< register SFREE 
        using Addr = Register::Address<0x4003400c,0xfffffff0,0,unsigned char>;
        /// bitfield SFREE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfree{}; 
    }
    namespace Nonercst{    ///< register RCST 
        using Addr = Register::Address<0x40034040,0xffffff00,0,unsigned char>;
        /// bitfield STIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stie{}; 
        /// bitfield ACKIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ackie{}; 
        /// bitfield OVFIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovfie{}; 
        /// bitfield OVFSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovfsel{}; 
        /// bitfield ST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> st{}; 
        /// bitfield ACK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ack{}; 
        /// bitfield EOM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eom{}; 
        /// bitfield OVF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace Nonerccr{    ///< register RCCR 
        using Addr = Register::Address<0x40034041,0xffffff70,0,unsigned char>;
        /// bitfield THSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thsel{}; 
        /// bitfield ADRCE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adrce{}; 
        /// bitfield MOD1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mod1{}; 
        /// bitfield MOD0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mod0{}; 
        /// bitfield EN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonercdahw{    ///< register RCDAHW 
        using Addr = Register::Address<0x40034044,0xffffff00,0,unsigned char>;
        /// bitfield RCDAHW 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdahw{}; 
    }
    namespace Nonercshw{    ///< register RCSHW 
        using Addr = Register::Address<0x40034045,0xffffff00,0,unsigned char>;
        /// bitfield RCSHW 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcshw{}; 
    }
    namespace Nonercdbhw{    ///< register RCDBHW 
        using Addr = Register::Address<0x40034049,0xffffff00,0,unsigned char>;
        /// bitfield RCDBHW 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdbhw{}; 
    }
    namespace Nonercadr2{    ///< register RCADR2 
        using Addr = Register::Address<0x4003404c,0xffffffe0,0,unsigned char>;
        /// bitfield RCADR2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr2{}; 
    }
    namespace Nonercadr1{    ///< register RCADR1 
        using Addr = Register::Address<0x4003404d,0xffffffe0,0,unsigned char>;
        /// bitfield RCADR1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr1{}; 
    }
    namespace Nonercdthl{    ///< register RCDTHL 
        using Addr = Register::Address<0x40034050,0xffffff00,0,unsigned char>;
        /// bitfield RCDTHL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdthl{}; 
    }
    namespace Nonercdthh{    ///< register RCDTHH 
        using Addr = Register::Address<0x40034051,0xffffff00,0,unsigned char>;
        /// bitfield RCDTHH 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdthh{}; 
    }
    namespace Nonercdtll{    ///< register RCDTLL 
        using Addr = Register::Address<0x40034054,0xffffff00,0,unsigned char>;
        /// bitfield RCDTLL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdtll{}; 
    }
    namespace Nonercdtlh{    ///< register RCDTLH 
        using Addr = Register::Address<0x40034055,0xffffff00,0,unsigned char>;
        /// bitfield RCDTLH 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdtlh{}; 
    }
    namespace Nonercckd{    ///< register RCCKD 
        using Addr = Register::Address<0x40034058,0xffffe000,0,unsigned>;
        /// bitfield CKSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cksel{}; 
        /// bitfield CKDIV 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ckdiv{}; 
    }
    namespace Nonercrhw{    ///< register RCRHW 
        using Addr = Register::Address<0x4003405c,0xffffff00,0,unsigned char>;
        /// bitfield RCRHW 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcrhw{}; 
    }
    namespace Nonercrc{    ///< register RCRC 
        using Addr = Register::Address<0x4003405d,0xffffffee,0,unsigned char>;
        /// bitfield RCIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcie{}; 
        /// bitfield RC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Nonercle{    ///< register RCLE 
        using Addr = Register::Address<0x40034061,0xffffff04,0,unsigned char>;
        /// bitfield LELIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lelie{}; 
        /// bitfield LESIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lesie{}; 
        /// bitfield LELE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lele{}; 
        /// bitfield LESE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lese{}; 
        /// bitfield EPE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epe{}; 
        /// bitfield LEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lel{}; 
        /// bitfield LES 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> les{}; 
    }
    namespace Nonerclesw{    ///< register RCLESW 
        using Addr = Register::Address<0x40034064,0xffffff00,0,unsigned char>;
        /// bitfield RCLESW 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclesw{}; 
    }
    namespace Nonerclelw{    ///< register RCLELW 
        using Addr = Register::Address<0x40034065,0xffffff00,0,unsigned char>;
        /// bitfield RCLELW 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclelw{}; 
    }
}
