#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetim2_isr{
        using Addr = Register::Address<0x4000a804,0xffffe0a0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> RSVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIF; 
    }
    namespace Nonetim2_missr{
        using Addr = Register::Address<0x4000a81c,0xffffe180>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC4IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CC3IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC2IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1IM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> RSVD; 
    }
    namespace Nonetim2_cr1{
        using Addr = Register::Address<0x4000f000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> CMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
    }
    namespace Nonetim2_ier{
        using Addr = Register::Address<0x4000a844,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIE; 
    }
    namespace Nonetim2_cr2{
        using Addr = Register::Address<0x4000f004,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TI1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> MMS; 
    }
    namespace Nonetim2_smcr{
        using Addr = Register::Address<0x4000f008,0xffff0008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ETP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ECE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ETPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMS; 
    }
    namespace Nonetim2_egr{
        using Addr = Register::Address<0x4000f014,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UG; 
    }
    namespace Nonetim2_ccmr1_input{
        using Addr = Register::Address<0x4000f018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC1PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC2PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC2F; 
    }
    namespace Nonetim2_ccmr1_output{
        using Addr = Register::Address<0x4000f018,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC2M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC2FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC1M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC1FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Nonetim2_ccmr2_input{
        using Addr = Register::Address<0x4000f01c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC4F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC4PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC3PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC3S; 
    }
    namespace Nonetim2_ccmr2_output{
        using Addr = Register::Address<0x4000f01c,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC4M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC4PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC4FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC3M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC3PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC3FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC3S; 
    }
    namespace Nonetim2_ccer{
        using Addr = Register::Address<0x4000f020,0xffffcccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CC4P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC4E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC3P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CC3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CC2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CC1E; 
    }
    namespace Nonetim2_cnt{
        using Addr = Register::Address<0x4000f024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace Nonetim2_psc{
        using Addr = Register::Address<0x4000f028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSC; 
    }
    namespace Nonetim2_arr{
        using Addr = Register::Address<0x4000f02c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ARR; 
    }
    namespace Nonetim2_ccr1{
        using Addr = Register::Address<0x4000f034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR; 
    }
    namespace Nonetim2_ccr2{
        using Addr = Register::Address<0x4000f038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR; 
    }
    namespace Nonetim2_ccr3{
        using Addr = Register::Address<0x4000f03c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR; 
    }
    namespace Nonetim2_ccr4{
        using Addr = Register::Address<0x4000f040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR; 
    }
    namespace Nonetim2_or{
        using Addr = Register::Address<0x4000f050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REMAPC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REMAPC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REMAPC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REMAPC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORRSVD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLKMSKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> EXTRIGSEL; 
    }
}
