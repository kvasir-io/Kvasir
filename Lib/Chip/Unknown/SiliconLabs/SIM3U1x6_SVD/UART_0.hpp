#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x40002000,0x88808880>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RSTRTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RPAREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> RSTPMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> RPARMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> RDATLN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RIRDAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RINVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TSTRTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TPAREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TSTPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19)> TSTPMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,21)> TPARMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> TDATLN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TSCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TIRDAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TINVEN; 
    }
    namespace Nonemode{
        using Addr = Register::Address<0x40002010,0xb7f2ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DBGMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> LBMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> DUPLEXMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ITSEN; 
    }
    namespace Noneflowcn{
        using Addr = Register::Address<0x40002020,0xcf5cff1c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTSINVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RTSTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CTSINVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CTSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TIRDAPW; 
    }
    namespace Nonecontrol{
        using Addr = Register::Address<0x40002030,0x27020090>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RFRMERI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RPARERI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ROREI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RDREQI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RERIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RDREQIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MATMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RABDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RBUSYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ROSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> REN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TSCERI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TDREQI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TCPTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TCPTTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TERIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TDREQIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TCPTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TBUSYF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> TINH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> TEN; 
    }
    namespace Noneipdelay{
        using Addr = Register::Address<0x40002040,0xff00ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IPDELAY; 
    }
    namespace Nonebaudrate{
        using Addr = Register::Address<0x40002050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RBAUD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> TBAUD; 
    }
    namespace Nonefifocn{
        using Addr = Register::Address<0x40002060,0xf8c8f8c8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> RCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RFTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RFERI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RSRFULLF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> TCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TFTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TFIFOFL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TFERI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> TSRFULLF; 
    }
    namespace Nonedata{
        using Addr = Register::Address<0x40002070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATA; 
    }
}
