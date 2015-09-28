#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneen{
        using Addr = Register::Address<0x400e7000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RMCEN; 
    }
    namespace Noneren{
        using Addr = Register::Address<0x400e7004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RMCREN; 
    }
    namespace Nonerbuf1{
        using Addr = Register::Address<0x400e7008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RMCRBUF; 
    }
    namespace Nonerbuf2{
        using Addr = Register::Address<0x400e700c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RMCRBUF; 
    }
    namespace Nonerbuf3{
        using Addr = Register::Address<0x400e7010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RMCRBUF; 
    }
    namespace Nonercr1{
        using Addr = Register::Address<0x400e7014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RMCLLMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> RMCLLMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RMCLCMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> RMCLCMAX; 
    }
    namespace Nonercr2{
        using Addr = Register::Address<0x400e7018,0x3cff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RMCDMAX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> RMCLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RMCPHM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RMCLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RMCEDIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RMCLIEN; 
    }
    namespace Nonercr3{
        using Addr = Register::Address<0x400e701c,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> RMCDATL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8)> RMCDATH; 
    }
    namespace Nonercr4{
        using Addr = Register::Address<0x400e7020,0xffffff70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RMCNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RMCPO; 
    }
    namespace Nonerstat{
        using Addr = Register::Address<0x400e7024,0xffff0f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> RMCRNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RMCRLDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RMCEDIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RMCDMAXIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RMCLOIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RMCRLIF; 
    }
    namespace Noneend1{
        using Addr = Register::Address<0x400e7028,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> RMCEND1; 
    }
    namespace Noneend2{
        using Addr = Register::Address<0x400e702c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> RMCEND2; 
    }
    namespace Noneend3{
        using Addr = Register::Address<0x400e7030,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> RMCEND3; 
    }
    namespace Nonefssel{
        using Addr = Register::Address<0x400e7034,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RMCCLK; 
    }
}
