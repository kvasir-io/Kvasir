#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral INTREQ 
    namespace IntreqDrqsel{    ///< register DRQSEL 
        using Addr = Register::Address<0x40031000,0x00000000,0x00000000,unsigned>;
        /// bitfield EXINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> exint3{}; 
        /// bitfield EXINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> exint2{}; 
        /// bitfield EXINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> exint1{}; 
        /// bitfield EXINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> exint0{}; 
        /// bitfield MFS7TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mfs7tx{}; 
        /// bitfield MFS7RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mfs7rx{}; 
        /// bitfield MFS6TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mfs6tx{}; 
        /// bitfield MFS6RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mfs6rx{}; 
        /// bitfield MFS5TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mfs5tx{}; 
        /// bitfield MFS5RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mfs5rx{}; 
        /// bitfield MFS4TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mfs4tx{}; 
        /// bitfield MFS4RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mfs4rx{}; 
        /// bitfield MFS3TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mfs3tx{}; 
        /// bitfield MFS3RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mfs3rx{}; 
        /// bitfield MFS2TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mfs2tx{}; 
        /// bitfield MFS2RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mfs2rx{}; 
        /// bitfield MFS1TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfs1tx{}; 
        /// bitfield MFS1RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfs1rx{}; 
        /// bitfield MFS0TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfs0tx{}; 
        /// bitfield MFS0RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfs0rx{}; 
        /// bitfield IRQ0BT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> irq0bt6{}; 
        /// bitfield IRQ0BT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> irq0bt4{}; 
        /// bitfield IRQ0BT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> irq0bt2{}; 
        /// bitfield IRQ0BT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> irq0bt0{}; 
        /// bitfield ADCSCAN2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adcscan2{}; 
        /// bitfield ADCSCAN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adcscan1{}; 
        /// bitfield ADCSCAN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adcscan0{}; 
        /// bitfield USBEP5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbep5{}; 
        /// bitfield USBEP4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbep4{}; 
        /// bitfield USBEP3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbep3{}; 
        /// bitfield USBEP2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbep2{}; 
        /// bitfield USBEP1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbep1{}; 
    }
    namespace IntreqOddpks{    ///< register ODDPKS 
        using Addr = Register::Address<0x40031010,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield ODDPKS4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oddpks4{}; 
        /// bitfield ODDPKS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oddpks3{}; 
        /// bitfield ODDPKS2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oddpks2{}; 
        /// bitfield ODDPKS1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddpks1{}; 
        /// bitfield ODDPKS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oddpks0{}; 
    }
    namespace IntreqIrq003sel{    ///< register IRQ003SEL 
        using Addr = Register::Address<0x40031110,0xff00ff00,0x00000000,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq004sel{    ///< register IRQ004SEL 
        using Addr = Register::Address<0x40031114,0xff00ff00,0x00000000,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq005sel{    ///< register IRQ005SEL 
        using Addr = Register::Address<0x40031118,0xff00ff00,0x00000000,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq006sel{    ///< register IRQ006SEL 
        using Addr = Register::Address<0x4003111c,0xff00ff00,0x00000000,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq007sel{    ///< register IRQ007SEL 
        using Addr = Register::Address<0x40031120,0xff00ff00,0x00000000,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq008sel{    ///< register IRQ008SEL 
        using Addr = Register::Address<0x40031124,0xff00ff00,0x00000000,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq009sel{    ///< register IRQ009SEL 
        using Addr = Register::Address<0x40031128,0xff00ff00,0x00000000,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq010sel{    ///< register IRQ010SEL 
        using Addr = Register::Address<0x4003112c,0xff00ff00,0x00000000,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqExc02mon{    ///< register EXC02MON 
        using Addr = Register::Address<0x40031200,0xfffffffc,0x00000000,unsigned>;
        /// bitfield HWINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwint{}; 
        /// bitfield NMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nmi{}; 
    }
    namespace IntreqIrq000mon{    ///< register IRQ000MON 
        using Addr = Register::Address<0x40031204,0xfffffffe,0x00000000,unsigned>;
        /// bitfield FCSINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fcsint{}; 
    }
    namespace IntreqIrq001mon{    ///< register IRQ001MON 
        using Addr = Register::Address<0x40031208,0xfffffffe,0x00000000,unsigned>;
        /// bitfield SWWDTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swwdtint{}; 
    }
    namespace IntreqIrq002mon{    ///< register IRQ002MON 
        using Addr = Register::Address<0x4003120c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield LVDINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdint{}; 
    }
    namespace IntreqIrq003mon{    ///< register IRQ003MON 
        using Addr = Register::Address<0x40031210,0xffffff00,0x00000000,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq004mon{    ///< register IRQ004MON 
        using Addr = Register::Address<0x40031214,0xffffff00,0x00000000,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq005mon{    ///< register IRQ005MON 
        using Addr = Register::Address<0x40031218,0xffffff00,0x00000000,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq006mon{    ///< register IRQ006MON 
        using Addr = Register::Address<0x4003121c,0xffffff00,0x00000000,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq007mon{    ///< register IRQ007MON 
        using Addr = Register::Address<0x40031220,0xffffff00,0x00000000,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq008mon{    ///< register IRQ008MON 
        using Addr = Register::Address<0x40031224,0xffffff00,0x00000000,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq009mon{    ///< register IRQ009MON 
        using Addr = Register::Address<0x40031228,0xffffff00,0x00000000,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq010mon{    ///< register IRQ010MON 
        using Addr = Register::Address<0x4003122c,0xffffff00,0x00000000,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq011mon{    ///< register IRQ011MON 
        using Addr = Register::Address<0x40031230,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq012mon{    ///< register IRQ012MON 
        using Addr = Register::Address<0x40031234,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq013mon{    ///< register IRQ013MON 
        using Addr = Register::Address<0x40031238,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq014mon{    ///< register IRQ014MON 
        using Addr = Register::Address<0x4003123c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq015mon{    ///< register IRQ015MON 
        using Addr = Register::Address<0x40031240,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq016mon{    ///< register IRQ016MON 
        using Addr = Register::Address<0x40031244,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq017mon{    ///< register IRQ017MON 
        using Addr = Register::Address<0x40031248,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq018mon{    ///< register IRQ018MON 
        using Addr = Register::Address<0x4003124c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq019mon{    ///< register IRQ019MON 
        using Addr = Register::Address<0x40031250,0xffffffc0,0x00000000,unsigned>;
        /// bitfield QUDINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint5{}; 
        /// bitfield QUDINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint4{}; 
        /// bitfield QUDINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint3{}; 
        /// bitfield QUDINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint2{}; 
        /// bitfield QUDINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint1{}; 
        /// bitfield QUDINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint0{}; 
    }
    namespace IntreqIrq020mon{    ///< register IRQ020MON 
        using Addr = Register::Address<0x40031254,0xffffffc0,0x00000000,unsigned>;
        /// bitfield QUDINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint5{}; 
        /// bitfield QUDINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint4{}; 
        /// bitfield QUDINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint3{}; 
        /// bitfield QUDINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint2{}; 
        /// bitfield QUDINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint1{}; 
        /// bitfield QUDINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint0{}; 
    }
    namespace IntreqIrq021mon{    ///< register IRQ021MON 
        using Addr = Register::Address<0x40031258,0xfffffff0,0x00000000,unsigned>;
        /// bitfield WAVEINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint3{}; 
        /// bitfield WAVEINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint2{}; 
        /// bitfield WAVEINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint1{}; 
        /// bitfield WAVEINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint0{}; 
    }
    namespace IntreqIrq022mon{    ///< register IRQ022MON 
        using Addr = Register::Address<0x4003125c,0xfffffff0,0x00000000,unsigned>;
        /// bitfield WAVEINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint3{}; 
        /// bitfield WAVEINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint2{}; 
        /// bitfield WAVEINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint1{}; 
        /// bitfield WAVEINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint0{}; 
    }
    namespace IntreqIrq023mon{    ///< register IRQ023MON 
        using Addr = Register::Address<0x40031260,0xfffffff0,0x00000000,unsigned>;
        /// bitfield WAVEINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint3{}; 
        /// bitfield WAVEINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint2{}; 
        /// bitfield WAVEINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint1{}; 
        /// bitfield WAVEINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint0{}; 
    }
    namespace IntreqIrq024mon{    ///< register IRQ024MON 
        using Addr = Register::Address<0x40031264,0xfffffff8,0x00000000,unsigned>;
        /// bitfield FRT_PEAK_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt2{}; 
        /// bitfield FRT_PEAK_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt1{}; 
        /// bitfield FRT_PEAK_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt0{}; 
    }
    namespace IntreqIrq025mon{    ///< register IRQ025MON 
        using Addr = Register::Address<0x40031268,0xfffffff8,0x00000000,unsigned>;
        /// bitfield FRT_ZERO_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt2{}; 
        /// bitfield FRT_ZERO_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt1{}; 
        /// bitfield FRT_ZERO_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt0{}; 
    }
    namespace IntreqIrq026mon{    ///< register IRQ026MON 
        using Addr = Register::Address<0x4003126c,0xfffffff0,0x00000000,unsigned>;
        /// bitfield ICUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint3{}; 
        /// bitfield ICUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint2{}; 
        /// bitfield ICUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint1{}; 
        /// bitfield ICUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint0{}; 
    }
    namespace IntreqIrq027mon{    ///< register IRQ027MON 
        using Addr = Register::Address<0x40031270,0xffffffc0,0x00000000,unsigned>;
        /// bitfield OCUINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint5{}; 
        /// bitfield OCUINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint4{}; 
        /// bitfield OCUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint3{}; 
        /// bitfield OCUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint2{}; 
        /// bitfield OCUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint1{}; 
        /// bitfield OCUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint0{}; 
    }
    namespace IntreqIrq028mon{    ///< register IRQ028MON 
        using Addr = Register::Address<0x40031274,0xfffffff8,0x00000000,unsigned>;
        /// bitfield FRT_PEAK_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt2{}; 
        /// bitfield FRT_PEAK_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt1{}; 
        /// bitfield FRT_PEAK_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt0{}; 
    }
    namespace IntreqIrq029mon{    ///< register IRQ029MON 
        using Addr = Register::Address<0x40031278,0xfffffff8,0x00000000,unsigned>;
        /// bitfield FRT_ZERO_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt2{}; 
        /// bitfield FRT_ZERO_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt1{}; 
        /// bitfield FRT_ZERO_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt0{}; 
    }
    namespace IntreqIrq030mon{    ///< register IRQ030MON 
        using Addr = Register::Address<0x4003127c,0xfffffff0,0x00000000,unsigned>;
        /// bitfield ICUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint3{}; 
        /// bitfield ICUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint2{}; 
        /// bitfield ICUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint1{}; 
        /// bitfield ICUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint0{}; 
    }
    namespace IntreqIrq031mon{    ///< register IRQ031MON 
        using Addr = Register::Address<0x40031280,0xffffffc0,0x00000000,unsigned>;
        /// bitfield OCUINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint5{}; 
        /// bitfield OCUINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint4{}; 
        /// bitfield OCUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint3{}; 
        /// bitfield OCUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint2{}; 
        /// bitfield OCUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint1{}; 
        /// bitfield OCUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint0{}; 
    }
    namespace IntreqIrq032mon{    ///< register IRQ032MON 
        using Addr = Register::Address<0x40031284,0xfffffff8,0x00000000,unsigned>;
        /// bitfield FRT_PEAK_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt2{}; 
        /// bitfield FRT_PEAK_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt1{}; 
        /// bitfield FRT_PEAK_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt0{}; 
    }
    namespace IntreqIrq033mon{    ///< register IRQ033MON 
        using Addr = Register::Address<0x40031288,0xfffffff8,0x00000000,unsigned>;
        /// bitfield FRT_ZERO_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt2{}; 
        /// bitfield FRT_ZERO_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt1{}; 
        /// bitfield FRT_ZERO_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt0{}; 
    }
    namespace IntreqIrq034mon{    ///< register IRQ034MON 
        using Addr = Register::Address<0x4003128c,0xfffffff0,0x00000000,unsigned>;
        /// bitfield ICUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint3{}; 
        /// bitfield ICUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint2{}; 
        /// bitfield ICUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint1{}; 
        /// bitfield ICUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint0{}; 
    }
    namespace IntreqIrq035mon{    ///< register IRQ035MON 
        using Addr = Register::Address<0x40031290,0xffffffc0,0x00000000,unsigned>;
        /// bitfield OCUINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint5{}; 
        /// bitfield OCUINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint4{}; 
        /// bitfield OCUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint3{}; 
        /// bitfield OCUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint2{}; 
        /// bitfield OCUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint1{}; 
        /// bitfield OCUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint0{}; 
    }
    namespace IntreqIrq036mon{    ///< register IRQ036MON 
        using Addr = Register::Address<0x40031294,0xfffffff8,0x00000000,unsigned>;
        /// bitfield PPGINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint2{}; 
        /// bitfield PPGINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint1{}; 
        /// bitfield PPGINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint0{}; 
    }
    namespace IntreqIrq037mon{    ///< register IRQ037MON 
        using Addr = Register::Address<0x40031298,0xfffffff8,0x00000000,unsigned>;
        /// bitfield PPGINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint2{}; 
        /// bitfield PPGINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint1{}; 
        /// bitfield PPGINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint0{}; 
    }
    namespace IntreqIrq038mon{    ///< register IRQ038MON 
        using Addr = Register::Address<0x4003129c,0xfffffff8,0x00000000,unsigned>;
        /// bitfield PPGINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint2{}; 
        /// bitfield PPGINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint1{}; 
        /// bitfield PPGINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint0{}; 
    }
    namespace IntreqIrq039mon{    ///< register IRQ039MON 
        using Addr = Register::Address<0x400312a0,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq040mon{    ///< register IRQ040MON 
        using Addr = Register::Address<0x400312a4,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq041mon{    ///< register IRQ041MON 
        using Addr = Register::Address<0x400312a8,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq042mon{    ///< register IRQ042MON 
        using Addr = Register::Address<0x400312ac,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq043mon{    ///< register IRQ043MON 
        using Addr = Register::Address<0x400312b0,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq044mon{    ///< register IRQ044MON 
        using Addr = Register::Address<0x400312b4,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq045mon{    ///< register IRQ045MON 
        using Addr = Register::Address<0x400312b8,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq046mon{    ///< register IRQ046MON 
        using Addr = Register::Address<0x400312bc,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq047mon{    ///< register IRQ047MON 
        using Addr = Register::Address<0x400312c0,0xfffffffc,0x00000000,unsigned>;
        /// bitfield TIMINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timint2{}; 
        /// bitfield TIMINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timint1{}; 
    }
    namespace IntreqIrq048mon{    ///< register IRQ048MON 
        using Addr = Register::Address<0x400312c4,0xfffffffe,0x00000000,unsigned>;
        /// bitfield WCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wcint{}; 
    }
    namespace IntreqIrq049mon{    ///< register IRQ049MON 
        using Addr = Register::Address<0x400312c8,0xfffffffe,0x00000000,unsigned>;
        /// bitfield BMEMCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bmemcs{}; 
    }
    namespace IntreqIrq050mon{    ///< register IRQ050MON 
        using Addr = Register::Address<0x400312cc,0xfffffffe,0x00000000,unsigned>;
        /// bitfield RTCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtcint{}; 
    }
    namespace IntreqIrq051mon{    ///< register IRQ051MON 
        using Addr = Register::Address<0x400312d0,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq052mon{    ///< register IRQ052MON 
        using Addr = Register::Address<0x400312d4,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq053mon{    ///< register IRQ053MON 
        using Addr = Register::Address<0x400312d8,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq054mon{    ///< register IRQ054MON 
        using Addr = Register::Address<0x400312dc,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq055mon{    ///< register IRQ055MON 
        using Addr = Register::Address<0x400312e0,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq056mon{    ///< register IRQ056MON 
        using Addr = Register::Address<0x400312e4,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq057mon{    ///< register IRQ057MON 
        using Addr = Register::Address<0x400312e8,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq058mon{    ///< register IRQ058MON 
        using Addr = Register::Address<0x400312ec,0xfffffffe,0x00000000,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq059mon{    ///< register IRQ059MON 
        using Addr = Register::Address<0x400312f0,0xfffffff0,0x00000000,unsigned>;
        /// bitfield UPLLINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> upllint{}; 
        /// bitfield MPLLINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mpllint{}; 
        /// bitfield SOSCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soscint{}; 
        /// bitfield MOSCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscint{}; 
    }
    namespace IntreqIrq060mon{    ///< register IRQ060MON 
        using Addr = Register::Address<0x400312f4,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq061mon{    ///< register IRQ061MON 
        using Addr = Register::Address<0x400312f8,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq062mon{    ///< register IRQ062MON 
        using Addr = Register::Address<0x400312fc,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq063mon{    ///< register IRQ063MON 
        using Addr = Register::Address<0x40031300,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq064mon{    ///< register IRQ064MON 
        using Addr = Register::Address<0x40031304,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq065mon{    ///< register IRQ065MON 
        using Addr = Register::Address<0x40031308,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq066mon{    ///< register IRQ066MON 
        using Addr = Register::Address<0x4003130c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq067mon{    ///< register IRQ067MON 
        using Addr = Register::Address<0x40031310,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq068mon{    ///< register IRQ068MON 
        using Addr = Register::Address<0x40031314,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq069mon{    ///< register IRQ069MON 
        using Addr = Register::Address<0x40031318,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq070mon{    ///< register IRQ070MON 
        using Addr = Register::Address<0x4003131c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq071mon{    ///< register IRQ071MON 
        using Addr = Register::Address<0x40031320,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq072mon{    ///< register IRQ072MON 
        using Addr = Register::Address<0x40031324,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq073mon{    ///< register IRQ073MON 
        using Addr = Register::Address<0x40031328,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq074mon{    ///< register IRQ074MON 
        using Addr = Register::Address<0x4003132c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq075mon{    ///< register IRQ075MON 
        using Addr = Register::Address<0x40031330,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq076mon{    ///< register IRQ076MON 
        using Addr = Register::Address<0x40031334,0xffffffe0,0x00000000,unsigned>;
        /// bitfield ADCINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint4{}; 
        /// bitfield ADCINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint3{}; 
        /// bitfield ADCINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint2{}; 
        /// bitfield ADCINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint1{}; 
        /// bitfield ADCINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint0{}; 
    }
    namespace IntreqIrq077mon{    ///< register IRQ077MON 
        using Addr = Register::Address<0x40031338,0xffffffe0,0x00000000,unsigned>;
        /// bitfield ADCINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint4{}; 
        /// bitfield ADCINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint3{}; 
        /// bitfield ADCINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint2{}; 
        /// bitfield ADCINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint1{}; 
        /// bitfield ADCINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint0{}; 
    }
    namespace IntreqIrq078mon{    ///< register IRQ078MON 
        using Addr = Register::Address<0x4003133c,0xffffffe0,0x00000000,unsigned>;
        /// bitfield USB_DRQ_INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt4{}; 
        /// bitfield USB_DRQ_INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt3{}; 
        /// bitfield USB_DRQ_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt2{}; 
        /// bitfield USB_DRQ_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt1{}; 
        /// bitfield USB_DRQ_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt0{}; 
    }
    namespace IntreqIrq079mon{    ///< register IRQ079MON 
        using Addr = Register::Address<0x40031340,0xffffffc0,0x00000000,unsigned>;
        /// bitfield USB_INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt5{}; 
        /// bitfield USB_INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt4{}; 
        /// bitfield USB_INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt3{}; 
        /// bitfield USB_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt2{}; 
        /// bitfield USB_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt1{}; 
        /// bitfield USB_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt0{}; 
    }
    namespace IntreqIrq080mon{    ///< register IRQ080MON 
        using Addr = Register::Address<0x40031344,0xfffffffe,0x00000000,unsigned>;
        /// bitfield CANINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> canint{}; 
    }
    namespace IntreqIrq081mon{    ///< register IRQ081MON 
        using Addr = Register::Address<0x40031348,0xfffffffe,0x00000000,unsigned>;
        /// bitfield CANINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> canint{}; 
    }
    namespace IntreqIrq082mon{    ///< register IRQ082MON 
        using Addr = Register::Address<0x4003134c,0xfffffff8,0x00000000,unsigned>;
        /// bitfield MACLPI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> maclpi{}; 
        /// bitfield MACPMT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macpmt{}; 
        /// bitfield MACSBD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macsbd{}; 
    }
    namespace IntreqIrq083mon{    ///< register IRQ083MON 
        using Addr = Register::Address<0x40031350,0xfffffffe,0x00000000,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq084mon{    ///< register IRQ084MON 
        using Addr = Register::Address<0x40031354,0xfffffffe,0x00000000,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq085mon{    ///< register IRQ085MON 
        using Addr = Register::Address<0x40031358,0xfffffffe,0x00000000,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq086mon{    ///< register IRQ086MON 
        using Addr = Register::Address<0x4003135c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq087mon{    ///< register IRQ087MON 
        using Addr = Register::Address<0x40031360,0xfffffffe,0x00000000,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq088mon{    ///< register IRQ088MON 
        using Addr = Register::Address<0x40031364,0xfffffffe,0x00000000,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq089mon{    ///< register IRQ089MON 
        using Addr = Register::Address<0x40031368,0xfffffffe,0x00000000,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq090mon{    ///< register IRQ090MON 
        using Addr = Register::Address<0x4003136c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq091mon{    ///< register IRQ091MON 
        using Addr = Register::Address<0x40031370,0xfffffffc,0x00000000,unsigned>;
        /// bitfield DSTCINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dstcint1{}; 
        /// bitfield DSTCINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dstcint0{}; 
    }
    namespace IntreqIrq092mon{    ///< register IRQ092MON 
        using Addr = Register::Address<0x40031374,0xfffffff0,0x00000000,unsigned>;
        /// bitfield EXTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        /// bitfield EXTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        /// bitfield EXTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        /// bitfield EXTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq093mon{    ///< register IRQ093MON 
        using Addr = Register::Address<0x40031378,0xfffffff0,0x00000000,unsigned>;
        /// bitfield EXTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        /// bitfield EXTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        /// bitfield EXTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        /// bitfield EXTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq094mon{    ///< register IRQ094MON 
        using Addr = Register::Address<0x4003137c,0xfffffff0,0x00000000,unsigned>;
        /// bitfield EXTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        /// bitfield EXTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        /// bitfield EXTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        /// bitfield EXTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq095mon{    ///< register IRQ095MON 
        using Addr = Register::Address<0x40031380,0xfffffff0,0x00000000,unsigned>;
        /// bitfield EXTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        /// bitfield EXTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        /// bitfield EXTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        /// bitfield EXTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq096mon{    ///< register IRQ096MON 
        using Addr = Register::Address<0x40031384,0xffffffc0,0x00000000,unsigned>;
        /// bitfield QUDINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint5{}; 
        /// bitfield QUDINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint4{}; 
        /// bitfield QUDINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint3{}; 
        /// bitfield QUDINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint2{}; 
        /// bitfield QUDINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint1{}; 
        /// bitfield QUDINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint0{}; 
    }
    namespace IntreqIrq097mon{    ///< register IRQ097MON 
        using Addr = Register::Address<0x40031388,0xffffffc0,0x00000000,unsigned>;
        /// bitfield QUDINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint5{}; 
        /// bitfield QUDINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint4{}; 
        /// bitfield QUDINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint3{}; 
        /// bitfield QUDINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint2{}; 
        /// bitfield QUDINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint1{}; 
        /// bitfield QUDINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint0{}; 
    }
    namespace IntreqIrq098mon{    ///< register IRQ098MON 
        using Addr = Register::Address<0x4003138c,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq099mon{    ///< register IRQ099MON 
        using Addr = Register::Address<0x40031390,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq100mon{    ///< register IRQ100MON 
        using Addr = Register::Address<0x40031394,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq101mon{    ///< register IRQ101MON 
        using Addr = Register::Address<0x40031398,0xfffffffc,0x00000000,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq102mon{    ///< register IRQ102MON 
        using Addr = Register::Address<0x4003139c,0xffffff00,0x00000000,unsigned>;
        /// bitfield BTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint7{}; 
        /// bitfield BTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint6{}; 
        /// bitfield BTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint5{}; 
        /// bitfield BTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint4{}; 
        /// bitfield BTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint3{}; 
        /// bitfield BTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint2{}; 
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq103mon{    ///< register IRQ103MON 
        using Addr = Register::Address<0x400313a0,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq104mon{    ///< register IRQ104MON 
        using Addr = Register::Address<0x400313a4,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq105mon{    ///< register IRQ105MON 
        using Addr = Register::Address<0x400313a8,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq106mon{    ///< register IRQ106MON 
        using Addr = Register::Address<0x400313ac,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq107mon{    ///< register IRQ107MON 
        using Addr = Register::Address<0x400313b0,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq108mon{    ///< register IRQ108MON 
        using Addr = Register::Address<0x400313b4,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq109mon{    ///< register IRQ109MON 
        using Addr = Register::Address<0x400313b8,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq110mon{    ///< register IRQ110MON 
        using Addr = Register::Address<0x400313bc,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq111mon{    ///< register IRQ111MON 
        using Addr = Register::Address<0x400313c0,0xffffffe0,0x00000000,unsigned>;
        /// bitfield ADCINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint4{}; 
        /// bitfield ADCINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint3{}; 
        /// bitfield ADCINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint2{}; 
        /// bitfield ADCINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint1{}; 
        /// bitfield ADCINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint0{}; 
    }
    namespace IntreqIrq112mon{    ///< register IRQ112MON 
        using Addr = Register::Address<0x400313c4,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq113mon{    ///< register IRQ113MON 
        using Addr = Register::Address<0x400313c8,0xffffffe0,0x00000000,unsigned>;
        /// bitfield USB_DRQ_INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt4{}; 
        /// bitfield USB_DRQ_INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt3{}; 
        /// bitfield USB_DRQ_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt2{}; 
        /// bitfield USB_DRQ_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt1{}; 
        /// bitfield USB_DRQ_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt0{}; 
    }
    namespace IntreqIrq114mon{    ///< register IRQ114MON 
        using Addr = Register::Address<0x400313cc,0xffffffc0,0x00000000,unsigned>;
        /// bitfield USB_INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt5{}; 
        /// bitfield USB_INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt4{}; 
        /// bitfield USB_INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt3{}; 
        /// bitfield USB_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt2{}; 
        /// bitfield USB_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt1{}; 
        /// bitfield USB_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt0{}; 
    }
    namespace IntreqIrq115mon{    ///< register IRQ115MON 
        using Addr = Register::Address<0x400313d0,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq116mon{    ///< register IRQ116MON 
        using Addr = Register::Address<0x400313d4,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq117mon{    ///< register IRQ117MON 
        using Addr = Register::Address<0x400313d8,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq118mon{    ///< register IRQ118MON 
        using Addr = Register::Address<0x400313dc,0xfffffffc,0x00000000,unsigned>;
        /// bitfield SDINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdint1{}; 
        /// bitfield SDINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdint0{}; 
    }
    namespace IntreqIrq119mon{    ///< register IRQ119MON 
        using Addr = Register::Address<0x400313e0,0xfffffffe,0x00000000,unsigned>;
        /// bitfield FLINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flint{}; 
    }
    namespace IntreqIrq120mon{    ///< register IRQ120MON 
        using Addr = Register::Address<0x400313e4,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq121mon{    ///< register IRQ121MON 
        using Addr = Register::Address<0x400313e8,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq122mon{    ///< register IRQ122MON 
        using Addr = Register::Address<0x400313ec,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq123mon{    ///< register IRQ123MON 
        using Addr = Register::Address<0x400313f0,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq124mon{    ///< register IRQ124MON 
        using Addr = Register::Address<0x400313f4,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq125mon{    ///< register IRQ125MON 
        using Addr = Register::Address<0x400313f8,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq126mon{    ///< register IRQ126MON 
        using Addr = Register::Address<0x400313fc,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq127mon{    ///< register IRQ127MON 
        using Addr = Register::Address<0x40031400,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
}
