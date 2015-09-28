#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace RTC_tsr{
        using Addr = Register::Address<0x4003d000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSR; 
    }
    namespace RTC_tpr{
        using Addr = Register::Address<0x4003d004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TPR; 
    }
    namespace RTC_tar{
        using Addr = Register::Address<0x4003d008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TAR; 
    }
    namespace RTC_tcr{
        using Addr = Register::Address<0x4003d00c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TCV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CIC; 
    }
    namespace RTC_cr{
        using Addr = Register::Address<0x4003d010,0xffffc0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OSCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SC16P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SC8P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SC4P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SC2P; 
    }
    namespace RTC_sr{
        using Addr = Register::Address<0x4003d014,0xffffffe8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCE; 
    }
    namespace RTC_lr{
        using Addr = Register::Address<0x4003d018,0xffffff87>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LRL; 
    }
    namespace RTC_ier{
        using Addr = Register::Address<0x4003d01c,0xffffff68>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WPON; 
    }
    namespace RTC_war{
        using Addr = Register::Address<0x4003d800,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TPRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TARW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IERW; 
    }
    namespace RTC_rar{
        using Addr = Register::Address<0x4003d804,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TPRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TARR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IERR; 
    }
}
