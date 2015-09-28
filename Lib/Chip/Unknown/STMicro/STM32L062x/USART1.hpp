#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40013800,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> M1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EOBIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> RTOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DEAT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DEAT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DEAT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DEAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> DEAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DEDT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DEDT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> DEDT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DEDT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DEDT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OVER8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> M0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> WAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXNEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDLEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UESM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UE; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40013804,0x0000008f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> ADD4_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> ADD0_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RTOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ABRMOD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ABRMOD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ABREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MSBFIRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TAINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SWAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> LINEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CPHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LBCL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> LBDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LBDL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADDM7; 
    }
    namespace Nonecr3{
        using Addr = Register::Address<0x40013808,0xff810000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> WUFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> WUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> SCARCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DEM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVRDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ONEBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DMAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HDSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRLP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EIE; 
    }
    namespace Nonebrr{
        using Addr = Register::Address<0x4001380c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> DIV_Mantissa; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DIV_Fraction; 
    }
    namespace Nonegtpr{
        using Addr = Register::Address<0x40013810,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> GT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PSC; 
    }
    namespace Nonertor{
        using Addr = Register::Address<0x40013814,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> BLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> RTO; 
    }
    namespace Nonerqr{
        using Addr = Register::Address<0x40013818,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXFRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXFRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MMRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SBKRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ABRRQ; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x4001381c,0xff802000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> REACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TEACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> SBKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ABRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ABRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EOBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RTOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTSIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LBDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x40013820,0xffede4a0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> WUCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CMCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EOBCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RTOCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CTSCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> LBDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TCCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IDLECF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORECF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> NCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FECF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PECF; 
    }
    namespace Nonerdr{
        using Addr = Register::Address<0x40013824,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> RDR; 
    }
    namespace Nonetdr{
        using Addr = Register::Address<0x40013828,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> TDR; 
    }
}
