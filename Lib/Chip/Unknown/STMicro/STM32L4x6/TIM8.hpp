#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40013400,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CKD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> CMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40013404,0xffff8002>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OIS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> OIS3N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OIS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OIS2N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OIS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OIS1N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TI1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> MMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CCDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CCUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCPC; 
    }
    namespace Nonesmcr{
        using Addr = Register::Address<0x40013408,0xffff0008>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ETP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ECE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ETPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMS; 
    }
    namespace Nonedier{
        using Addr = Register::Address<0x4001340c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> COMDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC4DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CC3DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC2DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMIE; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40013410,0xffffe100>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC4OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CC3OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC2OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIF; 
    }
    namespace Noneegr{
        using Addr = Register::Address<0x40013414,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UG; 
    }
    namespace Noneccmr1_output{
        using Addr = Register::Address<0x40013418,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OC2CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC2M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC2FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OC1CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC1M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC1FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccmr1_input{
        using Addr = Register::Address<0x40013418,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC2PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> ICPCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccmr2_output{
        using Addr = Register::Address<0x4001341c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OC4CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC4M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC4PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC4FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OC3CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC3M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC3PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC3FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC3S; 
    }
    namespace Noneccmr2_input{
        using Addr = Register::Address<0x4001341c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC4F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC4PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC3PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC3S; 
    }
    namespace Noneccer{
        using Addr = Register::Address<0x40013420,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CC4P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC4E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CC3NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC3NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC3P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CC3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CC2NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CC2NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CC2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC1NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC1NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CC1E; 
    }
    namespace Nonecnt{
        using Addr = Register::Address<0x40013424,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace Nonepsc{
        using Addr = Register::Address<0x40013428,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSC; 
    }
    namespace Nonearr{
        using Addr = Register::Address<0x4001342c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ARR; 
    }
    namespace Nonercr{
        using Addr = Register::Address<0x40013430,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REP; 
    }
    namespace Noneccr1{
        using Addr = Register::Address<0x40013434,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR1; 
    }
    namespace Noneccr2{
        using Addr = Register::Address<0x40013438,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR2; 
    }
    namespace Noneccr3{
        using Addr = Register::Address<0x4001343c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR3; 
    }
    namespace Noneccr4{
        using Addr = Register::Address<0x40013440,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR4; 
    }
    namespace Nonebdtr{
        using Addr = Register::Address<0x40013444,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BKP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OSSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DTG; 
    }
    namespace Nonedcr{
        using Addr = Register::Address<0x40013448,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> DBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DBA; 
    }
    namespace Nonedmar{
        using Addr = Register::Address<0x4001344c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DMAB; 
    }
    namespace Noneor1{
        using Addr = Register::Address<0x40013450,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ETR_ADC2_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> ETR_ADC3_RMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TI1_RMP; 
    }
    namespace Noneccmr3_output{
        using Addr = Register::Address<0x40013454,0xfef80303>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> OC6M_bit3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> OC5M_bit3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OC6CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC6M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC6PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC6FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OC5CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC5M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC5PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC5FE; 
    }
    namespace Noneccr5{
        using Addr = Register::Address<0x40013458,0x1fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> GC5C1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> GC5C2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> GC5C3; 
    }
    namespace Noneccr6{
        using Addr = Register::Address<0x4001345c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR6; 
    }
    namespace Noneor2{
        using Addr = Register::Address<0x40013460,0xfffe30f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BKCMP1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BKCMP2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BKDFBK2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BKINP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BKCMP1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BKCMP2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14)> ETRSEL; 
    }
    namespace Noneor3{
        using Addr = Register::Address<0x40013464,0xfffff0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BK2INE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BK2CMP1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BK2CMP2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BK2DFBK3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BK2INP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BK2CMP1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BK2CMP2P; 
    }
}
