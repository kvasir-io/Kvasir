#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneclk{
        using Addr = Register::Address<0x400fc000,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ADCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> ADCC; 
    }
    namespace Nonemod0{
        using Addr = Register::Address<0x400fc004,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REPEAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> ITM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADBFN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOCFN; 
    }
    namespace Nonemod1{
        using Addr = Register::Address<0x400fc008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> ADSCN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> I2AD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> VREFON; 
    }
    namespace Nonemod2{
        using Addr = Register::Address<0x400fc00c,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> HPADCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HPADCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADBFHP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EOCFHP; 
    }
    namespace Nonemod3{
        using Addr = Register::Address<0x400fc010,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADOBSV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> ADREGS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADOBIC0; 
    }
    namespace Nonemod4{
        using Addr = Register::Address<0x400fc014,0xffffff0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ADRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADHTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> HADHTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HADHS; 
    }
    namespace Nonemod5{
        using Addr = Register::Address<0x400fc018,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADOBSV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1)> ADREGS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADOBIC1; 
    }
    namespace Nonereg0{
        using Addr = Register::Address<0x400fc030,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR0RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR0; 
    }
    namespace Nonereg1{
        using Addr = Register::Address<0x400fc034,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR1RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR1; 
    }
    namespace Nonereg2{
        using Addr = Register::Address<0x400fc038,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR2RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR2; 
    }
    namespace Nonereg3{
        using Addr = Register::Address<0x400fc03c,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR3RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR3; 
    }
    namespace Nonereg4{
        using Addr = Register::Address<0x400fc040,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR4RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR4; 
    }
    namespace Nonereg5{
        using Addr = Register::Address<0x400fc044,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR5RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR5; 
    }
    namespace Nonereg6{
        using Addr = Register::Address<0x400fc048,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR6RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR6; 
    }
    namespace Nonereg7{
        using Addr = Register::Address<0x400fc04c,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR7RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR7; 
    }
    namespace Nonereg8{
        using Addr = Register::Address<0x400fc050,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR8RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR8; 
    }
    namespace Nonereg9{
        using Addr = Register::Address<0x400fc054,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR9RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR9; 
    }
    namespace Nonereg10{
        using Addr = Register::Address<0x400fc058,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR10RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR10; 
    }
    namespace Nonereg11{
        using Addr = Register::Address<0x400fc05c,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADR11RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADR11; 
    }
    namespace Noneregsp{
        using Addr = Register::Address<0x400fc060,0xffff003c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADRSPRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVRSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADRSP; 
    }
    namespace Nonecmp0{
        using Addr = Register::Address<0x400fc064,0xffff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADCOM0; 
    }
    namespace Nonecmp1{
        using Addr = Register::Address<0x400fc068,0xffff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> ADCOM1; 
    }
}
