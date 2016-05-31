#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Watchdog Timer (WD)
    namespace WdMod{    ///<WD Mode Register
        using Addr = Register::Address<0x400f2000,0xffffff09,0x00000000,unsigned>;
        ///RESCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rescr{}; 
        ///I2WDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> i2wdt{}; 
        ///WDTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> wdtp{}; 
        ///WDTE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wdte{}; 
    }
    namespace WdCr{    ///<WD Control Register
        using Addr = Register::Address<0x400f2004,0xffffff00,0x00000000,unsigned>;
        ///WDCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wdcr{}; 
    }
}
