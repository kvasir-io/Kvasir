#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedmacr{
        using Addr = Register::Address<0x40060000,0x20ffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DH; 
    }
    namespace Nonedmaca0{
        using Addr = Register::Address<0x40060010,0x00700000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,23)> IS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TC; 
    }
    namespace Nonedmacb0{
        using Addr = Register::Address<0x40060014,0xc000fffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> MS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> TW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> EI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> SS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EM; 
    }
    namespace Nonedmacsa0{
        using Addr = Register::Address<0x40060018,0xffffffff>;
    }
    namespace Nonedmacda0{
        using Addr = Register::Address<0x4006001c,0xffffffff>;
    }
    namespace Nonedmaca1{
        using Addr = Register::Address<0x40060020,0xffffffff>;
    }
    namespace Nonedmacb1{
        using Addr = Register::Address<0x40060024,0xffffffff>;
    }
    namespace Nonedmacsa1{
        using Addr = Register::Address<0x40060028,0xffffffff>;
    }
    namespace Nonedmacda1{
        using Addr = Register::Address<0x4006002c,0xffffffff>;
    }
    namespace Nonedmaca2{
        using Addr = Register::Address<0x40060030,0xffffffff>;
    }
    namespace Nonedmacb2{
        using Addr = Register::Address<0x40060034,0xffffffff>;
    }
    namespace Nonedmacsa2{
        using Addr = Register::Address<0x40060038,0xffffffff>;
    }
    namespace Nonedmacda2{
        using Addr = Register::Address<0x4006003c,0xffffffff>;
    }
    namespace Nonedmaca3{
        using Addr = Register::Address<0x40060040,0xffffffff>;
    }
    namespace Nonedmacb3{
        using Addr = Register::Address<0x40060044,0xffffffff>;
    }
    namespace Nonedmacsa3{
        using Addr = Register::Address<0x40060048,0xffffffff>;
    }
    namespace Nonedmacda3{
        using Addr = Register::Address<0x4006004c,0xffffffff>;
    }
    namespace Nonedmaca4{
        using Addr = Register::Address<0x40060050,0xffffffff>;
    }
    namespace Nonedmacb4{
        using Addr = Register::Address<0x40060054,0xffffffff>;
    }
    namespace Nonedmacsa4{
        using Addr = Register::Address<0x40060058,0xffffffff>;
    }
    namespace Nonedmacda4{
        using Addr = Register::Address<0x4006005c,0xffffffff>;
    }
    namespace Nonedmaca5{
        using Addr = Register::Address<0x40060060,0xffffffff>;
    }
    namespace Nonedmacb5{
        using Addr = Register::Address<0x40060064,0xffffffff>;
    }
    namespace Nonedmacsa5{
        using Addr = Register::Address<0x40060068,0xffffffff>;
    }
    namespace Nonedmacda5{
        using Addr = Register::Address<0x4006006c,0xffffffff>;
    }
    namespace Nonedmaca6{
        using Addr = Register::Address<0x40060070,0xffffffff>;
    }
    namespace Nonedmacb6{
        using Addr = Register::Address<0x40060074,0xffffffff>;
    }
    namespace Nonedmacsa6{
        using Addr = Register::Address<0x40060078,0xffffffff>;
    }
    namespace Nonedmacda6{
        using Addr = Register::Address<0x4006007c,0xffffffff>;
    }
    namespace Nonedmaca7{
        using Addr = Register::Address<0x40060080,0xffffffff>;
    }
    namespace Nonedmacb7{
        using Addr = Register::Address<0x40060084,0xffffffff>;
    }
    namespace Nonedmacsa7{
        using Addr = Register::Address<0x40060088,0xffffffff>;
    }
    namespace Nonedmacda7{
        using Addr = Register::Address<0x4006008c,0xffffffff>;
    }
}
