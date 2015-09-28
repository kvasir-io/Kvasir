#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PORTG_pcr0{
        using Addr = Register::Address<0x4004c000,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTG_pcr1{
        using Addr = Register::Address<0x4004c004,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTG_pcr2{
        using Addr = Register::Address<0x4004c008,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTG_pcr3{
        using Addr = Register::Address<0x4004c00c,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTG_pcr4{
        using Addr = Register::Address<0x4004c010,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTG_pcr5{
        using Addr = Register::Address<0x4004c014,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTG_pcr6{
        using Addr = Register::Address<0x4004c018,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTG_pcr7{
        using Addr = Register::Address<0x4004c01c,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTG_gpclr{
        using Addr = Register::Address<0x4004c080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPWE; 
    }
    namespace PORTG_gpchr{
        using Addr = Register::Address<0x4004c084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPWE; 
    }
    namespace PORTG_isfr{
        using Addr = Register::Address<0x4004c0a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ISF; 
    }
}
