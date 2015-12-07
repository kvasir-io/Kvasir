#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Interrupts
    namespace Nonedrqsel{    ///<DMA Request Selection Register
        using Addr = Register::Address<0x40031000,0x00000000,0,unsigned>;
        ///External pin interrupt ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> exint3{}; 
        namespace Exint3ValC{
        }
        ///External pin interrupt ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> exint2{}; 
        namespace Exint2ValC{
        }
        ///External pin interrupt ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> exint1{}; 
        namespace Exint1ValC{
        }
        ///External pin interrupt ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> exint0{}; 
        namespace Exint0ValC{
        }
        ///MFS ch.7 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mfs7tx{}; 
        namespace Mfs7txValC{
        }
        ///MFS ch.7 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mfs7rx{}; 
        namespace Mfs7rxValC{
        }
        ///MFS ch.6 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mfs6tx{}; 
        namespace Mfs6txValC{
        }
        ///MFS ch.6 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mfs6rx{}; 
        namespace Mfs6rxValC{
        }
        ///MFS ch.5 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mfs5tx{}; 
        namespace Mfs5txValC{
        }
        ///MFS ch.5 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mfs5rx{}; 
        namespace Mfs5rxValC{
        }
        ///MFS ch.4 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mfs4tx{}; 
        namespace Mfs4txValC{
        }
        ///MFS ch.4 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mfs4rx{}; 
        namespace Mfs4rxValC{
        }
        ///MFS ch.3 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mfs3tx{}; 
        namespace Mfs3txValC{
        }
        ///MFS ch.3 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mfs3rx{}; 
        namespace Mfs3rxValC{
        }
        ///MFS ch.2 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mfs2tx{}; 
        namespace Mfs2txValC{
        }
        ///MFS ch.2 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mfs2rx{}; 
        namespace Mfs2rxValC{
        }
        ///MFS ch.1 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfs1tx{}; 
        namespace Mfs1txValC{
        }
        ///MFS ch.1 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfs1rx{}; 
        namespace Mfs1rxValC{
        }
        ///MFS ch.0 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfs0tx{}; 
        namespace Mfs0txValC{
        }
        ///MFS ch.0 reception interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfs0rx{}; 
        namespace Mfs0rxValC{
        }
        ///Base timer ch.6 source 0 (IRQ0) interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> irq0bt6{}; 
        namespace Irq0bt6ValC{
        }
        ///Base timer ch.4 source 0 (IRQ0) interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> irq0bt4{}; 
        namespace Irq0bt4ValC{
        }
        ///Base timer ch.2 source 0 (IRQ0) interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> irq0bt2{}; 
        namespace Irq0bt2ValC{
        }
        ///Base timer ch.6 source 0 (IRQ0) interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> irq0bt0{}; 
        namespace Irq0bt0ValC{
        }
        ///A/D converter unit 2 scan conversion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adcscan2{}; 
        namespace Adcscan2ValC{
        }
        ///A/D converter unit 1 scan conversion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adcscan1{}; 
        namespace Adcscan1ValC{
        }
        ///A/D converter unit 0 scan conversion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adcscan0{}; 
        namespace Adcscan0ValC{
        }
        ///USB ch.0 function endpoint 5 DRQ interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbep5{}; 
        namespace Usbep5ValC{
        }
        ///USB ch.0 function endpoint 4 DRQ interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbep4{}; 
        namespace Usbep4ValC{
        }
        ///USB ch.0 function endpoint 3 DRQ interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbep3{}; 
        namespace Usbep3ValC{
        }
        ///USB ch.0 function endpoint 2 DRQ interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbep2{}; 
        namespace Usbep2ValC{
        }
        ///USB ch.0 function endpoint 1 DRQ interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbep1{}; 
        namespace Usbep1ValC{
        }
    }
    namespace Noneoddpks{    ///<USB ch.0 Odd Packet Size DMA Enable Register
        using Addr = Register::Address<0x40031010,0xffffffe0,0,unsigned char>;
        ///"If the transfer destination address of DMAC is USB.EP5DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oddpks4{}; 
        namespace Oddpks4ValC{
        }
        ///"If the transfer destination address of DMAC is USB.EP4DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oddpks3{}; 
        namespace Oddpks3ValC{
        }
        ///"If the transfer destination address of DMAC is USB.EP3DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oddpks2{}; 
        namespace Oddpks2ValC{
        }
        ///"If the transfer destination address of DMAC is USB.EP2DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddpks1{}; 
        namespace Oddpks1ValC{
        }
        ///"If the transfer destination address of DMAC is USB.EP1DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oddpks0{}; 
        namespace Oddpks0ValC{
        }
    }
    namespace Noneoddpks1{    ///<USB ch.1 Odd Packet Size DMA Enable Register
        using Addr = Register::Address<0x40031014,0xffffffe0,0,unsigned char>;
        ///"If the transfer destination address of DMAC is USB.EP5DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oddpks14{}; 
        namespace Oddpks14ValC{
        }
        ///"If the transfer destination address of DMAC is USB.EP4DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oddpks13{}; 
        namespace Oddpks13ValC{
        }
        ///"If the transfer destination address of DMAC is USB.EP3DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oddpks12{}; 
        namespace Oddpks12ValC{
        }
        ///"If the transfer destination address of DMAC is USB.EP2DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddpks11{}; 
        namespace Oddpks11ValC{
        }
        ///"If the transfer destination address of DMAC is USB.EP1DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oddpks10{}; 
        namespace Oddpks10ValC{
        }
    }
    namespace Noneirq003sel{    ///<Relocate Interrupt Selection Register (IRQ003)
        using Addr = Register::Address<0x40031110,0xff00ff00,0,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq004sel{    ///<Relocate Interrupt Selection Register (IRQ004)
        using Addr = Register::Address<0x40031114,0xff00ff00,0,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq005sel{    ///<Relocate Interrupt Selection Register (IRQ005)
        using Addr = Register::Address<0x40031118,0xff00ff00,0,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq006sel{    ///<Relocate Interrupt Selection Register (IRQ006)
        using Addr = Register::Address<0x4003111c,0xff00ff00,0,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq007sel{    ///<Relocate Interrupt Selection Register (IRQ007)
        using Addr = Register::Address<0x40031120,0xff00ff00,0,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq008sel{    ///<Relocate Interrupt Selection Register (IRQ008)
        using Addr = Register::Address<0x40031124,0xff00ff00,0,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq009sel{    ///<Relocate Interrupt Selection Register (IRQ009)
        using Addr = Register::Address<0x40031128,0xff00ff00,0,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneirq010sel{    ///<Relocate Interrupt Selection Register (IRQ010)
        using Addr = Register::Address<0x4003112c,0xff00ff00,0,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        namespace SelbitValC{
        }
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
        namespace SelirqValC{
        }
    }
    namespace Noneexc02mon{    ///<EXC02 batch read register
        using Addr = Register::Address<0x40031200,0xfffffffc,0,unsigned>;
        ///Interrupt request of the hardware watchdog timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hwint{}; 
        namespace HwintValC{
        }
        ///Interrupt request of the NMIX external pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmi{}; 
        namespace NmiValC{
        }
    }
    namespace Noneirq000mon{    ///<IRQ000 Batch Read Register
        using Addr = Register::Address<0x40031204,0xfffffffe,0,unsigned>;
        ///Interrupt request of the anomalous frequency detected by the CSV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fcsint{}; 
        namespace FcsintValC{
        }
    }
    namespace Noneirq001mon{    ///<IRQ001 Batch Read Register
        using Addr = Register::Address<0x40031208,0xfffffffe,0,unsigned>;
        ///interrupt request of the software watchdog timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swwdtint{}; 
        namespace SwwdtintValC{
        }
    }
    namespace Noneirq002mon{    ///<IRQ002 Batch Read Register
        using Addr = Register::Address<0x4003120c,0xfffffffe,0,unsigned>;
        ///Low-voltage detection (LVD) interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvdint{}; 
        namespace LvdintValC{
        }
    }
    namespace Noneirq003mon{    ///<IRQ003 Batch Read Register
        using Addr = Register::Address<0x40031210,0xffffff00,0,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        ///interrupt request of the interrupt selected in bit6 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        ///interrupt request of the interrupt selected in bit5 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        ///interrupt request of the interrupt selected in bit4 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        ///interrupt request of the interrupt selected in bit3 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        ///interrupt request of the interrupt selected in bit2 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        ///interrupt request of the interrupt selected in bit1 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        ///interrupt request of the interrupt selected in bit0 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq004mon{    ///<IRQ004 Batch Read Register
        using Addr = Register::Address<0x40031214,0xffffff00,0,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        ///interrupt request of the interrupt selected in bit6 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        ///interrupt request of the interrupt selected in bit5 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        ///interrupt request of the interrupt selected in bit4 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        ///interrupt request of the interrupt selected in bit3 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        ///interrupt request of the interrupt selected in bit2 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        ///interrupt request of the interrupt selected in bit1 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        ///interrupt request of the interrupt selected in bit0 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq005mon{    ///<IRQ005 Batch Read Register
        using Addr = Register::Address<0x40031218,0xffffff00,0,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        ///interrupt request of the interrupt selected in bit6 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        ///interrupt request of the interrupt selected in bit5 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        ///interrupt request of the interrupt selected in bit4 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        ///interrupt request of the interrupt selected in bit3 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        ///interrupt request of the interrupt selected in bit2 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        ///interrupt request of the interrupt selected in bit1 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        ///interrupt request of the interrupt selected in bit0 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq006mon{    ///<IRQ006 Batch Read Register
        using Addr = Register::Address<0x4003121c,0xffffff00,0,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        ///interrupt request of the interrupt selected in bit6 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        ///interrupt request of the interrupt selected in bit5 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        ///interrupt request of the interrupt selected in bit4 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        ///interrupt request of the interrupt selected in bit3 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        ///interrupt request of the interrupt selected in bit2 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        ///interrupt request of the interrupt selected in bit1 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        ///interrupt request of the interrupt selected in bit0 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq007mon{    ///<IRQ007 Batch Read Register
        using Addr = Register::Address<0x40031220,0xffffff00,0,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        ///interrupt request of the interrupt selected in bit6 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        ///interrupt request of the interrupt selected in bit5 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        ///interrupt request of the interrupt selected in bit4 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        ///interrupt request of the interrupt selected in bit3 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        ///interrupt request of the interrupt selected in bit2 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        ///interrupt request of the interrupt selected in bit1 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        ///interrupt request of the interrupt selected in bit0 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq008mon{    ///<IRQ008 Batch Read Register
        using Addr = Register::Address<0x40031224,0xffffff00,0,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        ///interrupt request of the interrupt selected in bit6 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        ///interrupt request of the interrupt selected in bit5 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        ///interrupt request of the interrupt selected in bit4 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        ///interrupt request of the interrupt selected in bit3 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        ///interrupt request of the interrupt selected in bit2 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        ///interrupt request of the interrupt selected in bit1 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        ///interrupt request of the interrupt selected in bit0 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq009mon{    ///<IRQ009 Batch Read Register
        using Addr = Register::Address<0x40031228,0xffffff00,0,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        ///interrupt request of the interrupt selected in bit6 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        ///interrupt request of the interrupt selected in bit5 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        ///interrupt request of the interrupt selected in bit4 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        ///interrupt request of the interrupt selected in bit3 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        ///interrupt request of the interrupt selected in bit2 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        ///interrupt request of the interrupt selected in bit1 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        ///interrupt request of the interrupt selected in bit0 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq010mon{    ///<IRQ010 Batch Read Register
        using Addr = Register::Address<0x4003122c,0xffffff00,0,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> irqbit7{}; 
        namespace Irqbit7ValC{
        }
        ///interrupt request of the interrupt selected in bit6 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> irqbit6{}; 
        namespace Irqbit6ValC{
        }
        ///interrupt request of the interrupt selected in bit5 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> irqbit5{}; 
        namespace Irqbit5ValC{
        }
        ///interrupt request of the interrupt selected in bit4 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> irqbit4{}; 
        namespace Irqbit4ValC{
        }
        ///interrupt request of the interrupt selected in bit3 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> irqbit3{}; 
        namespace Irqbit3ValC{
        }
        ///interrupt request of the interrupt selected in bit2 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqbit2{}; 
        namespace Irqbit2ValC{
        }
        ///interrupt request of the interrupt selected in bit1 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irqbit1{}; 
        namespace Irqbit1ValC{
        }
        ///interrupt request of the interrupt selected in bit0 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irqbit0{}; 
        namespace Irqbit0ValC{
        }
    }
    namespace Noneirq011mon{    ///<IRQ011 Batch Read Register
        using Addr = Register::Address<0x40031230,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq012mon{    ///<IRQ012 Batch Read Register
        using Addr = Register::Address<0x40031234,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq013mon{    ///<IRQ013 Batch Read Register
        using Addr = Register::Address<0x40031238,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq014mon{    ///<IRQ014 Batch Read Register
        using Addr = Register::Address<0x4003123c,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq015mon{    ///<IRQ015 Batch Read Register
        using Addr = Register::Address<0x40031240,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq016mon{    ///<IRQ016 Batch Read Register
        using Addr = Register::Address<0x40031244,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq017mon{    ///<IRQ017 Batch Read Register
        using Addr = Register::Address<0x40031248,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq018mon{    ///<IRQ018 Batch Read Register
        using Addr = Register::Address<0x4003124c,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq019mon{    ///<IRQ019 Batch Read Register
        using Addr = Register::Address<0x40031250,0xffffffc0,0,unsigned>;
        ///PC match and RC match interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qudint5{}; 
        namespace Qudint5ValC{
        }
        ///Out-of-range interrupt request of QPRC ch.0QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qudint4{}; 
        namespace Qudint4ValC{
        }
        ///Count inversion interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qudint3{}; 
        namespace Qudint3ValC{
        }
        ///Overflow / underflow / zero index interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qudint2{}; 
        namespace Qudint2ValC{
        }
        ///PC and RC match interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qudint1{}; 
        namespace Qudint1ValC{
        }
        ///PC match interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qudint0{}; 
        namespace Qudint0ValC{
        }
    }
    namespace Noneirq020mon{    ///<IRQ020 Batch Read Register
        using Addr = Register::Address<0x40031254,0xffffffc0,0,unsigned>;
        ///PC match and RC match interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qudint5{}; 
        namespace Qudint5ValC{
        }
        ///Out-of-range interrupt request of QPRC ch.1QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qudint4{}; 
        namespace Qudint4ValC{
        }
        ///Count inversion interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qudint3{}; 
        namespace Qudint3ValC{
        }
        ///Overflow / underflow / zero index interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qudint2{}; 
        namespace Qudint2ValC{
        }
        ///PC and RC match interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qudint1{}; 
        namespace Qudint1ValC{
        }
        ///PC match interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qudint0{}; 
        namespace Qudint0ValC{
        }
    }
    namespace Noneirq021mon{    ///<IRQ021 Batch Read Register
        using Addr = Register::Address<0x40031258,0xfffffff0,0,unsigned>;
        ///Interrupt request of WFG timer 54 of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> waveint3{}; 
        namespace Waveint3ValC{
        }
        ///Interrupt request of WFG timer 32 of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> waveint2{}; 
        namespace Waveint2ValC{
        }
        ///Interrupt request of WFG timer 10 of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> waveint1{}; 
        namespace Waveint1ValC{
        }
        ///Interrupt request of the DTIF (motor emergency stop) of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> waveint0{}; 
        namespace Waveint0ValC{
        }
    }
    namespace Noneirq022mon{    ///<IRQ022 Batch Read Register
        using Addr = Register::Address<0x4003125c,0xfffffff0,0,unsigned>;
        ///Interrupt request of WFG timer 54 of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> waveint3{}; 
        namespace Waveint3ValC{
        }
        ///Interrupt request of WFG timer 32 of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> waveint2{}; 
        namespace Waveint2ValC{
        }
        ///Interrupt request of WFG timer 10 of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> waveint1{}; 
        namespace Waveint1ValC{
        }
        ///Interrupt request of the DTIF (motor emergency stop) of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> waveint0{}; 
        namespace Waveint0ValC{
        }
    }
    namespace Noneirq023mon{    ///<IRQ023 Batch Read Register
        using Addr = Register::Address<0x40031260,0xfffffff0,0,unsigned>;
        ///Interrupt request of WFG timer 54 of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> waveint3{}; 
        namespace Waveint3ValC{
        }
        ///Interrupt request of WFG timer 32 of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> waveint2{}; 
        namespace Waveint2ValC{
        }
        ///Interrupt request of WFG timer 10 of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> waveint1{}; 
        namespace Waveint1ValC{
        }
        ///Interrupt request of the DTIF (motor emergency stop) of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> waveint0{}; 
        namespace Waveint0ValC{
        }
    }
    namespace Noneirq024mon{    ///<IRQ024 Batch Read Register
        using Addr = Register::Address<0x40031264,0xfffffff8,0,unsigned>;
        ///FRT ch.2 peak value detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtPeakInt2{}; 
        namespace Frtpeakint2ValC{
        }
        ///FRT ch.1 peak value detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtPeakInt1{}; 
        namespace Frtpeakint1ValC{
        }
        ///FRT ch.0 peak value detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtPeakInt0{}; 
        namespace Frtpeakint0ValC{
        }
    }
    namespace Noneirq025mon{    ///<IRQ025 Batch Read Register
        using Addr = Register::Address<0x40031268,0xfffffff8,0,unsigned>;
        ///FRT ch.2 zero detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtZeroInt2{}; 
        namespace Frtzeroint2ValC{
        }
        ///FRT ch.1 zero detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtZeroInt1{}; 
        namespace Frtzeroint1ValC{
        }
        ///FRT ch.0 zero detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtZeroInt0{}; 
        namespace Frtzeroint0ValC{
        }
    }
    namespace Noneirq026mon{    ///<IRQ026 Batch Read Register
        using Addr = Register::Address<0x4003126c,0xfffffff0,0,unsigned>;
        ///ICU ch.3 input edge detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icuint3{}; 
        namespace Icuint3ValC{
        }
        ///ICU ch.2 input edge detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icuint2{}; 
        namespace Icuint2ValC{
        }
        ///ICU ch.1 input edge detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icuint1{}; 
        namespace Icuint1ValC{
        }
        ///ICU ch.0 input edge detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icuint0{}; 
        namespace Icuint0ValC{
        }
    }
    namespace Noneirq027mon{    ///<IRQ027 Batch Read Register
        using Addr = Register::Address<0x40031270,0xffffffc0,0,unsigned>;
        ///OCU ch.5 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocuint5{}; 
        namespace Ocuint5ValC{
        }
        ///OCU ch.4 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocuint4{}; 
        namespace Ocuint4ValC{
        }
        ///OCU ch.3 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocuint3{}; 
        namespace Ocuint3ValC{
        }
        ///OCU ch.2 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocuint2{}; 
        namespace Ocuint2ValC{
        }
        ///OCU ch.1 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocuint1{}; 
        namespace Ocuint1ValC{
        }
        ///OCU ch.0 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocuint0{}; 
        namespace Ocuint0ValC{
        }
    }
    namespace Noneirq028mon{    ///<IRQ028 Batch Read Register
        using Addr = Register::Address<0x40031274,0xfffffff8,0,unsigned>;
        ///FRT ch.2 peak value detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtPeakInt2{}; 
        namespace Frtpeakint2ValC{
        }
        ///FRT ch.1 peak value detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtPeakInt1{}; 
        namespace Frtpeakint1ValC{
        }
        ///FRT ch.0 peak value detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtPeakInt0{}; 
        namespace Frtpeakint0ValC{
        }
    }
    namespace Noneirq029mon{    ///<IRQ029 Batch Read Register
        using Addr = Register::Address<0x40031278,0xfffffff8,0,unsigned>;
        ///FRT ch.2 zero detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtZeroInt2{}; 
        namespace Frtzeroint2ValC{
        }
        ///FRT ch.1 zero detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtZeroInt1{}; 
        namespace Frtzeroint1ValC{
        }
        ///FRT ch.0 zero detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtZeroInt0{}; 
        namespace Frtzeroint0ValC{
        }
    }
    namespace Noneirq030mon{    ///<IRQ030 Batch Read Register
        using Addr = Register::Address<0x4003127c,0xfffffff0,0,unsigned>;
        ///ICU ch.3 input edge detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icuint3{}; 
        namespace Icuint3ValC{
        }
        ///ICU ch.2 input edge detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icuint2{}; 
        namespace Icuint2ValC{
        }
        ///ICU ch.1 input edge detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icuint1{}; 
        namespace Icuint1ValC{
        }
        ///ICU ch.0 input edge detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icuint0{}; 
        namespace Icuint0ValC{
        }
    }
    namespace Noneirq031mon{    ///<IRQ031 Batch Read Register
        using Addr = Register::Address<0x40031280,0xffffffc0,0,unsigned>;
        ///OCU ch.5 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocuint5{}; 
        namespace Ocuint5ValC{
        }
        ///OCU ch.4 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocuint4{}; 
        namespace Ocuint4ValC{
        }
        ///OCU ch.3 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocuint3{}; 
        namespace Ocuint3ValC{
        }
        ///OCU ch.2 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocuint2{}; 
        namespace Ocuint2ValC{
        }
        ///OCU ch.1 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocuint1{}; 
        namespace Ocuint1ValC{
        }
        ///OCU ch.0 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocuint0{}; 
        namespace Ocuint0ValC{
        }
    }
    namespace Noneirq032mon{    ///<IRQ032 Batch Read Register
        using Addr = Register::Address<0x40031284,0xfffffff8,0,unsigned>;
        ///FRT ch.2 peak value detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtPeakInt2{}; 
        namespace Frtpeakint2ValC{
        }
        ///FRT ch.1 peak value detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtPeakInt1{}; 
        namespace Frtpeakint1ValC{
        }
        ///FRT ch.0 peak value detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtPeakInt0{}; 
        namespace Frtpeakint0ValC{
        }
    }
    namespace Noneirq033mon{    ///<IRQ033 Batch Read Register
        using Addr = Register::Address<0x40031288,0xfffffff8,0,unsigned>;
        ///FRT ch.2 zero detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> frtZeroInt2{}; 
        namespace Frtzeroint2ValC{
        }
        ///FRT ch.1 zero detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> frtZeroInt1{}; 
        namespace Frtzeroint1ValC{
        }
        ///FRT ch.0 zero detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> frtZeroInt0{}; 
        namespace Frtzeroint0ValC{
        }
    }
    namespace Noneirq034mon{    ///<IRQ034 Batch Read Register
        using Addr = Register::Address<0x4003128c,0xfffffff0,0,unsigned>;
        ///ICU ch.3 input edge detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> icuint3{}; 
        namespace Icuint3ValC{
        }
        ///ICU ch.2 input edge detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icuint2{}; 
        namespace Icuint2ValC{
        }
        ///ICU ch.1 input edge detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icuint1{}; 
        namespace Icuint1ValC{
        }
        ///ICU ch.0 input edge detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icuint0{}; 
        namespace Icuint0ValC{
        }
    }
    namespace Noneirq035mon{    ///<IRQ035 Batch Read Register
        using Addr = Register::Address<0x40031290,0xffffffc0,0,unsigned>;
        ///OCU ch.5 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ocuint5{}; 
        namespace Ocuint5ValC{
        }
        ///OCU ch.4 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ocuint4{}; 
        namespace Ocuint4ValC{
        }
        ///OCU ch.3 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocuint3{}; 
        namespace Ocuint3ValC{
        }
        ///OCU ch.2 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ocuint2{}; 
        namespace Ocuint2ValC{
        }
        ///OCU ch.1 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ocuint1{}; 
        namespace Ocuint1ValC{
        }
        ///OCU ch.0 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ocuint0{}; 
        namespace Ocuint0ValC{
        }
    }
    namespace Noneirq036mon{    ///<IRQ036 Batch Read Register
        using Addr = Register::Address<0x40031294,0xfffffff8,0,unsigned>;
        ///Interrupt request of the PPG ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ppgint2{}; 
        namespace Ppgint2ValC{
        }
        ///Interrupt request of the PPG ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ppgint1{}; 
        namespace Ppgint1ValC{
        }
        ///Interrupt request of the PPG ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ppgint0{}; 
        namespace Ppgint0ValC{
        }
    }
    namespace Noneirq037mon{    ///<IRQ037 Batch Read Register
        using Addr = Register::Address<0x40031298,0xfffffff8,0,unsigned>;
        ///Interrupt request of the PPG ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ppgint2{}; 
        namespace Ppgint2ValC{
        }
        ///Interrupt request of the PPG ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ppgint1{}; 
        namespace Ppgint1ValC{
        }
        ///Interrupt request of the PPG ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ppgint0{}; 
        namespace Ppgint0ValC{
        }
    }
    namespace Noneirq038mon{    ///<IRQ038 Batch Read Register
        using Addr = Register::Address<0x4003129c,0xfffffff8,0,unsigned>;
        ///Interrupt request of the PPG ch.20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ppgint2{}; 
        namespace Ppgint2ValC{
        }
        ///Interrupt request of the PPG ch.18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ppgint1{}; 
        namespace Ppgint1ValC{
        }
        ///Interrupt request of the PPG ch.16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ppgint0{}; 
        namespace Ppgint0ValC{
        }
    }
    namespace Noneirq039mon{    ///<IRQ039 Batch Read Register
        using Addr = Register::Address<0x400312a0,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq040mon{    ///<IRQ040 Batch Read Register
        using Addr = Register::Address<0x400312a4,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq041mon{    ///<IRQ041 Batch Read Register
        using Addr = Register::Address<0x400312a8,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq042mon{    ///<IRQ042 Batch Read Register
        using Addr = Register::Address<0x400312ac,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq043mon{    ///<IRQ043 Batch Read Register
        using Addr = Register::Address<0x400312b0,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq044mon{    ///<IRQ044 Batch Read Register
        using Addr = Register::Address<0x400312b4,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq045mon{    ///<IRQ045 Batch Read Register
        using Addr = Register::Address<0x400312b8,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq046mon{    ///<IRQ046 Batch Read Register
        using Addr = Register::Address<0x400312bc,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq047mon{    ///<IRQ047 Batch Read Register
        using Addr = Register::Address<0x400312c0,0xfffffffc,0,unsigned>;
        ///Dual timer TIMINT2 interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timint2{}; 
        namespace Timint2ValC{
        }
        ///Dual timer TIMINT1 interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timint1{}; 
        namespace Timint1ValC{
        }
    }
    namespace Noneirq048mon{    ///<IRQ048 Batch Read Register
        using Addr = Register::Address<0x400312c4,0xfffffffe,0,unsigned>;
        ///Interrupt request of the watch counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wcint{}; 
        namespace WcintValC{
        }
    }
    namespace Noneirq049mon{    ///<IRQ049 Batch Read Register
        using Addr = Register::Address<0x400312c8,0xfffffffe,0,unsigned>;
        ///External bus output error interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bmemcs{}; 
        namespace BmemcsValC{
        }
    }
    namespace Noneirq050mon{    ///<IRQ050 Batch Read Register
        using Addr = Register::Address<0x400312cc,0xfffffffe,0,unsigned>;
        ///Interrupt request of the RTC$
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtcint{}; 
        namespace RtcintValC{
        }
    }
    namespace Noneirq051mon{    ///<IRQ051 Batch Read Register
        using Addr = Register::Address<0x400312d0,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq052mon{    ///<IRQ052 Batch Read Register
        using Addr = Register::Address<0x400312d4,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq053mon{    ///<IRQ053 Batch Read Register
        using Addr = Register::Address<0x400312d8,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq054mon{    ///<IRQ054 Batch Read Register
        using Addr = Register::Address<0x400312dc,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq055mon{    ///<IRQ055 Batch Read Register
        using Addr = Register::Address<0x400312e0,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq056mon{    ///<IRQ056 Batch Read Register
        using Addr = Register::Address<0x400312e4,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq057mon{    ///<IRQ057 Batch Read Register
        using Addr = Register::Address<0x400312e8,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq058mon{    ///<IRQ058 Batch Read Register
        using Addr = Register::Address<0x400312ec,0xfffffffe,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint{}; 
        namespace ExtintValC{
        }
    }
    namespace Noneirq059mon{    ///<IRQ059 Batch Read Register
        using Addr = Register::Address<0x400312f0,0xffffffe0,0,unsigned>;
        ///PLL of I2S oscillation stabilization wait completion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ipllint{}; 
        namespace IpllintValC{
        }
        ///PLL of USB / Ethernet oscillation stabilization wait completion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> upllint{}; 
        namespace UpllintValC{
        }
        ///Main PLL oscillation stabilization wait completion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mpllint{}; 
        namespace MpllintValC{
        }
        ///Sub clock oscillation stabilization wait completion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soscint{}; 
        namespace SoscintValC{
        }
        ///Main clock oscillation stabilization wait completion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscint{}; 
        namespace MoscintValC{
        }
    }
    namespace Noneirq060mon{    ///<IRQ060 Batch Read Register
        using Addr = Register::Address<0x400312f4,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq061mon{    ///<IRQ061 Batch Read Register
        using Addr = Register::Address<0x400312f8,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq062mon{    ///<IRQ062 Batch Read Register
        using Addr = Register::Address<0x400312fc,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq063mon{    ///<IRQ063 Batch Read Register
        using Addr = Register::Address<0x40031300,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq064mon{    ///<IRQ064 Batch Read Register
        using Addr = Register::Address<0x40031304,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq065mon{    ///<IRQ065 Batch Read Register
        using Addr = Register::Address<0x40031308,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq066mon{    ///<IRQ066 Batch Read Register
        using Addr = Register::Address<0x4003130c,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq067mon{    ///<IRQ067 Batch Read Register
        using Addr = Register::Address<0x40031310,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq068mon{    ///<IRQ068 Batch Read Register
        using Addr = Register::Address<0x40031314,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq069mon{    ///<IRQ069 Batch Read Register
        using Addr = Register::Address<0x40031318,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq070mon{    ///<IRQ070 Batch Read Register
        using Addr = Register::Address<0x4003131c,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq071mon{    ///<IRQ071 Batch Read Register
        using Addr = Register::Address<0x40031320,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq072mon{    ///<IRQ072 Batch Read Register
        using Addr = Register::Address<0x40031324,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq073mon{    ///<IRQ073 Batch Read Register
        using Addr = Register::Address<0x40031328,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq074mon{    ///<IRQ074 Batch Read Register
        using Addr = Register::Address<0x4003132c,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq075mon{    ///<IRQ075 Batch Read Register
        using Addr = Register::Address<0x40031330,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq076mon{    ///<IRQ076 Batch Read Register
        using Addr = Register::Address<0x40031334,0xffffffe0,0,unsigned>;
        ///Range comparison result interrupt request of the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adcint4{}; 
        namespace Adcint4ValC{
        }
        ///Conversion result comparison interrupt request of the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        namespace Adcint3ValC{
        }
        ///FIFO overrun interrupt request of the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        namespace Adcint2ValC{
        }
        ///Scan conversion interrupt request of the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        namespace Adcint1ValC{
        }
        ///Priority conversion interrupt request of the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
        namespace Adcint0ValC{
        }
    }
    namespace Noneirq077mon{    ///<IRQ077 Batch Read Register
        using Addr = Register::Address<0x40031338,0xffffffe0,0,unsigned>;
        ///Range comparison result interrupt request of the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adcint4{}; 
        namespace Adcint4ValC{
        }
        ///Conversion result comparison interrupt request of the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        namespace Adcint3ValC{
        }
        ///FIFO overrun interrupt request of the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        namespace Adcint2ValC{
        }
        ///Scan conversion interrupt request of the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        namespace Adcint1ValC{
        }
        ///Priority conversion interrupt request of the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
        namespace Adcint0ValC{
        }
    }
    namespace Noneirq078mon{    ///<IRQ078 Batch Read Register
        using Addr = Register::Address<0x4003133c,0xffffffe0,0,unsigned>;
        ///Endpoint 5 DRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbDrqInt4{}; 
        namespace Usbdrqint4ValC{
        }
        ///Endpoint 4 DRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbDrqInt3{}; 
        namespace Usbdrqint3ValC{
        }
        ///Endpoint 3 DRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbDrqInt2{}; 
        namespace Usbdrqint2ValC{
        }
        ///Endpoint 2 DRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbDrqInt1{}; 
        namespace Usbdrqint1ValC{
        }
        ///Endpoint 1 DRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbDrqInt0{}; 
        namespace Usbdrqint0ValC{
        }
    }
    namespace Noneirq079mon{    ///<IRQ079 Batch Read Register
        using Addr = Register::Address<0x40031340,0xffffffc0,0,unsigned>;
        ///SOFIRQ/CMPIRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usbInt5{}; 
        namespace Usbint5ValC{
        }
        ///DIRQ/URPIRQ/RWKIRQ/CNNIRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbInt4{}; 
        namespace Usbint4ValC{
        }
        ///SPK interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbInt3{}; 
        namespace Usbint3ValC{
        }
        ///SUSP/SOF/BRST/CONF/WKUP interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbInt2{}; 
        namespace Usbint2ValC{
        }
        ///Endpoint 0 DRQO interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbInt1{}; 
        namespace Usbint1ValC{
        }
        ///Endpoint 0 DRQI interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbInt0{}; 
        namespace Usbint0ValC{
        }
    }
    namespace Noneirq080mon{    ///<IRQ080 Batch Read Register
        using Addr = Register::Address<0x40031344,0xfffffffe,0,unsigned>;
        ///Interrupt request of the CAN ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> canint{}; 
        namespace CanintValC{
        }
    }
    namespace Noneirq081mon{    ///<IRQ081 Batch Read Register
        using Addr = Register::Address<0x40031348,0xffffffe0,0,unsigned>;
        ///CAN-FD 1 interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> can1int{}; 
        namespace Can1intValC{
        }
        ///CAN-FD 0 interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> can0int{}; 
        namespace Can0intValC{
        }
        ///Single bit error interrupt request of the CAN-FD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> canseint{}; 
        namespace CanseintValC{
        }
        ///Double bit error interrupt request of the CAN-FD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> candeint{}; 
        namespace CandeintValC{
        }
        ///Interrupt request of the CAN ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> canint{}; 
        namespace CanintValC{
        }
    }
    namespace Noneirq082mon{    ///<IRQ082 Batch Read Register
        using Addr = Register::Address<0x4003134c,0xfffffff8,0,unsigned>;
        ///LPI interrupt request of the Ethernet MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maclpi{}; 
        namespace MaclpiValC{
        }
        ///PMT interrupt request of the Ethernet MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> macpmt{}; 
        namespace MacpmtValC{
        }
        ///SBD interrupt request of the Ethernet MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> macsbd{}; 
        namespace MacsbdValC{
        }
    }
    namespace Noneirq083mon{    ///<IRQ083 Batch Read Register
        using Addr = Register::Address<0x40031350,0xfffffffe,0,unsigned>;
        ///Interrupt request of the DMAC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq084mon{    ///<IRQ084 Batch Read Register
        using Addr = Register::Address<0x40031354,0xfffffffe,0,unsigned>;
        ///Interrupt request of the DMAC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq085mon{    ///<IRQ085 Batch Read Register
        using Addr = Register::Address<0x40031358,0xfffffffe,0,unsigned>;
        ///Interrupt request of the DMAC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq086mon{    ///<IRQ086 Batch Read Register
        using Addr = Register::Address<0x4003135c,0xfffffffe,0,unsigned>;
        ///Interrupt request of the DMAC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq087mon{    ///<IRQ087 Batch Read Register
        using Addr = Register::Address<0x40031360,0xfffffffe,0,unsigned>;
        ///Interrupt request of the DMAC ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq088mon{    ///<IRQ088 Batch Read Register
        using Addr = Register::Address<0x40031364,0xfffffffe,0,unsigned>;
        ///Interrupt request of the DMAC ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq089mon{    ///<IRQ089 Batch Read Register
        using Addr = Register::Address<0x40031368,0xfffffffe,0,unsigned>;
        ///Interrupt request of the DMAC ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq090mon{    ///<IRQ090 Batch Read Register
        using Addr = Register::Address<0x4003136c,0xfffffffe,0,unsigned>;
        ///Interrupt request of the DMAC ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmacint{}; 
        namespace DmacintValC{
        }
    }
    namespace Noneirq091mon{    ///<IRQ091 Batch Read Register
        using Addr = Register::Address<0x40031370,0xfffffffc,0,unsigned>;
        ///DSTC ERINT interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dstcint1{}; 
        namespace Dstcint1ValC{
        }
        ///DSTC SWINT interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dstcint0{}; 
        namespace Dstcint0ValC{
        }
    }
    namespace Noneirq092mon{    ///<IRQ092 Batch Read Register
        using Addr = Register::Address<0x40031374,0xfffffff0,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        ///Interrupt request of the external pin interrupt ch.18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        ///Interrupt request of the external pin interrupt ch.17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        ///Interrupt request of the external pin interrupt ch.16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
    }
    namespace Noneirq093mon{    ///<IRQ093 Batch Read Register
        using Addr = Register::Address<0x40031378,0xfffffff0,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        ///Interrupt request of the external pin interrupt ch.22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        ///Interrupt request of the external pin interrupt ch.21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        ///Interrupt request of the external pin interrupt ch.20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
    }
    namespace Noneirq094mon{    ///<IRQ094 Batch Read Register
        using Addr = Register::Address<0x4003137c,0xfffffff0,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        ///Interrupt request of the external pin interrupt ch.26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        ///Interrupt request of the external pin interrupt ch.25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        ///Interrupt request of the external pin interrupt ch.24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
    }
    namespace Noneirq095mon{    ///<IRQ095 Batch Read Register
        using Addr = Register::Address<0x40031380,0xfffffff0,0,unsigned>;
        ///Interrupt request of the external pin interrupt ch.31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> extint3{}; 
        namespace Extint3ValC{
        }
        ///Interrupt request of the external pin interrupt ch.30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> extint2{}; 
        namespace Extint2ValC{
        }
        ///Interrupt request of the external pin interrupt ch.29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extint1{}; 
        namespace Extint1ValC{
        }
        ///Interrupt request of the external pin interrupt ch.28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> extint0{}; 
        namespace Extint0ValC{
        }
    }
    namespace Noneirq096mon{    ///<IRQ096 Batch Read Register
        using Addr = Register::Address<0x40031384,0xffffffc0,0,unsigned>;
        ///PC match and RC match interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qudint5{}; 
        namespace Qudint5ValC{
        }
        ///Out-of-range interrupt request of QPRC ch.2QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qudint4{}; 
        namespace Qudint4ValC{
        }
        ///Count inversion interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qudint3{}; 
        namespace Qudint3ValC{
        }
        ///Overflow / underflow / zero index interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qudint2{}; 
        namespace Qudint2ValC{
        }
        ///PC and RC match interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qudint1{}; 
        namespace Qudint1ValC{
        }
        ///PC match interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qudint0{}; 
        namespace Qudint0ValC{
        }
    }
    namespace Noneirq097mon{    ///<IRQ097 Batch Read Register
        using Addr = Register::Address<0x40031388,0xffffffc0,0,unsigned>;
        ///PC match and RC match interrupt request of QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> qudint5{}; 
        namespace Qudint5ValC{
        }
        ///Out-of-range interrupt request of QPRC ch.3QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> qudint4{}; 
        namespace Qudint4ValC{
        }
        ///Count inversion interrupt request of QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qudint3{}; 
        namespace Qudint3ValC{
        }
        ///Overflow / underflow / zero index interrupt request of QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qudint2{}; 
        namespace Qudint2ValC{
        }
        ///PC and RC match interrupt request of QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qudint1{}; 
        namespace Qudint1ValC{
        }
        ///PC match interrupt request of QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qudint0{}; 
        namespace Qudint0ValC{
        }
    }
    namespace Noneirq098mon{    ///<IRQ098 Batch Read Register
        using Addr = Register::Address<0x4003138c,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq099mon{    ///<IRQ099 Batch Read Register
        using Addr = Register::Address<0x40031390,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq100mon{    ///<IRQ100 Batch Read Register
        using Addr = Register::Address<0x40031394,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq101mon{    ///<IRQ101 Batch Read Register
        using Addr = Register::Address<0x40031398,0xfffffffc,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq102mon{    ///<IRQ102 Batch Read Register
        using Addr = Register::Address<0x4003139c,0xffffff00,0,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btint7{}; 
        namespace Btint7ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btint6{}; 
        namespace Btint6ValC{
        }
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btint5{}; 
        namespace Btint5ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btint4{}; 
        namespace Btint4ValC{
        }
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btint3{}; 
        namespace Btint3ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btint2{}; 
        namespace Btint2ValC{
        }
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btint1{}; 
        namespace Btint1ValC{
        }
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btint0{}; 
        namespace Btint0ValC{
        }
    }
    namespace Noneirq103mon{    ///<IRQ103 Batch Read Register
        using Addr = Register::Address<0x400313a0,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq104mon{    ///<IRQ104 Batch Read Register
        using Addr = Register::Address<0x400313a4,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq105mon{    ///<IRQ105 Batch Read Register
        using Addr = Register::Address<0x400313a8,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq106mon{    ///<IRQ106 Batch Read Register
        using Addr = Register::Address<0x400313ac,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq107mon{    ///<IRQ107 Batch Read Register
        using Addr = Register::Address<0x400313b0,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq108mon{    ///<IRQ108 Batch Read Register
        using Addr = Register::Address<0x400313b4,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq109mon{    ///<IRQ109 Batch Read Register
        using Addr = Register::Address<0x400313b8,0xfffffffe,0,unsigned>;
        ///Reception interrupt request of the MFS ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq110mon{    ///<IRQ110 Batch Read Register
        using Addr = Register::Address<0x400313bc,0xfffffffc,0,unsigned>;
        ///Status interrupt request of the MFS ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///Transmission interrupt request of the MFS ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq111mon{    ///<IRQ111 Batch Read Register
        using Addr = Register::Address<0x400313c0,0xffffffe0,0,unsigned>;
        ///Range comparison result interrupt request of the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adcint4{}; 
        namespace Adcint4ValC{
        }
        ///Conversion result comparison interrupt request of the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adcint3{}; 
        namespace Adcint3ValC{
        }
        ///FIFO overrun interrupt request of the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adcint2{}; 
        namespace Adcint2ValC{
        }
        ///Scan conversion interrupt request of the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adcint1{}; 
        namespace Adcint1ValC{
        }
        ///Priority conversion interrupt request of the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adcint0{}; 
        namespace Adcint0ValC{
        }
    }
    namespace Noneirq112mon{    ///<IRQ112 Batch Read Register
        using Addr = Register::Address<0x400313c4,0xffffffc0,0,unsigned>;
        ///Interrupt request of DSTC transfer end interrupt of CAN-FD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> candint{}; 
        namespace CandintValC{
        }
        ///Interrupt request of DSTC transfer end interrupt of Programmable CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pcrcdint{}; 
        namespace PcrcdintValC{
        }
        ///Interrupt request of DSTC transfer end interrupt of Quad SPI(transmission)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> qspidint1{}; 
        namespace Qspidint1ValC{
        }
        ///Interrupt request of DSTC transfer end interrupt of Quad SPI(reception)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qspidint0{}; 
        namespace Qspidint0ValC{
        }
        ///Interrupt request of DSTC transfer end interrupt of I2S(transmission)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> i2sdint1{}; 
        namespace I2sdint1ValC{
        }
        ///Interrupt request of DSTC transfer end interrupt of I2S(reception)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2sdint0{}; 
        namespace I2sdint0ValC{
        }
    }
    namespace Noneirq113mon{    ///<IRQ113 Batch Read Register
        using Addr = Register::Address<0x400313c8,0xffffffc0,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rcec0int{}; 
        namespace Rcec0intValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbDrqInt4{}; 
        namespace Usbdrqint4ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbDrqInt3{}; 
        namespace Usbdrqint3ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbDrqInt2{}; 
        namespace Usbdrqint2ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbDrqInt1{}; 
        namespace Usbdrqint1ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbDrqInt0{}; 
        namespace Usbdrqint0ValC{
        }
    }
    namespace Noneirq114mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313cc,0xffffff80,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcec1int{}; 
        namespace Rcec1intValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usbInt5{}; 
        namespace Usbint5ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbInt4{}; 
        namespace Usbint4ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbInt3{}; 
        namespace Usbint3ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbInt2{}; 
        namespace Usbint2ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbInt1{}; 
        namespace Usbint1ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbInt0{}; 
        namespace Usbint0ValC{
        }
    }
    namespace Noneirq115mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313d0,0xfffffff8,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> qspiint2{}; 
        namespace Qspiint2ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> qspiint1{}; 
        namespace Qspiint1ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> qspiint0{}; 
        namespace Qspiint0ValC{
        }
    }
    namespace Noneirq116mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313d4,0xffffffff,0,unsigned>;
    }
    namespace Noneirq117mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313d8,0xfffffffc,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prgcrc{}; 
        namespace PrgcrcValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2sint{}; 
        namespace I2sintValC{
        }
    }
    namespace Noneirq118mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313dc,0xfffffffc,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sdint1{}; 
        namespace Sdint1ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sdint0{}; 
        namespace Sdint0ValC{
        }
    }
    namespace Noneirq119mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313e0,0xfffffffe,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> flint{}; 
        namespace FlintValC{
        }
    }
    namespace Noneirq120mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313e4,0xfffffffe,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq121mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313e8,0xfffffffc,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq122mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313ec,0xfffffffe,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq123mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313f0,0xfffffffc,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq124mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313f4,0xfffffffe,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq125mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313f8,0xfffffffc,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
    namespace Noneirq126mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313fc,0xfffffffe,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrint{}; 
        namespace MfsrintValC{
        }
    }
    namespace Noneirq127mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x40031400,0xfffffffc,0,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsint1{}; 
        namespace Mfsint1ValC{
        }
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsint0{}; 
        namespace Mfsint0ValC{
        }
    }
}
