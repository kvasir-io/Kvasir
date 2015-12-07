#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Secure digital input/output
      interface
    namespace Nonepower{    ///<Bits 1:0 = PWRCTRL: Power supply control
          bits
        using Addr = Register::Address<0x40018000,0xfffffffc,0,unsigned>;
        ///PWRCTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pwrctrl{}; 
        namespace PwrctrlValC{
        }
    }
    namespace Noneclkcr{    ///<SDI clock control register
          (SDIO_CLKCR)
        using Addr = Register::Address<0x40018004,0xffff8000,0,unsigned>;
        ///Clock divide factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///Clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Power saving configuration
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwrsav{}; 
        namespace PwrsavValC{
        }
        ///Clock divider bypass enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bypass{}; 
        namespace BypassValC{
        }
        ///Wide bus mode enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> widbus{}; 
        namespace WidbusValC{
        }
        ///SDIO_CK dephasing selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> negedge{}; 
        namespace NegedgeValC{
        }
        ///HW Flow Control enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> hwfcEn{}; 
        namespace HwfcenValC{
        }
    }
    namespace Nonearg{    ///<Bits 31:0 = : Command argument
        using Addr = Register::Address<0x40018008,0x00000000,0,unsigned>;
        ///Command argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdarg{}; 
        namespace CmdargValC{
        }
    }
    namespace Nonecmd{    ///<SDIO command register
          (SDIO_CMD)
        using Addr = Register::Address<0x4001800c,0xffff8000,0,unsigned>;
        ///CMDINDEX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdindex{}; 
        namespace CmdindexValC{
        }
        ///WAITRESP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> waitresp{}; 
        namespace WaitrespValC{
        }
        ///WAITINT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> waitint{}; 
        namespace WaitintValC{
        }
        ///WAITPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpend{}; 
        namespace WaitpendValC{
        }
        ///CPSMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpsmen{}; 
        namespace CpsmenValC{
        }
        ///SDIOSuspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdiosuspend{}; 
        namespace SdiosuspendValC{
        }
        ///ENCMDcompl
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> encmdcompl{}; 
        namespace EncmdcomplValC{
        }
        ///nIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nien{}; 
        namespace NienValC{
        }
        ///CE_ATACMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ceAtacmd{}; 
        namespace CeatacmdValC{
        }
    }
    namespace Nonerespcmd{    ///<SDIO command register
        using Addr = Register::Address<0x40018010,0xffffffc0,0,unsigned>;
        ///RESPCMD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> respcmd{}; 
        namespace RespcmdValC{
        }
    }
    namespace Nonerespi1{    ///<Bits 31:0 = CARDSTATUS1
        using Addr = Register::Address<0x40018014,0x00000000,0,unsigned>;
        ///CARDSTATUS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus1{}; 
        namespace Cardstatus1ValC{
        }
    }
    namespace Noneresp2{    ///<Bits 31:0 = CARDSTATUS2
        using Addr = Register::Address<0x40018018,0x00000000,0,unsigned>;
        ///CARDSTATUS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus2{}; 
        namespace Cardstatus2ValC{
        }
    }
    namespace Noneresp3{    ///<Bits 31:0 = CARDSTATUS3
        using Addr = Register::Address<0x4001801c,0x00000000,0,unsigned>;
        ///CARDSTATUS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus3{}; 
        namespace Cardstatus3ValC{
        }
    }
    namespace Noneresp4{    ///<Bits 31:0 = CARDSTATUS4
        using Addr = Register::Address<0x40018020,0x00000000,0,unsigned>;
        ///CARDSTATUS4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus4{}; 
        namespace Cardstatus4ValC{
        }
    }
    namespace Nonedtimer{    ///<Bits 31:0 = DATATIME: Data timeout
          period
        using Addr = Register::Address<0x40018024,0x00000000,0,unsigned>;
        ///Data timeout period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datatime{}; 
        namespace DatatimeValC{
        }
    }
    namespace Nonedlen{    ///<Bits 24:0 = DATALENGTH: Data length
          value
        using Addr = Register::Address<0x40018028,0xfe000000,0,unsigned>;
        ///Data length value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> datalength{}; 
        namespace DatalengthValC{
        }
    }
    namespace Nonedctrl{    ///<SDIO data control register
          (SDIO_DCTRL)
        using Addr = Register::Address<0x4001802c,0xfffff000,0,unsigned>;
        ///DTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dten{}; 
        namespace DtenValC{
        }
        ///DTDIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtdir{}; 
        namespace DtdirValC{
        }
        ///DTMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dtmode{}; 
        namespace DtmodeValC{
        }
        ///DMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///DBLOCKSIZE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dblocksize{}; 
        namespace DblocksizeValC{
        }
        ///PWSTART
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pwstart{}; 
        namespace PwstartValC{
        }
        ///PWSTOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwstop{}; 
        namespace PwstopValC{
        }
        ///RWMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rwmod{}; 
        namespace RwmodValC{
        }
        ///SDIOEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdioen{}; 
        namespace SdioenValC{
        }
    }
    namespace Nonedcount{    ///<Bits 24:0 = DATACOUNT: Data count
          value
        using Addr = Register::Address<0x40018030,0xfe000000,0,unsigned>;
        ///Data count value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> datacount{}; 
        namespace DatacountValC{
        }
    }
    namespace Nonesta{    ///<SDIO status register
          (SDIO_STA)
        using Addr = Register::Address<0x40018034,0xff000000,0,unsigned>;
        ///CCRCFAIL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfail{}; 
        namespace CcrcfailValC{
        }
        ///DCRCFAIL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfail{}; 
        namespace DcrcfailValC{
        }
        ///CTIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeout{}; 
        namespace CtimeoutValC{
        }
        ///DTIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeout{}; 
        namespace DtimeoutValC{
        }
        ///TXUNDERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderr{}; 
        namespace TxunderrValC{
        }
        ///RXOVERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverr{}; 
        namespace RxoverrValC{
        }
        ///CMDREND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrend{}; 
        namespace CmdrendValC{
        }
        ///CMDSENT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsent{}; 
        namespace CmdsentValC{
        }
        ///DATAEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataend{}; 
        namespace DataendValC{
        }
        ///STBITERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterr{}; 
        namespace StbiterrValC{
        }
        ///DBCKEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckend{}; 
        namespace DbckendValC{
        }
        ///CMDACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmdact{}; 
        namespace CmdactValC{
        }
        ///TXACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txact{}; 
        namespace TxactValC{
        }
        ///RXACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rxact{}; 
        namespace RxactValC{
        }
        ///TXFIFOHE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifohe{}; 
        namespace TxfifoheValC{
        }
        ///RXFIFOHF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohf{}; 
        namespace RxfifohfValC{
        }
        ///TXFIFOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txfifof{}; 
        namespace TxfifofValC{
        }
        ///RXFIFOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifof{}; 
        namespace RxfifofValC{
        }
        ///TXFIFOE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoe{}; 
        namespace TxfifoeValC{
        }
        ///RXFIFOE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxfifoe{}; 
        namespace RxfifoeValC{
        }
        ///TXDAVL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> txdavl{}; 
        namespace TxdavlValC{
        }
        ///RXDAVL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rxdavl{}; 
        namespace RxdavlValC{
        }
        ///SDIOIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioit{}; 
        namespace SdioitValC{
        }
        ///CEATAEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceataend{}; 
        namespace CeataendValC{
        }
    }
    namespace Noneicr{    ///<SDIO interrupt clear register
          (SDIO_ICR)
        using Addr = Register::Address<0x40018038,0xff3ff800,0,unsigned>;
        ///CCRCFAILC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfailc{}; 
        namespace CcrcfailcValC{
        }
        ///DCRCFAILC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfailc{}; 
        namespace DcrcfailcValC{
        }
        ///CTIMEOUTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeoutc{}; 
        namespace CtimeoutcValC{
        }
        ///DTIMEOUTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeoutc{}; 
        namespace DtimeoutcValC{
        }
        ///TXUNDERRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrc{}; 
        namespace TxunderrcValC{
        }
        ///RXOVERRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrc{}; 
        namespace RxoverrcValC{
        }
        ///CMDRENDC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrendc{}; 
        namespace CmdrendcValC{
        }
        ///CMDSENTC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentc{}; 
        namespace CmdsentcValC{
        }
        ///DATAENDC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendc{}; 
        namespace DataendcValC{
        }
        ///STBITERRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterrc{}; 
        namespace StbiterrcValC{
        }
        ///DBCKENDC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckendc{}; 
        namespace DbckendcValC{
        }
        ///SDIOITC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioitc{}; 
        namespace SdioitcValC{
        }
        ///CEATAENDC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceataendc{}; 
        namespace CeataendcValC{
        }
    }
    namespace Nonemask{    ///<SDIO mask register (SDIO_MASK)
        using Addr = Register::Address<0x4001803c,0xff000000,0,unsigned>;
        ///CCRCFAILIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfailie{}; 
        namespace CcrcfailieValC{
        }
        ///DCRCFAILIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfailie{}; 
        namespace DcrcfailieValC{
        }
        ///CTIMEOUTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeoutie{}; 
        namespace CtimeoutieValC{
        }
        ///DTIMEOUTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeoutie{}; 
        namespace DtimeoutieValC{
        }
        ///TXUNDERRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrie{}; 
        namespace TxunderrieValC{
        }
        ///RXOVERRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrie{}; 
        namespace RxoverrieValC{
        }
        ///CMDRENDIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrendie{}; 
        namespace CmdrendieValC{
        }
        ///CMDSENTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentie{}; 
        namespace CmdsentieValC{
        }
        ///DATAENDIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendie{}; 
        namespace DataendieValC{
        }
        ///STBITERRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterrie{}; 
        namespace StbiterrieValC{
        }
        ///DBACKENDIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbackendie{}; 
        namespace DbackendieValC{
        }
        ///CMDACTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmdactie{}; 
        namespace CmdactieValC{
        }
        ///TXACTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txactie{}; 
        namespace TxactieValC{
        }
        ///RXACTIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rxactie{}; 
        namespace RxactieValC{
        }
        ///TXFIFOHEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifoheie{}; 
        namespace TxfifoheieValC{
        }
        ///RXFIFOHFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohfie{}; 
        namespace RxfifohfieValC{
        }
        ///TXFIFOFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txfifofie{}; 
        namespace TxfifofieValC{
        }
        ///RXFIFOFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifofie{}; 
        namespace RxfifofieValC{
        }
        ///TXFIFOEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoeie{}; 
        namespace TxfifoeieValC{
        }
        ///RXFIFOEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxfifoeie{}; 
        namespace RxfifoeieValC{
        }
        ///TXDAVLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> txdavlie{}; 
        namespace TxdavlieValC{
        }
        ///RXDAVLIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rxdavlie{}; 
        namespace RxdavlieValC{
        }
        ///SDIOITIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioitie{}; 
        namespace SdioitieValC{
        }
        ///CEATENDIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceatendie{}; 
        namespace CeatendieValC{
        }
    }
    namespace Nonefifocnt{    ///<Bits 23:0 = FIFOCOUNT: Remaining number of
          words to be written to or read from the
          FIFO
        using Addr = Register::Address<0x40018048,0xff000000,0,unsigned>;
        ///FIF0COUNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> fif0count{}; 
        namespace Fif0countValC{
        }
    }
    namespace Nonefifo{    ///<bits 31:0 = FIFOData: Receive and transmit
          FIFO data
        using Addr = Register::Address<0x40018080,0x00000000,0,unsigned>;
        ///FIFOData
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
        namespace FifodataValC{
        }
    }
}
