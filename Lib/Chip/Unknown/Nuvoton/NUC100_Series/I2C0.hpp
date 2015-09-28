#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonei2con{
        using Addr = Register::Address<0x40020000,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EI; 
    }
    namespace Nonei2caddr0{
        using Addr = Register::Address<0x40020004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> I2CADDR; 
    }
    namespace Nonei2cdat{
        using Addr = Register::Address<0x40020008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> I2CDAT; 
    }
    namespace Nonei2cstatus{
        using Addr = Register::Address<0x4002000c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> I2CSTATUS; 
    }
    namespace Nonei2clk{
        using Addr = Register::Address<0x40020010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> I2CLK; 
    }
    namespace Nonei2ctoc{
        using Addr = Register::Address<0x40020014,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENTI; 
    }
    namespace Nonei2caddr1{
        using Addr = Register::Address<0x40020018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> I2CADDR; 
    }
    namespace Nonei2caddr2{
        using Addr = Register::Address<0x4002001c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> I2CADDR; 
    }
    namespace Nonei2caddr3{
        using Addr = Register::Address<0x40020020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> I2CADDR; 
    }
    namespace Nonei2cadm0{
        using Addr = Register::Address<0x40020024,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> I2CADM; 
    }
    namespace Nonei2cadm1{
        using Addr = Register::Address<0x40020028,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> I2CADM; 
    }
    namespace Nonei2cadm2{
        using Addr = Register::Address<0x4002002c,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> I2CADM; 
    }
    namespace Nonei2cadm3{
        using Addr = Register::Address<0x40020030,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> I2CADM; 
    }
}
