#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40005400,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADDRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NACKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STOPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DNF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ANFOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TXDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> NOSTRETCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> WUPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> GCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> SMBHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> SMBDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ALERTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PECEN; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40005404,0xf8000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PECBYTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AUTOEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> RELOAD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> NACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> STOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HEAD10R; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ADD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RD_WRN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SADD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> SADD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SADD0; 
    }
    namespace Noneoar1{
        using Addr = Register::Address<0x40005408,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OA1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> OA1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> OA1_8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OA1MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OA1EN; 
    }
    namespace Noneoar2{
        using Addr = Register::Address<0x4000540c,0xffff7801>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> OA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> OA2MSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> OA2EN; 
    }
    namespace Nonetimingr{
        using Addr = Register::Address<0x40005410,0x0f000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SCLL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SCLH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> SDADEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> SCLDEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> PRESC; 
    }
    namespace Nonetimeoutr{
        using Addr = Register::Address<0x40005414,0x70006000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TIMEOUTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TIMOUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> TIMEOUTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TEXTEN; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x40005418,0xff004000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,17)> ADDCODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ALERT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PECERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ARLO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STOPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NACKF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXE; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x4000541c,0xffffc0c7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ALERTCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TIMOUTCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PECCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> OVRCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ARLOCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BERRCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STOPCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> NACKCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADDRCF; 
    }
    namespace Nonepecr{
        using Addr = Register::Address<0x40005420,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PEC; 
    }
    namespace Nonerxdr{
        using Addr = Register::Address<0x40005424,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RXDATA; 
    }
    namespace Nonetxdr{
        using Addr = Register::Address<0x40005428,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TXDATA; 
    }
}
