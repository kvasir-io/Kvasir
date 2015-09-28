#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CMP2_cr0{
        using Addr = Register::Address<0x40052000,0xffffff8e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HYSTCTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FILTER_CNT; 
    }
    namespace CMP2_cr1{
        using Addr = Register::Address<0x40052001,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> COS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SE; 
    }
    namespace CMP2_fpr{
        using Addr = Register::Address<0x40052002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FILT_PER; 
    }
    namespace CMP2_scr{
        using Addr = Register::Address<0x40052003,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DMAEN; 
    }
    namespace CMP2_daccr{
        using Addr = Register::Address<0x40052004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> VOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> VRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DACEN; 
    }
    namespace CMP2_muxcr{
        using Addr = Register::Address<0x40052005,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PSEL; 
    }
    namespace CMP2_muxpe{
        using Addr = Register::Address<0x40052006,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> INPE; 
    }
}
