#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneclenr0{
        using Addr = Register::Address<0x10001000,0xffffffff>;
    }
    namespace Nonerbpconf{
        using Addr = Register::Address<0x10001004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> PALL; 
    }
    namespace Nonextalfreq{
        using Addr = Register::Address<0x10001008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> XTALFREQ; 
    }
    namespace Nonefwid{
        using Addr = Register::Address<0x10001010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FWID; 
    }
    namespace Nonebootloaderaddr{
        using Addr = Register::Address<0x10001014,0xffffffff>;
    }
    namespace Nonenrffw0{
        using Addr = Register::Address<0x10001014,0xffffffff>;
    }
    namespace Nonenrffw1{
        using Addr = Register::Address<0x10001018,0xffffffff>;
    }
    namespace Nonenrffw2{
        using Addr = Register::Address<0x1000101c,0xffffffff>;
    }
    namespace Nonenrffw3{
        using Addr = Register::Address<0x10001020,0xffffffff>;
    }
    namespace Nonenrffw4{
        using Addr = Register::Address<0x10001024,0xffffffff>;
    }
    namespace Nonenrffw5{
        using Addr = Register::Address<0x10001028,0xffffffff>;
    }
    namespace Nonenrffw6{
        using Addr = Register::Address<0x1000102c,0xffffffff>;
    }
    namespace Nonenrffw7{
        using Addr = Register::Address<0x10001030,0xffffffff>;
    }
    namespace Nonenrffw8{
        using Addr = Register::Address<0x10001034,0xffffffff>;
    }
    namespace Nonenrffw9{
        using Addr = Register::Address<0x10001038,0xffffffff>;
    }
    namespace Nonenrffw10{
        using Addr = Register::Address<0x1000103c,0xffffffff>;
    }
    namespace Nonenrffw11{
        using Addr = Register::Address<0x10001040,0xffffffff>;
    }
    namespace Nonenrffw12{
        using Addr = Register::Address<0x10001044,0xffffffff>;
    }
    namespace Nonenrffw13{
        using Addr = Register::Address<0x10001048,0xffffffff>;
    }
    namespace Nonenrffw14{
        using Addr = Register::Address<0x1000104c,0xffffffff>;
    }
    namespace Nonenrfhw0{
        using Addr = Register::Address<0x10001050,0xffffffff>;
    }
    namespace Nonenrfhw1{
        using Addr = Register::Address<0x10001054,0xffffffff>;
    }
    namespace Nonenrfhw2{
        using Addr = Register::Address<0x10001058,0xffffffff>;
    }
    namespace Nonenrfhw3{
        using Addr = Register::Address<0x1000105c,0xffffffff>;
    }
    namespace Nonenrfhw4{
        using Addr = Register::Address<0x10001060,0xffffffff>;
    }
    namespace Nonenrfhw5{
        using Addr = Register::Address<0x10001064,0xffffffff>;
    }
    namespace Nonenrfhw6{
        using Addr = Register::Address<0x10001068,0xffffffff>;
    }
    namespace Nonenrfhw7{
        using Addr = Register::Address<0x1000106c,0xffffffff>;
    }
    namespace Nonenrfhw8{
        using Addr = Register::Address<0x10001070,0xffffffff>;
    }
    namespace Nonenrfhw9{
        using Addr = Register::Address<0x10001074,0xffffffff>;
    }
    namespace Nonenrfhw10{
        using Addr = Register::Address<0x10001078,0xffffffff>;
    }
    namespace Nonenrfhw11{
        using Addr = Register::Address<0x1000107c,0xffffffff>;
    }
    namespace Nonecustomer0{
        using Addr = Register::Address<0x10001080,0xffffffff>;
    }
    namespace Nonecustomer1{
        using Addr = Register::Address<0x10001084,0xffffffff>;
    }
    namespace Nonecustomer2{
        using Addr = Register::Address<0x10001088,0xffffffff>;
    }
    namespace Nonecustomer3{
        using Addr = Register::Address<0x1000108c,0xffffffff>;
    }
    namespace Nonecustomer4{
        using Addr = Register::Address<0x10001090,0xffffffff>;
    }
    namespace Nonecustomer5{
        using Addr = Register::Address<0x10001094,0xffffffff>;
    }
    namespace Nonecustomer6{
        using Addr = Register::Address<0x10001098,0xffffffff>;
    }
    namespace Nonecustomer7{
        using Addr = Register::Address<0x1000109c,0xffffffff>;
    }
    namespace Nonecustomer8{
        using Addr = Register::Address<0x100010a0,0xffffffff>;
    }
    namespace Nonecustomer9{
        using Addr = Register::Address<0x100010a4,0xffffffff>;
    }
    namespace Nonecustomer10{
        using Addr = Register::Address<0x100010a8,0xffffffff>;
    }
    namespace Nonecustomer11{
        using Addr = Register::Address<0x100010ac,0xffffffff>;
    }
    namespace Nonecustomer12{
        using Addr = Register::Address<0x100010b0,0xffffffff>;
    }
    namespace Nonecustomer13{
        using Addr = Register::Address<0x100010b4,0xffffffff>;
    }
    namespace Nonecustomer14{
        using Addr = Register::Address<0x100010b8,0xffffffff>;
    }
    namespace Nonecustomer15{
        using Addr = Register::Address<0x100010bc,0xffffffff>;
    }
    namespace Nonecustomer16{
        using Addr = Register::Address<0x100010c0,0xffffffff>;
    }
    namespace Nonecustomer17{
        using Addr = Register::Address<0x100010c4,0xffffffff>;
    }
    namespace Nonecustomer18{
        using Addr = Register::Address<0x100010c8,0xffffffff>;
    }
    namespace Nonecustomer19{
        using Addr = Register::Address<0x100010cc,0xffffffff>;
    }
    namespace Nonecustomer20{
        using Addr = Register::Address<0x100010d0,0xffffffff>;
    }
    namespace Nonecustomer21{
        using Addr = Register::Address<0x100010d4,0xffffffff>;
    }
    namespace Nonecustomer22{
        using Addr = Register::Address<0x100010d8,0xffffffff>;
    }
    namespace Nonecustomer23{
        using Addr = Register::Address<0x100010dc,0xffffffff>;
    }
    namespace Nonecustomer24{
        using Addr = Register::Address<0x100010e0,0xffffffff>;
    }
    namespace Nonecustomer25{
        using Addr = Register::Address<0x100010e4,0xffffffff>;
    }
    namespace Nonecustomer26{
        using Addr = Register::Address<0x100010e8,0xffffffff>;
    }
    namespace Nonecustomer27{
        using Addr = Register::Address<0x100010ec,0xffffffff>;
    }
    namespace Nonecustomer28{
        using Addr = Register::Address<0x100010f0,0xffffffff>;
    }
    namespace Nonecustomer29{
        using Addr = Register::Address<0x100010f4,0xffffffff>;
    }
    namespace Nonecustomer30{
        using Addr = Register::Address<0x100010f8,0xffffffff>;
    }
    namespace Nonecustomer31{
        using Addr = Register::Address<0x100010fc,0xffffffff>;
    }
}
