#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemod{
        using Addr = Register::Address<0x4005c000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXBSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> EXBWAIT; 
    }
    namespace Noneas0{
        using Addr = Register::Address<0x4005c010,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EXAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SA; 
    }
    namespace Noneas1{
        using Addr = Register::Address<0x4005c014,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EXAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SA; 
    }
    namespace Noneas2{
        using Addr = Register::Address<0x4005c018,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EXAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SA; 
    }
    namespace Noneas3{
        using Addr = Register::Address<0x4005c01c,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EXAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> SA; 
    }
    namespace Nonecs0{
        using Addr = Register::Address<0x4005c040,0x00c0e0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSW0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSW2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> CSIW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> WRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> ALEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> RDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27)> WRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> CSR; 
    }
    namespace Nonecs1{
        using Addr = Register::Address<0x4005c044,0x00c0e0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSW0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSW2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> CSIW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> WRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> ALEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> RDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27)> WRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> CSR; 
    }
    namespace Nonecs2{
        using Addr = Register::Address<0x4005c048,0x00c0e0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSW0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSW2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> CSIW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> WRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> ALEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> RDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27)> WRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> CSR; 
    }
    namespace Nonecs3{
        using Addr = Register::Address<0x4005c04c,0x00c0e0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSW0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CSW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CSW2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> CSIW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> WRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> ALEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> RDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27)> WRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> CSR; 
    }
}
