#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40000000,0xfffff400>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> CMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CKD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UIFREMAP; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40000004,0xffffff07>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TI1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> MMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CCDS; 
    }
    namespace Nonesmcr{
        using Addr = Register::Address<0x40000008,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OCCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> ETF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ETPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ECE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ETP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SMS_3; 
    }
    namespace Nonedier{
        using Addr = Register::Address<0x4000000c,0xffffa0a0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TDE; 
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
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40000010,0xffffe1a0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC4OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CC3OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC2OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIF; 
    }
    namespace Noneegr{
        using Addr = Register::Address<0x40000014,0xffffffa0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC4G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC3G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UG; 
    }
    namespace Noneccmr1_output{
        using Addr = Register::Address<0x40000018,0xfefe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC1FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC1M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OC1CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC2FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC2PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC2M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OC2CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OC1M_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> OC2M_3; 
    }
    namespace Noneccmr1_input{
        using Addr = Register::Address<0x40000018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC2PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC1PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccmr2_output{
        using Addr = Register::Address<0x4000001c,0xfefe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC3S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC3FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC3PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC3M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OC3CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OC4FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OC4PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> OC4M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> O24CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OC3M_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> OC4M_3; 
    }
    namespace Noneccmr2_input{
        using Addr = Register::Address<0x4000001c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC4F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC4PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC3PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC3S; 
    }
    namespace Noneccer{
        using Addr = Register::Address<0x40000020,0xffff4444>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CC1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC1NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CC2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CC2NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CC3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC3P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CC3NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CC4E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CC4P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CC4NP; 
    }
    namespace Nonecnt{
        using Addr = Register::Address<0x40000024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,16)> CNTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CNT_or_UIFCPY; 
    }
    namespace Nonepsc{
        using Addr = Register::Address<0x40000028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSC; 
    }
    namespace Nonearr{
        using Addr = Register::Address<0x4000002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ARRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> ARRH; 
    }
    namespace Noneccr1{
        using Addr = Register::Address<0x40000034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR1L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CCR1H; 
    }
    namespace Noneccr2{
        using Addr = Register::Address<0x40000038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR2L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CCR2H; 
    }
    namespace Noneccr3{
        using Addr = Register::Address<0x4000003c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR3L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CCR3H; 
    }
    namespace Noneccr4{
        using Addr = Register::Address<0x40000040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR4L; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CCR4H; 
    }
    namespace Nonedcr{
        using Addr = Register::Address<0x40000048,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> DBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DBA; 
    }
    namespace Nonedmar{
        using Addr = Register::Address<0x4000004c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DMAB; 
    }
}
