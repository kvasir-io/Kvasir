#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Dual Timer
    namespace Nonetimer1load{    ///<Load Register
        using Addr = Register::Address<0x40015000,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer1value{    ///<Value Register
        using Addr = Register::Address<0x40015004,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer1control{    ///<Control Register
        using Addr = Register::Address<0x40015008,0xffffff10,0,unsigned>;
        ///Enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> timeren{}; 
        ///Mode bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> timermode{}; 
        ///Interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intenable{}; 
        ///Prescale bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> timerpre{}; 
        ///Counter size bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> timersize{}; 
        ///One-shot mode bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> oneshot{}; 
    }
    namespace Nonetimer1intclr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x4001500c,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer1ris{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40015010,0xfffffffe,0,unsigned>;
        ///Interrupt Status Register bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timer1ris{}; 
    }
    namespace Nonetimer1mis{    ///<Masked Interrupt Status Register
        using Addr = Register::Address<0x40015014,0xfffffffe,0,unsigned>;
        ///Masked Interrupt Status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timer1mis{}; 
    }
    namespace Nonetimer1bgload{    ///<Background Load Register
        using Addr = Register::Address<0x40015018,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2load{    ///<Load Register
        using Addr = Register::Address<0x40015020,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2value{    ///<Value Register
        using Addr = Register::Address<0x40015024,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2control{    ///<Control Register
        using Addr = Register::Address<0x40015028,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2intclr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x4001502c,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2ris{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40015030,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2mis{    ///<Masked Interrupt Status Register
        using Addr = Register::Address<0x40015034,0xffffffff,0,unsigned>;
    }
    namespace Nonetimer2bgload{    ///<Background Load Register
        using Addr = Register::Address<0x40015038,0xffffffff,0,unsigned>;
    }
}
