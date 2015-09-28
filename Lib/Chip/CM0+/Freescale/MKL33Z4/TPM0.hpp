#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TPM0_sc{
        using Addr = Register::Address<0x40038000,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> CMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CPWMS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DMA; 
    }
    namespace TPM0_cnt{
        using Addr = Register::Address<0x40038004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COUNT; 
    }
    namespace TPM0_mod{
        using Addr = Register::Address<0x40038008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace TPM0_c0sc{
        using Addr = Register::Address<0x4003800c,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace TPM0_c1sc{
        using Addr = Register::Address<0x40038014,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace TPM0_c2sc{
        using Addr = Register::Address<0x4003801c,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace TPM0_c3sc{
        using Addr = Register::Address<0x40038024,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace TPM0_c4sc{
        using Addr = Register::Address<0x4003802c,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace TPM0_c5sc{
        using Addr = Register::Address<0x40038034,0xffffff02>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ELSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ELSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MSB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CHIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CHF; 
    }
    namespace TPM0_c0v{
        using Addr = Register::Address<0x40038010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace TPM0_c1v{
        using Addr = Register::Address<0x40038018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace TPM0_c2v{
        using Addr = Register::Address<0x40038020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace TPM0_c3v{
        using Addr = Register::Address<0x40038028,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace TPM0_c4v{
        using Addr = Register::Address<0x40038030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace TPM0_c5v{
        using Addr = Register::Address<0x40038038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL; 
    }
    namespace TPM0_status{
        using Addr = Register::Address<0x40038050,0xfffffec0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH4F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CH5F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TOF; 
    }
    namespace TPM0_pol{
        using Addr = Register::Address<0x40038070,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> POL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> POL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> POL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> POL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> POL5; 
    }
    namespace TPM0_conf{
        using Addr = Register::Address<0x40038084,0xf030fc1f>;
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
