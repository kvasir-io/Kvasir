#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Interrupts
    namespace IntreqDrqsel{    ///<DMA Request Selection Register
        using Addr = Register::Address<0x40031000,0x00000000,0x00000000,unsigned>;
        ///External pin interrupt ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> exint3{}; 
        ///External pin interrupt ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> exint2{}; 
        ///External pin interrupt ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> exint1{}; 
        ///External pin interrupt ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> exint0{}; 
        ///MFS ch.7 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> mfs7tx{}; 
        ///MFS ch.7 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> mfs7rx{}; 
        ///MFS ch.6 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> mfs6tx{}; 
        ///MFS ch.6 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mfs6rx{}; 
        ///MFS ch.5 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mfs5tx{}; 
        ///MFS ch.5 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mfs5rx{}; 
        ///MFS ch.4 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mfs4tx{}; 
        ///MFS ch.4 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mfs4rx{}; 
        ///MFS ch.3 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mfs3tx{}; 
        ///MFS ch.3 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mfs3rx{}; 
        ///MFS ch.2 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mfs2tx{}; 
        ///MFS ch.2 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mfs2rx{}; 
        ///MFS ch.1 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfs1tx{}; 
        ///MFS ch.1 reception interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfs1rx{}; 
        ///MFS ch.0 transmission interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfs0tx{}; 
        ///MFS ch.0 reception interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfs0rx{}; 
        ///Base timer ch.6 source 0 (IRQ0) interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> irq0bt6{}; 
        ///Base timer ch.4 source 0 (IRQ0) interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> irq0bt4{}; 
        ///Base timer ch.2 source 0 (IRQ0) interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> irq0bt2{}; 
        ///Base timer ch.6 source 0 (IRQ0) interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> irq0bt0{}; 
        ///A/D converter unit 2 scan conversion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adcscan2{}; 
        ///A/D converter unit 1 scan conversion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> adcscan1{}; 
        ///A/D converter unit 0 scan conversion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> adcscan0{}; 
        ///USB ch.0 function endpoint 5 DRQ interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usbep5{}; 
        ///USB ch.0 function endpoint 4 DRQ interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usbep4{}; 
        ///USB ch.0 function endpoint 3 DRQ interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbep3{}; 
        ///USB ch.0 function endpoint 2 DRQ interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbep2{}; 
        ///USB ch.0 function endpoint 1 DRQ interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbep1{}; 
    }
    namespace IntreqOddpks{    ///<USB ch.0 Odd Packet Size DMA Enable Register
        using Addr = Register::Address<0x40031010,0xffffffe0,0x00000000,unsigned char>;
        ///"If the transfer destination address of DMAC is USB.EP5DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oddpks4{}; 
        ///"If the transfer destination address of DMAC is USB.EP4DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oddpks3{}; 
        ///"If the transfer destination address of DMAC is USB.EP3DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oddpks2{}; 
        ///"If the transfer destination address of DMAC is USB.EP2DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddpks1{}; 
        ///"If the transfer destination address of DMAC is USB.EP1DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oddpks0{}; 
    }
    namespace IntreqOddpks1{    ///<USB ch.1 Odd Packet Size DMA Enable Register
        using Addr = Register::Address<0x40031014,0xffffffe0,0x00000000,unsigned char>;
        ///"If the transfer destination address of DMAC is USB.EP5DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> oddpks14{}; 
        ///"If the transfer destination address of DMAC is USB.EP4DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oddpks13{}; 
        ///"If the transfer destination address of DMAC is USB.EP3DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oddpks12{}; 
        ///"If the transfer destination address of DMAC is USB.EP2DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddpks11{}; 
        ///"If the transfer destination address of DMAC is USB.EP1DT, the bit width of the last transfer data is converted to Byte."
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oddpks10{}; 
    }
    namespace IntreqIrq003sel{    ///<Relocate Interrupt Selection Register (IRQ003)
        using Addr = Register::Address<0x40031110,0xff00ff00,0x00000000,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq004sel{    ///<Relocate Interrupt Selection Register (IRQ004)
        using Addr = Register::Address<0x40031114,0xff00ff00,0x00000000,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq005sel{    ///<Relocate Interrupt Selection Register (IRQ005)
        using Addr = Register::Address<0x40031118,0xff00ff00,0x00000000,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq006sel{    ///<Relocate Interrupt Selection Register (IRQ006)
        using Addr = Register::Address<0x4003111c,0xff00ff00,0x00000000,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq007sel{    ///<Relocate Interrupt Selection Register (IRQ007)
        using Addr = Register::Address<0x40031120,0xff00ff00,0x00000000,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq008sel{    ///<Relocate Interrupt Selection Register (IRQ008)
        using Addr = Register::Address<0x40031124,0xff00ff00,0x00000000,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq009sel{    ///<Relocate Interrupt Selection Register (IRQ009)
        using Addr = Register::Address<0x40031128,0xff00ff00,0x00000000,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqIrq010sel{    ///<Relocate Interrupt Selection Register (IRQ010)
        using Addr = Register::Address<0x4003112c,0xff00ff00,0x00000000,unsigned>;
        ///Bit7 of the interrupt source is moved to bit7 of the relocate interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> selbit{}; 
        ///specify the IRQ no. of a peripheral interrupt to be relocated
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> selirq{}; 
    }
    namespace IntreqExc02mon{    ///<EXC02 batch read register
        using Addr = Register::Address<0x40031200,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of the hardware watchdog timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hwint{}; 
        ///Interrupt request of the NMIX external pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nmi{}; 
    }
    namespace IntreqIrq000mon{    ///<IRQ000 Batch Read Register
        using Addr = Register::Address<0x40031204,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the anomalous frequency detected by the CSV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fcsint{}; 
    }
    namespace IntreqIrq001mon{    ///<IRQ001 Batch Read Register
        using Addr = Register::Address<0x40031208,0xfffffffe,0x00000000,unsigned>;
        ///interrupt request of the software watchdog timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swwdtint{}; 
    }
    namespace IntreqIrq002mon{    ///<IRQ002 Batch Read Register
        using Addr = Register::Address<0x4003120c,0xfffffffe,0x00000000,unsigned>;
        ///Low-voltage detection (LVD) interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdint{}; 
    }
    namespace IntreqIrq003mon{    ///<IRQ003 Batch Read Register
        using Addr = Register::Address<0x40031210,0xffffff00,0x00000000,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        ///interrupt request of the interrupt selected in bit6 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        ///interrupt request of the interrupt selected in bit5 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        ///interrupt request of the interrupt selected in bit4 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        ///interrupt request of the interrupt selected in bit3 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        ///interrupt request of the interrupt selected in bit2 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        ///interrupt request of the interrupt selected in bit1 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        ///interrupt request of the interrupt selected in bit0 of IRQ003SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq004mon{    ///<IRQ004 Batch Read Register
        using Addr = Register::Address<0x40031214,0xffffff00,0x00000000,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        ///interrupt request of the interrupt selected in bit6 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        ///interrupt request of the interrupt selected in bit5 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        ///interrupt request of the interrupt selected in bit4 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        ///interrupt request of the interrupt selected in bit3 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        ///interrupt request of the interrupt selected in bit2 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        ///interrupt request of the interrupt selected in bit1 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        ///interrupt request of the interrupt selected in bit0 of IRQ004SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq005mon{    ///<IRQ005 Batch Read Register
        using Addr = Register::Address<0x40031218,0xffffff00,0x00000000,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        ///interrupt request of the interrupt selected in bit6 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        ///interrupt request of the interrupt selected in bit5 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        ///interrupt request of the interrupt selected in bit4 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        ///interrupt request of the interrupt selected in bit3 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        ///interrupt request of the interrupt selected in bit2 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        ///interrupt request of the interrupt selected in bit1 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        ///interrupt request of the interrupt selected in bit0 of IRQ005SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq006mon{    ///<IRQ006 Batch Read Register
        using Addr = Register::Address<0x4003121c,0xffffff00,0x00000000,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        ///interrupt request of the interrupt selected in bit6 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        ///interrupt request of the interrupt selected in bit5 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        ///interrupt request of the interrupt selected in bit4 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        ///interrupt request of the interrupt selected in bit3 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        ///interrupt request of the interrupt selected in bit2 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        ///interrupt request of the interrupt selected in bit1 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        ///interrupt request of the interrupt selected in bit0 of IRQ006SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq007mon{    ///<IRQ007 Batch Read Register
        using Addr = Register::Address<0x40031220,0xffffff00,0x00000000,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        ///interrupt request of the interrupt selected in bit6 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        ///interrupt request of the interrupt selected in bit5 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        ///interrupt request of the interrupt selected in bit4 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        ///interrupt request of the interrupt selected in bit3 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        ///interrupt request of the interrupt selected in bit2 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        ///interrupt request of the interrupt selected in bit1 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        ///interrupt request of the interrupt selected in bit0 of IRQ007SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq008mon{    ///<IRQ008 Batch Read Register
        using Addr = Register::Address<0x40031224,0xffffff00,0x00000000,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        ///interrupt request of the interrupt selected in bit6 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        ///interrupt request of the interrupt selected in bit5 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        ///interrupt request of the interrupt selected in bit4 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        ///interrupt request of the interrupt selected in bit3 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        ///interrupt request of the interrupt selected in bit2 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        ///interrupt request of the interrupt selected in bit1 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        ///interrupt request of the interrupt selected in bit0 of IRQ008SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq009mon{    ///<IRQ009 Batch Read Register
        using Addr = Register::Address<0x40031228,0xffffff00,0x00000000,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        ///interrupt request of the interrupt selected in bit6 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        ///interrupt request of the interrupt selected in bit5 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        ///interrupt request of the interrupt selected in bit4 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        ///interrupt request of the interrupt selected in bit3 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        ///interrupt request of the interrupt selected in bit2 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        ///interrupt request of the interrupt selected in bit1 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        ///interrupt request of the interrupt selected in bit0 of IRQ009SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq010mon{    ///<IRQ010 Batch Read Register
        using Addr = Register::Address<0x4003122c,0xffffff00,0x00000000,unsigned>;
        ///interrupt request of the interrupt selected in bit7 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit7{}; 
        ///interrupt request of the interrupt selected in bit6 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit6{}; 
        ///interrupt request of the interrupt selected in bit5 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit5{}; 
        ///interrupt request of the interrupt selected in bit4 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit4{}; 
        ///interrupt request of the interrupt selected in bit3 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit3{}; 
        ///interrupt request of the interrupt selected in bit2 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit2{}; 
        ///interrupt request of the interrupt selected in bit1 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit1{}; 
        ///interrupt request of the interrupt selected in bit0 of IRQ010SEL Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqbit0{}; 
    }
    namespace IntreqIrq011mon{    ///<IRQ011 Batch Read Register
        using Addr = Register::Address<0x40031230,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq012mon{    ///<IRQ012 Batch Read Register
        using Addr = Register::Address<0x40031234,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq013mon{    ///<IRQ013 Batch Read Register
        using Addr = Register::Address<0x40031238,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq014mon{    ///<IRQ014 Batch Read Register
        using Addr = Register::Address<0x4003123c,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq015mon{    ///<IRQ015 Batch Read Register
        using Addr = Register::Address<0x40031240,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq016mon{    ///<IRQ016 Batch Read Register
        using Addr = Register::Address<0x40031244,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq017mon{    ///<IRQ017 Batch Read Register
        using Addr = Register::Address<0x40031248,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq018mon{    ///<IRQ018 Batch Read Register
        using Addr = Register::Address<0x4003124c,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq019mon{    ///<IRQ019 Batch Read Register
        using Addr = Register::Address<0x40031250,0xffffffc0,0x00000000,unsigned>;
        ///PC match and RC match interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint5{}; 
        ///Out-of-range interrupt request of QPRC ch.0QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint4{}; 
        ///Count inversion interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint3{}; 
        ///Overflow / underflow / zero index interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint2{}; 
        ///PC and RC match interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint1{}; 
        ///PC match interrupt request of QPRC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint0{}; 
    }
    namespace IntreqIrq020mon{    ///<IRQ020 Batch Read Register
        using Addr = Register::Address<0x40031254,0xffffffc0,0x00000000,unsigned>;
        ///PC match and RC match interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint5{}; 
        ///Out-of-range interrupt request of QPRC ch.1QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint4{}; 
        ///Count inversion interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint3{}; 
        ///Overflow / underflow / zero index interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint2{}; 
        ///PC and RC match interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint1{}; 
        ///PC match interrupt request of QPRC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint0{}; 
    }
    namespace IntreqIrq021mon{    ///<IRQ021 Batch Read Register
        using Addr = Register::Address<0x40031258,0xfffffff0,0x00000000,unsigned>;
        ///Interrupt request of WFG timer 54 of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint3{}; 
        ///Interrupt request of WFG timer 32 of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint2{}; 
        ///Interrupt request of WFG timer 10 of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint1{}; 
        ///Interrupt request of the DTIF (motor emergency stop) of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint0{}; 
    }
    namespace IntreqIrq022mon{    ///<IRQ022 Batch Read Register
        using Addr = Register::Address<0x4003125c,0xfffffff0,0x00000000,unsigned>;
        ///Interrupt request of WFG timer 54 of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint3{}; 
        ///Interrupt request of WFG timer 32 of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint2{}; 
        ///Interrupt request of WFG timer 10 of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint1{}; 
        ///Interrupt request of the DTIF (motor emergency stop) of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint0{}; 
    }
    namespace IntreqIrq023mon{    ///<IRQ023 Batch Read Register
        using Addr = Register::Address<0x40031260,0xfffffff0,0x00000000,unsigned>;
        ///Interrupt request of WFG timer 54 of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint3{}; 
        ///Interrupt request of WFG timer 32 of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint2{}; 
        ///Interrupt request of WFG timer 10 of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint1{}; 
        ///Interrupt request of the DTIF (motor emergency stop) of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> waveint0{}; 
    }
    namespace IntreqIrq024mon{    ///<IRQ024 Batch Read Register
        using Addr = Register::Address<0x40031264,0xfffffff8,0x00000000,unsigned>;
        ///FRT ch.2 peak value detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt2{}; 
        ///FRT ch.1 peak value detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt1{}; 
        ///FRT ch.0 peak value detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt0{}; 
    }
    namespace IntreqIrq025mon{    ///<IRQ025 Batch Read Register
        using Addr = Register::Address<0x40031268,0xfffffff8,0x00000000,unsigned>;
        ///FRT ch.2 zero detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt2{}; 
        ///FRT ch.1 zero detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt1{}; 
        ///FRT ch.0 zero detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt0{}; 
    }
    namespace IntreqIrq026mon{    ///<IRQ026 Batch Read Register
        using Addr = Register::Address<0x4003126c,0xfffffff0,0x00000000,unsigned>;
        ///ICU ch.3 input edge detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint3{}; 
        ///ICU ch.2 input edge detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint2{}; 
        ///ICU ch.1 input edge detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint1{}; 
        ///ICU ch.0 input edge detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint0{}; 
    }
    namespace IntreqIrq027mon{    ///<IRQ027 Batch Read Register
        using Addr = Register::Address<0x40031270,0xffffffc0,0x00000000,unsigned>;
        ///OCU ch.5 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint5{}; 
        ///OCU ch.4 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint4{}; 
        ///OCU ch.3 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint3{}; 
        ///OCU ch.2 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint2{}; 
        ///OCU ch.1 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint1{}; 
        ///OCU ch.0 match detection interrupt request of the MFT unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint0{}; 
    }
    namespace IntreqIrq028mon{    ///<IRQ028 Batch Read Register
        using Addr = Register::Address<0x40031274,0xfffffff8,0x00000000,unsigned>;
        ///FRT ch.2 peak value detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt2{}; 
        ///FRT ch.1 peak value detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt1{}; 
        ///FRT ch.0 peak value detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt0{}; 
    }
    namespace IntreqIrq029mon{    ///<IRQ029 Batch Read Register
        using Addr = Register::Address<0x40031278,0xfffffff8,0x00000000,unsigned>;
        ///FRT ch.2 zero detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt2{}; 
        ///FRT ch.1 zero detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt1{}; 
        ///FRT ch.0 zero detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt0{}; 
    }
    namespace IntreqIrq030mon{    ///<IRQ030 Batch Read Register
        using Addr = Register::Address<0x4003127c,0xfffffff0,0x00000000,unsigned>;
        ///ICU ch.3 input edge detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint3{}; 
        ///ICU ch.2 input edge detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint2{}; 
        ///ICU ch.1 input edge detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint1{}; 
        ///ICU ch.0 input edge detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint0{}; 
    }
    namespace IntreqIrq031mon{    ///<IRQ031 Batch Read Register
        using Addr = Register::Address<0x40031280,0xffffffc0,0x00000000,unsigned>;
        ///OCU ch.5 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint5{}; 
        ///OCU ch.4 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint4{}; 
        ///OCU ch.3 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint3{}; 
        ///OCU ch.2 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint2{}; 
        ///OCU ch.1 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint1{}; 
        ///OCU ch.0 match detection interrupt request of the MFT unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint0{}; 
    }
    namespace IntreqIrq032mon{    ///<IRQ032 Batch Read Register
        using Addr = Register::Address<0x40031284,0xfffffff8,0x00000000,unsigned>;
        ///FRT ch.2 peak value detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt2{}; 
        ///FRT ch.1 peak value detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt1{}; 
        ///FRT ch.0 peak value detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtPeakInt0{}; 
    }
    namespace IntreqIrq033mon{    ///<IRQ033 Batch Read Register
        using Addr = Register::Address<0x40031288,0xfffffff8,0x00000000,unsigned>;
        ///FRT ch.2 zero detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt2{}; 
        ///FRT ch.1 zero detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt1{}; 
        ///FRT ch.0 zero detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frtZeroInt0{}; 
    }
    namespace IntreqIrq034mon{    ///<IRQ034 Batch Read Register
        using Addr = Register::Address<0x4003128c,0xfffffff0,0x00000000,unsigned>;
        ///ICU ch.3 input edge detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint3{}; 
        ///ICU ch.2 input edge detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint2{}; 
        ///ICU ch.1 input edge detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint1{}; 
        ///ICU ch.0 input edge detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> icuint0{}; 
    }
    namespace IntreqIrq035mon{    ///<IRQ035 Batch Read Register
        using Addr = Register::Address<0x40031290,0xffffffc0,0x00000000,unsigned>;
        ///OCU ch.5 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint5{}; 
        ///OCU ch.4 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint4{}; 
        ///OCU ch.3 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint3{}; 
        ///OCU ch.2 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint2{}; 
        ///OCU ch.1 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint1{}; 
        ///OCU ch.0 match detection interrupt request of the MFT unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ocuint0{}; 
    }
    namespace IntreqIrq036mon{    ///<IRQ036 Batch Read Register
        using Addr = Register::Address<0x40031294,0xfffffff8,0x00000000,unsigned>;
        ///Interrupt request of the PPG ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint2{}; 
        ///Interrupt request of the PPG ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint1{}; 
        ///Interrupt request of the PPG ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint0{}; 
    }
    namespace IntreqIrq037mon{    ///<IRQ037 Batch Read Register
        using Addr = Register::Address<0x40031298,0xfffffff8,0x00000000,unsigned>;
        ///Interrupt request of the PPG ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint2{}; 
        ///Interrupt request of the PPG ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint1{}; 
        ///Interrupt request of the PPG ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint0{}; 
    }
    namespace IntreqIrq038mon{    ///<IRQ038 Batch Read Register
        using Addr = Register::Address<0x4003129c,0xfffffff8,0x00000000,unsigned>;
        ///Interrupt request of the PPG ch.20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint2{}; 
        ///Interrupt request of the PPG ch.18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint1{}; 
        ///Interrupt request of the PPG ch.16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ppgint0{}; 
    }
    namespace IntreqIrq039mon{    ///<IRQ039 Batch Read Register
        using Addr = Register::Address<0x400312a0,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq040mon{    ///<IRQ040 Batch Read Register
        using Addr = Register::Address<0x400312a4,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq041mon{    ///<IRQ041 Batch Read Register
        using Addr = Register::Address<0x400312a8,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq042mon{    ///<IRQ042 Batch Read Register
        using Addr = Register::Address<0x400312ac,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq043mon{    ///<IRQ043 Batch Read Register
        using Addr = Register::Address<0x400312b0,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq044mon{    ///<IRQ044 Batch Read Register
        using Addr = Register::Address<0x400312b4,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq045mon{    ///<IRQ045 Batch Read Register
        using Addr = Register::Address<0x400312b8,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq046mon{    ///<IRQ046 Batch Read Register
        using Addr = Register::Address<0x400312bc,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq047mon{    ///<IRQ047 Batch Read Register
        using Addr = Register::Address<0x400312c0,0xfffffffc,0x00000000,unsigned>;
        ///Dual timer TIMINT2 interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timint2{}; 
        ///Dual timer TIMINT1 interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timint1{}; 
    }
    namespace IntreqIrq048mon{    ///<IRQ048 Batch Read Register
        using Addr = Register::Address<0x400312c4,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the watch counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wcint{}; 
    }
    namespace IntreqIrq049mon{    ///<IRQ049 Batch Read Register
        using Addr = Register::Address<0x400312c8,0xfffffffe,0x00000000,unsigned>;
        ///External bus output error interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bmemcs{}; 
    }
    namespace IntreqIrq050mon{    ///<IRQ050 Batch Read Register
        using Addr = Register::Address<0x400312cc,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the RTC$
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtcint{}; 
    }
    namespace IntreqIrq051mon{    ///<IRQ051 Batch Read Register
        using Addr = Register::Address<0x400312d0,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq052mon{    ///<IRQ052 Batch Read Register
        using Addr = Register::Address<0x400312d4,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq053mon{    ///<IRQ053 Batch Read Register
        using Addr = Register::Address<0x400312d8,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq054mon{    ///<IRQ054 Batch Read Register
        using Addr = Register::Address<0x400312dc,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq055mon{    ///<IRQ055 Batch Read Register
        using Addr = Register::Address<0x400312e0,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq056mon{    ///<IRQ056 Batch Read Register
        using Addr = Register::Address<0x400312e4,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq057mon{    ///<IRQ057 Batch Read Register
        using Addr = Register::Address<0x400312e8,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq058mon{    ///<IRQ058 Batch Read Register
        using Addr = Register::Address<0x400312ec,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint{}; 
    }
    namespace IntreqIrq059mon{    ///<IRQ059 Batch Read Register
        using Addr = Register::Address<0x400312f0,0xffffffe0,0x00000000,unsigned>;
        ///PLL of I2S oscillation stabilization wait completion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ipllint{}; 
        ///PLL of USB / Ethernet oscillation stabilization wait completion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> upllint{}; 
        ///Main PLL oscillation stabilization wait completion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mpllint{}; 
        ///Sub clock oscillation stabilization wait completion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> soscint{}; 
        ///Main clock oscillation stabilization wait completion interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moscint{}; 
    }
    namespace IntreqIrq060mon{    ///<IRQ060 Batch Read Register
        using Addr = Register::Address<0x400312f4,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq061mon{    ///<IRQ061 Batch Read Register
        using Addr = Register::Address<0x400312f8,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq062mon{    ///<IRQ062 Batch Read Register
        using Addr = Register::Address<0x400312fc,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq063mon{    ///<IRQ063 Batch Read Register
        using Addr = Register::Address<0x40031300,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq064mon{    ///<IRQ064 Batch Read Register
        using Addr = Register::Address<0x40031304,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq065mon{    ///<IRQ065 Batch Read Register
        using Addr = Register::Address<0x40031308,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq066mon{    ///<IRQ066 Batch Read Register
        using Addr = Register::Address<0x4003130c,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq067mon{    ///<IRQ067 Batch Read Register
        using Addr = Register::Address<0x40031310,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq068mon{    ///<IRQ068 Batch Read Register
        using Addr = Register::Address<0x40031314,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq069mon{    ///<IRQ069 Batch Read Register
        using Addr = Register::Address<0x40031318,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq070mon{    ///<IRQ070 Batch Read Register
        using Addr = Register::Address<0x4003131c,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq071mon{    ///<IRQ071 Batch Read Register
        using Addr = Register::Address<0x40031320,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq072mon{    ///<IRQ072 Batch Read Register
        using Addr = Register::Address<0x40031324,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq073mon{    ///<IRQ073 Batch Read Register
        using Addr = Register::Address<0x40031328,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq074mon{    ///<IRQ074 Batch Read Register
        using Addr = Register::Address<0x4003132c,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq075mon{    ///<IRQ075 Batch Read Register
        using Addr = Register::Address<0x40031330,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq076mon{    ///<IRQ076 Batch Read Register
        using Addr = Register::Address<0x40031334,0xffffffe0,0x00000000,unsigned>;
        ///Range comparison result interrupt request of the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint4{}; 
        ///Conversion result comparison interrupt request of the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint3{}; 
        ///FIFO overrun interrupt request of the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint2{}; 
        ///Scan conversion interrupt request of the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint1{}; 
        ///Priority conversion interrupt request of the A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint0{}; 
    }
    namespace IntreqIrq077mon{    ///<IRQ077 Batch Read Register
        using Addr = Register::Address<0x40031338,0xffffffe0,0x00000000,unsigned>;
        ///Range comparison result interrupt request of the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint4{}; 
        ///Conversion result comparison interrupt request of the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint3{}; 
        ///FIFO overrun interrupt request of the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint2{}; 
        ///Scan conversion interrupt request of the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint1{}; 
        ///Priority conversion interrupt request of the A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint0{}; 
    }
    namespace IntreqIrq078mon{    ///<IRQ078 Batch Read Register
        using Addr = Register::Address<0x4003133c,0xffffffe0,0x00000000,unsigned>;
        ///Endpoint 5 DRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt4{}; 
        ///Endpoint 4 DRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt3{}; 
        ///Endpoint 3 DRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt2{}; 
        ///Endpoint 2 DRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt1{}; 
        ///Endpoint 1 DRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt0{}; 
    }
    namespace IntreqIrq079mon{    ///<IRQ079 Batch Read Register
        using Addr = Register::Address<0x40031340,0xffffffc0,0x00000000,unsigned>;
        ///SOFIRQ/CMPIRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt5{}; 
        ///DIRQ/URPIRQ/RWKIRQ/CNNIRQ interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt4{}; 
        ///SPK interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt3{}; 
        ///SUSP/SOF/BRST/CONF/WKUP interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt2{}; 
        ///Endpoint 0 DRQO interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt1{}; 
        ///Endpoint 0 DRQI interrupt request of the USB ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt0{}; 
    }
    namespace IntreqIrq080mon{    ///<IRQ080 Batch Read Register
        using Addr = Register::Address<0x40031344,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the CAN ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> canint{}; 
    }
    namespace IntreqIrq081mon{    ///<IRQ081 Batch Read Register
        using Addr = Register::Address<0x40031348,0xffffffe0,0x00000000,unsigned>;
        ///CAN-FD 1 interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> can1int{}; 
        ///CAN-FD 0 interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> can0int{}; 
        ///Single bit error interrupt request of the CAN-FD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> canseint{}; 
        ///Double bit error interrupt request of the CAN-FD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> candeint{}; 
        ///Interrupt request of the CAN ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> canint{}; 
    }
    namespace IntreqIrq082mon{    ///<IRQ082 Batch Read Register
        using Addr = Register::Address<0x4003134c,0xfffffff8,0x00000000,unsigned>;
        ///LPI interrupt request of the Ethernet MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> maclpi{}; 
        ///PMT interrupt request of the Ethernet MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macpmt{}; 
        ///SBD interrupt request of the Ethernet MAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> macsbd{}; 
    }
    namespace IntreqIrq083mon{    ///<IRQ083 Batch Read Register
        using Addr = Register::Address<0x40031350,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the DMAC ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq084mon{    ///<IRQ084 Batch Read Register
        using Addr = Register::Address<0x40031354,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the DMAC ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq085mon{    ///<IRQ085 Batch Read Register
        using Addr = Register::Address<0x40031358,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the DMAC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq086mon{    ///<IRQ086 Batch Read Register
        using Addr = Register::Address<0x4003135c,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the DMAC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq087mon{    ///<IRQ087 Batch Read Register
        using Addr = Register::Address<0x40031360,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the DMAC ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq088mon{    ///<IRQ088 Batch Read Register
        using Addr = Register::Address<0x40031364,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the DMAC ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq089mon{    ///<IRQ089 Batch Read Register
        using Addr = Register::Address<0x40031368,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the DMAC ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq090mon{    ///<IRQ090 Batch Read Register
        using Addr = Register::Address<0x4003136c,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt request of the DMAC ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmacint{}; 
    }
    namespace IntreqIrq091mon{    ///<IRQ091 Batch Read Register
        using Addr = Register::Address<0x40031370,0xfffffffc,0x00000000,unsigned>;
        ///DSTC ERINT interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dstcint1{}; 
        ///DSTC SWINT interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dstcint0{}; 
    }
    namespace IntreqIrq092mon{    ///<IRQ092 Batch Read Register
        using Addr = Register::Address<0x40031374,0xfffffff0,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        ///Interrupt request of the external pin interrupt ch.18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        ///Interrupt request of the external pin interrupt ch.17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        ///Interrupt request of the external pin interrupt ch.16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq093mon{    ///<IRQ093 Batch Read Register
        using Addr = Register::Address<0x40031378,0xfffffff0,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        ///Interrupt request of the external pin interrupt ch.22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        ///Interrupt request of the external pin interrupt ch.21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        ///Interrupt request of the external pin interrupt ch.20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq094mon{    ///<IRQ094 Batch Read Register
        using Addr = Register::Address<0x4003137c,0xfffffff0,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        ///Interrupt request of the external pin interrupt ch.26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        ///Interrupt request of the external pin interrupt ch.25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        ///Interrupt request of the external pin interrupt ch.24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq095mon{    ///<IRQ095 Batch Read Register
        using Addr = Register::Address<0x40031380,0xfffffff0,0x00000000,unsigned>;
        ///Interrupt request of the external pin interrupt ch.31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint3{}; 
        ///Interrupt request of the external pin interrupt ch.30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint2{}; 
        ///Interrupt request of the external pin interrupt ch.29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint1{}; 
        ///Interrupt request of the external pin interrupt ch.28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> extint0{}; 
    }
    namespace IntreqIrq096mon{    ///<IRQ096 Batch Read Register
        using Addr = Register::Address<0x40031384,0xffffffc0,0x00000000,unsigned>;
        ///PC match and RC match interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint5{}; 
        ///Out-of-range interrupt request of QPRC ch.2QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint4{}; 
        ///Count inversion interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint3{}; 
        ///Overflow / underflow / zero index interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint2{}; 
        ///PC and RC match interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint1{}; 
        ///PC match interrupt request of QPRC ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint0{}; 
    }
    namespace IntreqIrq097mon{    ///<IRQ097 Batch Read Register
        using Addr = Register::Address<0x40031388,0xffffffc0,0x00000000,unsigned>;
        ///PC match and RC match interrupt request of QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint5{}; 
        ///Out-of-range interrupt request of QPRC ch.3QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint4{}; 
        ///Count inversion interrupt request of QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint3{}; 
        ///Overflow / underflow / zero index interrupt request of QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint2{}; 
        ///PC and RC match interrupt request of QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint1{}; 
        ///PC match interrupt request of QPRC ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qudint0{}; 
    }
    namespace IntreqIrq098mon{    ///<IRQ098 Batch Read Register
        using Addr = Register::Address<0x4003138c,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq099mon{    ///<IRQ099 Batch Read Register
        using Addr = Register::Address<0x40031390,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq100mon{    ///<IRQ100 Batch Read Register
        using Addr = Register::Address<0x40031394,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq101mon{    ///<IRQ101 Batch Read Register
        using Addr = Register::Address<0x40031398,0xfffffffc,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq102mon{    ///<IRQ102 Batch Read Register
        using Addr = Register::Address<0x4003139c,0xffffff00,0x00000000,unsigned>;
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint7{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint6{}; 
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint5{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint4{}; 
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint3{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint2{}; 
        ///Interrupt request of source 1 (IRQ1) of the base timer ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint1{}; 
        ///Interrupt request of source 0 (IRQ0) of the base timer ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btint0{}; 
    }
    namespace IntreqIrq103mon{    ///<IRQ103 Batch Read Register
        using Addr = Register::Address<0x400313a0,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq104mon{    ///<IRQ104 Batch Read Register
        using Addr = Register::Address<0x400313a4,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq105mon{    ///<IRQ105 Batch Read Register
        using Addr = Register::Address<0x400313a8,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq106mon{    ///<IRQ106 Batch Read Register
        using Addr = Register::Address<0x400313ac,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq107mon{    ///<IRQ107 Batch Read Register
        using Addr = Register::Address<0x400313b0,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq108mon{    ///<IRQ108 Batch Read Register
        using Addr = Register::Address<0x400313b4,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq109mon{    ///<IRQ109 Batch Read Register
        using Addr = Register::Address<0x400313b8,0xfffffffe,0x00000000,unsigned>;
        ///Reception interrupt request of the MFS ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq110mon{    ///<IRQ110 Batch Read Register
        using Addr = Register::Address<0x400313bc,0xfffffffc,0x00000000,unsigned>;
        ///Status interrupt request of the MFS ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///Transmission interrupt request of the MFS ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq111mon{    ///<IRQ111 Batch Read Register
        using Addr = Register::Address<0x400313c0,0xffffffe0,0x00000000,unsigned>;
        ///Range comparison result interrupt request of the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint4{}; 
        ///Conversion result comparison interrupt request of the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint3{}; 
        ///FIFO overrun interrupt request of the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint2{}; 
        ///Scan conversion interrupt request of the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint1{}; 
        ///Priority conversion interrupt request of the A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adcint0{}; 
    }
    namespace IntreqIrq112mon{    ///<IRQ112 Batch Read Register
        using Addr = Register::Address<0x400313c4,0xffffffc0,0x00000000,unsigned>;
        ///Interrupt request of DSTC transfer end interrupt of CAN-FD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> candint{}; 
        ///Interrupt request of DSTC transfer end interrupt of Programmable CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pcrcdint{}; 
        ///Interrupt request of DSTC transfer end interrupt of Quad SPI(transmission)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qspidint1{}; 
        ///Interrupt request of DSTC transfer end interrupt of Quad SPI(reception)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qspidint0{}; 
        ///Interrupt request of DSTC transfer end interrupt of I2S(transmission)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> i2sdint1{}; 
        ///Interrupt request of DSTC transfer end interrupt of I2S(reception)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> i2sdint0{}; 
    }
    namespace IntreqIrq113mon{    ///<IRQ113 Batch Read Register
        using Addr = Register::Address<0x400313c8,0xffffffc0,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcec0int{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt4{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt3{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt2{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt1{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbDrqInt0{}; 
    }
    namespace IntreqIrq114mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313cc,0xffffff80,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcec1int{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt5{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt4{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt3{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt2{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt1{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbInt0{}; 
    }
    namespace IntreqIrq115mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313d0,0xfffffff8,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qspiint2{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qspiint1{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> qspiint0{}; 
    }
    namespace IntreqIrq116mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313d4,0xffffffff,0x00000000,unsigned>;
    }
    namespace IntreqIrq117mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313d8,0xfffffffc,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prgcrc{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> i2sint{}; 
    }
    namespace IntreqIrq118mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313dc,0xfffffffc,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdint1{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdint0{}; 
    }
    namespace IntreqIrq119mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313e0,0xfffffffe,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flint{}; 
    }
    namespace IntreqIrq120mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313e4,0xfffffffe,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq121mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313e8,0xfffffffc,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq122mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313ec,0xfffffffe,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq123mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313f0,0xfffffffc,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq124mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313f4,0xfffffffe,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq125mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313f8,0xfffffffc,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
    namespace IntreqIrq126mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x400313fc,0xfffffffe,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsrint{}; 
    }
    namespace IntreqIrq127mon{    ///<ERROR!!!!!!!!!!!!!!!!!!!!
        using Addr = Register::Address<0x40031400,0xfffffffc,0x00000000,unsigned>;
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint1{}; 
        ///ERROR!!!!!!!!!!!!!!!!!!!!
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mfsint0{}; 
    }
}
