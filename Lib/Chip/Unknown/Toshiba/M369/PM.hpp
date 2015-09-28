#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0c00,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM3; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0c04,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PM1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PM2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM3C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0c08,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PM1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PM2F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c0c0c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PM1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PM2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM3F1; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0c28,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PM1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PM2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM3OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c0c2c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PM1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PM2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM3UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0c30,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PI0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PI1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PI2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PI3DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0c38,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PM1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PM2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PM3IE; 
    }
}
