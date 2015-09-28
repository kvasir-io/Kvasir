#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CMP3_cr0{
        using Addr = Register::Address<0x40053000,0xffffff8e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HYSTCTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FILTER_CNT; 
    }
    namespace CMP3_cr1{
        using Addr = Register::Address<0x40053001,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> COS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SE; 
    }
    namespace CMP3_fpr{
        using Addr = Register::Address<0x40053002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FILT_PER; 
    }
    namespace CMP3_scr{
        using Addr = Register::Address<0x40053003,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DMAEN; 
    }
    namespace CMP3_daccr{
        using Addr = Register::Address<0x40053004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> VOSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> VRSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DACEN; 
    }
    namespace CMP3_muxcr{
        using Addr = Register::Address<0x40053005,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PSEL; 
    }
    namespace CMP3_muxpe{
        using Addr = Register::Address<0x40053006,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> INPE; 
    }
}
