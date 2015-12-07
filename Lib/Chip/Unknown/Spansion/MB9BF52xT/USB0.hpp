#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral USB0 
    namespace Noneudcc{    ///< register UDCC 
        using Addr = Register::Address<0x40042120,0xffffff04,0,unsigned>;
        /// bitfield RST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rst{}; 
        namespace RstValC{
        }
        /// bitfield RESUM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> resum{}; 
        namespace ResumValC{
        }
        /// bitfield HCONX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hconx{}; 
        namespace HconxValC{
        }
        /// bitfield USTP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ustp{}; 
        namespace UstpValC{
        }
        /// bitfield STALCLREN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stalclren{}; 
        namespace StalclrenValC{
        }
        /// bitfield RFBK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rfbk{}; 
        namespace RfbkValC{
        }
        /// bitfield PWC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwc{}; 
        namespace PwcValC{
        }
    }
    namespace Noneep0c{    ///< register EP0C 
        using Addr = Register::Address<0x40042124,0xfffffd80,0,unsigned>;
        /// bitfield STAL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        namespace StalValC{
        }
        /// bitfield PKS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pks0{}; 
        namespace Pks0ValC{
        }
    }
    namespace Noneep1c{    ///< register EP1C 
        using Addr = Register::Address<0x40042128,0xffff0000,0,unsigned>;
        /// bitfield EPEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
        /// bitfield TYPE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> type{}; 
        namespace TypeValC{
        }
        /// bitfield DIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        /// bitfield DMAE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmae{}; 
        namespace DmaeValC{
        }
        /// bitfield NULE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nule{}; 
        namespace NuleValC{
        }
        /// bitfield STAL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        namespace StalValC{
        }
        /// bitfield PKS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> pks{}; 
        namespace PksValC{
        }
    }
    namespace Noneep2c{    ///< register EP2C 
        using Addr = Register::Address<0x4004212c,0xffff0180,0,unsigned>;
        /// bitfield EPEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epen{}; 
        namespace EpenValC{
        }
        /// bitfield TYPE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> type{}; 
        namespace TypeValC{
        }
        /// bitfield DIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        /// bitfield DMAE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmae{}; 
        namespace DmaeValC{
        }
        /// bitfield NULE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nule{}; 
        namespace NuleValC{
        }
        /// bitfield STAL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        namespace StalValC{
        }
        /// bitfield PKS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pks{}; 
        namespace PksValC{
        }
    }
    namespace Noneep3c{    ///< register EP3C 
        using Addr = Register::Address<0x40042130,0xffffffff,0,unsigned>;
    }
    namespace Noneep4c{    ///< register EP4C 
        using Addr = Register::Address<0x40042134,0xffffffff,0,unsigned>;
    }
    namespace Noneep5c{    ///< register EP5C 
        using Addr = Register::Address<0x40042138,0xffffffff,0,unsigned>;
    }
    namespace Nonetmsp{    ///< register TMSP 
        using Addr = Register::Address<0x4004213c,0xfffff800,0,unsigned>;
        /// bitfield TMSP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> tmsp{}; 
        namespace TmspValC{
        }
    }
    namespace Noneudcs{    ///< register UDCS 
        using Addr = Register::Address<0x40042140,0xffffffc0,0,unsigned char>;
        /// bitfield SUSP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
        /// bitfield SOF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        /// bitfield BRST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brst{}; 
        namespace BrstValC{
        }
        /// bitfield WKUP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wkup{}; 
        namespace WkupValC{
        }
        /// bitfield SETP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp{}; 
        namespace SetpValC{
        }
        /// bitfield CONF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> conf{}; 
        namespace ConfValC{
        }
    }
    namespace Noneudcie{    ///< register UDCIE 
        using Addr = Register::Address<0x40042141,0xffffffc0,0,unsigned char>;
        /// bitfield SUSPIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> suspie{}; 
        namespace SuspieValC{
        }
        /// bitfield SOFIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sofie{}; 
        namespace SofieValC{
        }
        /// bitfield BRSTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brstie{}; 
        namespace BrstieValC{
        }
        /// bitfield WKUPIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wkupie{}; 
        namespace WkupieValC{
        }
        /// bitfield CONFN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> confn{}; 
        namespace ConfnValC{
        }
        /// bitfield CONFIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> confie{}; 
        namespace ConfieValC{
        }
    }
    namespace Noneep0is{    ///< register EP0IS 
        using Addr = Register::Address<0x40042144,0xffff3bff,0,unsigned>;
        /// bitfield BFINI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        namespace BfiniValC{
        }
        /// bitfield DRQIIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqiie{}; 
        namespace DrqiieValC{
        }
        /// bitfield DRQI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drqi{}; 
        namespace DrqiValC{
        }
    }
    namespace Noneep0os{    ///< register EP0OS 
        using Addr = Register::Address<0x40042148,0xffff1980,0,unsigned>;
        /// bitfield BFINI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        namespace BfiniValC{
        }
        /// bitfield DRQOIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqoie{}; 
        namespace DrqoieValC{
        }
        /// bitfield SPKIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        namespace SpkieValC{
        }
        /// bitfield DRQO 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drqo{}; 
        namespace DrqoValC{
        }
        /// bitfield SPK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        namespace SpkValC{
        }
        /// bitfield SIZE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep1s{    ///< register EP1S 
        using Addr = Register::Address<0x4004214c,0xffff1000,0,unsigned>;
        /// bitfield BFINI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        namespace BfiniValC{
        }
        /// bitfield DRQIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqie{}; 
        namespace DrqieValC{
        }
        /// bitfield SPKIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        namespace SpkieValC{
        }
        /// bitfield BUSY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        /// bitfield DRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drq{}; 
        namespace DrqValC{
        }
        /// bitfield SPK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        namespace SpkValC{
        }
        /// bitfield SIZE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep2s{    ///< register EP2S 
        using Addr = Register::Address<0x40042150,0xffff1180,0,unsigned>;
        /// bitfield BFINI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        namespace BfiniValC{
        }
        /// bitfield DRQIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqie{}; 
        namespace DrqieValC{
        }
        /// bitfield SPKIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        namespace SpkieValC{
        }
        /// bitfield BUSY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        /// bitfield DRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drq{}; 
        namespace DrqValC{
        }
        /// bitfield SPK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        namespace SpkValC{
        }
        /// bitfield SIZE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> size{}; 
        namespace SizeValC{
        }
    }
    namespace Noneep3s{    ///< register EP3S 
        using Addr = Register::Address<0x40042154,0xffffffff,0,unsigned>;
    }
    namespace Noneep4s{    ///< register EP4S 
        using Addr = Register::Address<0x40042158,0xffffffff,0,unsigned>;
    }
    namespace Noneep5s{    ///< register EP5S 
        using Addr = Register::Address<0x4004215c,0xffffffff,0,unsigned>;
    }
    namespace Noneep0dt{    ///< register EP0DT 
        using Addr = Register::Address<0x40042160,0xffff0000,0,unsigned>;
        /// bitfield BFDT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bfdt{}; 
        namespace BfdtValC{
        }
    }
    namespace Noneep1dt{    ///< register EP1DT 
        using Addr = Register::Address<0x40042164,0xffffffff,0,unsigned>;
    }
    namespace Noneep2dt{    ///< register EP2DT 
        using Addr = Register::Address<0x40042168,0xffffffff,0,unsigned>;
    }
    namespace Noneep3dt{    ///< register EP3DT 
        using Addr = Register::Address<0x4004216c,0xffffffff,0,unsigned>;
    }
    namespace Noneep4dt{    ///< register EP4DT 
        using Addr = Register::Address<0x40042170,0xffffffff,0,unsigned>;
    }
    namespace Noneep5dt{    ///< register EP5DT 
        using Addr = Register::Address<0x40042174,0xffffffff,0,unsigned>;
    }
    namespace Nonehcnt{    ///< register HCNT 
        using Addr = Register::Address<0x40042100,0xfffff800,0,unsigned>;
        /// bitfield SOFSTEP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sofstep{}; 
        namespace SofstepValC{
        }
        /// bitfield CANCEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cancel{}; 
        namespace CancelValC{
        }
        /// bitfield RETRY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> retry{}; 
        namespace RetryValC{
        }
        /// bitfield RWKIRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rwkire{}; 
        namespace RwkireValC{
        }
        /// bitfield URIRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> urire{}; 
        namespace UrireValC{
        }
        /// bitfield CMPIRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpire{}; 
        namespace CmpireValC{
        }
        /// bitfield CNNIRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnnire{}; 
        namespace CnnireValC{
        }
        /// bitfield DIRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dire{}; 
        namespace DireValC{
        }
        /// bitfield SOFIRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sofire{}; 
        namespace SofireValC{
        }
        /// bitfield URST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> urst{}; 
        namespace UrstValC{
        }
        /// bitfield HOST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> host{}; 
        namespace HostValC{
        }
    }
    namespace Nonehirq{    ///< register HIRQ 
        using Addr = Register::Address<0x40042104,0xffffff40,0,unsigned char>;
        /// bitfield TCAN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcan{}; 
        namespace TcanValC{
        }
        /// bitfield RWKIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rwkirq{}; 
        namespace RwkirqValC{
        }
        /// bitfield URIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> urirq{}; 
        namespace UrirqValC{
        }
        /// bitfield CMPIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmpirq{}; 
        namespace CmpirqValC{
        }
        /// bitfield CNNIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnnirq{}; 
        namespace CnnirqValC{
        }
        /// bitfield DIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirq{}; 
        namespace DirqValC{
        }
        /// bitfield SOFIRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofirq{}; 
        namespace SofirqValC{
        }
    }
    namespace Noneherr{    ///< register HERR 
        using Addr = Register::Address<0x40042105,0xffffff00,0,unsigned char>;
        /// bitfield LSTSOF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lstsof{}; 
        namespace LstsofValC{
        }
        /// bitfield RERR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rerr{}; 
        namespace RerrValC{
        }
        /// bitfield TOUT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tout{}; 
        namespace ToutValC{
        }
        /// bitfield CRC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc{}; 
        namespace CrcValC{
        }
        /// bitfield TGERR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tgerr{}; 
        namespace TgerrValC{
        }
        /// bitfield STUFF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stuff{}; 
        namespace StuffValC{
        }
        /// bitfield HS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> hs{}; 
        namespace HsValC{
        }
    }
    namespace Nonehstate{    ///< register HSTATE 
        using Addr = Register::Address<0x40042108,0xffffffc0,0,unsigned char>;
        /// bitfield ALIVE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> alive{}; 
        namespace AliveValC{
        }
        /// bitfield CLKSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clksel{}; 
        namespace ClkselValC{
        }
        /// bitfield SOFBUSY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sofbusy{}; 
        namespace SofbusyValC{
        }
        /// bitfield SUSP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
        /// bitfield TMODE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tmode{}; 
        namespace TmodeValC{
        }
        /// bitfield CSTAT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cstat{}; 
        namespace CstatValC{
        }
    }
    namespace Nonehfcomp{    ///< register HFCOMP 
        using Addr = Register::Address<0x40042109,0xffffff00,0,unsigned char>;
        /// bitfield FRAMECOMP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> framecomp{}; 
        namespace FramecompValC{
        }
    }
    namespace Nonehrtimer{    ///< register HRTIMER 
        using Addr = Register::Address<0x4004210c,0xffff0000,0,unsigned>;
        /// bitfield RTIMER1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rtimer1{}; 
        namespace Rtimer1ValC{
        }
        /// bitfield RTIMER0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rtimer0{}; 
        namespace Rtimer0ValC{
        }
    }
    namespace Nonehrtimer2{    ///< register HRTIMER2 
        using Addr = Register::Address<0x40042110,0xfffffffc,0,unsigned char>;
        /// bitfield RTIMER2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rtimer2{}; 
        namespace Rtimer2ValC{
        }
    }
    namespace Nonehadr{    ///< register HADR 
        using Addr = Register::Address<0x40042111,0xffffff80,0,unsigned char>;
        /// bitfield ADDRESS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
        namespace AddressValC{
        }
    }
    namespace Noneheof{    ///< register HEOF 
        using Addr = Register::Address<0x40042114,0xffffc000,0,unsigned>;
        /// bitfield EOF1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> eof1{}; 
        namespace Eof1ValC{
        }
        /// bitfield EOF0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> eof0{}; 
        namespace Eof0ValC{
        }
    }
    namespace Nonehframe{    ///< register HFRAME 
        using Addr = Register::Address<0x40042118,0xfffff800,0,unsigned>;
        /// bitfield FRAME1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> frame1{}; 
        namespace Frame1ValC{
        }
        /// bitfield FRAME0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frame0{}; 
        namespace Frame0ValC{
        }
    }
    namespace Nonehtoken{    ///< register HTOKEN 
        using Addr = Register::Address<0x4004211c,0xffffff00,0,unsigned char>;
        /// bitfield TGGL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tggl{}; 
        namespace TgglValC{
        }
        /// bitfield TKNEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tknen{}; 
        namespace TknenValC{
        }
        /// bitfield ENDPT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> endpt{}; 
        namespace EndptValC{
        }
    }
}
