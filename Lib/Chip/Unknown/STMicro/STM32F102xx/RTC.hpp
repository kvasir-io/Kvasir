#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecrh{
        using Addr = Register::Address<0x40002800,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SECIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OWIE; 
    }
    namespace Nonecrl{
        using Addr = Register::Address<0x40002804,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SECF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ALRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CNF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTOFF; 
    }
    namespace Noneprlh{
        using Addr = Register::Address<0x40002808,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PRLH; 
    }
    namespace Noneprll{
        using Addr = Register::Address<0x4000280c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PRLL; 
    }
    namespace Nonedivh{
        using Addr = Register::Address<0x40002810,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DIVH; 
    }
    namespace Nonedivl{
        using Addr = Register::Address<0x40002814,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DIVL; 
    }
    namespace Nonecnth{
        using Addr = Register::Address<0x40002818,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNTH; 
    }
    namespace Nonecntl{
        using Addr = Register::Address<0x4000281c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNTL; 
    }
    namespace Nonealrh{
        using Addr = Register::Address<0x40002820,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ALRH; 
    }
    namespace Nonealrl{
        using Addr = Register::Address<0x40002824,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ALRL; 
    }
}
