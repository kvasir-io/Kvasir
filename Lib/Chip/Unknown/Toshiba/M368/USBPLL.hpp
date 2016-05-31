#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Low Voltage detector control register
    namespace UsbpllCr{    ///<USB PLL Control Register
        using Addr = Register::Address<0x400f3100,0xfffffffe,0x00000000,unsigned>;
        ///USBPLLON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbpllon{}; 
    }
    namespace UsbpllEn{    ///<USB PLL Enable Register
        using Addr = Register::Address<0x400f3104,0xfffffffc,0x00000000,unsigned>;
        ///USBDEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbden{}; 
        ///USBHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbhen{}; 
    }
    namespace UsbpllSel{    ///<USB PLL Select Register
        using Addr = Register::Address<0x400f3108,0xffff0000,0x00000000,unsigned>;
        ///USBPLLSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbpllsel{}; 
        ///USBPLLSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,1),Register::ReadWriteAccess,unsigned> usbpllset{}; 
    }
}
