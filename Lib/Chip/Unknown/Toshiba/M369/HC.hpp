#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonerevision{
        using Addr = Register::Address<0x40006000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REV; 
    }
    namespace Nonecontrol{
        using Addr = Register::Address<0x40006004,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CBSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> HCFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RWC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RWE; 
    }
    namespace Nonecommandstatus{
        using Addr = Register::Address<0x40006008,0xfffcfff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BLF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SOC; 
    }
    namespace Noneinterruptstatus{
        using Addr = Register::Address<0x4000600c,0xbfffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FNO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RHSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OC; 
    }
    namespace Noneinterruptenable{
        using Addr = Register::Address<0x40006010,0x3fffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FNO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RHSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MIE; 
    }
    namespace Noneinterruptdisable{
        using Addr = Register::Address<0x40006014,0x3fffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WDH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FNO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RHSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MIE; 
    }
    namespace Nonehcca{
        using Addr = Register::Address<0x40006018,0x000000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> HCCA; 
    }
    namespace Noneperiodcurrented{
        using Addr = Register::Address<0x4000601c,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> PCED; 
    }
    namespace Nonecontrolheaded{
        using Addr = Register::Address<0x40006020,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> CHED; 
    }
    namespace Nonecontrolcurrented{
        using Addr = Register::Address<0x40006024,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> CCED; 
    }
    namespace Nonebulkheaded{
        using Addr = Register::Address<0x40006028,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> BHED; 
    }
    namespace Nonebulkcurrented{
        using Addr = Register::Address<0x4000602c,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> BCED; 
    }
    namespace Nonedonehead{
        using Addr = Register::Address<0x40006030,0x0000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,4)> DH; 
    }
    namespace Nonefminterval{
        using Addr = Register::Address<0x40006034,0x0000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> FI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,16)> FSMPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FIT; 
    }
    namespace Nonefmremaining{
        using Addr = Register::Address<0x40006038,0x7fffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> FR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FRT; 
    }
    namespace Nonefmnumber{
        using Addr = Register::Address<0x4000603c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FN; 
    }
    namespace Noneperiodstart{
        using Addr = Register::Address<0x40006040,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0)> PS; 
    }
    namespace Nonelsthreshold{
        using Addr = Register::Address<0x40006044,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LST; 
    }
    namespace Nonerhdescriptora{
        using Addr = Register::Address<0x40006048,0x00ffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> NPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> OCPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> NOCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> POTPGT; 
    }
    namespace Nonerhdescriptorb{
        using Addr = Register::Address<0x4000604c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PPCM; 
    }
    namespace Nonerhstatus{
        using Addr = Register::Address<0x40006050,0x7ffc7ffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DRWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> LPSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OCIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CRWE; 
    }
    namespace Nonerhportstatus1{
        using Addr = Register::Address<0x40006054,0xffe0fce0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> POCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> LSDA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PESC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PSSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OCIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PRSC; 
    }
    namespace Nonebcr0{
        using Addr = Register::Address<0x40006080,0x9fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> OVCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TRNS_SUSP; 
    }
}
