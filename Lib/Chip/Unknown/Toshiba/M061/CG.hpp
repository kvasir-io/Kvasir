#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Clock Generator (CG)
    namespace Nonesyscr{    ///<System Control Register
        using Addr = Register::Address<0x400f3000,0xffecc8f8,0,unsigned>;
        ///GEAR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> gear{}; 
        ///PRCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> prck{}; 
        ///FPSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> fpsel{}; 
        ///SCOSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> scosel{}; 
        ///FCSTOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fcstop{}; 
    }
    namespace Noneosccr{    ///<Oscillation Control Register
        using Addr = Register::Address<0x400f3004,0x000030f4,0,unsigned>;
        ///WUEON
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wueon{}; 
        ///WUEF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wuef{}; 
        ///WUPSEL1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wupsel1{}; 
        ///XEN1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> xen1{}; 
        ///XTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> xten{}; 
        ///LOSCSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> loscsel{}; 
        ///EHCLKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ehclken{}; 
        ///WUPTL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> wuptl{}; 
        ///XEN2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> xen2{}; 
        ///OSCSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oscsel{}; 
        ///HOSCON
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hoscon{}; 
        ///WUPSEL2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> wupsel2{}; 
        ///WUPT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> wupt{}; 
    }
    namespace Nonestbycr{    ///<Standby Control Register
        using Addr = Register::Address<0x400f3008,0xfffefcf8,0,unsigned>;
        ///STBY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> stby{}; 
        ///RXEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///RXTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///DRVE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> drve{}; 
    }
    namespace Noneehclksel{    ///<External High-speed clock select register
        using Addr = Register::Address<0x400f300c,0xfffffffe,0,unsigned>;
        ///EHCLKSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ehclksel{}; 
    }
    namespace Nonecksel{    ///<System Clock Selection Register
        using Addr = Register::Address<0x400f3010,0xfffffffc,0,unsigned>;
        ///SYSCKFLG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sysckflg{}; 
        ///SYSCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sysck{}; 
    }
    namespace Noneicrcg{    ///<CG Interrupt Request Clear Register
        using Addr = Register::Address<0x400f3014,0xffffffe0,0,unsigned>;
        ///ICRCG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> icrcg{}; 
    }
    namespace Nonerstflg{    ///<Reset Flag Register
        using Addr = Register::Address<0x400f301c,0xffffffea,0,unsigned>;
        ///PINRSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        ///WDTRSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtrstf{}; 
        ///DBGRSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbgrstf{}; 
    }
    namespace Noneimcga{    ///<CG Interrupt Mode Control Register A
        using Addr = Register::Address<0x400f3020,0x82828282,0,unsigned>;
        ///INT0EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int0en{}; 
        ///EMST0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> emst0{}; 
        ///EMCG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> emcg0{}; 
        ///INT1EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> int1en{}; 
        ///EMST1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> emst1{}; 
        ///EMCG1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> emcg1{}; 
        ///INT2EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> int2en{}; 
        ///EMST2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> emst2{}; 
        ///EMCG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> emcg2{}; 
        ///INT3EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> int3en{}; 
        ///EMST3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> emst3{}; 
        ///EMCG3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> emcg3{}; 
    }
    namespace Noneimcgb{    ///<CG Interrupt Mode Control Register B
        using Addr = Register::Address<0x400f3024,0xffff8282,0,unsigned>;
        ///INT4EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int4en{}; 
        ///EMST4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> emst4{}; 
        ///EMCG4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> emcg4{}; 
        ///INT5EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> int5en{}; 
        ///EMST5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> emst5{}; 
        ///EMCG5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> emcg5{}; 
    }
}
