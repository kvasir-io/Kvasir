#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace LPUART0_baud{
        using Addr = Register::Address<0x4002a000,0x00500000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0)> SBR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SBNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXEDGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> LBKDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RESYNCDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BOTHEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> MATCFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TDMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> OSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> M10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> MAEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MAEN1; 
    }
    namespace LPUART0_stat{
        using Addr = Register::Address<0x4002a004,0x00003fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MA2F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MA1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> NF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RDRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TDRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> LBKDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> BRK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> RWUID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> RXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MSBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RXEDGIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> LBKDIF; 
    }
    namespace LPUART0_ctrl{
        using Addr = Register::Address<0x4002a008,0x00003800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ILT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> M; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DOZEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LOOPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> IDLECFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MA2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MA1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RWU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ILIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> NEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ORIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TXINV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TXDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> R9T8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> R8T9; 
    }
    namespace LPUART0_data{
        using Addr = Register::Address<0x4002a00c,0xffff0400>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> R0T0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> R1T1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> R2T2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> R3T3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> R4T4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> R5T5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> R6T6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> R7T7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> R8T8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> R9T9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IDLINE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RXEMPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FRETSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PARITYE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NOISY; 
    }
    namespace LPUART0_match{
        using Addr = Register::Address<0x4002a010,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> MA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> MA2; 
    }
    namespace LPUART0_modir{
        using Addr = Register::Address<0x4002a014,0xfff8ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXCTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXRTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TXRTSPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXRTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXCTSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXCTSSRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TNP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IREN; 
    }
}
