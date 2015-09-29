#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Encoder Input (ENC)
    namespace Nonetncr{    ///<Encoder Input Control Register
        using Addr = Register::Address<0x400f7000,0xfff80000,0,unsigned>;
        ///ENDEV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> endev{}; 
        ///INTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inten{}; 
        ///NR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> nr{}; 
        ///ENRUN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enrun{}; 
        ///ZEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> zen{}; 
        ///CMPEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmpen{}; 
        ///ZESEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> zesel{}; 
        ///ENCLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enclr{}; 
        ///SFTCAP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sftcap{}; 
        ///ZDET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> zdet{}; 
        ///UD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ud{}; 
        ///REVERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> reverr{}; 
        ///CMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cmp{}; 
        ///P3EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p3en{}; 
        ///MODE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace Nonereload{    ///<Encoder Counter Reload Register
        using Addr = Register::Address<0x400f7004,0xffff0000,0,unsigned>;
        ///RELOAD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reload{}; 
    }
    namespace Noneint{    ///<Encoder Compare Register
        using Addr = Register::Address<0x400f7008,0xff000000,0,unsigned>;
        ///INT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> int_{}; 
    }
    namespace Nonecnt{    ///<Encoder Counter Register
        using Addr = Register::Address<0x400f700c,0xff000000,0,unsigned>;
        ///CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
}
