#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RFVBAT_reg0{
        using Addr = Register::Address<0x4003e000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFVBAT_reg1{
        using Addr = Register::Address<0x4003e004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFVBAT_reg2{
        using Addr = Register::Address<0x4003e008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFVBAT_reg3{
        using Addr = Register::Address<0x4003e00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFVBAT_reg4{
        using Addr = Register::Address<0x4003e010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFVBAT_reg5{
        using Addr = Register::Address<0x4003e014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFVBAT_reg6{
        using Addr = Register::Address<0x4003e018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
    namespace RFVBAT_reg7{
        using Addr = Register::Address<0x4003e01c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> LH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> HH; 
    }
}
