#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Dual Timer
    namespace DtimTimer1load{    ///<Load Register
        using Addr = Register::Address<0x40015000,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer1value{    ///<Value Register
        using Addr = Register::Address<0x40015004,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer1control{    ///<Control Register
        using Addr = Register::Address<0x40015008,0xffffff10,0x00000000,unsigned>;
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
    namespace DtimTimer1intclr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x4001500c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer1ris{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40015010,0xfffffffe,0x00000000,unsigned>;
        ///Interrupt Status Register bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timer1ris{}; 
    }
    namespace DtimTimer1mis{    ///<Masked Interrupt Status Register
        using Addr = Register::Address<0x40015014,0xfffffffe,0x00000000,unsigned>;
        ///Masked Interrupt Status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> timer1mis{}; 
    }
    namespace DtimTimer1bgload{    ///<Background Load Register
        using Addr = Register::Address<0x40015018,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2load{    ///<Load Register
        using Addr = Register::Address<0x40015020,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2value{    ///<Value Register
        using Addr = Register::Address<0x40015024,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2control{    ///<Control Register
        using Addr = Register::Address<0x40015028,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2intclr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x4001502c,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2ris{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40015030,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2mis{    ///<Masked Interrupt Status Register
        using Addr = Register::Address<0x40015034,0xffffffff,0x00000000,unsigned>;
    }
    namespace DtimTimer2bgload{    ///<Background Load Register
        using Addr = Register::Address<0x40015038,0xffffffff,0x00000000,unsigned>;
    }
}
