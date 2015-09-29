#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External interrupt/event
      controller
    namespace NoneextiPr{    ///<EXTI pending register
        using Addr = Register::Address<0x4000a814,0xffffffff,0,unsigned>;
    }
    namespace NoneextiaTsr{    ///<EXTIA trigger source register
        using Addr = Register::Address<0x4000a860,0xfffffe1f,0,unsigned>;
        ///FILTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> filten{}; 
        ///INTMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> intmod{}; 
    }
    namespace NoneextibTsr{    ///<EXTIB trigger source register
        using Addr = Register::Address<0x4000a864,0xfffffe1f,0,unsigned>;
        ///FILTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> filten{}; 
        ///INTMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> intmod{}; 
    }
    namespace NoneexticTsr{    ///<EXTIC trigger source register
        using Addr = Register::Address<0x4000a868,0xfffffe1f,0,unsigned>;
        ///FILTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> filten{}; 
        ///INTMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> intmod{}; 
    }
    namespace NoneexticCr{    ///<EXTIC configuration register
        using Addr = Register::Address<0x4000bc14,0xffffffe0,0,unsigned>;
        ///GPIO_SEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> gpioSel{}; 
    }
    namespace NoneextidTsr{    ///<EXTID trigger source register
        using Addr = Register::Address<0x4000a86c,0xfffffe1f,0,unsigned>;
        ///FILTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> filten{}; 
        ///INTMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> intmod{}; 
    }
    namespace NoneextidCr{    ///<EXTID configuration register
        using Addr = Register::Address<0x4000bc18,0xffffffe0,0,unsigned>;
        ///GPIO_SEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> gpioSel{}; 
    }
}
