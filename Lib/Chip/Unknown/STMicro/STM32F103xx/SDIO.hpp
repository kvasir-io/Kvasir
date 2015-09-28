#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepower{
        using Addr = Register::Address<0x40018000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PWRCTRL; 
    }
    namespace Noneclkcr{
        using Addr = Register::Address<0x40018004,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PWRSAV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BYPASS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> WIDBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> NEGEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> HWFC_EN; 
    }
    namespace Nonearg{
        using Addr = Register::Address<0x40018008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CMDARG; 
    }
    namespace Nonecmd{
        using Addr = Register::Address<0x4001800c,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMDINDEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> WAITRESP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> WAITINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> WAITPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CPSMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SDIOSuspend; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ENCMDcompl; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> nIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CE_ATACMD; 
    }
    namespace Nonerespcmd{
        using Addr = Register::Address<0x40018010,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> RESPCMD; 
    }
    namespace Nonerespi1{
        using Addr = Register::Address<0x40018014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CARDSTATUS1; 
    }
    namespace Noneresp2{
        using Addr = Register::Address<0x40018018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CARDSTATUS2; 
    }
    namespace Noneresp3{
        using Addr = Register::Address<0x4001801c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CARDSTATUS3; 
    }
    namespace Noneresp4{
        using Addr = Register::Address<0x40018020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CARDSTATUS4; 
    }
    namespace Nonedtimer{
        using Addr = Register::Address<0x40018024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATATIME; 
    }
    namespace Nonedlen{
        using Addr = Register::Address<0x40018028,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,0)> DATALENGTH; 
    }
    namespace Nonedctrl{
        using Addr = Register::Address<0x4001802c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DTDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DTMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DBLOCKSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PWSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RWMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SDIOEN; 
    }
    namespace Nonedcount{
        using Addr = Register::Address<0x40018030,0xfe000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,0)> DATACOUNT; 
    }
    namespace Nonesta{
        using Addr = Register::Address<0x40018034,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCRCFAIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DCRCFAIL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNDERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXOVERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMDREND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMDSENT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DATAEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STBITERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBCKEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMDACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RXACT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TXFIFOHE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXFIFOHF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXFIFOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXFIFOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TXFIFOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXFIFOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXDAVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RXDAVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SDIOIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CEATAEND; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x40018038,0xff3ff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCRCFAILC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DCRCFAILC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTIMEOUTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTIMEOUTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNDERRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXOVERRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMDRENDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMDSENTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DATAENDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STBITERRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBCKENDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SDIOITC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CEATAENDC; 
    }
    namespace Nonemask{
        using Addr = Register::Address<0x4001803c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCRCFAILIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DCRCFAILIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CTIMEOUTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTIMEOUTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TXUNDERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RXOVERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMDRENDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMDSENTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DATAENDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STBITERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DBACKENDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMDACTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TXACTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RXACTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TXFIFOHEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXFIFOHFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXFIFOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RXFIFOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TXFIFOEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RXFIFOEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> TXDAVLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> RXDAVLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> SDIOITIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CEATENDIE; 
    }
    namespace Nonefifocnt{
        using Addr = Register::Address<0x40018048,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> FIF0COUNT; 
    }
    namespace Nonefifo{
        using Addr = Register::Address<0x40018080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFOData; 
    }
}
