#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RFSYS_reg0{
        using Addr = Register::Address<0x40041000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFSYS_reg1{
        using Addr = Register::Address<0x40041004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFSYS_reg2{
        using Addr = Register::Address<0x40041008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFSYS_reg3{
        using Addr = Register::Address<0x4004100c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFSYS_reg4{
        using Addr = Register::Address<0x40041010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFSYS_reg5{
        using Addr = Register::Address<0x40041014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFSYS_reg6{
        using Addr = Register::Address<0x40041018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFSYS_reg7{
        using Addr = Register::Address<0x4004101c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
}
