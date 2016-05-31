#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral DTIM 
    namespace DtimTimer1load{    ///< register TIMER1LOAD 
        using Addr = Register::Address<0x40015000,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer1value{    ///< register TIMER1VALUE 
        using Addr = Register::Address<0x40015004,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer1control{    ///< register TIMER1CONTROL 
        using Addr = Register::Address<0x40015008,0xffffff10,0x00000000,unsigned>;
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
    namespace DtimTimer1intclr{    ///< register TIMER1INTCLR 
        using Addr = Register::Address<0x4001500c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer1ris{    ///< register TIMER1RIS 
        using Addr = Register::Address<0x40015010,0xfffffffe,0x00000000,unsigned>;
        /// bitfield TIMER1RIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timer1ris{}; 
    }
    namespace DtimTimer1mis{    ///< register TIMER1MIS 
        using Addr = Register::Address<0x40015014,0xfffffffe,0x00000000,unsigned>;
        /// bitfield TIMER1MIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timer1mis{}; 
    }
    namespace DtimTimer1bgload{    ///< register TIMER1BGLOAD 
        using Addr = Register::Address<0x40015018,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2load{    ///< register TIMER2LOAD 
        using Addr = Register::Address<0x40015020,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2value{    ///< register TIMER2VALUE 
        using Addr = Register::Address<0x40015024,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2control{    ///< register TIMER2CONTROL 
        using Addr = Register::Address<0x40015028,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2intclr{    ///< register TIMER2INTCLR 
        using Addr = Register::Address<0x4001502c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2ris{    ///< register TIMER2RIS 
        using Addr = Register::Address<0x40015030,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2mis{    ///< register TIMER2MIS 
        using Addr = Register::Address<0x40015034,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2bgload{    ///< register TIMER2BGLOAD 
        using Addr = Register::Address<0x40015038,0xffffffff,0x00000000,unsigned>;
    }
}
