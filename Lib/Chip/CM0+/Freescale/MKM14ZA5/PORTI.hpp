#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PORTI_pcr0{
        using Addr = Register::Address<0x4004e000,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTI_pcr1{
        using Addr = Register::Address<0x4004e004,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTI_pcr2{
        using Addr = Register::Address<0x4004e008,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTI_pcr3{
        using Addr = Register::Address<0x4004e00c,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTI_pcr4{
        using Addr = Register::Address<0x4004e010,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTI_pcr5{
        using Addr = Register::Address<0x4004e014,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTI_pcr6{
        using Addr = Register::Address<0x4004e018,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTI_pcr7{
        using Addr = Register::Address<0x4004e01c,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTI_gpclr{
        using Addr = Register::Address<0x4004e080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPWE; 
    }
    namespace PORTI_gpchr{
        using Addr = Register::Address<0x4004e084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPWE; 
    }
    namespace PORTI_isfr{
        using Addr = Register::Address<0x4004e0a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ISF; 
    }
}
