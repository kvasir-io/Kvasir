#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace I2S1_tcsr{
        using Addr = Register::Address<0x400af000,0x0ce0e0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FWDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FWIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DBGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STOPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TE; 
    }
    namespace I2S1_tcr1{
        using Addr = Register::Address<0x400af004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TFW; 
    }
    namespace I2S1_tcr2{
        using Addr = Register::Address<0x400af008,0x00ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> SYNC; 
    }
    namespace I2S1_tcr3{
        using Addr = Register::Address<0x400af00c,0xfffcffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WDFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TCE; 
    }
    namespace I2S1_tcr4{
        using Addr = Register::Address<0x400af010,0xffe0e0e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SYWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> FRSZ; 
    }
    namespace I2S1_tcr5{
        using Addr = Register::Address<0x400af014,0xe0e0e0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> FBT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> W0W; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> WNW; 
    }
    namespace I2S1_tdr0{
        using Addr = Register::Address<0x400af020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TDR; 
    }
    namespace I2S1_tdr1{
        using Addr = Register::Address<0x400af024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TDR; 
    }
    namespace I2S1_tfr0{
        using Addr = Register::Address<0x400af040,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> WFP; 
    }
    namespace I2S1_tfr1{
        using Addr = Register::Address<0x400af044,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> WFP; 
    }
    namespace I2S1_tmr{
        using Addr = Register::Address<0x400af060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TWM; 
    }
    namespace I2S1_rcsr{
        using Addr = Register::Address<0x400af080,0x0ce0e0fc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FWDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FWIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FWF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> FEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> SEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DBGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> STOPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RE; 
    }
    namespace I2S1_rcr1{
        using Addr = Register::Address<0x400af084,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RFW; 
    }
    namespace I2S1_rcr2{
        using Addr = Register::Address<0x400af088,0x00ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> SYNC; 
    }
    namespace I2S1_rcr3{
        using Addr = Register::Address<0x400af08c,0xfffcffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> WDFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> RCE; 
    }
    namespace I2S1_rcr4{
        using Addr = Register::Address<0x400af090,0xffe0e0e4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SYWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> FRSZ; 
    }
    namespace I2S1_rcr5{
        using Addr = Register::Address<0x400af094,0xe0e0e0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> FBT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> W0W; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> WNW; 
    }
    namespace I2S1_rdr0{
        using Addr = Register::Address<0x400af0a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDR; 
    }
    namespace I2S1_rdr1{
        using Addr = Register::Address<0x400af0a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDR; 
    }
    namespace I2S1_rfr0{
        using Addr = Register::Address<0x400af0c0,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> WFP; 
    }
    namespace I2S1_rfr1{
        using Addr = Register::Address<0x400af0c4,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> WFP; 
    }
    namespace I2S1_rmr{
        using Addr = Register::Address<0x400af0e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RWM; 
    }
    namespace I2S1_mcr{
        using Addr = Register::Address<0x400af100,0x3cffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> MICS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DUF; 
    }
    namespace I2S1_mdr{
        using Addr = Register::Address<0x400af104,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DIVIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,12)> FRACT; 
    }
}
