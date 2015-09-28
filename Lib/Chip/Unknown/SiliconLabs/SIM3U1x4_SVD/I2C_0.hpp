#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecontrol{
        using Addr = Register::Address<0x40009000,0x10000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BUSYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ARBLF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ACKRQF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TXMDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MSMDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STOI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ACKI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STAI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ARBLI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> T0I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> T1I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> T2I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> T3I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RXARM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TXARM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SLVAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ATXRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> SMINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> HACKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> SLVAMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> LBACKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> GCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> I2CEN; 
    }
    namespace Noneconfig{
        using Addr = Register::Address<0x40009010,0x400c00c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> SCALER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> STOIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ACKIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RXIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TXIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> STAIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ARBLIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> T0IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> T1IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> T2IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> T3IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> BC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> BP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> T0RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> T1RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> T2RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> T3RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TIMEREN; 
    }
    namespace Nonesaddress{
        using Addr = Register::Address<0x40009020,0xfffff801>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,1)> ADDRESS; 
    }
    namespace Nonesmask{
        using Addr = Register::Address<0x40009030,0xfffff801>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,1)> MASK; 
    }
    namespace Nonedata{
        using Addr = Register::Address<0x40009040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
    namespace Nonetimer{
        using Addr = Register::Address<0x40009050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> T0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> T1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> T2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> T3; 
    }
    namespace Nonetimerrl{
        using Addr = Register::Address<0x40009060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> T0RL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> T1RL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> T2RL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> T3RL; 
    }
    namespace Nonesconfig{
        using Addr = Register::Address<0x40009070,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> HOLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> SCLLTIMER; 
    }
    namespace Nonei2cdma{
        using Addr = Register::Address<0x40009080,0x7fffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DMALEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DMAEN; 
    }
}
