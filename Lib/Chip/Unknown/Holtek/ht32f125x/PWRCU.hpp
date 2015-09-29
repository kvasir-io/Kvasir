#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//PWRCU
    namespace NonepwrcuBaksr{    ///<PWRCU_BAKSR
        using Addr = Register::Address<0x4006a100,0xfffffefc,0,unsigned>;
        ///BAKPORF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bakporf{}; 
        ///PDF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdf{}; 
        ///WUPF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wupf{}; 
    }
    namespace NonepwrcuBakcr{    ///<PWRCU_BAKCR
        using Addr = Register::Address<0x4006a104,0xffff6c76,0,unsigned>;
        ///BAKRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bakrst{}; 
        ///LDOOFF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ldooff{}; 
        ///DMOSON
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmoson{}; 
        ///WUPEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wupen{}; 
        ///WUPIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wupien{}; 
        ///V18RDYSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> v18rdysc{}; 
        ///DMOSSTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dmossts{}; 
    }
    namespace NonepwrcuBaktest{    ///<PWRCU_BAKTEST
        using Addr = Register::Address<0x4006a108,0xffffff00,0,unsigned>;
        ///BAKTEST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> baktest{}; 
    }
    namespace NonepwrcuHsircr{    ///<PWRCU_HSIRCR
        using Addr = Register::Address<0x4006a10c,0xfffffffc,0,unsigned>;
        ///HSIRCBL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> hsircbl{}; 
    }
    namespace NonepwrcuLvdcsr{    ///<PWRCU_LVDCSR
        using Addr = Register::Address<0x4006a110,0xffe0fff4,0,unsigned>;
        ///BODEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> boden{}; 
        ///BODRIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bodris{}; 
        ///BODF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bodf{}; 
        ///LVDEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lvden{}; 
        ///LVDS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> lvds{}; 
        ///LVDF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lvdf{}; 
        ///LVDIWEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lvdiwen{}; 
    }
    namespace NonepwrcuBakreg0{    ///<PWRCU_BAKREG0
        using Addr = Register::Address<0x4006a200,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace NonepwrcuBakreg1{    ///<PWRCU_BAKREG1
        using Addr = Register::Address<0x4006a204,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace NonepwrcuBakreg2{    ///<PWRCU_BAKREG2
        using Addr = Register::Address<0x4006a208,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace NonepwrcuBakreg3{    ///<PWRCU_BAKREG3
        using Addr = Register::Address<0x4006a20c,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace NonepwrcuBakreg4{    ///<PWRCU_BAKREG4
        using Addr = Register::Address<0x4006a210,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace NonepwrcuBakreg5{    ///<PWRCU_BAKREG5
        using Addr = Register::Address<0x4006a214,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace NonepwrcuBakreg6{    ///<PWRCU_BAKREG6
        using Addr = Register::Address<0x4006a218,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace NonepwrcuBakreg7{    ///<PWRCU_BAKREG7
        using Addr = Register::Address<0x4006a21c,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace NonepwrcuBakreg8{    ///<PWRCU_BAKREG8
        using Addr = Register::Address<0x4006a220,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
    namespace NonepwrcuBakreg9{    ///<PWRCU_BAKREG9
        using Addr = Register::Address<0x4006a224,0x00000000,0,unsigned>;
        ///BAKREG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bakreg{}; 
    }
}
