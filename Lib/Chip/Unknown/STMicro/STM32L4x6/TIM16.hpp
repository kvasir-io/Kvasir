#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40014400,0xfffff470>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> URS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ARPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CKD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UIFREMAP; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40014404,0xfffffcf2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OIS1N; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OIS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CCDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CCUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCPC; 
    }
    namespace Nonedier{
        using Addr = Register::Address<0x4001440c,0xffff9c1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> COMDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIE; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x40014410,0xfffffd1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CC1OF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UIF; 
    }
    namespace Noneegr{
        using Addr = Register::Address<0x40014414,0xffffff1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1G; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UG; 
    }
    namespace Noneccmr1_output{
        using Addr = Register::Address<0x40014418,0xfffeff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OC1M_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> OC1M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OC1PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OC1FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccmr1_input{
        using Addr = Register::Address<0x40014418,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> IC1PSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CC1S; 
    }
    namespace Noneccer{
        using Addr = Register::Address<0x40014420,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CC1NP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CC1NE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CC1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CC1E; 
    }
    namespace Nonecnt{
        using Addr = Register::Address<0x40014424,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UIFCPY; 
    }
    namespace Nonepsc{
        using Addr = Register::Address<0x40014428,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PSC; 
    }
    namespace Nonearr{
        using Addr = Register::Address<0x4001442c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ARR; 
    }
    namespace Nonercr{
        using Addr = Register::Address<0x40014430,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REP; 
    }
    namespace Noneccr1{
        using Addr = Register::Address<0x40014434,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CCR1; 
    }
    namespace Nonebdtr{
        using Addr = Register::Address<0x40014444,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> LOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OSSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BKP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> BKF; 
    }
    namespace Nonedcr{
        using Addr = Register::Address<0x40014448,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> DBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DBA; 
    }
    namespace Nonedmar{
        using Addr = Register::Address<0x4001444c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DMAB; 
    }
    namespace Noneor1{
        using Addr = Register::Address<0x40014450,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> TI1_RMP; 
    }
    namespace Noneor2{
        using Addr = Register::Address<0x40014460,0xfffff0f8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BKINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BKCMP1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BKCMP2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BKDFBK1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BKINP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BKCMP1P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BKCMP2P; 
    }
}
