#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Interrupts
    namespace Nonedrqsel{    ///<DMA Request Selection Register
        using Addr = Register::Address<0x40031000,0x00000000,0,unsigned>;
        ///The interrupt signal of the external interrupt ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> exint3{}; 
        ///The interrupt signal of the external interrupt ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> exint2{}; 
        ///The interrupt signal of the external interrupt ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> exint1{}; 
        ///The interrupt signal of the external interrupt ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> exint0{}; 
        ///The transmission interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mfs7tx{}; 
        ///The reception interrupt signal of the MFS ch.7 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mfs7rx{}; 
        ///The transmission interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mfs6tx{}; 
        ///The reception interrupt signal of the MFS ch.6 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mfs6rx{}; 
        ///The transmission interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mfs5tx{}; 
        ///The reception interrupt signal of the MFS ch.5 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mfs5rx{}; 
        ///The transmission interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mfs4tx{}; 
        ///The reception interrupt signal of the MFS ch.4 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mfs4rx{}; 
        ///The transmission interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mfs3tx{}; 
        ///The reception interrupt signal of the MFS ch.3 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mfs3rx{}; 
        ///The transmission interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mfs2tx{}; 
        ///The reception interrupt signal of the MFS ch.2 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mfs2rx{}; 
        ///The transmission interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfs1tx{}; 
        ///The reception interrupt signal of the MFS ch.1 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfs1rx{}; 
        ///The transmission interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfs0tx{}; 
        ///The reception interrupt signal of the MFS ch.0 is output as a transfer request to the DMAC (including extension).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfs0rx{}; 
        ///The IRQ0 interrupt signal of the base timer ch.6 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> irq0bt6{}; 
        ///The IRQ0 interrupt signal of the base timer ch.4 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> irq0bt4{}; 
        ///The IRQ0 interrupt signal of the base timer ch.3 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> irq0bt3{}; 
        ///The IRQ0 interrupt signal of the base timer ch.0 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> irq0bt0{}; 
        ///The scan conversion interrupt signal of the A/D converter unit 2 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adcscan2{}; 
        ///The scan conversion interrupt signal of the A/D converter unit 1 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adcscan1{}; 
        ///The scan conversion interrupt signal of the A/D converter unit 0 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adcscan0{}; 
        ///The EP5 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbep5{}; 
        ///The EP4 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbep4{}; 
        ///The EP3 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbep3{}; 
        ///The EP2 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbep2{}; 
        ///The EP1 DRQ interrupt signal of the USB ch.0 is output as a transfer request to the DMAC.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbep1{}; 
    }
    namespace Noneoddpks{    ///<USB ch.0 Odd Packet Size DMA Enable Register
        using Addr = Register::Address<0x4003100b,0xffffffe0,0,unsigned char>;
        ///"When the transfer destination address of DMAC is USB.EP5DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oddpks4{}; 
        ///"When the transfer destination address of DMAC is USB.EP4DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oddpks3{}; 
        ///"When the transfer destination address of DMAC is USB.EP3DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oddpks2{}; 
        ///"When the transfer destination address of DMAC is USB.EP2DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddpks1{}; 
        ///"When the transfer destination address of DMAC is USB.EP1DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oddpks0{}; 
    }
    namespace Noneirqcmode{    ///<Interrupt Factor Vector Relocate Setting Register 
        using Addr = Register::Address<0x4003100c,0xfffffffe,0,unsigned>;
        ///Interrupt Factor Vector Relocate Setting
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqcmode{}; 
    }
    namespace Noneexc02mon{    ///<EXC02 batch read register
        using Addr = Register::Address<0x40031010,0xfffffffc,0,unsigned>;
        ///Hardware watchdog timer interrupt request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hwint{}; 
        ///External NMIX pin interrupt request 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
    }
    namespace Noneirq00mon{    ///<IRQ00 Batch Read Register
        using Addr = Register::Address<0x40031014,0xfffffffe,0,unsigned>;
        ///Anomalous frequency detection by CSV interrupt request 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcsint{}; 
    }
    namespace Noneirq01mon{    ///<IRQ01 Batch Read Register
        using Addr = Register::Address<0x40031018,0xfffffffe,0,unsigned>;
        ///Software watchdog timer interrupt request 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swwdtint{}; 
    }
    namespace Noneirq02mon{    ///<IRQ02 Batch Read Register
        using Addr = Register::Address<0x4003101c,0xfffffffe,0,unsigned>;
        ///Low voltage detection (LVD) interrupt request 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvdint{}; 
    }
    namespace Noneirq03mon{    ///<IRQ03 Batch Read Register
        using Addr = Register::Address<0x40031020,0xfffffff0,0,unsigned>;
        ///WFG timer 54 interrupt request in MFT unit 0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wave0int3{}; 
        ///WFG timer 32 interrupt request in MFT unit 0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wave0int2{}; 
        ///WFG timer 10 interrupt request in MFT unit 0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wave0int1{}; 
        ///DTIF (motor emergency stop) interrupt request in MFT unit 0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wave0int0{}; 
    }
    namespace Noneirq04mon{    ///<IRQ04 Batch Read Register
        using Addr = Register::Address<0x40031024,0xffffffb0,0,unsigned>;
        ///Interrupt request on external interrupt ch.6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> extint6{}; 
        ///Interrupt request on external interrupt ch.3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        ///Interrupt request on external interrupt ch.2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        ///Interrupt request on external interrupt ch.1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        ///Interrupt request on external interrupt ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
    }
    namespace Noneirq05mon{    ///<IRQ05 Batch Read Register
        using Addr = Register::Address<0x40031028,0xffffff7f,0,unsigned>;
        ///Interrupt request on external interrupt ch.15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> extint7{}; 
    }
    namespace Noneirq06mon{    ///<IRQ06 Batch Read Register
        using Addr = Register::Address<0x4003102c,0xffffff00,0,unsigned>;
        ///PC match and RC match interrupt request on QPRC ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> qud0int5{}; 
        ///Interrupt request detected RC out of range on QPRC ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> qud0int4{}; 
        ///PC count invert interrupt request on QPRC ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qud0int3{}; 
        ///Overflow/underflow/zero index interrupt request on QPRC ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qud0int2{}; 
        ///PC and RC match interrupt request on QPRC ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qud0int1{}; 
        ///PC match interrupt request on QPRC ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qud0int0{}; 
        ///Dual timer 2 interrupt request 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timint2{}; 
        ///Dual timer 1 interrupt request 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timint1{}; 
    }
    namespace Noneirq07mon{    ///<IRQ07 Batch Read Register
        using Addr = Register::Address<0x40031030,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace Noneirq08mon{    ///<IRQ08 Batch Read Register
        using Addr = Register::Address<0x40031034,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq09mon{    ///<IRQ09 Batch Read Register
        using Addr = Register::Address<0x40031038,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace Noneirq10mon{    ///<IRQ10 Batch Read Register
        using Addr = Register::Address<0x4003103c,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq13mon{    ///<IRQ13 Batch Read Register
        using Addr = Register::Address<0x40031048,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace Noneirq14mon{    ///<IRQ14 Batch Read Register
        using Addr = Register::Address<0x4003104c,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq17mon{    ///<IRQ17 Batch Read Register
        using Addr = Register::Address<0x40031058,0xfffffffe,0,unsigned>;
        ///Reception interrupt request on MFS ch.5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint{}; 
    }
    namespace Noneirq18mon{    ///<IRQ18 Batch Read Register
        using Addr = Register::Address<0x4003105c,0xfffffffc,0,unsigned>;
        ///Status interrupt request on MFS ch.5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        ///Transmission interrupt request on MFS ch.5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
    }
    namespace Noneirq23mon{    ///<IRQ23 Batch Read Register
        using Addr = Register::Address<0x40031070,0xfffffff8,0,unsigned>;
        ///Interrupt request on PPG ch.4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ppgint2{}; 
        ///Interrupt request on PPG ch.2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ppgint1{}; 
        ///Interrupt request on PPG ch.0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ppgint0{}; 
    }
    namespace Noneirq24mon{    ///<IRQ24 Batch Read Register
        using Addr = Register::Address<0x40031074,0xffffffc0,0,unsigned>;
        ///RTC interrupt request 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcint{}; 
        ///Watch counter interrupt request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wcint{}; 
        ///Stabilization wait completion interrupt request for USB or USB/Ethernet PLL oscillation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> upllint{}; 
        ///Stabilization wait completion interrupt request for main PLL oscillation 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mpllint{}; 
        ///Stabilization wait completion interrupt request for sub-clock oscillation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soscint{}; 
        ///Stabilization wait completion interrupt request for main clock oscillation 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscint{}; 
    }
    namespace Noneirq25mon{    ///<IRQ25 Batch Read Register
        using Addr = Register::Address<0x40031078,0xfffffff0,0,unsigned>;
        ///Conversion result comparison interrupt request in the corresponding A/D unit 0. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        ///FIFO overrun interrupt request in the corresponding A/D unit 0. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        ///Scan conversion interrupt request in the corresponding A/D unit 0. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        ///Priority conversion interrupt request in the corresponding A/D unit 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
    }
    namespace Noneirq26mon{    ///<IRQ26 Batch Read Register
        using Addr = Register::Address<0x4003107c,0xfffffff0,0,unsigned>;
        ///Conversion result comparison interrupt request in the corresponding A/D unit 1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        ///FIFO overrun interrupt request in the corresponding A/D unit 1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        ///Scan conversion interrupt request in the corresponding A/D unit 1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        ///Priority conversion interrupt request in the corresponding A/D unit 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
    }
    namespace Noneirq28mon{    ///<IRQ28 Batch Read Register
        using Addr = Register::Address<0x40031084,0xffffffc0,0,unsigned>;
        ///Zero detection interrupt request on the free run timer ch.2 in the MFT unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frt0int5{}; 
        ///Zero detection interrupt request on the free run timer ch.1 in the MFT unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> frt0int4{}; 
        ///Zero detection interrupt request on the free run timer ch.0 in the MFT unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> frt0int3{}; 
        ///Peak value detection interrupt request on the free run timer ch.2 in the MFT unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frt0int2{}; 
        ///Peak value detection interrupt request on the free run timer ch.1 in the MFT unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frt0int1{}; 
        ///Peak value detection interrupt request on the free run timer ch.0 in the MFT unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frt0int0{}; 
    }
    namespace Noneirq29mon{    ///<IRQ29 Batch Read Register
        using Addr = Register::Address<0x40031088,0xfffffff0,0,unsigned>;
        ///Interrupt request on the input capture ch.3 in the MFT unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icu0int3{}; 
        ///Interrupt request on the input capture ch.2 in the MFT unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icu0int2{}; 
        ///Interrupt request on the input capture ch.1 in the MFT unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icu0int1{}; 
        ///Interrupt request on the input capture ch.0 in the MFT unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icu0int0{}; 
    }
    namespace Noneirq30mon{    ///<IRQ30 Batch Read Register
        using Addr = Register::Address<0x4003108c,0xffffffc0,0,unsigned>;
        ///Interrupt request on the output compare ch.5 in the MFT unit 0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocu0int5{}; 
        ///Interrupt request on the output compare ch.4 in the MFT unit 0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocu0int4{}; 
        ///Interrupt request on the output compare ch.3 in the MFT unit 0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocu0int3{}; 
        ///Interrupt request on the output compare ch.2 in the MFT unit 0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocu0int2{}; 
        ///Interrupt request on the output compare ch.1 in the MFT unit 0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocu0int1{}; 
        ///Interrupt request on the output compare ch.0 in the MFT unit 0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocu0int0{}; 
    }
    namespace Noneirq31mon{    ///<IRQ31 Batch Read Register
        using Addr = Register::Address<0x40031090,0xffff0000,0,unsigned>;
        ///IRQ1 interrupt request on the base timer ch.7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> btint15{}; 
        ///IRQ0 interrupt request on the base timer ch.7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> btint14{}; 
        ///IRQ1 interrupt request on the base timer ch.6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> btint13{}; 
        ///IRQ0 interrupt request on the base timer ch.6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> btint12{}; 
        ///IRQ1 interrupt request on the base timer ch.5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> btint11{}; 
        ///IRQ0 interrupt request on the base timer ch.5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> btint10{}; 
        ///IRQ1 interrupt request on the base timer ch.4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> btint9{}; 
        ///IRQ0 interrupt request on the base timer ch.4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> btint8{}; 
        ///IRQ1 interrupt request on the base timer ch.3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btint7{}; 
        ///IRQ0 interrupt request on the base timer ch.3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btint6{}; 
        ///IRQ1 interrupt request on the base timer ch.2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btint5{}; 
        ///IRQ0 interrupt request on the base timer ch.2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btint4{}; 
        ///IRQ1 interrupt request on the base timer ch.1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btint3{}; 
        ///IRQ0 interrupt request on the base timer ch.1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btint2{}; 
        ///IRQ1 interrupt request on the base timer ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        ///IRQ0 interrupt request on the base timer ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
    }
    namespace Noneirq34mon{    ///<IRQ34 Batch Read Register
        using Addr = Register::Address<0x4003109c,0xffffffe0,0,unsigned>;
        ///Endpoint 5 DRQ interrupt request on the USB ch.0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0int4{}; 
        ///Endpoint 4 DRQ interrupt request on the USB ch.0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usb0int3{}; 
        ///Endpoint 3 DRQ interrupt request on the USB ch.0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usb0int2{}; 
        ///Endpoint 2 DRQ interrupt request on the USB ch.0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usb0int1{}; 
        ///Endpoint 1 DRQ interrupt request on the USB ch.0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usb0int0{}; 
    }
    namespace Noneirq35mon{    ///<IRQ35 Batch Read Register
        using Addr = Register::Address<0x400310a0,0xffffffc0,0,unsigned>;
        ///"Status (SOFIRQ, CMPIRO) interrupt request on the USB ch.0 "
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usb0int5{}; 
        ///"Status (DIRQ, URIRQ, RWKIRQ, CNNIRQ) interrupt request on the USB ch.0 "
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0int4{}; 
        ///Status (SPK) interrupt request on the USB ch.0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usb0int3{}; 
        ///"Status (SUSP, SOF, BRST, CONF, WKUP) interrupt request on the USB ch.0 "
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usb0int2{}; 
        ///Endpoint 0 DRQO interrupt request on the USB ch.0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usb0int1{}; 
        ///Endpoint 0 DRQI interrupt request on the USB ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usb0int0{}; 
    }
    namespace Noneirq38mon{    ///<IRQ38 Batch Read Register
        using Addr = Register::Address<0x400310ac,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq39mon{    ///<IRQ39 Batch Read Register
        using Addr = Register::Address<0x400310b0,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq40mon{    ///<IRQ40 Batch Read Register
        using Addr = Register::Address<0x400310b4,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Noneirq41mon{    ///<IRQ41 Batch Read Register
        using Addr = Register::Address<0x400310b8,0xfffffffe,0,unsigned>;
        ///Interrupt request on DMA ch.3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaint{}; 
    }
    namespace Nonercintsel0{    ///<Interrupt Factor Selection Register 0
        using Addr = Register::Address<0x40031210,0x00000000,0,unsigned>;
        ///select the interrupt factor of the interrupt vector No.22.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel3{}; 
        ///select the interrupt factor of the interrupt vector No.21.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel2{}; 
        ///select the interrupt factor of the interrupt vector No.20.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel1{}; 
        ///select the interrupt factor of the interrupt vector No.19.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel0{}; 
    }
    namespace Nonercintsel1{    ///<Interrupt Factor Selection Register 1
        using Addr = Register::Address<0x40031214,0x00000000,0,unsigned>;
        ///select the interrupt factor of the interrupt vector No.26.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intsel7{}; 
        ///select the interrupt factor of the interrupt vector No.25.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intsel6{}; 
        ///select the interrupt factor of the interrupt vector No.24.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> intsel5{}; 
        ///select the interrupt factor of the interrupt vector No.23.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intsel4{}; 
    }
}
