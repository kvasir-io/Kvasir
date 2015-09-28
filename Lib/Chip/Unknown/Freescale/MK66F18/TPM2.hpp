#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TPM2_sc{
        using Addr = Register::Address<0x400ca000,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CPWMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
    }
    namespace TPM2_cnt{
        using Addr = Register::Address<0x400ca004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COUNT; 
    }
    namespace TPM2_mod{
        using Addr = Register::Address<0x400ca008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace TPM2_c0sc{
        using Addr = Register::Address<0x400ca00c,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace TPM2_c1sc{
        using Addr = Register::Address<0x400ca014,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace TPM2_c0v{
        using Addr = Register::Address<0x400ca010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace TPM2_c1v{
        using Addr = Register::Address<0x400ca018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace TPM2_status{
        using Addr = Register::Address<0x400ca050,0xfffffefc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TOF; 
    }
    namespace TPM2_combine{
        using Addr = Register::Address<0x400ca064,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> COMBINE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> COMSWAP0; 
    }
    namespace TPM2_pol{
        using Addr = Register::Address<0x400ca070,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> POL1; 
    }
    namespace TPM2_filter{
        using Addr = Register::Address<0x400ca078,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CH0FVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CH1FVAL; 
    }
    namespace TPM2_qdctrl{
        using Addr = Register::Address<0x400ca080,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> QUADEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TOFDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> QUADIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> QUADMODE; 
    }
    namespace TPM2_conf{
        using Addr = Register::Address<0x400ca084,0xf030fc1f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DOZEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DBGMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GTBSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GTBEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CSOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CSOO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CROT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CPOT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TRGPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TRGSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> TRGSEL; 
    }
}
