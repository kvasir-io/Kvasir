#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40011400,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> CMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CKD; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40011404,0xffffff8f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> MMS; 
    }
    namespace Nonesmcr{
        using Addr = Register::Address<0x40011408,0xffff0008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ETPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ECE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ETP; 
    }
    namespace Nonedier{
        using Addr = Register::Address<0x4001140c,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIE; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40011410,0xfffff9b8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC2OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIF; 
    }
    namespace Noneegr{
        using Addr = Register::Address<0x40011414,0xffffffb8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UG; 
    }
    namespace Noneccmr1_output{
        using Addr = Register::Address<0x40011418,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC2M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC2FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC1M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC1FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccmr1_input{
        using Addr = Register::Address<0x40011418,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC2PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC1PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccer{
        using Addr = Register::Address<0x40011420,0xffffff44>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CC2NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CC2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC1NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CC1E; 
    }
    namespace Nonecnt{
        using Addr = Register::Address<0x40011424,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace Nonepsc{
        using Addr = Register::Address<0x40011428,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSC; 
    }
    namespace Nonearr{
        using Addr = Register::Address<0x4001142c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ARR; 
    }
    namespace Noneccr1{
        using Addr = Register::Address<0x40011434,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR1; 
    }
    namespace Noneccr2{
        using Addr = Register::Address<0x40011438,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR2; 
    }
    namespace Noneor{
        using Addr = Register::Address<0x40011450,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ETR_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TI1_RMP; 
    }
}
