#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PORTC_pcr0{
        using Addr = Register::Address<0x40048000,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTC_pcr1{
        using Addr = Register::Address<0x40048004,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTC_pcr2{
        using Addr = Register::Address<0x40048008,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTC_pcr3{
        using Addr = Register::Address<0x4004800c,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTC_pcr4{
        using Addr = Register::Address<0x40048010,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTC_pcr5{
        using Addr = Register::Address<0x40048014,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTC_pcr6{
        using Addr = Register::Address<0x40048018,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTC_pcr7{
        using Addr = Register::Address<0x4004801c,0xfef078f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTC_gpclr{
        using Addr = Register::Address<0x40048080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPWE; 
    }
    namespace PORTC_gpchr{
        using Addr = Register::Address<0x40048084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPWE; 
    }
    namespace PORTC_isfr{
        using Addr = Register::Address<0x400480a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ISF; 
    }
}
