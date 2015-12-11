#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral DTIM 
    namespace Nonetimer1load{    ///< register TIMER1LOAD 
        using Addr = Register::Address<0x40015000,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer1value{    ///< register TIMER1VALUE 
        using Addr = Register::Address<0x40015004,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer1control{    ///< register TIMER1CONTROL 
        using Addr = Register::Address<0x40015008,0xffffff10,0,unsigned>;
        /// bitfield TimerEn 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> timeren{}; 
        /// bitfield TimerMode 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> timermode{}; 
        /// bitfield IntEnable 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intenable{}; 
        /// bitfield TimerPre 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> timerpre{}; 
        /// bitfield TimerSize 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timersize{}; 
        /// bitfield OneShot 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oneshot{}; 
    }
    namespace Nonetimer1intclr{    ///< register TIMER1INTCLR 
        using Addr = Register::Address<0x4001500c,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer1ris{    ///< register TIMER1RIS 
        using Addr = Register::Address<0x40015010,0xfffffffe,0,unsigned>;
        /// bitfield TIMER1RIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timer1ris{}; 
    }
    namespace Nonetimer1mis{    ///< register TIMER1MIS 
        using Addr = Register::Address<0x40015014,0xfffffffe,0,unsigned>;
        /// bitfield TIMER1MIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timer1mis{}; 
    }
    namespace Nonetimer1bgload{    ///< register TIMER1BGLOAD 
        using Addr = Register::Address<0x40015018,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2load{    ///< register TIMER2LOAD 
        using Addr = Register::Address<0x40015020,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2value{    ///< register TIMER2VALUE 
        using Addr = Register::Address<0x40015024,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2control{    ///< register TIMER2CONTROL 
        using Addr = Register::Address<0x40015028,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2intclr{    ///< register TIMER2INTCLR 
        using Addr = Register::Address<0x4001502c,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2ris{    ///< register TIMER2RIS 
        using Addr = Register::Address<0x40015030,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2mis{    ///< register TIMER2MIS 
        using Addr = Register::Address<0x40015034,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2bgload{    ///< register TIMER2BGLOAD 
        using Addr = Register::Address<0x40015038,0xffffffff,0,unsigned>;
    }
}
