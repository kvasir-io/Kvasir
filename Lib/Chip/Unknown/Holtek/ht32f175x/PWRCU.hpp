#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//PWRCU
    namespace PwrcuPwrcuBaksr{    ///<PWRCU_BAKSR
        using Addr = Register::Address<0x4006a100,0x000000fc,0x00000000,unsigned>;
        ///BAKPORF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bakporf{}; 
        ///PDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdf{}; 
        ///WUPF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wupf{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace PwrcuPwrcuBakcr{    ///<PWRCU_BAKCR
        using Addr = Register::Address<0x4006a104,0x00006c76,0x00000000,unsigned>;
        ///BAKRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bakrst{}; 
        ///LDOOFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ldooff{}; 
        ///DMOSON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmoson{}; 
        ///WUPEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wupen{}; 
        ///WUPIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wupien{}; 
        ///V18RDYSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> v18rdysc{}; 
        ///DMOSSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dmossts{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace PwrcuPwrcuBaktest{    ///<PWRCU_BAKTEST
        using Addr = Register::Address<0x4006a108,0x00000000,0x00000000,unsigned>;
        ///BAKTEST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> baktest{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace PwrcuPwrcuHsircr{    ///<PWRCU_HSIRCR
        using Addr = Register::Address<0x4006a10c,0x00000000,0x00000000,unsigned>;
        ///HSIRCBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> hsircbl{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace PwrcuPwrcuLvdcsr{    ///<PWRCU_LVDCSR
        using Addr = Register::Address<0x4006a110,0x0000fff4,0x00000000,unsigned>;
        ///BODEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> boden{}; 
        ///BODRIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bodris{}; 
        ///BODF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bodf{}; 
        ///LVDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lvden{}; 
        ///LVDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> lvds{}; 
        ///LVDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lvdf{}; 
        ///LVDIWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lvdiwen{}; 
        ///LVDEWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lvdewen{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,22),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace PwrcuPwrcuBakreg0{    ///<PWRCU_BAKREG0
        using Addr = Register::Address<0x4006a200,0x00000000,0x00000000,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace PwrcuPwrcuBakreg1{    ///<PWRCU_BAKREG1
        using Addr = Register::Address<0x4006a204,0x00000000,0x00000000,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace PwrcuPwrcuBakreg2{    ///<PWRCU_BAKREG2
        using Addr = Register::Address<0x4006a208,0x00000000,0x00000000,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace PwrcuPwrcuBakreg3{    ///<PWRCU_BAKREG3
        using Addr = Register::Address<0x4006a20c,0x00000000,0x00000000,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace PwrcuPwrcuBakreg4{    ///<PWRCU_BAKREG4
        using Addr = Register::Address<0x4006a210,0x00000000,0x00000000,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace PwrcuPwrcuBakreg5{    ///<PWRCU_BAKREG5
        using Addr = Register::Address<0x4006a214,0x00000000,0x00000000,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace PwrcuPwrcuBakreg6{    ///<PWRCU_BAKREG6
        using Addr = Register::Address<0x4006a218,0x00000000,0x00000000,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace PwrcuPwrcuBakreg7{    ///<PWRCU_BAKREG7
        using Addr = Register::Address<0x4006a21c,0x00000000,0x00000000,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace PwrcuPwrcuBakreg8{    ///<PWRCU_BAKREG8
        using Addr = Register::Address<0x4006a220,0x00000000,0x00000000,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace PwrcuPwrcuBakreg9{    ///<PWRCU_BAKREG9
        using Addr = Register::Address<0x4006a224,0x00000000,0x00000000,unsigned>;
        ///BAKREG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
}
