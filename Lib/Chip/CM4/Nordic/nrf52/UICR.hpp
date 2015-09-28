#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneunused0{
        using Addr = Register::Address<0x10001000,0xffffffff>;
    }
    namespace Noneunused1{
        using Addr = Register::Address<0x10001004,0xffffffff>;
    }
    namespace Noneunused2{
        using Addr = Register::Address<0x10001008,0xffffffff>;
    }
    namespace Noneunused3{
        using Addr = Register::Address<0x10001010,0xffffffff>;
    }
    namespace Nonenrffw0{
        using Addr = Register::Address<0x10001014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw1{
        using Addr = Register::Address<0x10001018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw2{
        using Addr = Register::Address<0x1000101c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw3{
        using Addr = Register::Address<0x10001020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw4{
        using Addr = Register::Address<0x10001024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw5{
        using Addr = Register::Address<0x10001028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw6{
        using Addr = Register::Address<0x1000102c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw7{
        using Addr = Register::Address<0x10001030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw8{
        using Addr = Register::Address<0x10001034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw9{
        using Addr = Register::Address<0x10001038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw10{
        using Addr = Register::Address<0x1000103c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw11{
        using Addr = Register::Address<0x10001040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw12{
        using Addr = Register::Address<0x10001044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw13{
        using Addr = Register::Address<0x10001048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrffw14{
        using Addr = Register::Address<0x1000104c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFFW; 
    }
    namespace Nonenrfhw0{
        using Addr = Register::Address<0x10001050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw1{
        using Addr = Register::Address<0x10001054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw2{
        using Addr = Register::Address<0x10001058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw3{
        using Addr = Register::Address<0x1000105c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw4{
        using Addr = Register::Address<0x10001060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw5{
        using Addr = Register::Address<0x10001064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw6{
        using Addr = Register::Address<0x10001068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw7{
        using Addr = Register::Address<0x1000106c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw8{
        using Addr = Register::Address<0x10001070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw9{
        using Addr = Register::Address<0x10001074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw10{
        using Addr = Register::Address<0x10001078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonenrfhw11{
        using Addr = Register::Address<0x1000107c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NRFHW; 
    }
    namespace Nonecustomer0{
        using Addr = Register::Address<0x10001080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer1{
        using Addr = Register::Address<0x10001084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer2{
        using Addr = Register::Address<0x10001088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer3{
        using Addr = Register::Address<0x1000108c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer4{
        using Addr = Register::Address<0x10001090,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer5{
        using Addr = Register::Address<0x10001094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer6{
        using Addr = Register::Address<0x10001098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer7{
        using Addr = Register::Address<0x1000109c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer8{
        using Addr = Register::Address<0x100010a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer9{
        using Addr = Register::Address<0x100010a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer10{
        using Addr = Register::Address<0x100010a8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer11{
        using Addr = Register::Address<0x100010ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer12{
        using Addr = Register::Address<0x100010b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer13{
        using Addr = Register::Address<0x100010b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer14{
        using Addr = Register::Address<0x100010b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer15{
        using Addr = Register::Address<0x100010bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer16{
        using Addr = Register::Address<0x100010c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer17{
        using Addr = Register::Address<0x100010c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer18{
        using Addr = Register::Address<0x100010c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer19{
        using Addr = Register::Address<0x100010cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer20{
        using Addr = Register::Address<0x100010d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer21{
        using Addr = Register::Address<0x100010d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer22{
        using Addr = Register::Address<0x100010d8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer23{
        using Addr = Register::Address<0x100010dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer24{
        using Addr = Register::Address<0x100010e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer25{
        using Addr = Register::Address<0x100010e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer26{
        using Addr = Register::Address<0x100010e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer27{
        using Addr = Register::Address<0x100010ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer28{
        using Addr = Register::Address<0x100010f0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer29{
        using Addr = Register::Address<0x100010f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer30{
        using Addr = Register::Address<0x100010f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonecustomer31{
        using Addr = Register::Address<0x100010fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CUSTOMER; 
    }
    namespace Nonepselreset0{
        using Addr = Register::Address<0x10001200,0x7fffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CONNECT; 
    }
    namespace Nonepselreset1{
        using Addr = Register::Address<0x10001204,0x7fffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> PIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CONNECT; 
    }
    namespace Noneapprotect{
        using Addr = Register::Address<0x10001208,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PALL; 
    }
    namespace Nonenfcpins{
        using Addr = Register::Address<0x1000120c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PROTECT; 
    }
}
