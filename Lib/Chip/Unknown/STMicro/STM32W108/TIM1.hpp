#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetim1_isr{
        using Addr = Register::Address<0x4000a800,0xffffe0a0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> RSVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIF; 
    }
    namespace Nonetim1_missr{
        using Addr = Register::Address<0x4000a818,0xffffe180>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC4IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CC3IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC2IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> RSVD; 
    }
    namespace Nonetim1_cr1{
        using Addr = Register::Address<0x4000e000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> CMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
    }
    namespace Nonetim1_ier{
        using Addr = Register::Address<0x4000a840,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIE; 
    }
    namespace Nonetim1_cr2{
        using Addr = Register::Address<0x4000e004,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TI1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> MMS; 
    }
    namespace Nonetim1_smcr{
        using Addr = Register::Address<0x4000e008,0xffff0008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ETP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ECE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ETPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMS; 
    }
    namespace Nonetim1_egr{
        using Addr = Register::Address<0x4000e014,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UG; 
    }
    namespace Nonetim1_ccmr1_input{
        using Addr = Register::Address<0x4000e018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC1PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC2PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC2F; 
    }
    namespace Nonetim1_ccmr1_output{
        using Addr = Register::Address<0x4000e018,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC2M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC2FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC1M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC1FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Nonetim1_ccmr2_input{
        using Addr = Register::Address<0x4000e01c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC3S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC3PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC4PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC4F; 
    }
    namespace Nonetim1_ccmr2_output{
        using Addr = Register::Address<0x4000e01c,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC4M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC4PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC4FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC3M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC3PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC3FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC3S; 
    }
    namespace Nonetim1_ccer{
        using Addr = Register::Address<0x4000e020,0xffffcccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CC4P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC4E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC3P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CC3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CC2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CC1E; 
    }
    namespace Nonetim1_cnt{
        using Addr = Register::Address<0x4000e024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace Nonetim1_psc{
        using Addr = Register::Address<0x4000e028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSC; 
    }
    namespace Nonetim1_arr{
        using Addr = Register::Address<0x4000e02c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ARR; 
    }
    namespace Nonetim1_ccr1{
        using Addr = Register::Address<0x4000e034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR; 
    }
    namespace Nonetim1_ccr2{
        using Addr = Register::Address<0x4000e038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR; 
    }
    namespace Nonetim1_ccr3{
        using Addr = Register::Address<0x4000e03c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR; 
    }
    namespace Nonetim1_ccr4{
        using Addr = Register::Address<0x4000e040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR; 
    }
    namespace Nonetim1_or{
        using Addr = Register::Address<0x4000e050,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORRSVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKMSKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> EXTRIGSEL; 
    }
}
