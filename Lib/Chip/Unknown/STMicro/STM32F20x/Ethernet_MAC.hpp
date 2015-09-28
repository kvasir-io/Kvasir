#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemaccr{
        using Addr = Register::Address<0x40028000,0xfd308103>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> BL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> APCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IPCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ROD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> IFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> JD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> WD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CSTF; 
    }
    namespace Nonemacffr{
        using Addr = Register::Address<0x40028004,0x7ffff880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DAIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SAIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> HPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RA; 
    }
    namespace Nonemachthr{
        using Addr = Register::Address<0x40028008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTH; 
    }
    namespace Nonemachtlr{
        using Addr = Register::Address<0x4002800c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTL; 
    }
    namespace Nonemacmiiar{
        using Addr = Register::Address<0x40028010,0xffff0020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> MR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> PA; 
    }
    namespace Nonemacmiidr{
        using Addr = Register::Address<0x40028014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MD; 
    }
    namespace Nonemacfcr{
        using Addr = Register::Address<0x40028018,0x0000ff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FCB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RFCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UPFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ZQPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PT; 
    }
    namespace Nonemacvlantr{
        using Addr = Register::Address<0x4002801c,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VLANTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> VLANTC; 
    }
    namespace Nonemacpmtcsr{
        using Addr = Register::Address<0x4002802c,0x7ffffd98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WFFRPR; 
    }
    namespace Nonemacdbgr{
        using Addr = Register::Address<0x40028034,0xfc80fecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MMRPEA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSFRWCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RFWRA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RFRCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RFFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MMTEA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> MTFCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TFRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TFWA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TFNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TFF; 
    }
    namespace Nonemacsr{
        using Addr = Register::Address<0x40028038,0xfffffd87>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PMTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MMCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MMCRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MMCTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TSTS; 
    }
    namespace Nonemacimr{
        using Addr = Register::Address<0x4002803c,0xfffffdf7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PMTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TSTIM; 
    }
    namespace Nonemaca0hr{
        using Addr = Register::Address<0x40028040,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MACA0H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MO; 
    }
    namespace Nonemaca0lr{
        using Addr = Register::Address<0x40028044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MACA0L; 
    }
    namespace Nonemaca1hr{
        using Addr = Register::Address<0x40028048,0x00ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MACA1H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> MBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AE; 
    }
    namespace Nonemaca1lr{
        using Addr = Register::Address<0x4002804c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MACA1LR; 
    }
    namespace Nonemaca2hr{
        using Addr = Register::Address<0x40028050,0x00ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MAC2AH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> MBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AE; 
    }
    namespace Nonemaca2lr{
        using Addr = Register::Address<0x40028054,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> MACA2L; 
    }
    namespace Nonemaca3hr{
        using Addr = Register::Address<0x40028058,0x00ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MACA3H; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24)> MBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> SA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AE; 
    }
    namespace Nonemaca3lr{
        using Addr = Register::Address<0x4002805c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MBCA3L; 
    }
    namespace Nonemacrwuffr{
        using Addr = Register::Address<0x40028028,0xffffffff>;
    }
}
