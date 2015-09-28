#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace AIPS_pacra{
        using Addr = Register::Address<0x40000020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacrb{
        using Addr = Register::Address<0x40000024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacre{
        using Addr = Register::Address<0x40000040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacrf{
        using Addr = Register::Address<0x40000044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacrg{
        using Addr = Register::Address<0x40000048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacrh{
        using Addr = Register::Address<0x4000004c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacri{
        using Addr = Register::Address<0x40000050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacrj{
        using Addr = Register::Address<0x40000054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacrk{
        using Addr = Register::Address<0x40000058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacrl{
        using Addr = Register::Address<0x4000005c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacrm{
        using Addr = Register::Address<0x40000060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacrn{
        using Addr = Register::Address<0x40000064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacro{
        using Addr = Register::Address<0x40000068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
    namespace AIPS_pacrp{
        using Addr = Register::Address<0x4000006c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> AC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> AC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> AC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> AC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> AC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> AC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28)> AC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RO0; 
    }
}
