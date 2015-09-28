#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PORTE_pcr0{
        using Addr = Register::Address<0x40037000,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr1{
        using Addr = Register::Address<0x40037004,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr2{
        using Addr = Register::Address<0x40037008,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr3{
        using Addr = Register::Address<0x4003700c,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr4{
        using Addr = Register::Address<0x40037010,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr5{
        using Addr = Register::Address<0x40037014,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr6{
        using Addr = Register::Address<0x40037018,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr7{
        using Addr = Register::Address<0x4003701c,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr8{
        using Addr = Register::Address<0x40037020,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr9{
        using Addr = Register::Address<0x40037024,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr10{
        using Addr = Register::Address<0x40037028,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr11{
        using Addr = Register::Address<0x4003702c,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr12{
        using Addr = Register::Address<0x40037030,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr13{
        using Addr = Register::Address<0x40037034,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr14{
        using Addr = Register::Address<0x40037038,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr15{
        using Addr = Register::Address<0x4003703c,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr16{
        using Addr = Register::Address<0x40037040,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr17{
        using Addr = Register::Address<0x40037044,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr18{
        using Addr = Register::Address<0x40037048,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr19{
        using Addr = Register::Address<0x4003704c,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr20{
        using Addr = Register::Address<0x40037050,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr21{
        using Addr = Register::Address<0x40037054,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr22{
        using Addr = Register::Address<0x40037058,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr23{
        using Addr = Register::Address<0x4003705c,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr24{
        using Addr = Register::Address<0x40037060,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr25{
        using Addr = Register::Address<0x40037064,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr26{
        using Addr = Register::Address<0x40037068,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr27{
        using Addr = Register::Address<0x4003706c,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr28{
        using Addr = Register::Address<0x40037070,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr29{
        using Addr = Register::Address<0x40037074,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr30{
        using Addr = Register::Address<0x40037078,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_pcr31{
        using Addr = Register::Address<0x4003707c,0xfef078fd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> MUX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> IRQC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ISF; 
    }
    namespace PORTE_gpclr{
        using Addr = Register::Address<0x40037080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPWE; 
    }
    namespace PORTE_gpchr{
        using Addr = Register::Address<0x40037084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> GPWE; 
    }
    namespace PORTE_isfr{
        using Addr = Register::Address<0x400370a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ISF; 
    }
    namespace PORTE_dfer{
        using Addr = Register::Address<0x400370c0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DFE; 
    }
    namespace PORTE_dfcr{
        using Addr = Register::Address<0x400370c4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CS; 
    }
    namespace PORTE_dfwr{
        using Addr = Register::Address<0x400370c8,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> FILT; 
    }
}
