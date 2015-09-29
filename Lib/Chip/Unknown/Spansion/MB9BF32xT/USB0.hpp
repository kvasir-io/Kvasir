#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral USB0 
    namespace Noneudcc{    ///< register UDCC 
        using Addr = Register::Address<0x40042120,0xffffff04,0,unsigned>;
        /// bitfield RST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rst{}; 
        /// bitfield RESUM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> resum{}; 
        /// bitfield HCONX 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hconx{}; 
        /// bitfield USTP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ustp{}; 
        /// bitfield STALCLREN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stalclren{}; 
        /// bitfield RFBK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rfbk{}; 
        /// bitfield PWC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwc{}; 
    }
    namespace Noneep0c{    ///< register EP0C 
        using Addr = Register::Address<0x40042124,0xfffffd80,0,unsigned>;
        /// bitfield STAL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        /// bitfield PKS0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pks0{}; 
    }
    namespace Noneep1c{    ///< register EP1C 
        using Addr = Register::Address<0x40042128,0xffff0000,0,unsigned>;
        /// bitfield EPEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epen{}; 
        /// bitfield TYPE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> type{}; 
        /// bitfield DIR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dir{}; 
        /// bitfield DMAE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmae{}; 
        /// bitfield NULE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nule{}; 
        /// bitfield STAL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        /// bitfield PKS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> pks{}; 
    }
    namespace Noneep2c{    ///< register EP2C 
        using Addr = Register::Address<0x4004212c,0xffff0180,0,unsigned>;
        /// bitfield EPEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epen{}; 
        /// bitfield TYPE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> type{}; 
        /// bitfield DIR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dir{}; 
        /// bitfield DMAE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dmae{}; 
        /// bitfield NULE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> nule{}; 
        /// bitfield STAL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stal{}; 
        /// bitfield PKS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> pks{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> tmsp{}; 
    }
    namespace Noneudcs{    ///< register UDCS 
        using Addr = Register::Address<0x40042140,0xffffffc0,0,unsigned char>;
        /// bitfield SUSP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> susp{}; 
        /// bitfield SOF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sof{}; 
        /// bitfield BRST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brst{}; 
        /// bitfield WKUP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wkup{}; 
        /// bitfield SETP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setp{}; 
        /// bitfield CONF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> conf{}; 
    }
    namespace Noneudcie{    ///< register UDCIE 
        using Addr = Register::Address<0x40042141,0xffffffc0,0,unsigned char>;
        /// bitfield SUSPIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> suspie{}; 
        /// bitfield SOFIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sofie{}; 
        /// bitfield BRSTIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brstie{}; 
        /// bitfield WKUPIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wkupie{}; 
        /// bitfield CONFN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> confn{}; 
        /// bitfield CONFIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> confie{}; 
    }
    namespace Noneep0is{    ///< register EP0IS 
        using Addr = Register::Address<0x40042144,0xffff3bff,0,unsigned>;
        /// bitfield BFINI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        /// bitfield DRQIIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqiie{}; 
        /// bitfield DRQI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drqi{}; 
    }
    namespace Noneep0os{    ///< register EP0OS 
        using Addr = Register::Address<0x40042148,0xffff1980,0,unsigned>;
        /// bitfield BFINI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        /// bitfield DRQOIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqoie{}; 
        /// bitfield SPKIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        /// bitfield DRQO 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drqo{}; 
        /// bitfield SPK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        /// bitfield SIZE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> size{}; 
    }
    namespace Noneep1s{    ///< register EP1S 
        using Addr = Register::Address<0x4004214c,0xffff1000,0,unsigned>;
        /// bitfield BFINI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        /// bitfield DRQIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqie{}; 
        /// bitfield SPKIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        /// bitfield BUSY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> busy{}; 
        /// bitfield DRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drq{}; 
        /// bitfield SPK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        /// bitfield SIZE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> size{}; 
    }
    namespace Noneep2s{    ///< register EP2S 
        using Addr = Register::Address<0x40042150,0xffff1180,0,unsigned>;
        /// bitfield BFINI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bfini{}; 
        /// bitfield DRQIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> drqie{}; 
        /// bitfield SPKIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spkie{}; 
        /// bitfield BUSY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> busy{}; 
        /// bitfield DRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> drq{}; 
        /// bitfield SPK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spk{}; 
        /// bitfield SIZE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> size{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bfdt{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sofstep{}; 
        /// bitfield CANCEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cancel{}; 
        /// bitfield RETRY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> retry{}; 
        /// bitfield RWKIRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rwkire{}; 
        /// bitfield URIRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> urire{}; 
        /// bitfield CMPIRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpire{}; 
        /// bitfield CNNIRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnnire{}; 
        /// bitfield DIRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dire{}; 
        /// bitfield SOFIRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sofire{}; 
        /// bitfield URST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> urst{}; 
        /// bitfield HOST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> host{}; 
    }
    namespace Nonehirq{    ///< register HIRQ 
        using Addr = Register::Address<0x40042104,0xffffff40,0,unsigned char>;
        /// bitfield TCAN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tcan{}; 
        /// bitfield RWKIRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rwkirq{}; 
        /// bitfield URIRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> urirq{}; 
        /// bitfield CMPIRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmpirq{}; 
        /// bitfield CNNIRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cnnirq{}; 
        /// bitfield DIRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dirq{}; 
        /// bitfield SOFIRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofirq{}; 
    }
    namespace Noneherr{    ///< register HERR 
        using Addr = Register::Address<0x40042105,0xffffff00,0,unsigned char>;
        /// bitfield LSTSOF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lstsof{}; 
        /// bitfield RERR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rerr{}; 
        /// bitfield TOUT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tout{}; 
        /// bitfield CRC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crc{}; 
        /// bitfield TGERR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tgerr{}; 
        /// bitfield STUFF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> stuff{}; 
        /// bitfield HS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> hs{}; 
    }
    namespace Nonehstate{    ///< register HSTATE 
        using Addr = Register::Address<0x40042108,0xffffffc0,0,unsigned char>;
        /// bitfield ALIVE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> alive{}; 
        /// bitfield CLKSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clksel{}; 
        /// bitfield SOFBUSY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sofbusy{}; 
        /// bitfield SUSP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
        /// bitfield TMODE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tmode{}; 
        /// bitfield CSTAT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cstat{}; 
    }
    namespace Nonehfcomp{    ///< register HFCOMP 
        using Addr = Register::Address<0x40042109,0xffffff00,0,unsigned char>;
        /// bitfield FRAMECOMP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> framecomp{}; 
    }
    namespace Nonehrtimer{    ///< register HRTIMER 
        using Addr = Register::Address<0x4004210c,0xffff0000,0,unsigned>;
        /// bitfield RTIMER1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rtimer1{}; 
        /// bitfield RTIMER0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rtimer0{}; 
    }
    namespace Nonehrtimer2{    ///< register HRTIMER2 
        using Addr = Register::Address<0x40042110,0xfffffffc,0,unsigned char>;
        /// bitfield RTIMER2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rtimer2{}; 
    }
    namespace Nonehadr{    ///< register HADR 
        using Addr = Register::Address<0x40042111,0xffffff80,0,unsigned char>;
        /// bitfield ADDRESS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace Noneheof{    ///< register HEOF 
        using Addr = Register::Address<0x40042114,0xffffc000,0,unsigned>;
        /// bitfield EOF1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> eof1{}; 
        /// bitfield EOF0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> eof0{}; 
    }
    namespace Nonehframe{    ///< register HFRAME 
        using Addr = Register::Address<0x40042118,0xfffff800,0,unsigned>;
        /// bitfield FRAME1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> frame1{}; 
        /// bitfield FRAME0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frame0{}; 
    }
    namespace Nonehtoken{    ///< register HTOKEN 
        using Addr = Register::Address<0x4004211c,0xffffff00,0,unsigned char>;
        /// bitfield TGGL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tggl{}; 
        /// bitfield TKNEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tknen{}; 
        /// bitfield ENDPT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> endpt{}; 
    }
}
