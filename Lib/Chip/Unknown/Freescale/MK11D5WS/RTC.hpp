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
        using Addr = Register::Address<0x4003d010,0xffffc0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> OSCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLKO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SC16P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SC8P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> SC4P; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SC2P; 
    }
    namespace RTC_sr{
        using Addr = Register::Address<0x4003d014,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCE; 
    }
    namespace RTC_lr{
        using Addr = Register::Address<0x4003d018,0xffff0087>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TTSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MCLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MCHL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIL; 
    }
    namespace RTC_ier{
        using Addr = Register::Address<0x4003d01c,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TAIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WPON; 
    }
    namespace RTC_ttsr{
        using Addr = Register::Address<0x4003d020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TTS; 
    }
    namespace RTC_mer{
        using Addr = Register::Address<0x4003d024,0xffffffef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MCE; 
    }
    namespace RTC_mclr{
        using Addr = Register::Address<0x4003d028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCL; 
    }
    namespace RTC_mchr{
        using Addr = Register::Address<0x4003d02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCH; 
    }
    namespace RTC_ter{
        using Addr = Register::Address<0x4003d030,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TME; 
    }
    namespace RTC_tdr{
        using Addr = Register::Address<0x4003d034,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TMF; 
    }
    namespace RTC_ttr{
        using Addr = Register::Address<0x4003d038,0xfffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> VDTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> VDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> CDTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> CDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> TDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> TDTL; 
    }
    namespace RTC_tir{
        using Addr = Register::Address<0x4003d03c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TMIE; 
    }
    namespace RTC_war{
        using Addr = Register::Address<0x4003d800,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TPRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TARW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IERW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TTSW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MERW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MCLW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MCHW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TERW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TDRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TTRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIRW; 
    }
    namespace RTC_rar{
        using Addr = Register::Address<0x4003d804,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TPRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TARR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TTSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MCHR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TDRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TTRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIRR; 
    }
}
