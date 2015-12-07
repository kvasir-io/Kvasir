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
        using Addr = Register::Address<0x40031010,0xffffffe0,0,unsigned char>;
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
    namespace Noneirq003sel{    ///< register IRQ003SEL 
        using Addr = Register::Address<0x40031110,0xff00ff00,0,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq004sel{    ///< register IRQ004SEL 
        using Addr = Register::Address<0x40031114,0xff00ff00,0,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq005sel{    ///< register IRQ005SEL 
        using Addr = Register::Address<0x40031118,0xff00ff00,0,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq006sel{    ///< register IRQ006SEL 
        using Addr = Register::Address<0x4003111c,0xff00ff00,0,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq007sel{    ///< register IRQ007SEL 
        using Addr = Register::Address<0x40031120,0xff00ff00,0,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq008sel{    ///< register IRQ008SEL 
        using Addr = Register::Address<0x40031124,0xff00ff00,0,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq009sel{    ///< register IRQ009SEL 
        using Addr = Register::Address<0x40031128,0xff00ff00,0,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq010sel{    ///< register IRQ010SEL 
        using Addr = Register::Address<0x4003112c,0xff00ff00,0,unsigned>;
        /// bitfield SELBIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        /// bitfield SELIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneexc02mon{    ///< register EXC02MON 
        using Addr = Register::Address<0x40031200,0xfffffffc,0,unsigned>;
        /// bitfield HWINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hwint{}; 
        namespace HwintValC{
        }
        /// bitfield NMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
        namespace NmiValC{
        }
    }
    namespace Noneirq000mon{    ///< register IRQ000MON 
        using Addr = Register::Address<0x40031204,0xfffffffe,0,unsigned>;
        /// bitfield FCSINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcsint{}; 
        namespace FcsintValC{
        }
    }
    namespace Noneirq001mon{    ///< register IRQ001MON 
        using Addr = Register::Address<0x40031208,0xfffffffe,0,unsigned>;
        /// bitfield SWWDTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swwdtint{}; 
        namespace SwwdtintValC{
        }
    }
    namespace Noneirq002mon{    ///< register IRQ002MON 
        using Addr = Register::Address<0x4003120c,0xfffffffe,0,unsigned>;
        /// bitfield LVDINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvdint{}; 
        namespace LvdintValC{
        }
    }
    namespace Noneirq003mon{    ///< register IRQ003MON 
        using Addr = Register::Address<0x40031210,0xffffff00,0,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq004mon{    ///< register IRQ004MON 
        using Addr = Register::Address<0x40031214,0xffffff00,0,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq005mon{    ///< register IRQ005MON 
        using Addr = Register::Address<0x40031218,0xffffff00,0,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq006mon{    ///< register IRQ006MON 
        using Addr = Register::Address<0x4003121c,0xffffff00,0,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq007mon{    ///< register IRQ007MON 
        using Addr = Register::Address<0x40031220,0xffffff00,0,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq008mon{    ///< register IRQ008MON 
        using Addr = Register::Address<0x40031224,0xffffff00,0,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq009mon{    ///< register IRQ009MON 
        using Addr = Register::Address<0x40031228,0xffffff00,0,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq010mon{    ///< register IRQ010MON 
        using Addr = Register::Address<0x4003122c,0xffffff00,0,unsigned>;
        /// bitfield IRQBIT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        /// bitfield IRQBIT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        /// bitfield IRQBIT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        /// bitfield IRQBIT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        /// bitfield IRQBIT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        /// bitfield IRQBIT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        /// bitfield IRQBIT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        /// bitfield IRQBIT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq011mon{    ///< register IRQ011MON 
        using Addr = Register::Address<0x40031230,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq012mon{    ///< register IRQ012MON 
        using Addr = Register::Address<0x40031234,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq013mon{    ///< register IRQ013MON 
        using Addr = Register::Address<0x40031238,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq014mon{    ///< register IRQ014MON 
        using Addr = Register::Address<0x4003123c,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq015mon{    ///< register IRQ015MON 
        using Addr = Register::Address<0x40031240,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq016mon{    ///< register IRQ016MON 
        using Addr = Register::Address<0x40031244,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq017mon{    ///< register IRQ017MON 
        using Addr = Register::Address<0x40031248,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq018mon{    ///< register IRQ018MON 
        using Addr = Register::Address<0x4003124c,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq019mon{    ///< register IRQ019MON 
        using Addr = Register::Address<0x40031250,0xffffffc0,0,unsigned>;
        /// bitfield QUDINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qudint5{}; 
        namespace Qudint5ValC{
        }
        /// bitfield QUDINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qudint4{}; 
        namespace Qudint4ValC{
        }
        /// bitfield QUDINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qudint3{}; 
        namespace Qudint3ValC{
        }
        /// bitfield QUDINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qudint2{}; 
        namespace Qudint2ValC{
        }
        /// bitfield QUDINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qudint1{}; 
        namespace Qudint1ValC{
        }
        /// bitfield QUDINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qudint0{}; 
        namespace Qudint0ValC{
        }
    }
    namespace Noneirq020mon{    ///< register IRQ020MON 
        using Addr = Register::Address<0x40031254,0xffffffc0,0,unsigned>;
        /// bitfield QUDINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qudint5{}; 
        namespace Qudint5ValC{
        }
        /// bitfield QUDINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qudint4{}; 
        namespace Qudint4ValC{
        }
        /// bitfield QUDINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qudint3{}; 
        namespace Qudint3ValC{
        }
        /// bitfield QUDINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qudint2{}; 
        namespace Qudint2ValC{
        }
        /// bitfield QUDINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qudint1{}; 
        namespace Qudint1ValC{
        }
        /// bitfield QUDINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qudint0{}; 
        namespace Qudint0ValC{
        }
    }
    namespace Noneirq021mon{    ///< register IRQ021MON 
        using Addr = Register::Address<0x40031258,0xfffffff0,0,unsigned>;
        /// bitfield WAVEINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> waveint3{}; 
        namespace Waveint3ValC{
        }
        /// bitfield WAVEINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> waveint2{}; 
        namespace Waveint2ValC{
        }
        /// bitfield WAVEINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> waveint1{}; 
        namespace Waveint1ValC{
        }
        /// bitfield WAVEINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> waveint0{}; 
        namespace Waveint0ValC{
        }
    }
    namespace Noneirq022mon{    ///< register IRQ022MON 
        using Addr = Register::Address<0x4003125c,0xfffffff0,0,unsigned>;
        /// bitfield WAVEINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> waveint3{}; 
        namespace Waveint3ValC{
        }
        /// bitfield WAVEINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> waveint2{}; 
        namespace Waveint2ValC{
        }
        /// bitfield WAVEINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> waveint1{}; 
        namespace Waveint1ValC{
        }
        /// bitfield WAVEINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> waveint0{}; 
        namespace Waveint0ValC{
        }
    }
    namespace Noneirq023mon{    ///< register IRQ023MON 
        using Addr = Register::Address<0x40031260,0xfffffff0,0,unsigned>;
        /// bitfield WAVEINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> waveint3{}; 
        namespace Waveint3ValC{
        }
        /// bitfield WAVEINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> waveint2{}; 
        namespace Waveint2ValC{
        }
        /// bitfield WAVEINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> waveint1{}; 
        namespace Waveint1ValC{
        }
        /// bitfield WAVEINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> waveint0{}; 
        namespace Waveint0ValC{
        }
    }
    namespace Noneirq024mon{    ///< register IRQ024MON 
        using Addr = Register::Address<0x40031264,0xfffffff8,0,unsigned>;
        /// bitfield FRT_PEAK_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtPeakInt2{}; 
        namespace Frtpeakint2ValC{
        }
        /// bitfield FRT_PEAK_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtPeakInt1{}; 
        namespace Frtpeakint1ValC{
        }
        /// bitfield FRT_PEAK_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtPeakInt0{}; 
        namespace Frtpeakint0ValC{
        }
    }
    namespace Noneirq025mon{    ///< register IRQ025MON 
        using Addr = Register::Address<0x40031268,0xfffffff8,0,unsigned>;
        /// bitfield FRT_ZERO_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtZeroInt2{}; 
        namespace Frtzeroint2ValC{
        }
        /// bitfield FRT_ZERO_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtZeroInt1{}; 
        namespace Frtzeroint1ValC{
        }
        /// bitfield FRT_ZERO_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtZeroInt0{}; 
        namespace Frtzeroint0ValC{
        }
    }
    namespace Noneirq026mon{    ///< register IRQ026MON 
        using Addr = Register::Address<0x4003126c,0xfffffff0,0,unsigned>;
        /// bitfield ICUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icuint3{}; 
        namespace Icuint3ValC{
        }
        /// bitfield ICUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icuint2{}; 
        namespace Icuint2ValC{
        }
        /// bitfield ICUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icuint1{}; 
        namespace Icuint1ValC{
        }
        /// bitfield ICUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icuint0{}; 
        namespace Icuint0ValC{
        }
    }
    namespace Noneirq027mon{    ///< register IRQ027MON 
        using Addr = Register::Address<0x40031270,0xffffffc0,0,unsigned>;
        /// bitfield OCUINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocuint5{}; 
        namespace Ocuint5ValC{
        }
        /// bitfield OCUINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocuint4{}; 
        namespace Ocuint4ValC{
        }
        /// bitfield OCUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocuint3{}; 
        namespace Ocuint3ValC{
        }
        /// bitfield OCUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocuint2{}; 
        namespace Ocuint2ValC{
        }
        /// bitfield OCUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocuint1{}; 
        namespace Ocuint1ValC{
        }
        /// bitfield OCUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocuint0{}; 
        namespace Ocuint0ValC{
        }
    }
    namespace Noneirq028mon{    ///< register IRQ028MON 
        using Addr = Register::Address<0x40031274,0xfffffff8,0,unsigned>;
        /// bitfield FRT_PEAK_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtPeakInt2{}; 
        namespace Frtpeakint2ValC{
        }
        /// bitfield FRT_PEAK_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtPeakInt1{}; 
        namespace Frtpeakint1ValC{
        }
        /// bitfield FRT_PEAK_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtPeakInt0{}; 
        namespace Frtpeakint0ValC{
        }
    }
    namespace Noneirq029mon{    ///< register IRQ029MON 
        using Addr = Register::Address<0x40031278,0xfffffff8,0,unsigned>;
        /// bitfield FRT_ZERO_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtZeroInt2{}; 
        namespace Frtzeroint2ValC{
        }
        /// bitfield FRT_ZERO_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtZeroInt1{}; 
        namespace Frtzeroint1ValC{
        }
        /// bitfield FRT_ZERO_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtZeroInt0{}; 
        namespace Frtzeroint0ValC{
        }
    }
    namespace Noneirq030mon{    ///< register IRQ030MON 
        using Addr = Register::Address<0x4003127c,0xfffffff0,0,unsigned>;
        /// bitfield ICUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icuint3{}; 
        namespace Icuint3ValC{
        }
        /// bitfield ICUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icuint2{}; 
        namespace Icuint2ValC{
        }
        /// bitfield ICUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icuint1{}; 
        namespace Icuint1ValC{
        }
        /// bitfield ICUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icuint0{}; 
        namespace Icuint0ValC{
        }
    }
    namespace Noneirq031mon{    ///< register IRQ031MON 
        using Addr = Register::Address<0x40031280,0xffffffc0,0,unsigned>;
        /// bitfield OCUINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocuint5{}; 
        namespace Ocuint5ValC{
        }
        /// bitfield OCUINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocuint4{}; 
        namespace Ocuint4ValC{
        }
        /// bitfield OCUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocuint3{}; 
        namespace Ocuint3ValC{
        }
        /// bitfield OCUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocuint2{}; 
        namespace Ocuint2ValC{
        }
        /// bitfield OCUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocuint1{}; 
        namespace Ocuint1ValC{
        }
        /// bitfield OCUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocuint0{}; 
        namespace Ocuint0ValC{
        }
    }
    namespace Noneirq032mon{    ///< register IRQ032MON 
        using Addr = Register::Address<0x40031284,0xfffffff8,0,unsigned>;
        /// bitfield FRT_PEAK_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtPeakInt2{}; 
        namespace Frtpeakint2ValC{
        }
        /// bitfield FRT_PEAK_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtPeakInt1{}; 
        namespace Frtpeakint1ValC{
        }
        /// bitfield FRT_PEAK_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtPeakInt0{}; 
        namespace Frtpeakint0ValC{
        }
    }
    namespace Noneirq033mon{    ///< register IRQ033MON 
        using Addr = Register::Address<0x40031288,0xfffffff8,0,unsigned>;
        /// bitfield FRT_ZERO_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtZeroInt2{}; 
        namespace Frtzeroint2ValC{
        }
        /// bitfield FRT_ZERO_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtZeroInt1{}; 
        namespace Frtzeroint1ValC{
        }
        /// bitfield FRT_ZERO_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtZeroInt0{}; 
        namespace Frtzeroint0ValC{
        }
    }
    namespace Noneirq034mon{    ///< register IRQ034MON 
        using Addr = Register::Address<0x4003128c,0xfffffff0,0,unsigned>;
        /// bitfield ICUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icuint3{}; 
        namespace Icuint3ValC{
        }
        /// bitfield ICUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icuint2{}; 
        namespace Icuint2ValC{
        }
        /// bitfield ICUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icuint1{}; 
        namespace Icuint1ValC{
        }
        /// bitfield ICUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icuint0{}; 
        namespace Icuint0ValC{
        }
    }
    namespace Noneirq035mon{    ///< register IRQ035MON 
        using Addr = Register::Address<0x40031290,0xffffffc0,0,unsigned>;
        /// bitfield OCUINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocuint5{}; 
        namespace Ocuint5ValC{
        }
        /// bitfield OCUINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocuint4{}; 
        namespace Ocuint4ValC{
        }
        /// bitfield OCUINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocuint3{}; 
        namespace Ocuint3ValC{
        }
        /// bitfield OCUINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocuint2{}; 
        namespace Ocuint2ValC{
        }
        /// bitfield OCUINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocuint1{}; 
        namespace Ocuint1ValC{
        }
        /// bitfield OCUINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocuint0{}; 
        namespace Ocuint0ValC{
        }
    }
    namespace Noneirq036mon{    ///< register IRQ036MON 
        using Addr = Register::Address<0x40031294,0xfffffff8,0,unsigned>;
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
    namespace Noneirq037mon{    ///< register IRQ037MON 
        using Addr = Register::Address<0x40031298,0xfffffff8,0,unsigned>;
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
    namespace Noneirq038mon{    ///< register IRQ038MON 
        using Addr = Register::Address<0x4003129c,0xfffffff8,0,unsigned>;
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
    namespace Noneirq039mon{    ///< register IRQ039MON 
        using Addr = Register::Address<0x400312a0,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq040mon{    ///< register IRQ040MON 
        using Addr = Register::Address<0x400312a4,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq041mon{    ///< register IRQ041MON 
        using Addr = Register::Address<0x400312a8,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq042mon{    ///< register IRQ042MON 
        using Addr = Register::Address<0x400312ac,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq043mon{    ///< register IRQ043MON 
        using Addr = Register::Address<0x400312b0,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq044mon{    ///< register IRQ044MON 
        using Addr = Register::Address<0x400312b4,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq045mon{    ///< register IRQ045MON 
        using Addr = Register::Address<0x400312b8,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq046mon{    ///< register IRQ046MON 
        using Addr = Register::Address<0x400312bc,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq047mon{    ///< register IRQ047MON 
        using Addr = Register::Address<0x400312c0,0xfffffffc,0,unsigned>;
        /// bitfield TIMINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timint2{}; 
        namespace Timint2ValC{
        }
        /// bitfield TIMINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timint1{}; 
        namespace Timint1ValC{
        }
    }
    namespace Noneirq048mon{    ///< register IRQ048MON 
        using Addr = Register::Address<0x400312c4,0xfffffffe,0,unsigned>;
        /// bitfield WCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wcint{}; 
        namespace WcintValC{
        }
    }
    namespace Noneirq049mon{    ///< register IRQ049MON 
        using Addr = Register::Address<0x400312c8,0xfffffffe,0,unsigned>;
        /// bitfield BMEMCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bmemcs{}; 
        namespace BmemcsValC{
        }
    }
    namespace Noneirq050mon{    ///< register IRQ050MON 
        using Addr = Register::Address<0x400312cc,0xfffffffe,0,unsigned>;
        /// bitfield RTCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtcint{}; 
        namespace RtcintValC{
        }
    }
    namespace Noneirq051mon{    ///< register IRQ051MON 
        using Addr = Register::Address<0x400312d0,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq052mon{    ///< register IRQ052MON 
        using Addr = Register::Address<0x400312d4,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq053mon{    ///< register IRQ053MON 
        using Addr = Register::Address<0x400312d8,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq054mon{    ///< register IRQ054MON 
        using Addr = Register::Address<0x400312dc,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq055mon{    ///< register IRQ055MON 
        using Addr = Register::Address<0x400312e0,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq056mon{    ///< register IRQ056MON 
        using Addr = Register::Address<0x400312e4,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq057mon{    ///< register IRQ057MON 
        using Addr = Register::Address<0x400312e8,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq058mon{    ///< register IRQ058MON 
        using Addr = Register::Address<0x400312ec,0xfffffffe,0,unsigned>;
        /// bitfield EXTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq059mon{    ///< register IRQ059MON 
        using Addr = Register::Address<0x400312f0,0xfffffff0,0,unsigned>;
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
    namespace Noneirq060mon{    ///< register IRQ060MON 
        using Addr = Register::Address<0x400312f4,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq061mon{    ///< register IRQ061MON 
        using Addr = Register::Address<0x400312f8,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq062mon{    ///< register IRQ062MON 
        using Addr = Register::Address<0x400312fc,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq063mon{    ///< register IRQ063MON 
        using Addr = Register::Address<0x40031300,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq064mon{    ///< register IRQ064MON 
        using Addr = Register::Address<0x40031304,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq065mon{    ///< register IRQ065MON 
        using Addr = Register::Address<0x40031308,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq066mon{    ///< register IRQ066MON 
        using Addr = Register::Address<0x4003130c,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq067mon{    ///< register IRQ067MON 
        using Addr = Register::Address<0x40031310,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq068mon{    ///< register IRQ068MON 
        using Addr = Register::Address<0x40031314,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq069mon{    ///< register IRQ069MON 
        using Addr = Register::Address<0x40031318,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq070mon{    ///< register IRQ070MON 
        using Addr = Register::Address<0x4003131c,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq071mon{    ///< register IRQ071MON 
        using Addr = Register::Address<0x40031320,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq072mon{    ///< register IRQ072MON 
        using Addr = Register::Address<0x40031324,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq073mon{    ///< register IRQ073MON 
        using Addr = Register::Address<0x40031328,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq074mon{    ///< register IRQ074MON 
        using Addr = Register::Address<0x4003132c,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq075mon{    ///< register IRQ075MON 
        using Addr = Register::Address<0x40031330,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq076mon{    ///< register IRQ076MON 
        using Addr = Register::Address<0x40031334,0xffffffe0,0,unsigned>;
        /// bitfield ADCINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adcint4{}; 
        namespace Adcint4ValC{
        }
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
    namespace Noneirq077mon{    ///< register IRQ077MON 
        using Addr = Register::Address<0x40031338,0xffffffe0,0,unsigned>;
        /// bitfield ADCINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adcint4{}; 
        namespace Adcint4ValC{
        }
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
    namespace Noneirq078mon{    ///< register IRQ078MON 
        using Addr = Register::Address<0x4003133c,0xffffffe0,0,unsigned>;
        /// bitfield USB_DRQ_INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbDrqInt4{}; 
        namespace Usbdrqint4ValC{
        }
        /// bitfield USB_DRQ_INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbDrqInt3{}; 
        namespace Usbdrqint3ValC{
        }
        /// bitfield USB_DRQ_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbDrqInt2{}; 
        namespace Usbdrqint2ValC{
        }
        /// bitfield USB_DRQ_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbDrqInt1{}; 
        namespace Usbdrqint1ValC{
        }
        /// bitfield USB_DRQ_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbDrqInt0{}; 
        namespace Usbdrqint0ValC{
        }
    }
    namespace Noneirq079mon{    ///< register IRQ079MON 
        using Addr = Register::Address<0x40031340,0xffffffc0,0,unsigned>;
        /// bitfield USB_INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usbInt5{}; 
        namespace Usbint5ValC{
        }
        /// bitfield USB_INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbInt4{}; 
        namespace Usbint4ValC{
        }
        /// bitfield USB_INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbInt3{}; 
        namespace Usbint3ValC{
        }
        /// bitfield USB_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbInt2{}; 
        namespace Usbint2ValC{
        }
        /// bitfield USB_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbInt1{}; 
        namespace Usbint1ValC{
        }
        /// bitfield USB_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbInt0{}; 
        namespace Usbint0ValC{
        }
    }
    namespace Noneirq080mon{    ///< register IRQ080MON 
        using Addr = Register::Address<0x40031344,0xfffffffe,0,unsigned>;
        /// bitfield CANINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> canint{}; 
        namespace CanintValC{
        }
    }
    namespace Noneirq081mon{    ///< register IRQ081MON 
        using Addr = Register::Address<0x40031348,0xfffffffe,0,unsigned>;
        /// bitfield CANINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> canint{}; 
        namespace CanintValC{
        }
    }
    namespace Noneirq082mon{    ///< register IRQ082MON 
        using Addr = Register::Address<0x4003134c,0xfffffff8,0,unsigned>;
        /// bitfield MACLPI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maclpi{}; 
        namespace MaclpiValC{
        }
        /// bitfield MACPMT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> macpmt{}; 
        namespace MacpmtValC{
        }
        /// bitfield MACSBD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> macsbd{}; 
        namespace MacsbdValC{
        }
    }
    namespace Noneirq083mon{    ///< register IRQ083MON 
        using Addr = Register::Address<0x40031350,0xfffffffe,0,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq084mon{    ///< register IRQ084MON 
        using Addr = Register::Address<0x40031354,0xfffffffe,0,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq085mon{    ///< register IRQ085MON 
        using Addr = Register::Address<0x40031358,0xfffffffe,0,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq086mon{    ///< register IRQ086MON 
        using Addr = Register::Address<0x4003135c,0xfffffffe,0,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq087mon{    ///< register IRQ087MON 
        using Addr = Register::Address<0x40031360,0xfffffffe,0,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq088mon{    ///< register IRQ088MON 
        using Addr = Register::Address<0x40031364,0xfffffffe,0,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq089mon{    ///< register IRQ089MON 
        using Addr = Register::Address<0x40031368,0xfffffffe,0,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq090mon{    ///< register IRQ090MON 
        using Addr = Register::Address<0x4003136c,0xfffffffe,0,unsigned>;
        /// bitfield DMACINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq091mon{    ///< register IRQ091MON 
        using Addr = Register::Address<0x40031370,0xfffffffc,0,unsigned>;
        /// bitfield DSTCINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dstcint1{}; 
        namespace Dstcint1ValC{
        }
        /// bitfield DSTCINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dstcint0{}; 
        namespace Dstcint0ValC{
        }
    }
    namespace Noneirq092mon{    ///< register IRQ092MON 
        using Addr = Register::Address<0x40031374,0xfffffff0,0,unsigned>;
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
    namespace Noneirq093mon{    ///< register IRQ093MON 
        using Addr = Register::Address<0x40031378,0xfffffff0,0,unsigned>;
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
    namespace Noneirq094mon{    ///< register IRQ094MON 
        using Addr = Register::Address<0x4003137c,0xfffffff0,0,unsigned>;
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
    namespace Noneirq095mon{    ///< register IRQ095MON 
        using Addr = Register::Address<0x40031380,0xfffffff0,0,unsigned>;
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
    namespace Noneirq096mon{    ///< register IRQ096MON 
        using Addr = Register::Address<0x40031384,0xffffffc0,0,unsigned>;
        /// bitfield QUDINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qudint5{}; 
        namespace Qudint5ValC{
        }
        /// bitfield QUDINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qudint4{}; 
        namespace Qudint4ValC{
        }
        /// bitfield QUDINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qudint3{}; 
        namespace Qudint3ValC{
        }
        /// bitfield QUDINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qudint2{}; 
        namespace Qudint2ValC{
        }
        /// bitfield QUDINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qudint1{}; 
        namespace Qudint1ValC{
        }
        /// bitfield QUDINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qudint0{}; 
        namespace Qudint0ValC{
        }
    }
    namespace Noneirq097mon{    ///< register IRQ097MON 
        using Addr = Register::Address<0x40031388,0xffffffc0,0,unsigned>;
        /// bitfield QUDINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qudint5{}; 
        namespace Qudint5ValC{
        }
        /// bitfield QUDINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qudint4{}; 
        namespace Qudint4ValC{
        }
        /// bitfield QUDINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qudint3{}; 
        namespace Qudint3ValC{
        }
        /// bitfield QUDINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qudint2{}; 
        namespace Qudint2ValC{
        }
        /// bitfield QUDINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qudint1{}; 
        namespace Qudint1ValC{
        }
        /// bitfield QUDINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qudint0{}; 
        namespace Qudint0ValC{
        }
    }
    namespace Noneirq098mon{    ///< register IRQ098MON 
        using Addr = Register::Address<0x4003138c,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq099mon{    ///< register IRQ099MON 
        using Addr = Register::Address<0x40031390,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq100mon{    ///< register IRQ100MON 
        using Addr = Register::Address<0x40031394,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq101mon{    ///< register IRQ101MON 
        using Addr = Register::Address<0x40031398,0xfffffffc,0,unsigned>;
        /// bitfield BTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        /// bitfield BTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq102mon{    ///< register IRQ102MON 
        using Addr = Register::Address<0x4003139c,0xffffff00,0,unsigned>;
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
    namespace Noneirq103mon{    ///< register IRQ103MON 
        using Addr = Register::Address<0x400313a0,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq104mon{    ///< register IRQ104MON 
        using Addr = Register::Address<0x400313a4,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq105mon{    ///< register IRQ105MON 
        using Addr = Register::Address<0x400313a8,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq106mon{    ///< register IRQ106MON 
        using Addr = Register::Address<0x400313ac,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq107mon{    ///< register IRQ107MON 
        using Addr = Register::Address<0x400313b0,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq108mon{    ///< register IRQ108MON 
        using Addr = Register::Address<0x400313b4,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq109mon{    ///< register IRQ109MON 
        using Addr = Register::Address<0x400313b8,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq110mon{    ///< register IRQ110MON 
        using Addr = Register::Address<0x400313bc,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq111mon{    ///< register IRQ111MON 
        using Addr = Register::Address<0x400313c0,0xffffffe0,0,unsigned>;
        /// bitfield ADCINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adcint4{}; 
        namespace Adcint4ValC{
        }
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
    namespace Noneirq112mon{    ///< register IRQ112MON 
        using Addr = Register::Address<0x400313c4,0xffffffff,0,unsigned>;
    }
    namespace Noneirq113mon{    ///< register IRQ113MON 
        using Addr = Register::Address<0x400313c8,0xffffffe0,0,unsigned>;
        /// bitfield USB_DRQ_INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbDrqInt4{}; 
        namespace Usbdrqint4ValC{
        }
        /// bitfield USB_DRQ_INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbDrqInt3{}; 
        namespace Usbdrqint3ValC{
        }
        /// bitfield USB_DRQ_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbDrqInt2{}; 
        namespace Usbdrqint2ValC{
        }
        /// bitfield USB_DRQ_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbDrqInt1{}; 
        namespace Usbdrqint1ValC{
        }
        /// bitfield USB_DRQ_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbDrqInt0{}; 
        namespace Usbdrqint0ValC{
        }
    }
    namespace Noneirq114mon{    ///< register IRQ114MON 
        using Addr = Register::Address<0x400313cc,0xffffffc0,0,unsigned>;
        /// bitfield USB_INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usbInt5{}; 
        namespace Usbint5ValC{
        }
        /// bitfield USB_INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbInt4{}; 
        namespace Usbint4ValC{
        }
        /// bitfield USB_INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbInt3{}; 
        namespace Usbint3ValC{
        }
        /// bitfield USB_INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbInt2{}; 
        namespace Usbint2ValC{
        }
        /// bitfield USB_INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbInt1{}; 
        namespace Usbint1ValC{
        }
        /// bitfield USB_INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbInt0{}; 
        namespace Usbint0ValC{
        }
    }
    namespace Noneirq115mon{    ///< register IRQ115MON 
        using Addr = Register::Address<0x400313d0,0xffffffff,0,unsigned>;
    }
    namespace Noneirq116mon{    ///< register IRQ116MON 
        using Addr = Register::Address<0x400313d4,0xffffffff,0,unsigned>;
    }
    namespace Noneirq117mon{    ///< register IRQ117MON 
        using Addr = Register::Address<0x400313d8,0xffffffff,0,unsigned>;
    }
    namespace Noneirq118mon{    ///< register IRQ118MON 
        using Addr = Register::Address<0x400313dc,0xfffffffc,0,unsigned>;
        /// bitfield SDINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sdint1{}; 
        namespace Sdint1ValC{
        }
        /// bitfield SDINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sdint0{}; 
        namespace Sdint0ValC{
        }
    }
    namespace Noneirq119mon{    ///< register IRQ119MON 
        using Addr = Register::Address<0x400313e0,0xfffffffe,0,unsigned>;
        /// bitfield FLINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flint{}; 
        namespace FlintValC{
        }
    }
    namespace Noneirq120mon{    ///< register IRQ120MON 
        using Addr = Register::Address<0x400313e4,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq121mon{    ///< register IRQ121MON 
        using Addr = Register::Address<0x400313e8,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq122mon{    ///< register IRQ122MON 
        using Addr = Register::Address<0x400313ec,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq123mon{    ///< register IRQ123MON 
        using Addr = Register::Address<0x400313f0,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq124mon{    ///< register IRQ124MON 
        using Addr = Register::Address<0x400313f4,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq125mon{    ///< register IRQ125MON 
        using Addr = Register::Address<0x400313f8,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq126mon{    ///< register IRQ126MON 
        using Addr = Register::Address<0x400313fc,0xfffffffe,0,unsigned>;
        /// bitfield MFSRINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq127mon{    ///< register IRQ127MON 
        using Addr = Register::Address<0x40031400,0xfffffffc,0,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
}
