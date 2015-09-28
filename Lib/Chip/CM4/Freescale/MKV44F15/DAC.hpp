#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DAC_dat0l{
        using Addr = Register::Address<0x4003f000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat1l{
        using Addr = Register::Address<0x4003f002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat2l{
        using Addr = Register::Address<0x4003f004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat3l{
        using Addr = Register::Address<0x4003f006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat4l{
        using Addr = Register::Address<0x4003f008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat5l{
        using Addr = Register::Address<0x4003f00a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat6l{
        using Addr = Register::Address<0x4003f00c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat7l{
        using Addr = Register::Address<0x4003f00e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat8l{
        using Addr = Register::Address<0x4003f010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat9l{
        using Addr = Register::Address<0x4003f012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat10l{
        using Addr = Register::Address<0x4003f014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat11l{
        using Addr = Register::Address<0x4003f016,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat12l{
        using Addr = Register::Address<0x4003f018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat13l{
        using Addr = Register::Address<0x4003f01a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat14l{
        using Addr = Register::Address<0x4003f01c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat15l{
        using Addr = Register::Address<0x4003f01e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC_dat0h{
        using Addr = Register::Address<0x4003f001,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat1h{
        using Addr = Register::Address<0x4003f003,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat2h{
        using Addr = Register::Address<0x4003f005,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat3h{
        using Addr = Register::Address<0x4003f007,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat4h{
        using Addr = Register::Address<0x4003f009,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat5h{
        using Addr = Register::Address<0x4003f00b,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat6h{
        using Addr = Register::Address<0x4003f00d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat7h{
        using Addr = Register::Address<0x4003f00f,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat8h{
        using Addr = Register::Address<0x4003f011,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat9h{
        using Addr = Register::Address<0x4003f013,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat10h{
        using Addr = Register::Address<0x4003f015,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat11h{
        using Addr = Register::Address<0x4003f017,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat12h{
        using Addr = Register::Address<0x4003f019,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat13h{
        using Addr = Register::Address<0x4003f01b,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat14h{
        using Addr = Register::Address<0x4003f01d,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_dat15h{
        using Addr = Register::Address<0x4003f01f,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC_sr{
        using Addr = Register::Address<0x4003f020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFRPBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACBFRPTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DACBFWMF; 
    }
    namespace DAC_c0{
        using Addr = Register::Address<0x4003f021,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBBIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACBTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DACBWIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DACSWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DACTRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DACRFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DACEN; 
    }
    namespace DAC_c1{
        using Addr = Register::Address<0x4003f022,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> DACBFMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> DACBFWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMAEN; 
    }
    namespace DAC_c2{
        using Addr = Register::Address<0x4003f023,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DACBFUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DACBFRP; 
    }
}
