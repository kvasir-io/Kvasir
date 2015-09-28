#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DAC0_dat0l{
        using Addr = Register::Address<0x400cc000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat1l{
        using Addr = Register::Address<0x400cc002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat2l{
        using Addr = Register::Address<0x400cc004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat3l{
        using Addr = Register::Address<0x400cc006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat4l{
        using Addr = Register::Address<0x400cc008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat5l{
        using Addr = Register::Address<0x400cc00a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat6l{
        using Addr = Register::Address<0x400cc00c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat7l{
        using Addr = Register::Address<0x400cc00e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat8l{
        using Addr = Register::Address<0x400cc010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat9l{
        using Addr = Register::Address<0x400cc012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat10l{
        using Addr = Register::Address<0x400cc014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat11l{
        using Addr = Register::Address<0x400cc016,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat12l{
        using Addr = Register::Address<0x400cc018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat13l{
        using Addr = Register::Address<0x400cc01a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat14l{
        using Addr = Register::Address<0x400cc01c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat15l{
        using Addr = Register::Address<0x400cc01e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace DAC0_dat0h{
        using Addr = Register::Address<0x400cc001,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat1h{
        using Addr = Register::Address<0x400cc003,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat2h{
        using Addr = Register::Address<0x400cc005,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat3h{
        using Addr = Register::Address<0x400cc007,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat4h{
        using Addr = Register::Address<0x400cc009,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat5h{
        using Addr = Register::Address<0x400cc00b,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat6h{
        using Addr = Register::Address<0x400cc00d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat7h{
        using Addr = Register::Address<0x400cc00f,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat8h{
        using Addr = Register::Address<0x400cc011,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat9h{
        using Addr = Register::Address<0x400cc013,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat10h{
        using Addr = Register::Address<0x400cc015,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat11h{
        using Addr = Register::Address<0x400cc017,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat12h{
        using Addr = Register::Address<0x400cc019,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat13h{
        using Addr = Register::Address<0x400cc01b,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat14h{
        using Addr = Register::Address<0x400cc01d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_dat15h{
        using Addr = Register::Address<0x400cc01f,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA; 
    }
    namespace DAC0_sr{
        using Addr = Register::Address<0x400cc020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFRPBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACBFRPTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DACBFWMF; 
    }
    namespace DAC0_c0{
        using Addr = Register::Address<0x400cc021,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBBIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACBTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DACBWIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DACSWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DACTRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DACRFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DACEN; 
    }
    namespace DAC0_c1{
        using Addr = Register::Address<0x400cc022,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> DACBFMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> DACBFWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMAEN; 
    }
    namespace DAC0_c2{
        using Addr = Register::Address<0x400cc023,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DACBFUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DACBFRP; 
    }
}
