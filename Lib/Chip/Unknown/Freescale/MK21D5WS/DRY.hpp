#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DRY_skvr{
        using Addr = Register::Address<0x40042004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SKV; 
    }
    namespace DRY_skwlr{
        using Addr = Register::Address<0x40042008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SKWL; 
    }
    namespace DRY_skrlr{
        using Addr = Register::Address<0x4004200c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SKRL; 
    }
    namespace DRY_cr{
        using Addr = Register::Address<0x40042010,0x0001f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TFSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> THYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TPFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TDSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TSRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,17)> DPR; 
    }
    namespace DRY_sr{
        using Addr = Register::Address<0x40042014,0xff00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TPF; 
    }
    namespace DRY_lr{
        using Addr = Register::Address<0x40042018,0xff00c001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> KVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> KWL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> KRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ATL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> GFL; 
    }
    namespace DRY_ier{
        using Addr = Register::Address<0x4004201c,0xff00fc02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TPIE; 
    }
    namespace DRY_tsr{
        using Addr = Register::Address<0x40042020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TTS; 
    }
    namespace DRY_ter{
        using Addr = Register::Address<0x40042024,0xff00fc03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> VTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TPE; 
    }
    namespace DRY_pdr{
        using Addr = Register::Address<0x40042028,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TPOD; 
    }
    namespace DRY_ppr{
        using Addr = Register::Address<0x4004202c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TPP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> TPID; 
    }
    namespace DRY_atr0{
        using Addr = Register::Address<0x40042030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ATSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> ATP; 
    }
    namespace DRY_atr1{
        using Addr = Register::Address<0x40042034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> ATSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> ATP; 
    }
    namespace DRY_pgfr0{
        using Addr = Register::Address<0x40042040,0xfefcff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> GFW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TPEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TPE; 
    }
    namespace DRY_pgfr1{
        using Addr = Register::Address<0x40042044,0xfefcff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> GFW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TPEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TPE; 
    }
    namespace DRY_pgfr2{
        using Addr = Register::Address<0x40042048,0xfefcff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> GFW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TPEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TPE; 
    }
    namespace DRY_wac{
        using Addr = Register::Address<0x40042800,0xff00c001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SKVW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SKWRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SKRRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TSRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TEW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PDW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PPW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ATW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> GFW; 
    }
    namespace DRY_rac{
        using Addr = Register::Address<0x40042804,0xff00c001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SKVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SKWRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SKRRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TSRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ATR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> GFR; 
    }
    namespace DRY_skr0{
        using Addr = Register::Address<0x40043000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SK; 
    }
    namespace DRY_skr1{
        using Addr = Register::Address<0x40043004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SK; 
    }
    namespace DRY_skr2{
        using Addr = Register::Address<0x40043008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SK; 
    }
    namespace DRY_skr3{
        using Addr = Register::Address<0x4004300c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SK; 
    }
    namespace DRY_skr4{
        using Addr = Register::Address<0x40043010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SK; 
    }
    namespace DRY_skr5{
        using Addr = Register::Address<0x40043014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SK; 
    }
    namespace DRY_skr6{
        using Addr = Register::Address<0x40043018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SK; 
    }
    namespace DRY_skr7{
        using Addr = Register::Address<0x4004301c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SK; 
    }
    namespace DRY_swac{
        using Addr = Register::Address<0x40043800,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SKRW; 
    }
    namespace DRY_srac{
        using Addr = Register::Address<0x40043804,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SKRR; 
    }
}
