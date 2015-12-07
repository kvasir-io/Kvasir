#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Interrupts
    namespace Nonedrqsel{    ///<DMA Request Selection Register
        using Addr = Register::Address<0x40031000,0x00000000,0,unsigned>;
        ///The interrupt signal of the external interrupt ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> exint3{}; 
        namespace Exint3ValC{
        }
        ///The interrupt signal of the external interrupt ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> exint2{}; 
        namespace Exint2ValC{
        }
        ///The interrupt signal of the external interrupt ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> exint1{}; 
        namespace Exint1ValC{
        }
        ///The interrupt signal of the external interrupt ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> exint0{}; 
        namespace Exint0ValC{
        }
        ///The transmission interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mfs7tx{}; 
        namespace Mfs7txValC{
        }
        ///The reception interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mfs7rx{}; 
        namespace Mfs7rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mfs6tx{}; 
        namespace Mfs6txValC{
        }
        ///The reception interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mfs6rx{}; 
        namespace Mfs6rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mfs5tx{}; 
        namespace Mfs5txValC{
        }
        ///The reception interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mfs5rx{}; 
        namespace Mfs5rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mfs4tx{}; 
        namespace Mfs4txValC{
        }
        ///The reception interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mfs4rx{}; 
        namespace Mfs4rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mfs3tx{}; 
        namespace Mfs3txValC{
        }
        ///The reception interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mfs3rx{}; 
        namespace Mfs3rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mfs2tx{}; 
        namespace Mfs2txValC{
        }
        ///The reception interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mfs2rx{}; 
        namespace Mfs2rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfs1tx{}; 
        namespace Mfs1txValC{
        }
        ///The reception interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfs1rx{}; 
        namespace Mfs1rxValC{
        }
        ///The transmission interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfs0tx{}; 
        namespace Mfs0txValC{
        }
        ///The reception interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfs0rx{}; 
        namespace Mfs0rxValC{
        }
        ///The IRQ0 interrupt signal of the base timer ch.6 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> irq0bt6{}; 
        namespace Irq0bt6ValC{
        }
        ///The IRQ0 interrupt signal of the base timer ch.4 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> irq0bt4{}; 
        namespace Irq0bt4ValC{
        }
        ///The IRQ0 interrupt signal of the base timer ch.3 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> irq0bt2{}; 
        namespace Irq0bt2ValC{
        }
        ///The IRQ0 interrupt signal of the base timer ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> irq0bt0{}; 
        namespace Irq0bt0ValC{
        }
        ///The scan conversion interrupt signal of the A/D converter unit 2 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adcscan2{}; 
        namespace Adcscan2ValC{
        }
        ///The scan conversion interrupt signal of the A/D converter unit 1 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adcscan1{}; 
        namespace Adcscan1ValC{
        }
        ///The scan conversion interrupt signal of the A/D converter unit 0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adcscan0{}; 
        namespace Adcscan0ValC{
        }
        ///The EP5 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbep5{}; 
        namespace Usbep5ValC{
        }
        ///The EP4 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbep4{}; 
        namespace Usbep4ValC{
        }
        ///The EP3 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbep3{}; 
        namespace Usbep3ValC{
        }
        ///The EP2 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbep2{}; 
        namespace Usbep2ValC{
        }
        ///The EP1 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbep1{}; 
        namespace Usbep1ValC{
        }
    }
    namespace Noneirqcmode{    ///<Interrupt Factor Vector Relocate Setting Register 
        using Addr = Register::Address<0x4003100c,0xfffffffe,0,unsigned>;
        ///Interrupt Factor Vector Relocate Setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqcmode{}; 
        namespace IrqcmodeValC{
        }
    }
    namespace Noneexc02mon{    ///<EXC02 batch read register
        using Addr = Register::Address<0x40031010,0xfffffffc,0,unsigned>;
        ///Hardware watchdog timer interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hwint{}; 
        namespace HwintValC{
        }
        ///External NMIX pin interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
        namespace NmiValC{
        }
    }
    namespace Noneirq00mon{    ///<IRQ00 Batch Read Register
        using Addr = Register::Address<0x40031014,0xfffffffe,0,unsigned>;
        ///Anomalous frequency detection by CSV interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcsint{}; 
        namespace FcsintValC{
        }
    }
    namespace Noneirq01mon{    ///<IRQ01 Batch Read Register
        using Addr = Register::Address<0x40031018,0xfffffffe,0,unsigned>;
        ///Software watchdog timer interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swwdtint{}; 
        namespace SwwdtintValC{
        }
    }
    namespace Noneirq02mon{    ///<IRQ02 Batch Read Register
        using Addr = Register::Address<0x4003101c,0xfffffffe,0,unsigned>;
        ///Low voltage detection (LVD) interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvdint{}; 
        namespace LvdintValC{
        }
    }
    namespace Noneirq04mon{    ///<IRQ04 Batch Read Register
        using Addr = Register::Address<0x40031024,0xffffff80,0,unsigned>;
        ///Interrupt request on external interrupt ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        namespace Extint6ValC{
        }
        ///Interrupt request on external interrupt ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> extint5{}; 
        namespace Extint5ValC{
        }
        ///Interrupt request on external interrupt ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> extint4{}; 
        namespace Extint4ValC{
        }
        ///Interrupt request on external interrupt ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        ///Interrupt request on external interrupt ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        ///Interrupt request on external interrupt ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        ///Interrupt request on external interrupt ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
    }
    namespace Noneirq05mon{    ///<IRQ05 Batch Read Register
        using Addr = Register::Address<0x40031028,0xffffff7f,0,unsigned>;
        ///Interrupt request on external interrupt ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
        namespace Extint7ValC{
        }
    }
    namespace Noneirq06mon{    ///<IRQ06 Batch Read Register
        using Addr = Register::Address<0x4003102c,0xfffffffc,0,unsigned>;
        ///Dual timer 2 interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timint2{}; 
        namespace Timint2ValC{
        }
        ///Dual timer 1 interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timint1{}; 
        namespace Timint1ValC{
        }
    }
    namespace Noneirq07mon{    ///<IRQ07 Batch Read Register
        using Addr = Register::Address<0x40031030,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
        namespace MfsintValC{
        }
    }
    namespace Noneirq08mon{    ///<IRQ08 Batch Read Register
        using Addr = Register::Address<0x40031034,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request on MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq09mon{    ///<IRQ09 Batch Read Register
        using Addr = Register::Address<0x40031038,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
        namespace MfsintValC{
        }
    }
    namespace Noneirq10mon{    ///<IRQ10 Batch Read Register
        using Addr = Register::Address<0x4003103c,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request on MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq11mon{    ///<IRQ11 Batch Read Register
        using Addr = Register::Address<0x40031040,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
        namespace MfsintValC{
        }
    }
    namespace Noneirq12mon{    ///<IRQ12 Batch Read Register
        using Addr = Register::Address<0x40031044,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request on MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq13mon{    ///<IRQ13 Batch Read Register
        using Addr = Register::Address<0x40031048,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
        namespace MfsintValC{
        }
    }
    namespace Noneirq14mon{    ///<IRQ14 Batch Read Register
        using Addr = Register::Address<0x4003104c,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request on MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq15mon{    ///<IRQ15 Batch Read Register
        using Addr = Register::Address<0x40031050,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
        namespace MfsintValC{
        }
    }
    namespace Noneirq16mon{    ///<IRQ16 Batch Read Register
        using Addr = Register::Address<0x40031054,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request on MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq17mon{    ///<IRQ17 Batch Read Register
        using Addr = Register::Address<0x40031058,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
        namespace MfsintValC{
        }
    }
    namespace Noneirq18mon{    ///<IRQ18 Batch Read Register
        using Addr = Register::Address<0x4003105c,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request on MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq19mon{    ///<IRQ19 Batch Read Register
        using Addr = Register::Address<0x40031060,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
        namespace MfsintValC{
        }
    }
    namespace Noneirq20mon{    ///<IRQ20 Batch Read Register
        using Addr = Register::Address<0x40031064,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request on MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq21mon{    ///<IRQ21 Batch Read Register
        using Addr = Register::Address<0x40031068,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
        namespace MfsintValC{
        }
    }
    namespace Noneirq22mon{    ///<IRQ22 Batch Read Register
        using Addr = Register::Address<0x4003106c,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request on MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq24mon{    ///<IRQ24 Batch Read Register
        using Addr = Register::Address<0x40031074,0xffffffc0,0,unsigned>;
        ///RTC interrupt request 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcint{}; 
        namespace RtcintValC{
        }
        ///Watch counter interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wcint{}; 
        namespace WcintValC{
        }
        ///Stabilization wait completion interrupt request for USB or USB/Ethernet PLL oscillation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> upllint{}; 
        namespace UpllintValC{
        }
        ///Stabilization wait completion interrupt request for main PLL oscillation 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mpllint{}; 
        namespace MpllintValC{
        }
        ///Stabilization wait completion interrupt request for sub-clock oscillation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soscint{}; 
        namespace SoscintValC{
        }
        ///Stabilization wait completion interrupt request for main clock oscillation 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscint{}; 
        namespace MoscintValC{
        }
    }
    namespace Noneirq25mon{    ///<IRQ25 Batch Read Register
        using Addr = Register::Address<0x40031078,0xfffffff0,0,unsigned>;
        ///Conversion result comparison interrupt request in the corresponding A/D unit 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        namespace Adcint3ValC{
        }
        ///FIFO overrun interrupt request in the corresponding A/D unit 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        namespace Adcint2ValC{
        }
        ///Scan conversion interrupt request in the corresponding A/D unit 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        namespace Adcint1ValC{
        }
        ///Priority conversion interrupt request in the corresponding A/D unit 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
        namespace Adcint0ValC{
        }
    }
    namespace Noneirq26mon{    ///<IRQ26 Batch Read Register
        using Addr = Register::Address<0x4003107c,0xfffffff0,0,unsigned>;
        ///Conversion result comparison interrupt request in the corresponding A/D unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        namespace Adcint3ValC{
        }
        ///FIFO overrun interrupt request in the corresponding A/D unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        namespace Adcint2ValC{
        }
        ///Scan conversion interrupt request in the corresponding A/D unit 1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        namespace Adcint1ValC{
        }
        ///Priority conversion interrupt request in the corresponding A/D unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
        namespace Adcint0ValC{
        }
    }
    namespace Noneirq27mon{    ///<IRQ27 Batch Read Register
        using Addr = Register::Address<0x40031080,0xffffffef,0,unsigned>;
        ///LCDC interrupt request for LCD controller 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lcdcint{}; 
        namespace LcdcintValC{
        }
    }
    namespace Noneirq31mon{    ///<IRQ31 Batch Read Register
        using Addr = Register::Address<0x40031090,0xffff0000,0,unsigned>;
        ///IRQ1 interrupt request on the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> btint15{}; 
        namespace Btint15ValC{
        }
        ///IRQ0 interrupt request on the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> btint14{}; 
        namespace Btint14ValC{
        }
        ///IRQ1 interrupt request on the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> btint13{}; 
        namespace Btint13ValC{
        }
        ///IRQ0 interrupt request on the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> btint12{}; 
        namespace Btint12ValC{
        }
        ///IRQ1 interrupt request on the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> btint11{}; 
        namespace Btint11ValC{
        }
        ///IRQ0 interrupt request on the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> btint10{}; 
        namespace Btint10ValC{
        }
        ///IRQ1 interrupt request on the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> btint9{}; 
        namespace Btint9ValC{
        }
        ///IRQ0 interrupt request on the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> btint8{}; 
        namespace Btint8ValC{
        }
        ///IRQ1 interrupt request on the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btint7{}; 
        namespace Btint7ValC{
        }
        ///IRQ0 interrupt request on the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btint6{}; 
        namespace Btint6ValC{
        }
        ///IRQ1 interrupt request on the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btint5{}; 
        namespace Btint5ValC{
        }
        ///IRQ0 interrupt request on the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btint4{}; 
        namespace Btint4ValC{
        }
        ///IRQ1 interrupt request on the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btint3{}; 
        namespace Btint3ValC{
        }
        ///IRQ0 interrupt request on the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btint2{}; 
        namespace Btint2ValC{
        }
        ///IRQ1 interrupt request on the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///IRQ0 interrupt request on the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq36mon{    ///<IRQ36 Batch Read Register
        using Addr = Register::Address<0x400310a4,0xffffffdf,0,unsigned>;
        ///Interrupt request for HDMI-CEC/Remote Control Reception ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rcec0int{}; 
        namespace Rcec0intValC{
        }
    }
    namespace Noneirq37mon{    ///<IRQ37 Batch Read Register
        using Addr = Register::Address<0x400310a8,0xffffffbf,0,unsigned>;
        ///Interrupt request for HDMI-CEC/Remote Control Reception ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcec1int{}; 
        namespace Rcec1intValC{
        }
    }
    namespace Noneirq38mon{    ///<IRQ38 Batch Read Register
        using Addr = Register::Address<0x400310ac,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq39mon{    ///<IRQ39 Batch Read Register
        using Addr = Register::Address<0x400310b0,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq40mon{    ///<IRQ40 Batch Read Register
        using Addr = Register::Address<0x400310b4,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq41mon{    ///<IRQ41 Batch Read Register
        using Addr = Register::Address<0x400310b8,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq42mon{    ///<IRQ42 Batch Read Register
        using Addr = Register::Address<0x400310bc,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq43mon{    ///<IRQ43 Batch Read Register
        using Addr = Register::Address<0x400310c0,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq44mon{    ///<IRQ44 Batch Read Register
        using Addr = Register::Address<0x400310c4,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq45mon{    ///<IRQ45 Batch Read Register
        using Addr = Register::Address<0x400310c8,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.7.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
        namespace DmaintValC{
        }
    }
    namespace Noneirq47mon{    ///<IRQ47 Batch Read Register
        using Addr = Register::Address<0x400310d0,0xfffff7ff,0,unsigned>;
        ///"RDY, HANG interrupt request for flash "
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> flashint{}; 
        namespace FlashintValC{
        }
    }
    namespace Nonercintsel0{    ///<Interrupt Factor Selection Register 0
        using Addr = Register::Address<0x40031210,0x00000000,0,unsigned>;
        ///select the interrupt factor of the interrupt vector No.22.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel3{}; 
        namespace Intsel3ValC{
        }
        ///select the interrupt factor of the interrupt vector No.21.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel2{}; 
        namespace Intsel2ValC{
        }
        ///select the interrupt factor of the interrupt vector No.20.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel1{}; 
        namespace Intsel1ValC{
        }
        ///select the interrupt factor of the interrupt vector No.19.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel0{}; 
        namespace Intsel0ValC{
        }
    }
    namespace Nonercintsel1{    ///<Interrupt Factor Selection Register 1
        using Addr = Register::Address<0x40031214,0x00000000,0,unsigned>;
        ///select the interrupt factor of the interrupt vector No.26.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel7{}; 
        namespace Intsel7ValC{
        }
        ///select the interrupt factor of the interrupt vector No.25.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel6{}; 
        namespace Intsel6ValC{
        }
        ///select the interrupt factor of the interrupt vector No.24.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel5{}; 
        namespace Intsel5ValC{
        }
        ///select the interrupt factor of the interrupt vector No.23.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel4{}; 
        namespace Intsel4ValC{
        }
    }
}
