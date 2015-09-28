#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40014000,0xfffffc70>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CKD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40014004,0xfffff882>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OIS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OIS1N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> MMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CCDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CCUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCPC; 
    }
    namespace Nonesmcr{
        using Addr = Register::Address<0x40014008,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMS; 
    }
    namespace Nonedier{
        using Addr = Register::Address<0x4001400c,0xffffb818>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC2DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIE; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40014010,0xfffff918>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CC2OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIF; 
    }
    namespace Noneegr{
        using Addr = Register::Address<0x40014014,0xffffff18>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC2G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UG; 
    }
    namespace Noneccmr1_output{
        using Addr = Register::Address<0x40014018,0xffff8080>;
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
        using Addr = Register::Address<0x40014018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> IC2PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CC2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC1PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccer{
        using Addr = Register::Address<0x40014020,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CC2NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CC2P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CC2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC1NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC1NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CC1E; 
    }
    namespace Nonecnt{
        using Addr = Register::Address<0x40014024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace Nonepsc{
        using Addr = Register::Address<0x40014028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSC; 
    }
    namespace Nonearr{
        using Addr = Register::Address<0x4001402c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ARR; 
    }
    namespace Nonercr{
        using Addr = Register::Address<0x40014030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REP; 
    }
    namespace Noneccr1{
        using Addr = Register::Address<0x40014034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR1; 
    }
    namespace Noneccr2{
        using Addr = Register::Address<0x40014038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR2; 
    }
    namespace Nonebdtr{
        using Addr = Register::Address<0x40014044,0xffff0000>;
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
        using Addr = Register::Address<0x40014048,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> DBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DBA; 
    }
    namespace Nonedmar{
        using Addr = Register::Address<0x4001404c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DMAB; 
    }
}
