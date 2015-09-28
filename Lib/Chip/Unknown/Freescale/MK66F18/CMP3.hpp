#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CMP3_cr0{
        using Addr = Register::Address<0x40073018,0xffffff8c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> HYSTCTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FILTER_CNT; 
    }
    namespace CMP3_cr1{
        using Addr = Register::Address<0x40073019,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> COS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TRIGM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SE; 
    }
    namespace CMP3_fpr{
        using Addr = Register::Address<0x4007301a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FILT_PER; 
    }
    namespace CMP3_scr{
        using Addr = Register::Address<0x4007301b,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DMAEN; 
    }
    namespace CMP3_daccr{
        using Addr = Register::Address<0x4007301c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> VOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> VRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DACEN; 
    }
    namespace CMP3_muxcr{
        using Addr = Register::Address<0x4007301d,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> PSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PSTM; 
    }
}
