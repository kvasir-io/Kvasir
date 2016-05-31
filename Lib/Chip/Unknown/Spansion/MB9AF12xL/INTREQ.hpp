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
        using Addr = Register::Address<0x4003100b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace IntreqIrqcmode{    ///< register IRQCMODE 
        using Addr = Register::Address<0x4003100c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield IRQCMODE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqcmode{}; 
    }
    namespace IntreqExc02mon{    ///< register EXC02MON 
        using Addr = Register::Address<0x40031010,0xfffffffc,0x00000000,unsigned>;
        /// bitfield HWINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwint{}; 
        /// bitfield NMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nmi{}; 
    }
    namespace IntreqIrq00mon{    ///< register IRQ00MON 
        using Addr = Register::Address<0x40031014,0xfffffffe,0x00000000,unsigned>;
        /// bitfield FCSINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fcsint{}; 
    }
    namespace IntreqIrq01mon{    ///< register IRQ01MON 
        using Addr = Register::Address<0x40031018,0xfffffffe,0x00000000,unsigned>;
        /// bitfield SWWDTINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swwdtint{}; 
    }
    namespace IntreqIrq02mon{    ///< register IRQ02MON 
        using Addr = Register::Address<0x4003101c,0xfffffffe,0x00000000,unsigned>;
        /// bitfield LVDINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdint{}; 
    }
    namespace IntreqIrq03mon{    ///< register IRQ03MON 
        using Addr = Register::Address<0x40031020,0xfffffff0,0x00000000,unsigned>;
        /// bitfield WAVE0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave0int3{}; 
        /// bitfield WAVE0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave0int2{}; 
        /// bitfield WAVE0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave0int1{}; 
        /// bitfield WAVE0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wave0int0{}; 
    }
    namespace IntreqIrq04mon{    ///< register IRQ04MON 
        using Addr = Register::Address<0x40031024,0xffffff00,0x00000000,unsigned>;
        /// bitfield EXTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint7{}; 
        /// bitfield EXTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint6{}; 
        /// bitfield EXTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint5{}; 
        /// bitfield EXTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint4{}; 
        /// bitfield EXTINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        /// bitfield EXTINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        /// bitfield EXTINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        /// bitfield EXTINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq05mon{    ///< register IRQ05MON 
        using Addr = Register::Address<0x40031028,0xffff800f,0x00000000,unsigned>;
        /// bitfield EXTINT14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint14{}; 
        /// bitfield EXTINT13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint13{}; 
        /// bitfield EXTINT12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint12{}; 
        /// bitfield EXTINT11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint11{}; 
        /// bitfield EXTINT10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint10{}; 
        /// bitfield EXTINT9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint9{}; 
        /// bitfield EXTINT8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint8{}; 
        /// bitfield EXTINT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint7{}; 
        /// bitfield EXTINT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint6{}; 
        /// bitfield EXTINT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint5{}; 
        /// bitfield EXTINT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint4{}; 
    }
    namespace IntreqIrq06mon{    ///< register IRQ06MON 
        using Addr = Register::Address<0x4003102c,0xfffffffc,0x00000000,unsigned>;
        /// bitfield TIMINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timint2{}; 
        /// bitfield TIMINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timint1{}; 
    }
    namespace IntreqIrq07mon{    ///< register IRQ07MON 
        using Addr = Register::Address<0x40031030,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq08mon{    ///< register IRQ08MON 
        using Addr = Register::Address<0x40031034,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq09mon{    ///< register IRQ09MON 
        using Addr = Register::Address<0x40031038,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq10mon{    ///< register IRQ10MON 
        using Addr = Register::Address<0x4003103c,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq11mon{    ///< register IRQ11MON 
        using Addr = Register::Address<0x40031040,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq12mon{    ///< register IRQ12MON 
        using Addr = Register::Address<0x40031044,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq13mon{    ///< register IRQ13MON 
        using Addr = Register::Address<0x40031048,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq14mon{    ///< register IRQ14MON 
        using Addr = Register::Address<0x4003104c,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq15mon{    ///< register IRQ15MON 
        using Addr = Register::Address<0x40031050,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq16mon{    ///< register IRQ16MON 
        using Addr = Register::Address<0x40031054,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq17mon{    ///< register IRQ17MON 
        using Addr = Register::Address<0x40031058,0xfffffffe,0x00000000,unsigned>;
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq18mon{    ///< register IRQ18MON 
        using Addr = Register::Address<0x4003105c,0xfffffffc,0x00000000,unsigned>;
        /// bitfield MFSINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        /// bitfield MFSINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq19mon{    ///< register IRQ19MON 
        using Addr = Register::Address<0x40031060,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq20mon{    ///< register IRQ20MON 
        using Addr = Register::Address<0x40031064,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq21mon{    ///< register IRQ21MON 
        using Addr = Register::Address<0x40031068,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq22mon{    ///< register IRQ22MON 
        using Addr = Register::Address<0x4003106c,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq23mon{    ///< register IRQ23MON 
        using Addr = Register::Address<0x40031070,0xfffffff8,0x00000000,unsigned>;
        /// bitfield PPGINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint2{}; 
        /// bitfield PPGINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint1{}; 
        /// bitfield PPGINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint0{}; 
    }
    namespace IntreqIrq24mon{    ///< register IRQ24MON 
        using Addr = Register::Address<0x40031074,0xffffffd8,0x00000000,unsigned>;
        /// bitfield RTCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtcint{}; 
        /// bitfield MPLLINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mpllint{}; 
        /// bitfield SOSCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soscint{}; 
        /// bitfield MOSCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscint{}; 
    }
    namespace IntreqIrq25mon{    ///< register IRQ25MON 
        using Addr = Register::Address<0x40031078,0xfffffff0,0x00000000,unsigned>;
        /// bitfield ADCINT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint3{}; 
        /// bitfield ADCINT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint2{}; 
        /// bitfield ADCINT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint1{}; 
        /// bitfield ADCINT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint0{}; 
    }
    namespace IntreqIrq26mon{    ///< register IRQ26MON 
        using Addr = Register::Address<0x4003107c,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq27mon{    ///< register IRQ27MON 
        using Addr = Register::Address<0x40031080,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq28mon{    ///< register IRQ28MON 
        using Addr = Register::Address<0x40031084,0xffffffc0,0x00000000,unsigned>;
        /// bitfield FRT0INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int5{}; 
        /// bitfield FRT0INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int4{}; 
        /// bitfield FRT0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int3{}; 
        /// bitfield FRT0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int2{}; 
        /// bitfield FRT0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int1{}; 
        /// bitfield FRT0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frt0int0{}; 
    }
    namespace IntreqIrq29mon{    ///< register IRQ29MON 
        using Addr = Register::Address<0x40031088,0xfffffff0,0x00000000,unsigned>;
        /// bitfield ICU0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu0int3{}; 
        /// bitfield ICU0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu0int2{}; 
        /// bitfield ICU0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu0int1{}; 
        /// bitfield ICU0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icu0int0{}; 
    }
    namespace IntreqIrq30mon{    ///< register IRQ30MON 
        using Addr = Register::Address<0x4003108c,0xffffffc0,0x00000000,unsigned>;
        /// bitfield OCU0INT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int5{}; 
        /// bitfield OCU0INT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int4{}; 
        /// bitfield OCU0INT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int3{}; 
        /// bitfield OCU0INT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int2{}; 
        /// bitfield OCU0INT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int1{}; 
        /// bitfield OCU0INT0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocu0int0{}; 
    }
    namespace IntreqIrq31mon{    ///< register IRQ31MON 
        using Addr = Register::Address<0x40031090,0xffff0000,0x00000000,unsigned>;
        /// bitfield BTINT15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint15{}; 
        /// bitfield BTINT14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint14{}; 
        /// bitfield BTINT13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint13{}; 
        /// bitfield BTINT12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint12{}; 
        /// bitfield BTINT11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint11{}; 
        /// bitfield BTINT10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint10{}; 
        /// bitfield BTINT9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint9{}; 
        /// bitfield BTINT8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint8{}; 
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
    namespace IntreqIrq32mon{    ///< register IRQ32MON 
        using Addr = Register::Address<0x40031094,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq33mon{    ///< register IRQ33MON 
        using Addr = Register::Address<0x40031098,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq34mon{    ///< register IRQ34MON 
        using Addr = Register::Address<0x4003109c,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq35mon{    ///< register IRQ35MON 
        using Addr = Register::Address<0x400310a0,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq36mon{    ///< register IRQ36MON 
        using Addr = Register::Address<0x400310a4,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq37mon{    ///< register IRQ37MON 
        using Addr = Register::Address<0x400310a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq38mon{    ///< register IRQ38MON 
        using Addr = Register::Address<0x400310ac,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq39mon{    ///< register IRQ39MON 
        using Addr = Register::Address<0x400310b0,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq40mon{    ///< register IRQ40MON 
        using Addr = Register::Address<0x400310b4,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq41mon{    ///< register IRQ41MON 
        using Addr = Register::Address<0x400310b8,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq42mon{    ///< register IRQ42MON 
        using Addr = Register::Address<0x400310bc,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq43mon{    ///< register IRQ43MON 
        using Addr = Register::Address<0x400310c0,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq44mon{    ///< register IRQ44MON 
        using Addr = Register::Address<0x400310c4,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq45mon{    ///< register IRQ45MON 
        using Addr = Register::Address<0x400310c8,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq46mon{    ///< register IRQ46MON 
        using Addr = Register::Address<0x400310cc,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq47mon{    ///< register IRQ47MON 
        using Addr = Register::Address<0x400310d0,0xfffff7ff,0x00000000,unsigned>;
        /// bitfield FLASHINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flashint{}; 
    }
    namespace IntreqRcintsel0{    ///< register RCINTSEL0 
        using Addr = Register::Address<0x40031210,0x00000000,0x00000000,unsigned>;
        /// bitfield INTSEL3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel3{}; 
        /// bitfield INTSEL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel2{}; 
        /// bitfield INTSEL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel1{}; 
        /// bitfield INTSEL0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel0{}; 
    }
    namespace IntreqRcintsel1{    ///< register RCINTSEL1 
        using Addr = Register::Address<0x40031214,0x00000000,0x00000000,unsigned>;
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
