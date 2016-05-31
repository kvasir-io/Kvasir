#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Low Power Consumption Mode
    namespace DsRegCtl{    ///<Sub Oscillation Circuit Power Supply Control Register
        using Addr = Register::Address<0x40035100,0xfffffff9,0x00000000,unsigned char>;
        ///Sub oscillation circuit current setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> isubsel{}; 
    }
    namespace DsRckCtl{    ///<Sub Clock Control Register
        using Addr = Register::Address<0x40035104,0xfffffffe,0x00000000,unsigned char>;
        ///RTC clock control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccke{}; 
    }
    namespace DsPmdCtl{    ///<RTC Mode Control Register
        using Addr = Register::Address<0x40035800,0xfffffffe,0x00000000,unsigned char>;
        ///RTC mode control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtce{}; 
    }
}
