#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB0 Function
    namespace Usb1Udcc{    ///<UDC Control Register
        using Addr = Register::Address<0x40052120,0xffffff04,0x00000000,unsigned>;
        ///Function Reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rst{}; 
        ///Resume Setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> resum{}; 
        ///Host Connection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hconx{}; 
        ///USB Operating Clock Stop bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ustp{}; 
        ///Endpoint 1 to 5 STAL bit Clear Select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stalclren{}; 
        ///Data Toggle Mode Select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rfbk{}; 
        ///Power Control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwc{}; 
    }
    namespace Usb1Ep0c{    ///<EP0 Control Register
        using Addr = Register::Address<0x40052124,0xfffffd80,0x00000000,unsigned>;
        ///Endpoint 0 Stall Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        ///Packet Size Endpoint 0 Setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pks0{}; 
    }
    namespace Usb1Ep1c{    ///<EP1 Control Register
        using Addr = Register::Address<0x40052128,0xffff0000,0x00000000,unsigned>;
        ///Endpoint Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epen{}; 
        ///Endpoint Transfer Type Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> type{}; 
        ///Endpoint Transfer Direction Select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dir{}; 
        ///DMA Automatic Transfer Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmae{}; 
        ///Null Automatic Transfer Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nule{}; 
        ///Endpoint Stall Setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        ///Packet Size Setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> pks{}; 
    }
    namespace Usb1Ep2c{    ///<EP2 Control Register
        using Addr = Register::Address<0x4005212c,0xffff0180,0x00000000,unsigned>;
        ///Endpoint Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epen{}; 
        ///Endpoint Transfer Type Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> type{}; 
        ///Endpoint Transfer Direction Select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dir{}; 
        ///DMA Automatic Transfer Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmae{}; 
        ///Null Automatic Transfer Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nule{}; 
        ///Endpoint Stall Setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        ///Packet Size Setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pks{}; 
    }
    namespace Usb1Ep3c{    ///<EP3 Control Register
        using Addr = Register::Address<0x40052130,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Ep4c{    ///<EP4 Control Register
        using Addr = Register::Address<0x40052134,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Ep5c{    ///<EP5 Control Register
        using Addr = Register::Address<0x40052138,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Tmsp{    ///<Time Stamp Register
        using Addr = Register::Address<0x4005213c,0xfffff800,0x00000000,unsigned>;
        ///Time Stamp bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmsp{}; 
    }
    namespace Usb1Udcs{    ///<UDC Status Register
        using Addr = Register::Address<0x40052140,0xffffffc0,0x00000000,unsigned char>;
        ///Suspend detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> susp{}; 
        ///SOF Detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sof{}; 
        ///Bus Reset Detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brst{}; 
        ///Wake-up Detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wkup{}; 
        ///Setup Stage Detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp{}; 
        ///Configuration Detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> conf{}; 
    }
    namespace Usb1Udcie{    ///<UDC Interrupt Enable Register
        using Addr = Register::Address<0x40052141,0xffffffc0,0x00000000,unsigned char>;
        ///Suspend Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> suspie{}; 
        ///SOF Reception Interrupt Enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sofie{}; 
        ///Bus Reset Enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brstie{}; 
        ///Wake-up Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wkupie{}; 
        ///Configuration Number Indication bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> confn{}; 
        ///Configuration Interrupt Enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> confie{}; 
    }
    namespace Usb1Ep0is{    ///<EP0I Status Register
        using Addr = Register::Address<0x40052144,0xffff3bff,0x00000000,unsigned>;
        ///Send Buffer Initialization bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        ///Send Data Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqiie{}; 
        ///Send/Receive Data Interrupt Request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drqi{}; 
    }
    namespace Usb1Ep0os{    ///<EP0O Status Register
        using Addr = Register::Address<0x40052148,0xffff1980,0x00000000,unsigned>;
        ///Receive Buffer Initialization bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        ///Receive Data Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqoie{}; 
        ///Short Packet Interrupt Enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        ///Receive Data Interrupt Request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drqo{}; 
        ///Short Packet Interrupt Request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        ///Packet Size Indication bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Usb1Ep1s{    ///<EP1 Status Register
        using Addr = Register::Address<0x4005214c,0xffff1000,0x00000000,unsigned>;
        ///Send/Receive Buffer Initialization bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        ///Packet Transfer Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqie{}; 
        ///Short Packet Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        ///Busy Flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Packet Transfer Interrupt Request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drq{}; 
        ///Short Packet Interrupt Request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        ///packet SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Usb1Ep2s{    ///<EP2 Status Register
        using Addr = Register::Address<0x40052150,0xffff1180,0x00000000,unsigned>;
        ///Send/Receive Buffer Initialization bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        ///Packet Transfer Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqie{}; 
        ///Short Packet Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        ///Busy Flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Packet Transfer Interrupt Request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drq{}; 
        ///Short Packet Interrupt Request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        ///packet SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> size{}; 
    }
    namespace Usb1Ep3s{    ///<EP3 Status Register
        using Addr = Register::Address<0x40052154,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Ep4s{    ///<EP4 Status Register
        using Addr = Register::Address<0x40052158,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Ep5s{    ///<EP5 Status Register
        using Addr = Register::Address<0x4005215c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Ep0dt{    ///<EP0 Data Register
        using Addr = Register::Address<0x40052160,0xffff0000,0x00000000,unsigned>;
        ///Endpoint Send/Receive Buffer Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bfdt{}; 
    }
    namespace Usb1Ep1dt{    ///<EP1 Data Register
        using Addr = Register::Address<0x40052164,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Ep2dt{    ///<EP2 Data Register
        using Addr = Register::Address<0x40052168,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Ep3dt{    ///<EP3 Data Register
        using Addr = Register::Address<0x4005216c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Ep4dt{    ///<EP4 Data Register
        using Addr = Register::Address<0x40052170,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Ep5dt{    ///<EP5 Data Register
        using Addr = Register::Address<0x40052174,0xffffffff,0x00000000,unsigned>;
    }
    namespace Usb1Hcnt{    ///<Host Control Register
        using Addr = Register::Address<0x40052100,0xfffff800,0x00000000,unsigned>;
        ///SOF interrupt occurrence selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sofstep{}; 
        ///token cancellation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cancel{}; 
        ///retry enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> retry{}; 
        ///resume interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rwkire{}; 
        ///bus reset interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> urire{}; 
        ///token completion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpire{}; 
        ///device connection detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnnire{}; 
        ///device disconnection detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dire{}; 
        ///SOF interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sofire{}; 
        ///bus reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> urst{}; 
        ///host mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> host{}; 
    }
    namespace Usb1Hirq{    ///<Host Interrupt Register
        using Addr = Register::Address<0x40052104,0xffffff40,0x00000000,unsigned char>;
        ///token cancellation flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcan{}; 
        ///remote Wake-up end flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rwkirq{}; 
        ///bus reset end flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> urirq{}; 
        ///token completion flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmpirq{}; 
        ///device connection detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnnirq{}; 
        ///device disconnection detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirq{}; 
        ///SOF starting flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofirq{}; 
    }
    namespace Usb1Herr{    ///<Host Error Status Register
        using Addr = Register::Address<0x40052105,0xffffff00,0x00000000,unsigned char>;
        ///lost SOF flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lstsof{}; 
        ///receive error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rerr{}; 
        ///timeout flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tout{}; 
        ///CRC error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc{}; 
        ///toggle error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tgerr{}; 
        ///stuffing error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stuff{}; 
        ///handshake status flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> hs{}; 
    }
    namespace Usb1Hstate{    ///<Host Status Register
        using Addr = Register::Address<0x40052108,0xffffffc0,0x00000000,unsigned char>;
        ///specify the keep-alive function in the low-speed mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> alive{}; 
        ///USB operation clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clksel{}; 
        ///SOF busy flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sofbusy{}; 
        ///suspend setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
        ///transmission mode flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmode{}; 
        ///connection status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cstat{}; 
    }
    namespace Usb1Hfcomp{    ///<SOF Interrupt Frame Compare Register
        using Addr = Register::Address<0x40052109,0xffffff00,0x00000000,unsigned char>;
        ///frame compare data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> framecomp{}; 
    }
    namespace Usb1Hrtimer{    ///<Retry Timer Setup Register
        using Addr = Register::Address<0x4005210c,0xffff0000,0x00000000,unsigned>;
        ///retry timer setting 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rtimer1{}; 
        ///retry timer setting 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rtimer0{}; 
    }
    namespace Usb1Hrtimer2{    ///<Retry Timer Setup Register 2
        using Addr = Register::Address<0x40052110,0xfffffffc,0x00000000,unsigned char>;
        ///retry timer setting 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rtimer2{}; 
    }
    namespace Usb1Hadr{    ///<Host Address Register
        using Addr = Register::Address<0x40052111,0xffffff80,0x00000000,unsigned char>;
        ///Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Usb1Heof{    ///<EOF Setup Register
        using Addr = Register::Address<0x40052114,0xffffc000,0x00000000,unsigned>;
        ///End Frame 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> eof1{}; 
        ///End Frame 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> eof0{}; 
    }
    namespace Usb1Hframe{    ///<Frame Setup Register
        using Addr = Register::Address<0x40052118,0xfffff800,0x00000000,unsigned>;
        ///Frame Setup 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> frame1{}; 
        ///Frame Setup 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frame0{}; 
    }
    namespace Usb1Htoken{    ///<Host Token Endpoint Register
        using Addr = Register::Address<0x4005211c,0xffffff00,0x00000000,unsigned char>;
        ///toggle bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tggl{}; 
        ///token enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tknen{}; 
        ///endpoint bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> endpt{}; 
    }
}
