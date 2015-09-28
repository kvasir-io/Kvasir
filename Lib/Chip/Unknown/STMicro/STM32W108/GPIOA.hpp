#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonegpioa_crl{
        using Addr = Register::Address<0x4000b000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CNFMODE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CNFMODE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CNFMODE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CNFMODE0; 
    }
    namespace Nonegpioa_crh{
        using Addr = Register::Address<0x4000b004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CNFMODE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CNFMODE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CNFMODE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CNFMODE4; 
    }
    namespace Nonegpioa_idr{
        using Addr = Register::Address<0x4000b008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IDR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IDR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IDR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IDR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IDR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IDR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IDR0; 
    }
    namespace Nonegpioa_odr{
        using Addr = Register::Address<0x4000b00c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ODR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ODR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ODR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ODR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ODR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ODR0; 
    }
    namespace Nonegpioa_bsr{
        using Addr = Register::Address<0x4000b010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BS0; 
    }
    namespace Nonegpioa_brr{
        using Addr = Register::Address<0x4000b014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BR0; 
    }
}
