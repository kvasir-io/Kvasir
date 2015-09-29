#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Secure digital input/output
      interface
    namespace Nonepower{    ///<Bits 1:0 = PWRCTRL: Power supply control
          bits
        using Addr = Register::Address<0x40018000,0xfffffffc,0,unsigned>;
        ///PWRCTRL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pwrctrl{}; 
    }
    namespace Noneclkcr{    ///<SDI clock control register
          (SDIO_CLKCR)
        using Addr = Register::Address<0x40018004,0xffff8000,0,unsigned>;
        ///Clock divide factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Clock enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Power saving configuration
              bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwrsav{}; 
        ///Clock divider bypass enable
              bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bypass{}; 
        ///Wide bus mode enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> widbus{}; 
        ///SDIO_CK dephasing selection
              bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> negedge{}; 
        ///HW Flow Control enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> hwfcEn{}; 
    }
    namespace Nonearg{    ///<Bits 31:0 = : Command argument
        using Addr = Register::Address<0x40018008,0x00000000,0,unsigned>;
        ///Command argument
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdarg{}; 
    }
    namespace Nonecmd{    ///<SDIO command register
          (SDIO_CMD)
        using Addr = Register::Address<0x4001800c,0xffff8000,0,unsigned>;
        ///CMDINDEX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdindex{}; 
        ///WAITRESP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> waitresp{}; 
        ///WAITINT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> waitint{}; 
        ///WAITPEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpend{}; 
        ///CPSMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpsmen{}; 
        ///SDIOSuspend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdiosuspend{}; 
        ///ENCMDcompl
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> encmdcompl{}; 
        ///nIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nien{}; 
        ///CE_ATACMD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ceAtacmd{}; 
    }
    namespace Nonerespcmd{    ///<SDIO command register
        using Addr = Register::Address<0x40018010,0xffffffc0,0,unsigned>;
        ///RESPCMD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> respcmd{}; 
    }
    namespace Nonerespi1{    ///<Bits 31:0 = CARDSTATUS1
        using Addr = Register::Address<0x40018014,0x00000000,0,unsigned>;
        ///CARDSTATUS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus1{}; 
    }
    namespace Noneresp2{    ///<Bits 31:0 = CARDSTATUS2
        using Addr = Register::Address<0x40018018,0x00000000,0,unsigned>;
        ///CARDSTATUS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus2{}; 
    }
    namespace Noneresp3{    ///<Bits 31:0 = CARDSTATUS3
        using Addr = Register::Address<0x4001801c,0x00000000,0,unsigned>;
        ///CARDSTATUS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus3{}; 
    }
    namespace Noneresp4{    ///<Bits 31:0 = CARDSTATUS4
        using Addr = Register::Address<0x40018020,0x00000000,0,unsigned>;
        ///CARDSTATUS4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus4{}; 
    }
    namespace Nonedtimer{    ///<Bits 31:0 = DATATIME: Data timeout
          period
        using Addr = Register::Address<0x40018024,0x00000000,0,unsigned>;
        ///Data timeout period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datatime{}; 
    }
    namespace Nonedlen{    ///<Bits 24:0 = DATALENGTH: Data length
          value
        using Addr = Register::Address<0x40018028,0xfe000000,0,unsigned>;
        ///Data length value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> datalength{}; 
    }
    namespace Nonedctrl{    ///<SDIO data control register
          (SDIO_DCTRL)
        using Addr = Register::Address<0x4001802c,0xfffff000,0,unsigned>;
        ///DTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dten{}; 
        ///DTDIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtdir{}; 
        ///DTMODE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dtmode{}; 
        ///DMAEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///DBLOCKSIZE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dblocksize{}; 
        ///PWSTART
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pwstart{}; 
        ///PWSTOP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwstop{}; 
        ///RWMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rwmod{}; 
        ///SDIOEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdioen{}; 
    }
    namespace Nonedcount{    ///<Bits 24:0 = DATACOUNT: Data count
          value
        using Addr = Register::Address<0x40018030,0xfe000000,0,unsigned>;
        ///Data count value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> datacount{}; 
    }
    namespace Nonesta{    ///<SDIO status register
          (SDIO_STA)
        using Addr = Register::Address<0x40018034,0xff000000,0,unsigned>;
        ///CCRCFAIL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfail{}; 
        ///DCRCFAIL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfail{}; 
        ///CTIMEOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeout{}; 
        ///DTIMEOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeout{}; 
        ///TXUNDERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderr{}; 
        ///RXOVERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverr{}; 
        ///CMDREND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrend{}; 
        ///CMDSENT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsent{}; 
        ///DATAEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataend{}; 
        ///STBITERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterr{}; 
        ///DBCKEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckend{}; 
        ///CMDACT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmdact{}; 
        ///TXACT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txact{}; 
        ///RXACT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rxact{}; 
        ///TXFIFOHE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifohe{}; 
        ///RXFIFOHF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohf{}; 
        ///TXFIFOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txfifof{}; 
        ///RXFIFOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifof{}; 
        ///TXFIFOE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoe{}; 
        ///RXFIFOE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxfifoe{}; 
        ///TXDAVL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> txdavl{}; 
        ///RXDAVL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rxdavl{}; 
        ///SDIOIT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioit{}; 
        ///CEATAEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceataend{}; 
    }
    namespace Noneicr{    ///<SDIO interrupt clear register
          (SDIO_ICR)
        using Addr = Register::Address<0x40018038,0xff3ff800,0,unsigned>;
        ///CCRCFAILC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfailc{}; 
        ///DCRCFAILC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfailc{}; 
        ///CTIMEOUTC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeoutc{}; 
        ///DTIMEOUTC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeoutc{}; 
        ///TXUNDERRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrc{}; 
        ///RXOVERRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrc{}; 
        ///CMDRENDC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrendc{}; 
        ///CMDSENTC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentc{}; 
        ///DATAENDC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendc{}; 
        ///STBITERRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterrc{}; 
        ///DBCKENDC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckendc{}; 
        ///SDIOITC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioitc{}; 
        ///CEATAENDC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceataendc{}; 
    }
    namespace Nonemask{    ///<SDIO mask register (SDIO_MASK)
        using Addr = Register::Address<0x4001803c,0xff000000,0,unsigned>;
        ///CCRCFAILIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfailie{}; 
        ///DCRCFAILIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfailie{}; 
        ///CTIMEOUTIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeoutie{}; 
        ///DTIMEOUTIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeoutie{}; 
        ///TXUNDERRIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrie{}; 
        ///RXOVERRIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrie{}; 
        ///CMDRENDIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrendie{}; 
        ///CMDSENTIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentie{}; 
        ///DATAENDIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendie{}; 
        ///STBITERRIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterrie{}; 
        ///DBACKENDIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbackendie{}; 
        ///CMDACTIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmdactie{}; 
        ///TXACTIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txactie{}; 
        ///RXACTIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rxactie{}; 
        ///TXFIFOHEIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifoheie{}; 
        ///RXFIFOHFIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohfie{}; 
        ///TXFIFOFIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txfifofie{}; 
        ///RXFIFOFIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifofie{}; 
        ///TXFIFOEIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoeie{}; 
        ///RXFIFOEIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxfifoeie{}; 
        ///TXDAVLIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> txdavlie{}; 
        ///RXDAVLIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rxdavlie{}; 
        ///SDIOITIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioitie{}; 
        ///CEATENDIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceatendie{}; 
    }
    namespace Nonefifocnt{    ///<Bits 23:0 = FIFOCOUNT: Remaining number of
          words to be written to or read from the
          FIFO
        using Addr = Register::Address<0x40018048,0xff000000,0,unsigned>;
        ///FIF0COUNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> fif0count{}; 
    }
    namespace Nonefifo{    ///<bits 31:0 = FIFOData: Receive and transmit
          FIFO data
        using Addr = Register::Address<0x40018080,0x00000000,0,unsigned>;
        ///FIFOData
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
}