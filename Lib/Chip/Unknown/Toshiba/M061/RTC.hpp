#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Real Time Clock (RTC)
    namespace RtcSecr{    ///<RTC Sec setting register
        using Addr = Register::Address<0x400cc000,0xffffff80,0x00000000,unsigned char>;
        ///SE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> se{}; 
    }
    namespace RtcMinr{    ///<RTC Min settging register
        using Addr = Register::Address<0x400cc001,0xffffff80,0x00000000,unsigned char>;
        ///MI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace RtcHourr{    ///<RTC Hour setting register
        using Addr = Register::Address<0x400cc002,0xffffffc0,0x00000000,unsigned char>;
        ///HO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ho{}; 
    }
    namespace RtcDayr{    ///<RTC Day setting register
        using Addr = Register::Address<0x400cc004,0xfffffff8,0x00000000,unsigned char>;
        ///WE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> we{}; 
    }
    namespace RtcDater{    ///<RTC Date setting register
        using Addr = Register::Address<0x400cc005,0xffffffc0,0x00000000,unsigned char>;
        ///DA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> da{}; 
    }
    namespace RtcMonthr{    ///<RTC Month settging register PAGE0
        using Addr = Register::Address<0x400cc006,0xffffffe0,0x00000000,unsigned char>;
        ///MO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mo{}; 
    }
    namespace RtcYearrA{    ///<RTC Year setting register PAGE0
        using Addr = Register::Address<0x400cc007,0xffffff00,0x00000000,unsigned char>;
        ///YE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ye{}; 
    }
    namespace RtcYearrB{    ///<RTC Leap year register PAGE1
        using Addr = Register::Address<0x400cc007,0xfffffffc,0x00000000,unsigned char>;
        ///LEAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> leap{}; 
    }
    namespace RtcPager{    ///<RTC Page register
        using Addr = Register::Address<0x400cc008,0xffffff62,0x00000000,unsigned char>;
        ///PAGE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> page{}; 
        ///ENAALM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enaalm{}; 
        ///ENATMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enatmr{}; 
        ///ADJUST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adjust{}; 
        ///INTENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intena{}; 
    }
    namespace RtcRestr{    ///<RTC Reset register
        using Addr = Register::Address<0x400cc00c,0xffffff08,0x00000000,unsigned char>;
        ///DIS8HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis8hz{}; 
        ///DIS4HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis4hz{}; 
        ///DIS2HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dis2hz{}; 
        ///RESTALM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> restalm{}; 
        ///RSTTMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsttmr{}; 
        ///DIS16HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dis16hz{}; 
        ///DIS1HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dis1hz{}; 
    }
    namespace RtcProtect{    ///<RTC clock adjust control register
        using Addr = Register::Address<0x400cc00e,0xffffff00,0x00000000,unsigned char>;
        ///PROTECT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> protect{}; 
    }
    namespace RtcAdjctl{    ///<RTC protect register
        using Addr = Register::Address<0x400cc00f,0xfffffff0,0x00000000,unsigned char>;
        ///AJEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ajen{}; 
        ///AJSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> ajsel{}; 
    }
    namespace RtcAdjdat{    ///<RTC clock adjust data register
        using Addr = Register::Address<0x400cc010,0xfffffe00,0x00000000,unsigned>;
        ///ADJDAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> adjdat{}; 
    }
}
