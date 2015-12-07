#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Real Time Clock (RTC)
    namespace Nonesecr{    ///<RTC Sec setting register
        using Addr = Register::Address<0x400cc000,0xffffff80,0,unsigned char>;
        ///SE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> se{}; 
        namespace SeValC{
        }
    }
    namespace Noneminr{    ///<RTC Min settging register
        using Addr = Register::Address<0x400cc001,0xffffff80,0,unsigned char>;
        ///MI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Nonehourr{    ///<RTC Hour setting register
        using Addr = Register::Address<0x400cc002,0xffffffc0,0,unsigned char>;
        ///HO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ho{}; 
        namespace HoValC{
        }
    }
    namespace Nonedayr{    ///<RTC Day setting register
        using Addr = Register::Address<0x400cc004,0xfffffff8,0,unsigned char>;
        ///WE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> we{}; 
        namespace WeValC{
        }
    }
    namespace Nonedater{    ///<RTC Date setting register
        using Addr = Register::Address<0x400cc005,0xffffffc0,0,unsigned char>;
        ///DA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> da{}; 
        namespace DaValC{
        }
    }
    namespace Nonemonthr{    ///<RTC Month settging register PAGE0
        using Addr = Register::Address<0x400cc006,0xffffffe0,0,unsigned char>;
        ///MO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mo{}; 
        namespace MoValC{
        }
    }
    namespace NoneyearrA{    ///<RTC Year setting register PAGE0
        using Addr = Register::Address<0x400cc007,0xffffff00,0,unsigned char>;
        ///YE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ye{}; 
        namespace YeValC{
        }
    }
    namespace NoneyearrB{    ///<RTC Leap year register PAGE1
        using Addr = Register::Address<0x400cc007,0xfffffffc,0,unsigned char>;
        ///LEAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> leap{}; 
        namespace LeapValC{
        }
    }
    namespace Nonepager{    ///<RTC Page register
        using Addr = Register::Address<0x400cc008,0xffffff62,0,unsigned char>;
        ///PAGE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> page{}; 
        namespace PageValC{
        }
        ///ENAALM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enaalm{}; 
        namespace EnaalmValC{
        }
        ///ENATMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enatmr{}; 
        namespace EnatmrValC{
        }
        ///ADJUST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adjust{}; 
        namespace AdjustValC{
        }
        ///INTENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intena{}; 
        namespace IntenaValC{
        }
    }
    namespace Nonerestr{    ///<RTC Reset register
        using Addr = Register::Address<0x400cc00c,0xffffff08,0,unsigned char>;
        ///DIS8HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis8hz{}; 
        namespace Dis8hzValC{
        }
        ///DIS4HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis4hz{}; 
        namespace Dis4hzValC{
        }
        ///DIS2HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dis2hz{}; 
        namespace Dis2hzValC{
        }
        ///RESTALM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> restalm{}; 
        namespace RestalmValC{
        }
        ///RSTTMR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsttmr{}; 
        namespace RsttmrValC{
        }
        ///DIS16HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dis16hz{}; 
        namespace Dis16hzValC{
        }
        ///DIS1HZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dis1hz{}; 
        namespace Dis1hzValC{
        }
    }
    namespace Noneprotect{    ///<RTC clock adjust control register
        using Addr = Register::Address<0x400cc00e,0xffffff00,0,unsigned char>;
        ///PROTECT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> protect{}; 
        namespace ProtectValC{
        }
    }
    namespace Noneadjctl{    ///<RTC protect register
        using Addr = Register::Address<0x400cc00f,0xfffffff0,0,unsigned char>;
        ///AJEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ajen{}; 
        namespace AjenValC{
        }
        ///AJSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> ajsel{}; 
        namespace AjselValC{
        }
    }
    namespace Noneadjdat{    ///<RTC clock adjust data register
        using Addr = Register::Address<0x400cc010,0xfffffe00,0,unsigned>;
        ///ADJDAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> adjdat{}; 
        namespace AdjdatValC{
        }
    }
}
