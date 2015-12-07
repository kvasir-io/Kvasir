#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Encoder Input (ENC)
    namespace Nonetncr{    ///<Encoder Input Control Register
        using Addr = Register::Address<0x400f7000,0xfff80000,0,unsigned>;
        ///ENDEV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> endev{}; 
        namespace EndevValC{
        }
        ///INTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inten{}; 
        namespace IntenValC{
        }
        ///NR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> nr{}; 
        namespace NrValC{
        }
        ///ENRUN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enrun{}; 
        namespace EnrunValC{
        }
        ///ZEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> zen{}; 
        namespace ZenValC{
        }
        ///CMPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cmpen{}; 
        namespace CmpenValC{
        }
        ///ZESEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> zesel{}; 
        namespace ZeselValC{
        }
        ///ENCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enclr{}; 
        namespace EnclrValC{
        }
        ///SFTCAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sftcap{}; 
        namespace SftcapValC{
        }
        ///ZDET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> zdet{}; 
        namespace ZdetValC{
        }
        ///UD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ud{}; 
        namespace UdValC{
        }
        ///REVERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> reverr{}; 
        namespace ReverrValC{
        }
        ///CMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cmp{}; 
        namespace CmpValC{
        }
        ///P3EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p3en{}; 
        namespace P3enValC{
        }
        ///MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
    }
    namespace Nonereload{    ///<Encoder Counter Reload Register
        using Addr = Register::Address<0x400f7004,0xffff0000,0,unsigned>;
        ///RELOAD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> reload{}; 
        namespace ReloadValC{
        }
    }
    namespace Noneint{    ///<Encoder Compare Register
        using Addr = Register::Address<0x400f7008,0xff000000,0,unsigned>;
        ///INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> int_{}; 
        namespace Int_ValC{
        }
    }
    namespace Nonecnt{    ///<Encoder Counter Register
        using Addr = Register::Address<0x400f700c,0xff000000,0,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
}
