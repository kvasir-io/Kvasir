#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral INTREQ 
    namespace Nonedrqsel{    ///< register DRQSEL 
        using Addr = Register::Address<0x40031000,0x00000000,0,unsigned>;
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
    namespace Noneoddpks{    ///< register ODDPKS 
        using Addr = Register::Address<0x4003100b,0xffffffe0,0,unsigned char>;
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
    namespace Noneirqcmode{    ///< register IRQCMODE 
        using Addr = Register::Address<0x4003100c,0xfffffffe,0,unsigned>;
        /// bitfield IRQCMODE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqcmode{}; 
    }
    namespace Noneexc02mon{    ///< register EXC02MON 
        using Addr = Register::Address<0x40031010,0xfffffffc,0,unsigned>;
        /// bitfield HWINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hwint{}; 
        /// bitfield NMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
    }
    namespace Noneirq00mon{    ///< register IRQ00MON 
        using Addr = Register::Address<0x40031014,0xfffffffe,0,unsigned>;
        /// bitfield FCSINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcsint{}; 
    }
    namespace Noneirq01mon{    ///< register IRQ01MON 
        using Addr = Register::Address<0x40031018,0xfffffffe,0,unsigned>;
        /// bitfield SWWDTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swwdtint{}; 
    }
    namespace Noneirq02mon{    ///< register IRQ02MON 
        using Addr = Register::Address<0x4003101c,0xfffffffe,0,unsigned>;
        /// bitfield LVDINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvdint{}; 
    }
    namespace Noneirq03mon{    ///< register IRQ03MON 
        using Addr = Register::Address<0x40031020,0xfffffff0,0,unsigned>;
        /// bitfield WAVE0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wave0int3{}; 
        /// bitfield WAVE0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wave0int2{}; 
        /// bitfield WAVE0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wave0int1{}; 
        /// bitfield WAVE0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wave0int0{}; 
    }
    namespace Noneirq04mon{    ///< register IRQ04MON 
        using Addr = Register::Address<0x40031024,0xffffff00,0,unsigned>;
        /// bitfield EXTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        /// bitfield EXTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        /// bitfield EXTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        /// bitfield EXTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        /// bitfield EXTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        /// bitfield EXTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        /// bitfield EXTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        /// bitfield EXTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
    }
    namespace Noneirq05mon{    ///< register IRQ05MON 
        using Addr = Register::Address<0x40031028,0xff000000,0,unsigned>;
        /// bitfield EXTINT23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extint23{}; 
        /// bitfield EXTINT22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extint22{}; 
        /// bitfield EXTINT21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extint21{}; 
        /// bitfield EXTINT20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> extint20{}; 
        /// bitfield EXTINT19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> extint19{}; 
        /// bitfield EXTINT18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> extint18{}; 
        /// bitfield EXTINT17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> extint17{}; 
        /// bitfield EXTINT16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> extint16{}; 
        /// bitfield EXTINT15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extint15{}; 
        /// bitfield EXTINT14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extint14{}; 
        /// bitfield EXTINT13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extint13{}; 
        /// bitfield EXTINT12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extint12{}; 
        /// bitfield EXTINT11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extint11{}; 
        /// bitfield EXTINT10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extint10{}; 
        /// bitfield EXTINT9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extint9{}; 
        /// bitfield EXTINT8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extint8{}; 
        /// bitfield EXTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        /// bitfield EXTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        /// bitfield EXTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        /// bitfield EXTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        /// bitfield EXTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        /// bitfield EXTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        /// bitfield EXTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        /// bitfield EXTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
    }
    namespace Noneirq06mon{    ///< register IRQ06MON 
        using Addr = Register::Address<0x4003102c,0xffffc000,0,unsigned>;
        /// bitfield QUD1INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> qud1int5{}; 
        /// bitfield QUD1INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> qud1int4{}; 
        /// bitfield QUD1INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> qud1int3{}; 
        /// bitfield QUD1INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> qud1int2{}; 
        /// bitfield QUD1INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> qud1int1{}; 
        /// bitfield QUD1INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qud1int0{}; 
        /// bitfield QUD0INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> qud0int5{}; 
        /// bitfield QUD0INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> qud0int4{}; 
        /// bitfield QUD0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qud0int3{}; 
        /// bitfield QUD0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qud0int2{}; 
        /// bitfield QUD0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qud0int1{}; 
        /// bitfield QUD0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qud0int0{}; 
        /// bitfield TIMINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timint2{}; 
        /// bitfield TIMINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timint1{}; 
    }
    namespace Noneirq07mon{    ///< register IRQ07MON 
        using Addr = Register::Address<0x40031030,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq08mon{    ///< register IRQ08MON 
        using Addr = Register::Address<0x40031034,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq09mon{    ///< register IRQ09MON 
        using Addr = Register::Address<0x40031038,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq10mon{    ///< register IRQ10MON 
        using Addr = Register::Address<0x4003103c,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq11mon{    ///< register IRQ11MON 
        using Addr = Register::Address<0x40031040,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq12mon{    ///< register IRQ12MON 
        using Addr = Register::Address<0x40031044,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq13mon{    ///< register IRQ13MON 
        using Addr = Register::Address<0x40031048,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq14mon{    ///< register IRQ14MON 
        using Addr = Register::Address<0x4003104c,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq15mon{    ///< register IRQ15MON 
        using Addr = Register::Address<0x40031050,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq16mon{    ///< register IRQ16MON 
        using Addr = Register::Address<0x40031054,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq17mon{    ///< register IRQ17MON 
        using Addr = Register::Address<0x40031058,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq18mon{    ///< register IRQ18MON 
        using Addr = Register::Address<0x4003105c,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq19mon{    ///< register IRQ19MON 
        using Addr = Register::Address<0x40031060,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq20mon{    ///< register IRQ20MON 
        using Addr = Register::Address<0x40031064,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq21mon{    ///< register IRQ21MON 
        using Addr = Register::Address<0x40031068,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq22mon{    ///< register IRQ22MON 
        using Addr = Register::Address<0x4003106c,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq23mon{    ///< register IRQ23MON 
        using Addr = Register::Address<0x40031070,0xfffffff8,0,unsigned>;
        /// bitfield PPGINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ppgint2{}; 
        /// bitfield PPGINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ppgint1{}; 
        /// bitfield PPGINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ppgint0{}; 
    }
    namespace Noneirq24mon{    ///< register IRQ24MON 
        using Addr = Register::Address<0x40031074,0xffffffc0,0,unsigned>;
        /// bitfield RTCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcint{}; 
        /// bitfield WCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wcint{}; 
        /// bitfield UPLLINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> upllint{}; 
        /// bitfield MPLLINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mpllint{}; 
        /// bitfield SOSCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soscint{}; 
        /// bitfield MOSCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscint{}; 
    }
    namespace Noneirq25mon{    ///< register IRQ25MON 
        using Addr = Register::Address<0x40031078,0xfffffff0,0,unsigned>;
        /// bitfield ADCINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        /// bitfield ADCINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        /// bitfield ADCINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        /// bitfield ADCINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
    }
    namespace Noneirq26mon{    ///< register IRQ26MON 
        using Addr = Register::Address<0x4003107c,0xfffffff0,0,unsigned>;
        /// bitfield ADCINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        /// bitfield ADCINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        /// bitfield ADCINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        /// bitfield ADCINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
    }
    namespace Noneirq27mon{    ///< register IRQ27MON 
        using Addr = Register::Address<0x40031080,0xffffffff,0,unsigned>;
    }
    namespace Noneirq28mon{    ///< register IRQ28MON 
        using Addr = Register::Address<0x40031084,0xffffffc0,0,unsigned>;
        /// bitfield FRT0INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frt0int5{}; 
        /// bitfield FRT0INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> frt0int4{}; 
        /// bitfield FRT0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> frt0int3{}; 
        /// bitfield FRT0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frt0int2{}; 
        /// bitfield FRT0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frt0int1{}; 
        /// bitfield FRT0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frt0int0{}; 
    }
    namespace Noneirq29mon{    ///< register IRQ29MON 
        using Addr = Register::Address<0x40031088,0xfffffff0,0,unsigned>;
        /// bitfield ICU0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icu0int3{}; 
        /// bitfield ICU0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icu0int2{}; 
        /// bitfield ICU0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icu0int1{}; 
        /// bitfield ICU0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icu0int0{}; 
    }
    namespace Noneirq30mon{    ///< register IRQ30MON 
        using Addr = Register::Address<0x4003108c,0xffffffc0,0,unsigned>;
        /// bitfield OCU0INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocu0int5{}; 
        /// bitfield OCU0INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocu0int4{}; 
        /// bitfield OCU0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocu0int3{}; 
        /// bitfield OCU0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocu0int2{}; 
        /// bitfield OCU0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocu0int1{}; 
        /// bitfield OCU0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocu0int0{}; 
    }
    namespace Noneirq31mon{    ///< register IRQ31MON 
        using Addr = Register::Address<0x40031090,0xffff0000,0,unsigned>;
        /// bitfield BTINT15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> btint15{}; 
        /// bitfield BTINT14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> btint14{}; 
        /// bitfield BTINT13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> btint13{}; 
        /// bitfield BTINT12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> btint12{}; 
        /// bitfield BTINT11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> btint11{}; 
        /// bitfield BTINT10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> btint10{}; 
        /// bitfield BTINT9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> btint9{}; 
        /// bitfield BTINT8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> btint8{}; 
        /// bitfield BTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btint7{}; 
        /// bitfield BTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btint6{}; 
        /// bitfield BTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btint5{}; 
        /// bitfield BTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btint4{}; 
        /// bitfield BTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btint3{}; 
        /// bitfield BTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btint2{}; 
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
    }
    namespace Noneirq32mon{    ///< register IRQ32MON 
        using Addr = Register::Address<0x40031094,0xfffffffe,0,unsigned>;
        /// bitfield CAN0INT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> can0int{}; 
    }
    namespace Noneirq33mon{    ///< register IRQ33MON 
        using Addr = Register::Address<0x40031098,0xffffffff,0,unsigned>;
    }
    namespace Noneirq34mon{    ///< register IRQ34MON 
        using Addr = Register::Address<0x4003109c,0xffffffe0,0,unsigned>;
        /// bitfield USB0INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0int4{}; 
        /// bitfield USB0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usb0int3{}; 
        /// bitfield USB0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usb0int2{}; 
        /// bitfield USB0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usb0int1{}; 
        /// bitfield USB0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usb0int0{}; 
    }
    namespace Noneirq35mon{    ///< register IRQ35MON 
        using Addr = Register::Address<0x400310a0,0xffffffc0,0,unsigned>;
        /// bitfield USB0INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usb0int5{}; 
        /// bitfield USB0INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0int4{}; 
        /// bitfield USB0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usb0int3{}; 
        /// bitfield USB0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usb0int2{}; 
        /// bitfield USB0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usb0int1{}; 
        /// bitfield USB0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usb0int0{}; 
    }
    namespace Noneirq36mon{    ///< register IRQ36MON 
        using Addr = Register::Address<0x400310a4,0xffffffdf,0,unsigned>;
        /// bitfield RCEC0INT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rcec0int{}; 
    }
    namespace Noneirq37mon{    ///< register IRQ37MON 
        using Addr = Register::Address<0x400310a8,0xffffffbf,0,unsigned>;
        /// bitfield RCEC1INT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcec1int{}; 
    }
    namespace Noneirq38mon{    ///< register IRQ38MON 
        using Addr = Register::Address<0x400310ac,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq39mon{    ///< register IRQ39MON 
        using Addr = Register::Address<0x400310b0,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq40mon{    ///< register IRQ40MON 
        using Addr = Register::Address<0x400310b4,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq41mon{    ///< register IRQ41MON 
        using Addr = Register::Address<0x400310b8,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq42mon{    ///< register IRQ42MON 
        using Addr = Register::Address<0x400310bc,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq43mon{    ///< register IRQ43MON 
        using Addr = Register::Address<0x400310c0,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq44mon{    ///< register IRQ44MON 
        using Addr = Register::Address<0x400310c4,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq45mon{    ///< register IRQ45MON 
        using Addr = Register::Address<0x400310c8,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq46mon{    ///< register IRQ46MON 
        using Addr = Register::Address<0x400310cc,0xffff0000,0,unsigned>;
        /// bitfield BTINT15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> btint15{}; 
        /// bitfield BTINT14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> btint14{}; 
        /// bitfield BTINT13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> btint13{}; 
        /// bitfield BTINT12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> btint12{}; 
        /// bitfield BTINT11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> btint11{}; 
        /// bitfield BTINT10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> btint10{}; 
        /// bitfield BTINT9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> btint9{}; 
        /// bitfield BTINT8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> btint8{}; 
        /// bitfield BTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btint7{}; 
        /// bitfield BTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btint6{}; 
        /// bitfield BTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btint5{}; 
        /// bitfield BTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btint4{}; 
        /// bitfield BTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btint3{}; 
        /// bitfield BTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btint2{}; 
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
    }
    namespace Noneirq47mon{    ///< register IRQ47MON 
        using Addr = Register::Address<0x400310d0,0xfffff7ff,0,unsigned>;
        /// bitfield FLASHINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> flashint{}; 
    }
    namespace Nonercintsel0{    ///< register RCINTSEL0 
        using Addr = Register::Address<0x40031210,0x00000000,0,unsigned>;
        /// bitfield INTSEL3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel3{}; 
        /// bitfield INTSEL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel2{}; 
        /// bitfield INTSEL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel1{}; 
        /// bitfield INTSEL0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel0{}; 
    }
    namespace Nonercintsel1{    ///< register RCINTSEL1 
        using Addr = Register::Address<0x40031214,0x00000000,0,unsigned>;
        /// bitfield INTSEL7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel7{}; 
        /// bitfield INTSEL6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel6{}; 
        /// bitfield INTSEL5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel5{}; 
        /// bitfield INTSEL4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel4{}; 
    }
}
