#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//PWRCU
    namespace NonepwrcuBaksr{    ///<PWRCU_BAKSR
        using Addr = Register::Address<0x4006a100,0xfffffefc,0,unsigned>;
        ///BAKPORF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bakporf{}; 
        namespace BakporfValC{
        }
        ///PDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdf{}; 
        namespace PdfValC{
        }
        ///WUPF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wupf{}; 
        namespace WupfValC{
        }
    }
    namespace NonepwrcuBakcr{    ///<PWRCU_BAKCR
        using Addr = Register::Address<0x4006a104,0xffff6c76,0,unsigned>;
        ///BAKRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bakrst{}; 
        namespace BakrstValC{
        }
        ///LDOOFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ldooff{}; 
        namespace LdooffValC{
        }
        ///DMOSON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmoson{}; 
        namespace DmosonValC{
        }
        ///WUPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wupen{}; 
        namespace WupenValC{
        }
        ///WUPIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wupien{}; 
        namespace WupienValC{
        }
        ///V18RDYSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> v18rdysc{}; 
        namespace V18rdyscValC{
        }
        ///DMOSSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dmossts{}; 
        namespace DmosstsValC{
        }
    }
    namespace NonepwrcuBaktest{    ///<PWRCU_BAKTEST
        using Addr = Register::Address<0x4006a108,0xffffff00,0,unsigned>;
        ///BAKTEST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> baktest{}; 
        namespace BaktestValC{
        }
    }
    namespace NonepwrcuHsircr{    ///<PWRCU_HSIRCR
        using Addr = Register::Address<0x4006a10c,0xfffffffc,0,unsigned>;
        ///HSIRCBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> hsircbl{}; 
        namespace HsircblValC{
        }
    }
    namespace NonepwrcuLvdcsr{    ///<PWRCU_LVDCSR
        using Addr = Register::Address<0x4006a110,0xffc0fff4,0,unsigned>;
        ///BODEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> boden{}; 
        namespace BodenValC{
        }
        ///BODRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bodris{}; 
        namespace BodrisValC{
        }
        ///BODF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bodf{}; 
        namespace BodfValC{
        }
        ///LVDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lvden{}; 
        namespace LvdenValC{
        }
        ///LVDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> lvds{}; 
        namespace LvdsValC{
        }
        ///LVDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lvdf{}; 
        namespace LvdfValC{
        }
        ///LVDIWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lvdiwen{}; 
        namespace LvdiwenValC{
        }
        ///LVDEWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lvdewen{}; 
        namespace LvdewenValC{
        }
    }
    namespace NonepwrcuBakreg0{    ///<PWRCU_BAKREG0
        using Addr = Register::Address<0x4006a200,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
        namespace BakregValC{
        }
    }
    namespace NonepwrcuBakreg1{    ///<PWRCU_BAKREG1
        using Addr = Register::Address<0x4006a204,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
        namespace BakregValC{
        }
    }
    namespace NonepwrcuBakreg2{    ///<PWRCU_BAKREG2
        using Addr = Register::Address<0x4006a208,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
        namespace BakregValC{
        }
    }
    namespace NonepwrcuBakreg3{    ///<PWRCU_BAKREG3
        using Addr = Register::Address<0x4006a20c,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
        namespace BakregValC{
        }
    }
    namespace NonepwrcuBakreg4{    ///<PWRCU_BAKREG4
        using Addr = Register::Address<0x4006a210,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
        namespace BakregValC{
        }
    }
    namespace NonepwrcuBakreg5{    ///<PWRCU_BAKREG5
        using Addr = Register::Address<0x4006a214,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
        namespace BakregValC{
        }
    }
    namespace NonepwrcuBakreg6{    ///<PWRCU_BAKREG6
        using Addr = Register::Address<0x4006a218,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
        namespace BakregValC{
        }
    }
    namespace NonepwrcuBakreg7{    ///<PWRCU_BAKREG7
        using Addr = Register::Address<0x4006a21c,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
        namespace BakregValC{
        }
    }
    namespace NonepwrcuBakreg8{    ///<PWRCU_BAKREG8
        using Addr = Register::Address<0x4006a220,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
        namespace BakregValC{
        }
    }
    namespace NonepwrcuBakreg9{    ///<PWRCU_BAKREG9
        using Addr = Register::Address<0x4006a224,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
        namespace BakregValC{
        }
    }
}
