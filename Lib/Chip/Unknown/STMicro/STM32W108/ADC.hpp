#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneadc_isr{
        using Addr = Register::Address<0x4000a810,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMAOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMABF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMABHF; 
    }
    namespace Noneadc_ier{
        using Addr = Register::Address<0x4000a850,0xffffffe1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMAOVFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SATIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DMABFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMABHFIE; 
    }
    namespace Noneadc_cr{
        using Addr = Register::Address<0x4000d004,0xffff0002>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> SMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HVSELP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HVSELN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,7)> CHSELP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3)> CHSELN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADON; 
    }
    namespace Noneadc_offsetr{
        using Addr = Register::Address<0x4000d008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> OFFSET; 
    }
    namespace Noneadc_gainr{
        using Addr = Register::Address<0x4000d00c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GAIN; 
    }
    namespace Noneadc_dmacr{
        using Addr = Register::Address<0x4000d010,0xffffffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AUTOWRAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LOAD; 
    }
    namespace Noneadc_dmasr{
        using Addr = Register::Address<0x4000d014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ACT; 
    }
    namespace Noneadc_dmamsar{
        using Addr = Register::Address<0x4000d018,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> MSA; 
    }
    namespace Noneadc_dmandtr{
        using Addr = Register::Address<0x4000d01c,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> NDT; 
    }
    namespace Noneadc_dmamnar{
        using Addr = Register::Address<0x4000d020,0xffffc001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,1)> MNA; 
    }
    namespace Noneadc_dmacndtr{
        using Addr = Register::Address<0x4000d024,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> CNDT; 
    }
}
