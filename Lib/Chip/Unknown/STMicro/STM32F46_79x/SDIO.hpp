#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Secure digital input/output
      interface
    namespace Nonepower{    ///<power control register
        using Addr = Register::Address<0x40012c00,0xfffffffc,0,unsigned>;
        ///PWRCTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pwrctrl{}; 
        namespace PwrctrlValC{
        }
    }
    namespace Noneclkcr{    ///<SDI clock control register
        using Addr = Register::Address<0x40012c04,0xffff8000,0,unsigned>;
        ///HW Flow Control enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> hwfcEn{}; 
        namespace HwfcenValC{
        }
        ///SDIO_CK dephasing selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> negedge{}; 
        namespace NegedgeValC{
        }
        ///Wide bus mode enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> widbus{}; 
        namespace WidbusValC{
        }
        ///Clock divider bypass enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bypass{}; 
        namespace BypassValC{
        }
        ///Power saving configuration
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwrsav{}; 
        namespace PwrsavValC{
        }
        ///Clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clken{}; 
        namespace ClkenValC{
        }
        ///Clock divide factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
    }
    namespace Nonearg{    ///<argument register
        using Addr = Register::Address<0x40012c08,0x00000000,0,unsigned>;
        ///Command argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdarg{}; 
        namespace CmdargValC{
        }
    }
    namespace Nonecmd{    ///<command register
        using Addr = Register::Address<0x40012c0c,0xffff8000,0,unsigned>;
        ///CE-ATA command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ceAtacmd{}; 
        namespace CeatacmdValC{
        }
        ///not Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nien{}; 
        namespace NienValC{
        }
        ///Enable CMD completion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> encmdcompl{}; 
        namespace EncmdcomplValC{
        }
        ///SD I/O suspend command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdiosuspend{}; 
        namespace SdiosuspendValC{
        }
        ///Command path state machine (CPSM) Enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpsmen{}; 
        namespace CpsmenValC{
        }
        ///CPSM Waits for ends of data transfer
              (CmdPend internal signal).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpend{}; 
        namespace WaitpendValC{
        }
        ///CPSM waits for interrupt
              request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> waitint{}; 
        namespace WaitintValC{
        }
        ///Wait for response bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> waitresp{}; 
        namespace WaitrespValC{
        }
        ///Command index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdindex{}; 
        namespace CmdindexValC{
        }
    }
    namespace Nonerespcmd{    ///<command response register
        using Addr = Register::Address<0x40012c10,0xffffffc0,0,unsigned>;
        ///Response command index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> respcmd{}; 
        namespace RespcmdValC{
        }
    }
    namespace Noneresp1{    ///<response 1..4 register
        using Addr = Register::Address<0x40012c14,0x00000000,0,unsigned>;
        ///see Table 132.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus1{}; 
        namespace Cardstatus1ValC{
        }
    }
    namespace Noneresp2{    ///<response 1..4 register
        using Addr = Register::Address<0x40012c18,0x00000000,0,unsigned>;
        ///see Table 132.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus2{}; 
        namespace Cardstatus2ValC{
        }
    }
    namespace Noneresp3{    ///<response 1..4 register
        using Addr = Register::Address<0x40012c1c,0x00000000,0,unsigned>;
        ///see Table 132.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus3{}; 
        namespace Cardstatus3ValC{
        }
    }
    namespace Noneresp4{    ///<response 1..4 register
        using Addr = Register::Address<0x40012c20,0x00000000,0,unsigned>;
        ///see Table 132.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus4{}; 
        namespace Cardstatus4ValC{
        }
    }
    namespace Nonedtimer{    ///<data timer register
        using Addr = Register::Address<0x40012c24,0x00000000,0,unsigned>;
        ///Data timeout period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datatime{}; 
        namespace DatatimeValC{
        }
    }
    namespace Nonedlen{    ///<data length register
        using Addr = Register::Address<0x40012c28,0xfe000000,0,unsigned>;
        ///Data length value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> datalength{}; 
        namespace DatalengthValC{
        }
    }
    namespace Nonedctrl{    ///<data control register
        using Addr = Register::Address<0x40012c2c,0xfffff000,0,unsigned>;
        ///SD I/O enable functions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdioen{}; 
        namespace SdioenValC{
        }
        ///Read wait mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rwmod{}; 
        namespace RwmodValC{
        }
        ///Read wait stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwstop{}; 
        namespace RwstopValC{
        }
        ///Read wait start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rwstart{}; 
        namespace RwstartValC{
        }
        ///Data block size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dblocksize{}; 
        namespace DblocksizeValC{
        }
        ///DMA enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///Data transfer mode selection 1: Stream
              or SDIO multibyte data transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dtmode{}; 
        namespace DtmodeValC{
        }
        ///Data transfer direction
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtdir{}; 
        namespace DtdirValC{
        }
        ///DTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dten{}; 
        namespace DtenValC{
        }
    }
    namespace Nonedcount{    ///<data counter register
        using Addr = Register::Address<0x40012c30,0xfe000000,0,unsigned>;
        ///Data count value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> datacount{}; 
        namespace DatacountValC{
        }
    }
    namespace Nonesta{    ///<status register
        using Addr = Register::Address<0x40012c34,0xff000000,0,unsigned>;
        ///CE-ATA command completion signal
              received for CMD61
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceataend{}; 
        namespace CeataendValC{
        }
        ///SDIO interrupt received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioit{}; 
        namespace SdioitValC{
        }
        ///Data available in receive
              FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rxdavl{}; 
        namespace RxdavlValC{
        }
        ///Data available in transmit
              FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> txdavl{}; 
        namespace TxdavlValC{
        }
        ///Receive FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxfifoe{}; 
        namespace RxfifoeValC{
        }
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoe{}; 
        namespace TxfifoeValC{
        }
        ///Receive FIFO full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifof{}; 
        namespace RxfifofValC{
        }
        ///Transmit FIFO full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txfifof{}; 
        namespace TxfifofValC{
        }
        ///Receive FIFO half full: there are at
              least 8 words in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohf{}; 
        namespace RxfifohfValC{
        }
        ///Transmit FIFO half empty: at least 8
              words can be written into the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifohe{}; 
        namespace TxfifoheValC{
        }
        ///Data receive in progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rxact{}; 
        namespace RxactValC{
        }
        ///Data transmit in progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txact{}; 
        namespace TxactValC{
        }
        ///Command transfer in
              progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmdact{}; 
        namespace CmdactValC{
        }
        ///Data block sent/received (CRC check
              passed)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckend{}; 
        namespace DbckendValC{
        }
        ///Start bit not detected on all data
              signals in wide bus mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterr{}; 
        namespace StbiterrValC{
        }
        ///Data end (data counter, SDIDCOUNT, is
              zero)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataend{}; 
        namespace DataendValC{
        }
        ///Command sent (no response
              required)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsent{}; 
        namespace CmdsentValC{
        }
        ///Command response received (CRC check
              passed)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrend{}; 
        namespace CmdrendValC{
        }
        ///Received FIFO overrun
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverr{}; 
        namespace RxoverrValC{
        }
        ///Transmit FIFO underrun
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderr{}; 
        namespace TxunderrValC{
        }
        ///Data timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeout{}; 
        namespace DtimeoutValC{
        }
        ///Command response timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeout{}; 
        namespace CtimeoutValC{
        }
        ///Data block sent/received (CRC check
              failed)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfail{}; 
        namespace DcrcfailValC{
        }
        ///Command response received (CRC check
              failed)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfail{}; 
        namespace CcrcfailValC{
        }
    }
    namespace Noneicr{    ///<interrupt clear register
        using Addr = Register::Address<0x40012c38,0xff3ff800,0,unsigned>;
        ///CEATAEND flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceataendc{}; 
        namespace CeataendcValC{
        }
        ///SDIOIT flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioitc{}; 
        namespace SdioitcValC{
        }
        ///DBCKEND flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckendc{}; 
        namespace DbckendcValC{
        }
        ///STBITERR flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterrc{}; 
        namespace StbiterrcValC{
        }
        ///DATAEND flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendc{}; 
        namespace DataendcValC{
        }
        ///CMDSENT flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentc{}; 
        namespace CmdsentcValC{
        }
        ///CMDREND flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrendc{}; 
        namespace CmdrendcValC{
        }
        ///RXOVERR flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrc{}; 
        namespace RxoverrcValC{
        }
        ///TXUNDERR flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrc{}; 
        namespace TxunderrcValC{
        }
        ///DTIMEOUT flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeoutc{}; 
        namespace DtimeoutcValC{
        }
        ///CTIMEOUT flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeoutc{}; 
        namespace CtimeoutcValC{
        }
        ///DCRCFAIL flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfailc{}; 
        namespace DcrcfailcValC{
        }
        ///CCRCFAIL flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfailc{}; 
        namespace CcrcfailcValC{
        }
    }
    namespace Nonemask{    ///<mask register
        using Addr = Register::Address<0x40012c3c,0xff000000,0,unsigned>;
        ///CE-ATA command completion signal
              received interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceataendie{}; 
        namespace CeataendieValC{
        }
        ///SDIO mode interrupt received interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioitie{}; 
        namespace SdioitieValC{
        }
        ///Data available in Rx FIFO interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rxdavlie{}; 
        namespace RxdavlieValC{
        }
        ///Data available in Tx FIFO interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> txdavlie{}; 
        namespace TxdavlieValC{
        }
        ///Rx FIFO empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxfifoeie{}; 
        namespace RxfifoeieValC{
        }
        ///Tx FIFO empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoeie{}; 
        namespace TxfifoeieValC{
        }
        ///Rx FIFO full interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifofie{}; 
        namespace RxfifofieValC{
        }
        ///Tx FIFO full interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txfifofie{}; 
        namespace TxfifofieValC{
        }
        ///Rx FIFO half full interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohfie{}; 
        namespace RxfifohfieValC{
        }
        ///Tx FIFO half empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifoheie{}; 
        namespace TxfifoheieValC{
        }
        ///Data receive acting interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rxactie{}; 
        namespace RxactieValC{
        }
        ///Data transmit acting interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txactie{}; 
        namespace TxactieValC{
        }
        ///Command acting interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmdactie{}; 
        namespace CmdactieValC{
        }
        ///Data block end interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckendie{}; 
        namespace DbckendieValC{
        }
        ///Start bit error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterrie{}; 
        namespace StbiterrieValC{
        }
        ///Data end interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendie{}; 
        namespace DataendieValC{
        }
        ///Command sent interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentie{}; 
        namespace CmdsentieValC{
        }
        ///Command response received interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrendie{}; 
        namespace CmdrendieValC{
        }
        ///Rx FIFO overrun error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrie{}; 
        namespace RxoverrieValC{
        }
        ///Tx FIFO underrun error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrie{}; 
        namespace TxunderrieValC{
        }
        ///Data timeout interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeoutie{}; 
        namespace DtimeoutieValC{
        }
        ///Command timeout interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeoutie{}; 
        namespace CtimeoutieValC{
        }
        ///Data CRC fail interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfailie{}; 
        namespace DcrcfailieValC{
        }
        ///Command CRC fail interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfailie{}; 
        namespace CcrcfailieValC{
        }
    }
    namespace Nonefifocnt{    ///<FIFO counter register
        using Addr = Register::Address<0x40012c48,0xff000000,0,unsigned>;
        ///Remaining number of words to be written
              to or read from the FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> fifocount{}; 
        namespace FifocountValC{
        }
    }
    namespace Nonefifo{    ///<data FIFO register
        using Addr = Register::Address<0x40012c80,0x00000000,0,unsigned>;
        ///Receive and transmit FIFO
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
        namespace FifodataValC{
        }
    }
}
