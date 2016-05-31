#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Software Watchdog Timer
    namespace SwwdtWdogload{    ///<Software Watchdog Timer Load Register
        using Addr = Register::Address<0x40012000,0xffffffff,0x00000000,unsigned>;
    }
    namespace SwwdtWdogvalue{    ///<Software Watchdog Timer Value Register
        using Addr = Register::Address<0x40012004,0xffffffff,0x00000000,unsigned>;
    }
    namespace SwwdtWdogcontrol{    ///<Software Watchdog Timer Control Register
        using Addr = Register::Address<0x40012008,0xfffffffc,0x00000000,unsigned char>;
        ///Reset enable bit of the software watchdog
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resen{}; 
        ///Interrupt and counter enable bit of the software watchdog 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inten{}; 
    }
    namespace SwwdtWdogintclr{    ///<Software Watchdog Timer Clear Register
        using Addr = Register::Address<0x4001200c,0xffffffff,0x00000000,unsigned>;
    }
    namespace SwwdtWdogris{    ///<Software Watchdog Timer Interrupt Status Register
        using Addr = Register::Address<0x40012010,0xfffffffe,0x00000000,unsigned char>;
        ///Software watchdog interrupt status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ris{}; 
    }
    namespace SwwdtWdoglock{    ///<Software Watchdog Timer Lock Register
        using Addr = Register::Address<0x40012c00,0xffffffff,0x00000000,unsigned>;
    }
}
