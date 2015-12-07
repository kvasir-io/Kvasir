#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB0 Function
    namespace Noneudcc{    ///<UDC Control Register
        using Addr = Register::Address<0x40042120,0xffffff04,0,unsigned>;
        ///Function Reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rst{}; 
        namespace RstValC{
        }
        ///Resume Setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> resum{}; 
        namespace ResumValC{
        }
        ///Host Connection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hconx{}; 
        namespace HconxValC{
        }
        ///USB Operating Clock Stop bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ustp{}; 
        namespace UstpValC{
        }
        ///Endpoint 1 to 5 STAL bit Clear Select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stalclren{}; 
        namespace StalclrenValC{
        }
        ///Data Toggle Mode Select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rfbk{}; 
        namespace RfbkValC{
        }
        ///Power Control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwc{}; 
        namespace PwcValC{
        }
    }
    namespace Noneep0c{    ///<EP0 Control Register
        using Addr = Register::Address<0x40042124,0xfffffd80,0,unsigned>;
        ///Endpoint 0 Stall Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        namespace StalValC{
        }
        ///Packet Size Endpoint 0 Setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pks0{}; 
        namespace Pks0ValC{
        }
    }
    namespace Noneep1c{    ///<EP1 Control Register
        using Addr = Register::Address<0x40042128,0xffff0000,0,unsigned>;
        ///Endpoint Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
        ///Endpoint Transfer Type Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> type{}; 
        namespace TypeValC{
        }
        ///Endpoint Transfer Direction Select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///DMA Automatic Transfer Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmae{}; 
        namespace DmaeValC{
        }
        ///Null Automatic Transfer Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nule{}; 
        namespace NuleValC{
        }
        ///Endpoint Stall Setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        namespace StalValC{
        }
        ///Packet Size Setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> pks{}; 
        namespace PksValC{
        }
    }
    namespace Noneep2c{    ///<EP2 Control Register
        using Addr = Register::Address<0x4004212c,0xffff0180,0,unsigned>;
        ///Endpoint Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
        ///Endpoint Transfer Type Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> type{}; 
        namespace TypeValC{
        }
        ///Endpoint Transfer Direction Select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///DMA Automatic Transfer Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmae{}; 
        namespace DmaeValC{
        }
        ///Null Automatic Transfer Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nule{}; 
        namespace NuleValC{
        }
        ///Endpoint Stall Setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        namespace StalValC{
        }
        ///Packet Size Setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pks{}; 
        namespace PksValC{
        }
    }
    namespace Noneep3c{    ///<EP3 Control Register
        using Addr = Register::Address<0x40042130,0xffffffff,0,unsigned>;
    }
    namespace Noneep4c{    ///<EP4 Control Register
        using Addr = Register::Address<0x40042134,0xffffffff,0,unsigned>;
    }
    namespace Noneep5c{    ///<EP5 Control Register
        using Addr = Register::Address<0x40042138,0xffffffff,0,unsigned>;
    }
    namespace Nonetmsp{    ///<Time Stamp Register
        using Addr = Register::Address<0x4004213c,0xfffff800,0,unsigned>;
        ///Time Stamp bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> tmsp{}; 
        namespace TmspValC{
        }
    }
    namespace Noneudcs{    ///<UDC Status Register
        using Addr = Register::Address<0x40042140,0xffffffc0,0,unsigned char>;
        ///Suspend detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
        ///SOF Detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///Bus Reset Detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brst{}; 
        namespace BrstValC{
        }
        ///Wake-up Detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wkup{}; 
        namespace WkupValC{
        }
        ///Setup Stage Detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp{}; 
        namespace SetpValC{
        }
        ///Configuration Detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> conf{}; 
        namespace ConfValC{
        }
    }
    namespace Noneudcie{    ///<UDC Interrupt Enable Register
        using Addr = Register::Address<0x40042141,0xffffffc0,0,unsigned char>;
        ///Suspend Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> suspie{}; 
        namespace SuspieValC{
        }
        ///SOF Reception Interrupt Enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sofie{}; 
        namespace SofieValC{
        }
        ///Bus Reset Enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brstie{}; 
        namespace BrstieValC{
        }
        ///Wake-up Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wkupie{}; 
        namespace WkupieValC{
        }
        ///Configuration Number Indication bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> confn{}; 
        namespace ConfnValC{
        }
        ///Configuration Interrupt Enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> confie{}; 
        namespace ConfieValC{
        }
    }
    namespace Noneep0is{    ///<EP0I Status Register
        using Addr = Register::Address<0x40042144,0xffff3bff,0,unsigned>;
        ///Send Buffer Initialization bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        namespace BfiniValC{
        }
        ///Send Data Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqiie{}; 
        namespace DrqiieValC{
        }
        ///Send/Receive Data Interrupt Request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drqi{}; 
        namespace DrqiValC{
        }
    }
    namespace Noneep0os{    ///<EP0O Status Register
        using Addr = Register::Address<0x40042148,0xffff1980,0,unsigned>;
        ///Receive Buffer Initialization bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        namespace BfiniValC{
        }
        ///Receive Data Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqoie{}; 
        namespace DrqoieValC{
        }
        ///Short Packet Interrupt Enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        namespace SpkieValC{
        }
        ///Receive Data Interrupt Request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drqo{}; 
        namespace DrqoValC{
        }
        ///Short Packet Interrupt Request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        namespace SpkValC{
        }
        ///Packet Size Indication bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep1s{    ///<EP1 Status Register
        using Addr = Register::Address<0x4004214c,0xffff1000,0,unsigned>;
        ///Send/Receive Buffer Initialization bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        namespace BfiniValC{
        }
        ///Packet Transfer Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqie{}; 
        namespace DrqieValC{
        }
        ///Short Packet Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        namespace SpkieValC{
        }
        ///Busy Flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///Packet Transfer Interrupt Request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drq{}; 
        namespace DrqValC{
        }
        ///Short Packet Interrupt Request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        namespace SpkValC{
        }
        ///packet SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep2s{    ///<EP2 Status Register
        using Addr = Register::Address<0x40042150,0xffff1180,0,unsigned>;
        ///Send/Receive Buffer Initialization bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        namespace BfiniValC{
        }
        ///Packet Transfer Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqie{}; 
        namespace DrqieValC{
        }
        ///Short Packet Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        namespace SpkieValC{
        }
        ///Busy Flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///Packet Transfer Interrupt Request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drq{}; 
        namespace DrqValC{
        }
        ///Short Packet Interrupt Request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        namespace SpkValC{
        }
        ///packet SIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep3s{    ///<EP3 Status Register
        using Addr = Register::Address<0x40042154,0xffffffff,0,unsigned>;
    }
    namespace Noneep4s{    ///<EP4 Status Register
        using Addr = Register::Address<0x40042158,0xffffffff,0,unsigned>;
    }
    namespace Noneep5s{    ///<EP5 Status Register
        using Addr = Register::Address<0x4004215c,0xffffffff,0,unsigned>;
    }
    namespace Noneep0dt{    ///<EP0 Data Register
        using Addr = Register::Address<0x40042160,0xffff0000,0,unsigned>;
        ///Endpoint Send/Receive Buffer Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bfdt{}; 
        namespace BfdtValC{
        }
    }
    namespace Noneep1dt{    ///<EP1 Data Register
        using Addr = Register::Address<0x40042164,0xffffffff,0,unsigned>;
    }
    namespace Noneep2dt{    ///<EP2 Data Register
        using Addr = Register::Address<0x40042168,0xffffffff,0,unsigned>;
    }
    namespace Noneep3dt{    ///<EP3 Data Register
        using Addr = Register::Address<0x4004216c,0xffffffff,0,unsigned>;
    }
    namespace Noneep4dt{    ///<EP4 Data Register
        using Addr = Register::Address<0x40042170,0xffffffff,0,unsigned>;
    }
    namespace Noneep5dt{    ///<EP5 Data Register
        using Addr = Register::Address<0x40042174,0xffffffff,0,unsigned>;
    }
    namespace Nonehcnt{    ///<Host Control Register
        using Addr = Register::Address<0x40042100,0xfffff800,0,unsigned>;
        ///SOF interrupt occurrence selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sofstep{}; 
        namespace SofstepValC{
        }
        ///token cancellation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cancel{}; 
        namespace CancelValC{
        }
        ///retry enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> retry{}; 
        namespace RetryValC{
        }
        ///resume interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rwkire{}; 
        namespace RwkireValC{
        }
        ///bus reset interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> urire{}; 
        namespace UrireValC{
        }
        ///token completion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpire{}; 
        namespace CmpireValC{
        }
        ///device connection detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnnire{}; 
        namespace CnnireValC{
        }
        ///device disconnection detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dire{}; 
        namespace DireValC{
        }
        ///SOF interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sofire{}; 
        namespace SofireValC{
        }
        ///bus reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> urst{}; 
        namespace UrstValC{
        }
        ///host mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> host{}; 
        namespace HostValC{
        }
    }
    namespace Nonehirq{    ///<Host Interrupt Register
        using Addr = Register::Address<0x40042104,0xffffff40,0,unsigned char>;
        ///token cancellation flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcan{}; 
        namespace TcanValC{
        }
        ///remote Wake-up end flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rwkirq{}; 
        namespace RwkirqValC{
        }
        ///bus reset end flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> urirq{}; 
        namespace UrirqValC{
        }
        ///token completion flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmpirq{}; 
        namespace CmpirqValC{
        }
        ///device connection detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnnirq{}; 
        namespace CnnirqValC{
        }
        ///device disconnection detection flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirq{}; 
        namespace DirqValC{
        }
        ///SOF starting flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofirq{}; 
        namespace SofirqValC{
        }
    }
    namespace Noneherr{    ///<Host Error Status Register
        using Addr = Register::Address<0x40042105,0xffffff00,0,unsigned char>;
        ///lost SOF flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lstsof{}; 
        namespace LstsofValC{
        }
        ///receive error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rerr{}; 
        namespace RerrValC{
        }
        ///timeout flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tout{}; 
        namespace ToutValC{
        }
        ///CRC error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc{}; 
        namespace CrcValC{
        }
        ///toggle error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tgerr{}; 
        namespace TgerrValC{
        }
        ///stuffing error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stuff{}; 
        namespace StuffValC{
        }
        ///handshake status flags
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> hs{}; 
        namespace HsValC{
        }
    }
    namespace Nonehstate{    ///<Host Status Register
        using Addr = Register::Address<0x40042108,0xffffffc0,0,unsigned char>;
        ///specify the keep-alive function in the low-speed mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> alive{}; 
        namespace AliveValC{
        }
        ///USB operation clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clksel{}; 
        namespace ClkselValC{
        }
        ///SOF busy flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sofbusy{}; 
        namespace SofbusyValC{
        }
        ///suspend setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
        ///transmission mode flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tmode{}; 
        namespace TmodeValC{
        }
        ///connection status flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cstat{}; 
        namespace CstatValC{
        }
    }
    namespace Nonehfcomp{    ///<SOF Interrupt Frame Compare Register
        using Addr = Register::Address<0x40042109,0xffffff00,0,unsigned char>;
        ///frame compare data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> framecomp{}; 
        namespace FramecompValC{
        }
    }
    namespace Nonehrtimer{    ///<Retry Timer Setup Register
        using Addr = Register::Address<0x4004210c,0xffff0000,0,unsigned>;
        ///retry timer setting 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rtimer1{}; 
        namespace Rtimer1ValC{
        }
        ///retry timer setting 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rtimer0{}; 
        namespace Rtimer0ValC{
        }
    }
    namespace Nonehrtimer2{    ///<Retry Timer Setup Register 2
        using Addr = Register::Address<0x40042110,0xfffffffc,0,unsigned char>;
        ///retry timer setting 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rtimer2{}; 
        namespace Rtimer2ValC{
        }
    }
    namespace Nonehadr{    ///<Host Address Register
        using Addr = Register::Address<0x40042111,0xffffff80,0,unsigned char>;
        ///Host Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
        namespace AddressValC{
        }
    }
    namespace Noneheof{    ///<EOF Setup Register
        using Addr = Register::Address<0x40042114,0xffffc000,0,unsigned>;
        ///End Frame 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> eof1{}; 
        namespace Eof1ValC{
        }
        ///End Frame 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> eof0{}; 
        namespace Eof0ValC{
        }
    }
    namespace Nonehframe{    ///<Frame Setup Register
        using Addr = Register::Address<0x40042118,0xfffff800,0,unsigned>;
        ///Frame Setup 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> frame1{}; 
        namespace Frame1ValC{
        }
        ///Frame Setup 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frame0{}; 
        namespace Frame0ValC{
        }
    }
    namespace Nonehtoken{    ///<Host Token Endpoint Register
        using Addr = Register::Address<0x4004211c,0xffffff00,0,unsigned char>;
        ///toggle bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tggl{}; 
        namespace TgglValC{
        }
        ///token enable bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tknen{}; 
        namespace TknenValC{
        }
        ///endpoint bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> endpt{}; 
        namespace EndptValC{
        }
    }
}
