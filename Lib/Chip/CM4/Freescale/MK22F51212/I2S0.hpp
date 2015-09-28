#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace I2S0_tcsr{
        using Addr = Register::Address<0x4002f000,0x0ce0e0fc>;
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
    namespace I2S0_tcr1{
        using Addr = Register::Address<0x4002f004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> TFW; 
    }
    namespace I2S0_tcr2{
        using Addr = Register::Address<0x4002f008,0x00ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> SYNC; 
    }
    namespace I2S0_tcr3{
        using Addr = Register::Address<0x4002f00c,0xfffefff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WDFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TCE; 
    }
    namespace I2S0_tcr4{
        using Addr = Register::Address<0x4002f010,0xecf0e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ONDEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SYWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FRSZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> FPACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FCONT; 
    }
    namespace I2S0_tcr5{
        using Addr = Register::Address<0x4002f014,0xe0e0e0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> FBT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> W0W; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> WNW; 
    }
    namespace I2S0_tdr{
        using Addr = Register::Address<0x4002f020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TDR; 
    }
    namespace I2S0_tfr{
        using Addr = Register::Address<0x4002f040,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> WFP; 
    }
    namespace I2S0_tmr{
        using Addr = Register::Address<0x4002f060,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TWM; 
    }
    namespace I2S0_rcsr{
        using Addr = Register::Address<0x4002f080,0x0ce0e0fc>;
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
    namespace I2S0_rcr1{
        using Addr = Register::Address<0x4002f084,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RFW; 
    }
    namespace I2S0_rcr2{
        using Addr = Register::Address<0x4002f088,0x00ffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> BCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> BCP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> MSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> BCI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> BCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> SYNC; 
    }
    namespace I2S0_rcr3{
        using Addr = Register::Address<0x4002f08c,0xfffefff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> WDFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RCE; 
    }
    namespace I2S0_rcr4{
        using Addr = Register::Address<0x4002f090,0xecf0e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ONDEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> SYWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> FRSZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> FPACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> FCONT; 
    }
    namespace I2S0_rcr5{
        using Addr = Register::Address<0x4002f094,0xe0e0e0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> FBT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> W0W; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> WNW; 
    }
    namespace I2S0_rdr{
        using Addr = Register::Address<0x4002f0a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RDR; 
    }
    namespace I2S0_rfr{
        using Addr = Register::Address<0x4002f0c0,0xfff0fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> RFP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> WFP; 
    }
    namespace I2S0_rmr{
        using Addr = Register::Address<0x4002f0e0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RWM; 
    }
    namespace I2S0_mcr{
        using Addr = Register::Address<0x4002f100,0x3cffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> MICS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DUF; 
    }
    namespace I2S0_mdr{
        using Addr = Register::Address<0x4002f104,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> DIVIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,12)> FRACT; 
    }
}
