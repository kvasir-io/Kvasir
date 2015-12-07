#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral INTREQ 
    namespace Nonedrqsel{    ///< register DRQSEL 
        using Addr = Register::Address<0x40031000,0x00000000,0,unsigned>;
        /// bitfield EXINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> exint3{}; 
        namespace Exint3ValC{
        }
        /// bitfield EXINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> exint2{}; 
        namespace Exint2ValC{
        }
        /// bitfield EXINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> exint1{}; 
        namespace Exint1ValC{
        }
        /// bitfield EXINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> exint0{}; 
        namespace Exint0ValC{
        }
        /// bitfield MFS7TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mfs7tx{}; 
        namespace Mfs7txValC{
        }
        /// bitfield MFS7RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mfs7rx{}; 
        namespace Mfs7rxValC{
        }
        /// bitfield MFS6TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mfs6tx{}; 
        namespace Mfs6txValC{
        }
        /// bitfield MFS6RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mfs6rx{}; 
        namespace Mfs6rxValC{
        }
        /// bitfield MFS5TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mfs5tx{}; 
        namespace Mfs5txValC{
        }
        /// bitfield MFS5RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mfs5rx{}; 
        namespace Mfs5rxValC{
        }
        /// bitfield MFS4TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mfs4tx{}; 
        namespace Mfs4txValC{
        }
        /// bitfield MFS4RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mfs4rx{}; 
        namespace Mfs4rxValC{
        }
        /// bitfield MFS3TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mfs3tx{}; 
        namespace Mfs3txValC{
        }
        /// bitfield MFS3RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mfs3rx{}; 
        namespace Mfs3rxValC{
        }
        /// bitfield MFS2TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mfs2tx{}; 
        namespace Mfs2txValC{
        }
        /// bitfield MFS2RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mfs2rx{}; 
        namespace Mfs2rxValC{
        }
        /// bitfield MFS1TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfs1tx{}; 
        namespace Mfs1txValC{
        }
        /// bitfield MFS1RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfs1rx{}; 
        namespace Mfs1rxValC{
        }
        /// bitfield MFS0TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfs0tx{}; 
        namespace Mfs0txValC{
        }
        /// bitfield MFS0RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfs0rx{}; 
        namespace Mfs0rxValC{
        }
        /// bitfield IRQ0BT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> irq0bt6{}; 
        namespace Irq0bt6ValC{
        }
        /// bitfield IRQ0BT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> irq0bt4{}; 
        namespace Irq0bt4ValC{
        }
        /// bitfield IRQ0BT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> irq0bt2{}; 
        namespace Irq0bt2ValC{
        }
        /// bitfield IRQ0BT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> irq0bt0{}; 
        namespace Irq0bt0ValC{
        }
        /// bitfield ADCSCAN2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adcscan2{}; 
        namespace Adcscan2ValC{
        }
        /// bitfield ADCSCAN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adcscan1{}; 
        namespace Adcscan1ValC{
        }
        /// bitfield ADCSCAN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adcscan0{}; 
        namespace Adcscan0ValC{
        }
        /// bitfield USBEP5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbep5{}; 
        namespace Usbep5ValC{
        }
        /// bitfield USBEP4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbep4{}; 
        namespace Usbep4ValC{
        }
        /// bitfield USBEP3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbep3{}; 
        namespace Usbep3ValC{
        }
        /// bitfield USBEP2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbep2{}; 
        namespace Usbep2ValC{
        }
        /// bitfield USBEP1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbep1{}; 
        namespace Usbep1ValC{
        }
    }
    namespace Noneoddpks{    ///< register ODDPKS 
        using Addr = Register::Address<0x4003100b,0xffffffe0,0,unsigned char>;
        /// bitfield ODDPKS4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oddpks4{}; 
        namespace Oddpks4ValC{
        }
        /// bitfield ODDPKS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oddpks3{}; 
        namespace Oddpks3ValC{
        }
        /// bitfield ODDPKS2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oddpks2{}; 
        namespace Oddpks2ValC{
        }
        /// bitfield ODDPKS1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddpks1{}; 
        namespace Oddpks1ValC{
        }
        /// bitfield ODDPKS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oddpks0{}; 
        namespace Oddpks0ValC{
        }
    }
    namespace Noneirqcmode{    ///< register IRQCMODE 
        using Addr = Register::Address<0x4003100c,0xfffffffe,0,unsigned>;
        /// bitfield IRQCMODE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqcmode{}; 
        namespace IrqcmodeValC{
        }
    }
    namespace Noneexc02mon{    ///< register EXC02MON 
        using Addr = Register::Address<0x40031010,0xfffffffc,0,unsigned>;
        /// bitfield HWINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hwint{}; 
        namespace HwintValC{
        }
        /// bitfield NMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
        namespace NmiValC{
        }
    }
    namespace Noneirq00mon{    ///< register IRQ00MON 
        using Addr = Register::Address<0x40031014,0xfffffffe,0,unsigned>;
        /// bitfield FCSINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcsint{}; 
        namespace FcsintValC{
        }
    }
    namespace Noneirq01mon{    ///< register IRQ01MON 
        using Addr = Register::Address<0x40031018,0xfffffffe,0,unsigned>;
        /// bitfield SWWDTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swwdtint{}; 
        namespace SwwdtintValC{
        }
    }
    namespace Noneirq02mon{    ///< register IRQ02MON 
        using Addr = Register::Address<0x4003101c,0xfffffffe,0,unsigned>;
        /// bitfield LVDINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvdint{}; 
        namespace LvdintValC{
        }
    }
    namespace Noneirq03mon{    ///< register IRQ03MON 
        using Addr = Register::Address<0x40031020,0xfffffff0,0,unsigned>;
        /// bitfield WAVE0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wave0int3{}; 
        namespace Wave0int3ValC{
        }
        /// bitfield WAVE0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wave0int2{}; 
        namespace Wave0int2ValC{
        }
        /// bitfield WAVE0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wave0int1{}; 
        namespace Wave0int1ValC{
        }
        /// bitfield WAVE0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wave0int0{}; 
        namespace Wave0int0ValC{
        }
    }
    namespace Noneirq04mon{    ///< register IRQ04MON 
        using Addr = Register::Address<0x40031024,0xffffff00,0,unsigned>;
        /// bitfield EXTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        namespace Extint7ValC{
        }
        /// bitfield EXTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        namespace Extint6ValC{
        }
        /// bitfield EXTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        namespace Extint5ValC{
        }
        /// bitfield EXTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        namespace Extint4ValC{
        }
        /// bitfield EXTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        /// bitfield EXTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        /// bitfield EXTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        /// bitfield EXTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
    }
    namespace Noneirq05mon{    ///< register IRQ05MON 
        using Addr = Register::Address<0x40031028,0xff000000,0,unsigned>;
        /// bitfield EXTINT23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> extint23{}; 
        namespace Extint23ValC{
        }
        /// bitfield EXTINT22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> extint22{}; 
        namespace Extint22ValC{
        }
        /// bitfield EXTINT21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> extint21{}; 
        namespace Extint21ValC{
        }
        /// bitfield EXTINT20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> extint20{}; 
        namespace Extint20ValC{
        }
        /// bitfield EXTINT19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> extint19{}; 
        namespace Extint19ValC{
        }
        /// bitfield EXTINT18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> extint18{}; 
        namespace Extint18ValC{
        }
        /// bitfield EXTINT17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> extint17{}; 
        namespace Extint17ValC{
        }
        /// bitfield EXTINT16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> extint16{}; 
        namespace Extint16ValC{
        }
        /// bitfield EXTINT15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extint15{}; 
        namespace Extint15ValC{
        }
        /// bitfield EXTINT14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> extint14{}; 
        namespace Extint14ValC{
        }
        /// bitfield EXTINT13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> extint13{}; 
        namespace Extint13ValC{
        }
        /// bitfield EXTINT12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> extint12{}; 
        namespace Extint12ValC{
        }
        /// bitfield EXTINT11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> extint11{}; 
        namespace Extint11ValC{
        }
        /// bitfield EXTINT10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> extint10{}; 
        namespace Extint10ValC{
        }
        /// bitfield EXTINT9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> extint9{}; 
        namespace Extint9ValC{
        }
        /// bitfield EXTINT8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> extint8{}; 
        namespace Extint8ValC{
        }
        /// bitfield EXTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        namespace Extint7ValC{
        }
        /// bitfield EXTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        namespace Extint6ValC{
        }
        /// bitfield EXTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        namespace Extint5ValC{
        }
        /// bitfield EXTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        namespace Extint4ValC{
        }
        /// bitfield EXTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        /// bitfield EXTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        /// bitfield EXTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        /// bitfield EXTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
    }
    namespace Noneirq06mon{    ///< register IRQ06MON 
        using Addr = Register::Address<0x4003102c,0xffffc000,0,unsigned>;
        /// bitfield QUD1INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> qud1int5{}; 
        namespace Qud1int5ValC{
        }
        /// bitfield QUD1INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> qud1int4{}; 
        namespace Qud1int4ValC{
        }
        /// bitfield QUD1INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> qud1int3{}; 
        namespace Qud1int3ValC{
        }
        /// bitfield QUD1INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> qud1int2{}; 
        namespace Qud1int2ValC{
        }
        /// bitfield QUD1INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> qud1int1{}; 
        namespace Qud1int1ValC{
        }
        /// bitfield QUD1INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> qud1int0{}; 
        namespace Qud1int0ValC{
        }
        /// bitfield QUD0INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> qud0int5{}; 
        namespace Qud0int5ValC{
        }
        /// bitfield QUD0INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> qud0int4{}; 
        namespace Qud0int4ValC{
        }
        /// bitfield QUD0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qud0int3{}; 
        namespace Qud0int3ValC{
        }
        /// bitfield QUD0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qud0int2{}; 
        namespace Qud0int2ValC{
        }
        /// bitfield QUD0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qud0int1{}; 
        namespace Qud0int1ValC{
        }
        /// bitfield QUD0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qud0int0{}; 
        namespace Qud0int0ValC{
        }
        /// bitfield TIMINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timint2{}; 
        namespace Timint2ValC{
        }
        /// bitfield TIMINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timint1{}; 
        namespace Timint1ValC{
        }
    }
    namespace Noneirq07mon{    ///< register IRQ07MON 
        using Addr = Register::Address<0x40031030,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq08mon{    ///< register IRQ08MON 
        using Addr = Register::Address<0x40031034,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq09mon{    ///< register IRQ09MON 
        using Addr = Register::Address<0x40031038,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq10mon{    ///< register IRQ10MON 
        using Addr = Register::Address<0x4003103c,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq11mon{    ///< register IRQ11MON 
        using Addr = Register::Address<0x40031040,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq12mon{    ///< register IRQ12MON 
        using Addr = Register::Address<0x40031044,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq13mon{    ///< register IRQ13MON 
        using Addr = Register::Address<0x40031048,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq14mon{    ///< register IRQ14MON 
        using Addr = Register::Address<0x4003104c,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq15mon{    ///< register IRQ15MON 
        using Addr = Register::Address<0x40031050,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq16mon{    ///< register IRQ16MON 
        using Addr = Register::Address<0x40031054,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq17mon{    ///< register IRQ17MON 
        using Addr = Register::Address<0x40031058,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq18mon{    ///< register IRQ18MON 
        using Addr = Register::Address<0x4003105c,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq19mon{    ///< register IRQ19MON 
        using Addr = Register::Address<0x40031060,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq20mon{    ///< register IRQ20MON 
        using Addr = Register::Address<0x40031064,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq21mon{    ///< register IRQ21MON 
        using Addr = Register::Address<0x40031068,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq22mon{    ///< register IRQ22MON 
        using Addr = Register::Address<0x4003106c,0xfffffff0,0,unsigned>;
        /// bitfield MFSINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsint3{}; 
        namespace Mfsint3ValC{
        }
        /// bitfield MFSINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsint2{}; 
        namespace Mfsint2ValC{
        }
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq23mon{    ///< register IRQ23MON 
        using Addr = Register::Address<0x40031070,0xfffffff8,0,unsigned>;
        /// bitfield PPGINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ppgint2{}; 
        namespace Ppgint2ValC{
        }
        /// bitfield PPGINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ppgint1{}; 
        namespace Ppgint1ValC{
        }
        /// bitfield PPGINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ppgint0{}; 
        namespace Ppgint0ValC{
        }
    }
    namespace Noneirq24mon{    ///< register IRQ24MON 
        using Addr = Register::Address<0x40031074,0xffffffc0,0,unsigned>;
        /// bitfield RTCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcint{}; 
        namespace RtcintValC{
        }
        /// bitfield WCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wcint{}; 
        namespace WcintValC{
        }
        /// bitfield UPLLINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> upllint{}; 
        namespace UpllintValC{
        }
        /// bitfield MPLLINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mpllint{}; 
        namespace MpllintValC{
        }
        /// bitfield SOSCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soscint{}; 
        namespace SoscintValC{
        }
        /// bitfield MOSCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscint{}; 
        namespace MoscintValC{
        }
    }
    namespace Noneirq25mon{    ///< register IRQ25MON 
        using Addr = Register::Address<0x40031078,0xfffffff0,0,unsigned>;
        /// bitfield ADCINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        namespace Adcint3ValC{
        }
        /// bitfield ADCINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        namespace Adcint2ValC{
        }
        /// bitfield ADCINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        namespace Adcint1ValC{
        }
        /// bitfield ADCINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
        namespace Adcint0ValC{
        }
    }
    namespace Noneirq26mon{    ///< register IRQ26MON 
        using Addr = Register::Address<0x4003107c,0xfffffff0,0,unsigned>;
        /// bitfield ADCINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        namespace Adcint3ValC{
        }
        /// bitfield ADCINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        namespace Adcint2ValC{
        }
        /// bitfield ADCINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        namespace Adcint1ValC{
        }
        /// bitfield ADCINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
        namespace Adcint0ValC{
        }
    }
    namespace Noneirq27mon{    ///< register IRQ27MON 
        using Addr = Register::Address<0x40031080,0xffffffff,0,unsigned>;
    }
    namespace Noneirq28mon{    ///< register IRQ28MON 
        using Addr = Register::Address<0x40031084,0xffffffc0,0,unsigned>;
        /// bitfield FRT0INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frt0int5{}; 
        namespace Frt0int5ValC{
        }
        /// bitfield FRT0INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> frt0int4{}; 
        namespace Frt0int4ValC{
        }
        /// bitfield FRT0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> frt0int3{}; 
        namespace Frt0int3ValC{
        }
        /// bitfield FRT0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frt0int2{}; 
        namespace Frt0int2ValC{
        }
        /// bitfield FRT0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frt0int1{}; 
        namespace Frt0int1ValC{
        }
        /// bitfield FRT0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frt0int0{}; 
        namespace Frt0int0ValC{
        }
    }
    namespace Noneirq29mon{    ///< register IRQ29MON 
        using Addr = Register::Address<0x40031088,0xfffffff0,0,unsigned>;
        /// bitfield ICU0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icu0int3{}; 
        namespace Icu0int3ValC{
        }
        /// bitfield ICU0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icu0int2{}; 
        namespace Icu0int2ValC{
        }
        /// bitfield ICU0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icu0int1{}; 
        namespace Icu0int1ValC{
        }
        /// bitfield ICU0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icu0int0{}; 
        namespace Icu0int0ValC{
        }
    }
    namespace Noneirq30mon{    ///< register IRQ30MON 
        using Addr = Register::Address<0x4003108c,0xffffffc0,0,unsigned>;
        /// bitfield OCU0INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocu0int5{}; 
        namespace Ocu0int5ValC{
        }
        /// bitfield OCU0INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocu0int4{}; 
        namespace Ocu0int4ValC{
        }
        /// bitfield OCU0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocu0int3{}; 
        namespace Ocu0int3ValC{
        }
        /// bitfield OCU0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocu0int2{}; 
        namespace Ocu0int2ValC{
        }
        /// bitfield OCU0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocu0int1{}; 
        namespace Ocu0int1ValC{
        }
        /// bitfield OCU0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocu0int0{}; 
        namespace Ocu0int0ValC{
        }
    }
    namespace Noneirq31mon{    ///< register IRQ31MON 
        using Addr = Register::Address<0x40031090,0xffff0000,0,unsigned>;
        /// bitfield BTINT15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> btint15{}; 
        namespace Btint15ValC{
        }
        /// bitfield BTINT14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> btint14{}; 
        namespace Btint14ValC{
        }
        /// bitfield BTINT13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> btint13{}; 
        namespace Btint13ValC{
        }
        /// bitfield BTINT12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> btint12{}; 
        namespace Btint12ValC{
        }
        /// bitfield BTINT11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> btint11{}; 
        namespace Btint11ValC{
        }
        /// bitfield BTINT10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> btint10{}; 
        namespace Btint10ValC{
        }
        /// bitfield BTINT9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> btint9{}; 
        namespace Btint9ValC{
        }
        /// bitfield BTINT8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> btint8{}; 
        namespace Btint8ValC{
        }
        /// bitfield BTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btint7{}; 
        namespace Btint7ValC{
        }
        /// bitfield BTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btint6{}; 
        namespace Btint6ValC{
        }
        /// bitfield BTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btint5{}; 
        namespace Btint5ValC{
        }
        /// bitfield BTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btint4{}; 
        namespace Btint4ValC{
        }
        /// bitfield BTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btint3{}; 
        namespace Btint3ValC{
        }
        /// bitfield BTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btint2{}; 
        namespace Btint2ValC{
        }
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq32mon{    ///< register IRQ32MON 
        using Addr = Register::Address<0x40031094,0xfffffffe,0,unsigned>;
        /// bitfield CAN0INT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> can0int{}; 
        namespace Can0intValC{
        }
    }
    namespace Noneirq33mon{    ///< register IRQ33MON 
        using Addr = Register::Address<0x40031098,0xffffffff,0,unsigned>;
    }
    namespace Noneirq34mon{    ///< register IRQ34MON 
        using Addr = Register::Address<0x4003109c,0xffffffff,0,unsigned>;
    }
    namespace Noneirq35mon{    ///< register IRQ35MON 
        using Addr = Register::Address<0x400310a0,0xffffffff,0,unsigned>;
    }
    namespace Noneirq36mon{    ///< register IRQ36MON 
        using Addr = Register::Address<0x400310a4,0xffffffdf,0,unsigned>;
        /// bitfield RCEC0INT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rcec0int{}; 
        namespace Rcec0intValC{
        }
    }
    namespace Noneirq37mon{    ///< register IRQ37MON 
        using Addr = Register::Address<0x400310a8,0xffffffbf,0,unsigned>;
        /// bitfield RCEC1INT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcec1int{}; 
        namespace Rcec1intValC{
        }
    }
    namespace Noneirq38mon{    ///< register IRQ38MON 
        using Addr = Register::Address<0x400310ac,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq39mon{    ///< register IRQ39MON 
        using Addr = Register::Address<0x400310b0,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq40mon{    ///< register IRQ40MON 
        using Addr = Register::Address<0x400310b4,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq41mon{    ///< register IRQ41MON 
        using Addr = Register::Address<0x400310b8,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq42mon{    ///< register IRQ42MON 
        using Addr = Register::Address<0x400310bc,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq43mon{    ///< register IRQ43MON 
        using Addr = Register::Address<0x400310c0,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq44mon{    ///< register IRQ44MON 
        using Addr = Register::Address<0x400310c4,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq45mon{    ///< register IRQ45MON 
        using Addr = Register::Address<0x400310c8,0xfffffffe,0,unsigned>;
        /// bitfield DMAINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq46mon{    ///< register IRQ46MON 
        using Addr = Register::Address<0x400310cc,0xffff0000,0,unsigned>;
        /// bitfield BTINT15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> btint15{}; 
        namespace Btint15ValC{
        }
        /// bitfield BTINT14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> btint14{}; 
        namespace Btint14ValC{
        }
        /// bitfield BTINT13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> btint13{}; 
        namespace Btint13ValC{
        }
        /// bitfield BTINT12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> btint12{}; 
        namespace Btint12ValC{
        }
        /// bitfield BTINT11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> btint11{}; 
        namespace Btint11ValC{
        }
        /// bitfield BTINT10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> btint10{}; 
        namespace Btint10ValC{
        }
        /// bitfield BTINT9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> btint9{}; 
        namespace Btint9ValC{
        }
        /// bitfield BTINT8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> btint8{}; 
        namespace Btint8ValC{
        }
        /// bitfield BTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btint7{}; 
        namespace Btint7ValC{
        }
        /// bitfield BTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btint6{}; 
        namespace Btint6ValC{
        }
        /// bitfield BTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btint5{}; 
        namespace Btint5ValC{
        }
        /// bitfield BTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btint4{}; 
        namespace Btint4ValC{
        }
        /// bitfield BTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btint3{}; 
        namespace Btint3ValC{
        }
        /// bitfield BTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btint2{}; 
        namespace Btint2ValC{
        }
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq47mon{    ///< register IRQ47MON 
        using Addr = Register::Address<0x400310d0,0xfffff7ff,0,unsigned>;
        /// bitfield FLASHINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> flashint{}; 
        namespace FlashintValC{
        }
    }
    namespace Nonercintsel0{    ///< register RCINTSEL0 
        using Addr = Register::Address<0x40031210,0x00000000,0,unsigned>;
        /// bitfield INTSEL3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel3{}; 
        namespace Intsel3ValC{
        }
        /// bitfield INTSEL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel2{}; 
        namespace Intsel2ValC{
        }
        /// bitfield INTSEL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel1{}; 
        namespace Intsel1ValC{
        }
        /// bitfield INTSEL0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel0{}; 
        namespace Intsel0ValC{
        }
    }
    namespace Nonercintsel1{    ///< register RCINTSEL1 
        using Addr = Register::Address<0x40031214,0x00000000,0,unsigned>;
        /// bitfield INTSEL7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel7{}; 
        namespace Intsel7ValC{
        }
        /// bitfield INTSEL6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel6{}; 
        namespace Intsel6ValC{
        }
        /// bitfield INTSEL5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel5{}; 
        namespace Intsel5ValC{
        }
        /// bitfield INTSEL4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel4{}; 
        namespace Intsel4ValC{
        }
    }
}
