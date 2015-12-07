#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low Voltage detector control register
    namespace Nonecr{    ///<USB PLL Control Register
        using Addr = Register::Address<0x400f3100,0xfffffffe,0,unsigned>;
        ///USBPLLON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbpllon{}; 
        namespace UsbpllonValC{
        }
    }
    namespace Noneen{    ///<USB PLL Enable Register
        using Addr = Register::Address<0x400f3104,0xfffffffc,0,unsigned>;
        ///USBDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbden{}; 
        namespace UsbdenValC{
        }
        ///USBHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbhen{}; 
        namespace UsbhenValC{
        }
    }
    namespace Nonesel{    ///<USB PLL Select Register
        using Addr = Register::Address<0x400f3108,0xffff0000,0,unsigned>;
        ///USBPLLSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbpllsel{}; 
        namespace UsbpllselValC{
        }
        ///USBPLLSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,1),Register::ReadWriteAccess,unsigned> usbpllset{}; 
        namespace UsbpllsetValC{
        }
    }
}
