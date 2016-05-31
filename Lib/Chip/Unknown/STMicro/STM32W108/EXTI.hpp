#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//External interrupt/event      controller
    namespace ExtiExtiPr{    ///<EXTI pending register
        using Addr = Register::Address<0x4000a814,0xffffffff,0x00000000,unsigned>;
    }
    namespace ExtiExtiaTsr{    ///<EXTIA trigger source register
        using Addr = Register::Address<0x4000a860,0xfffffe1f,0x00000000,unsigned>;
        ///FILTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> filten{}; 
        ///INTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> intmod{}; 
    }
    namespace ExtiExtibTsr{    ///<EXTIB trigger source register
        using Addr = Register::Address<0x4000a864,0xfffffe1f,0x00000000,unsigned>;
        ///FILTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> filten{}; 
        ///INTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> intmod{}; 
    }
    namespace ExtiExticTsr{    ///<EXTIC trigger source register
        using Addr = Register::Address<0x4000a868,0xfffffe1f,0x00000000,unsigned>;
        ///FILTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> filten{}; 
        ///INTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> intmod{}; 
    }
    namespace ExtiExticCr{    ///<EXTIC configuration register
        using Addr = Register::Address<0x4000bc14,0xffffffe0,0x00000000,unsigned>;
        ///GPIO_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> gpioSel{}; 
    }
    namespace ExtiExtidTsr{    ///<EXTID trigger source register
        using Addr = Register::Address<0x4000a86c,0xfffffe1f,0x00000000,unsigned>;
        ///FILTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> filten{}; 
        ///INTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> intmod{}; 
    }
    namespace ExtiExtidCr{    ///<EXTID configuration register
        using Addr = Register::Address<0x4000bc18,0xffffffe0,0x00000000,unsigned>;
        ///GPIO_SEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> gpioSel{}; 
    }
}
