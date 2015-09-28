#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DAC0_dat0l{
        using Addr = Register::Address<0x4003f000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC0_dat1l{
        using Addr = Register::Address<0x4003f002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA0; 
    }
    namespace DAC0_dat0h{
        using Addr = Register::Address<0x4003f001,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC0_dat1h{
        using Addr = Register::Address<0x4003f003,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DATA1; 
    }
    namespace DAC0_sr{
        using Addr = Register::Address<0x4003f020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFRPBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACBFRPTF; 
    }
    namespace DAC0_c0{
        using Addr = Register::Address<0x4003f021,0xffffff04>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBBIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DACBTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DACSWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DACTRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DACRFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DACEN; 
    }
    namespace DAC0_c1{
        using Addr = Register::Address<0x4003f022,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> DACBFMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMAEN; 
    }
    namespace DAC0_c2{
        using Addr = Register::Address<0x4003f023,0xffffffee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DACBFUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DACBFRP; 
    }
}
