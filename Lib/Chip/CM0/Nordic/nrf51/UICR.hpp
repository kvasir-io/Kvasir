#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//User Information Configuration.
    namespace Noneclenr0{    ///<Length of code region 0.
        using Addr = Register::Address<0x10001000,0xffffffff,0,unsigned>;
    }
    namespace Nonerbpconf{    ///<Readback protection configuration.
        using Addr = Register::Address<0x10001004,0xffff0000,0,unsigned>;
        ///Readback protect region 0. Will be ignored if pre-programmed factory code is present on the chip.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pr0{}; 
        namespace Pr0ValC{
        }
        ///Readback protect all code in the device.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> pall{}; 
        namespace PallValC{
        }
    }
    namespace Nonextalfreq{    ///<Reset value for CLOCK XTALFREQ register.
        using Addr = Register::Address<0x10001008,0xffffff00,0,unsigned>;
        ///Reset value for CLOCK XTALFREQ register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> xtalfreq{}; 
        namespace XtalfreqValC{
        }
    }
    namespace Nonefwid{    ///<Firmware ID.
        using Addr = Register::Address<0x10001010,0xffff0000,0,unsigned>;
        ///Identification number for the firmware loaded into the chip.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fwid{}; 
        namespace FwidValC{
        }
    }
    namespace Nonebootloaderaddr{    ///<Bootloader start address.
        using Addr = Register::Address<0x10001014,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw0{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001014,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw1{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001018,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw2{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x1000101c,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw3{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001020,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw4{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001024,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw5{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001028,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw6{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x1000102c,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw7{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001030,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw8{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001034,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw9{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001038,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw10{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x1000103c,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw11{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001040,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw12{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001044,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw13{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x10001048,0xffffffff,0,unsigned>;
    }
    namespace Nonenrffw14{    ///<Reserved for Nordic firmware design.
        using Addr = Register::Address<0x1000104c,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw0{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001050,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw1{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001054,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw2{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001058,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw3{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x1000105c,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw4{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001060,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw5{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001064,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw6{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001068,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw7{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x1000106c,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw8{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001070,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw9{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001074,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw10{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x10001078,0xffffffff,0,unsigned>;
    }
    namespace Nonenrfhw11{    ///<Reserved for Nordic hardware design.
        using Addr = Register::Address<0x1000107c,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer0{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001080,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer1{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001084,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer2{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001088,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer3{    ///<Reserved for customer.
        using Addr = Register::Address<0x1000108c,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer4{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001090,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer5{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001094,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer6{    ///<Reserved for customer.
        using Addr = Register::Address<0x10001098,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer7{    ///<Reserved for customer.
        using Addr = Register::Address<0x1000109c,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer8{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010a0,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer9{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010a4,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer10{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010a8,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer11{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010ac,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer12{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010b0,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer13{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010b4,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer14{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010b8,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer15{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010bc,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer16{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010c0,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer17{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010c4,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer18{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010c8,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer19{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010cc,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer20{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010d0,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer21{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010d4,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer22{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010d8,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer23{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010dc,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer24{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010e0,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer25{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010e4,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer26{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010e8,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer27{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010ec,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer28{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010f0,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer29{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010f4,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer30{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010f8,0xffffffff,0,unsigned>;
    }
    namespace Nonecustomer31{    ///<Reserved for customer.
        using Addr = Register::Address<0x100010fc,0xffffffff,0,unsigned>;
    }
}
