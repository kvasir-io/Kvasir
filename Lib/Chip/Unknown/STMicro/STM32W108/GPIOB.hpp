#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonegpiob_crl{
        using Addr = Register::Address<0x4000b400,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CNFMODE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CNFMODE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CNFMODE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CNFMODE0; 
    }
    namespace Nonegpiob_crh{
        using Addr = Register::Address<0x4000b404,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> CNFMODE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> CNFMODE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CNFMODE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CNFMODE4; 
    }
    namespace Nonegpiob_idr{
        using Addr = Register::Address<0x4000b408,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ID7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ID6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ID5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ID4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ID3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ID2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ID1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ID0; 
    }
    namespace Nonegpiob_odr{
        using Addr = Register::Address<0x4000b40c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OD0; 
    }
    namespace Nonegpiob_bsr{
        using Addr = Register::Address<0x4000b410,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BS0; 
    }
    namespace Nonegpiob_brr{
        using Addr = Register::Address<0x4000b414,0xffffff00>;
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
