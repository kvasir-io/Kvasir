#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//User Information Configuration.
    namespace UicrClenr0{    ///<Length of code region 0.
        using Addr = Register::Address<0x10001000,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrRbpconf{    ///<Readback protection configuration.
        using Addr = Register::Address<0x10001004,0xffff0000,0x00000000,unsigned>;
        ///Readback protect region 0. Will be ignored if pre-programmed factory code is present on the chip.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pr0{}; 
        ///Readback protect all code in the device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pall{}; 
    }
    namespace UicrXtalfreq{    ///<Reset value for CLOCK XTALFREQ register.
        using Addr = Register::Address<0x10001008,0xffffff00,0x00000000,unsigned>;
        ///Reset value for CLOCK XTALFREQ register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xtalfreq{}; 
    }
    namespace UicrFwid{    ///<Firmware ID.
        using Addr = Register::Address<0x10001010,0xffff0000,0x00000000,unsigned>;
        ///Identification number for the firmware loaded into the chip.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fwid{}; 
    }
    namespace UicrBootloaderaddr{    ///<Bootloader start address.
        using Addr = Register::Address<0x10001014,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw0{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001014,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw1{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001018,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw2{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x1000101c,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw3{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001020,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw4{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001024,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw5{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001028,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw6{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x1000102c,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw7{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001030,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw8{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001034,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw9{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001038,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw10{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x1000103c,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw11{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001040,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw12{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001044,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw13{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001048,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrffw14{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x1000104c,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw0{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001050,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw1{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001054,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw2{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001058,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw3{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x1000105c,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw4{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001060,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw5{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001064,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw6{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001068,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw7{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x1000106c,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw8{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001070,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw9{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001074,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw10{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001078,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrNrfhw11{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x1000107c,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer0{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001080,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer1{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001084,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer2{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001088,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer3{    ///<Reserved for customer.
        using Addr = Register::Address<0x1000108c,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer4{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001090,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer5{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001094,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer6{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001098,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer7{    ///<Reserved for customer.
        using Addr = Register::Address<0x1000109c,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer8{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010a0,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer9{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010a4,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer10{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010a8,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer11{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010ac,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer12{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010b0,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer13{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010b4,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer14{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010b8,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer15{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010bc,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer16{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010c0,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer17{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010c4,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer18{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010c8,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer19{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010cc,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer20{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010d0,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer21{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010d4,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer22{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010d8,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer23{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010dc,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer24{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010e0,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer25{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010e4,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer26{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010e8,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer27{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010ec,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer28{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010f0,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer29{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010f4,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer30{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010f8,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrCustomer31{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010fc,0xffffffff,0x00000000,unsigned>;
    }
}
