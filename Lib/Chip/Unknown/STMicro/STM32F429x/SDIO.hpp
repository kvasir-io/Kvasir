#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Secure digital input/output
      interface
    namespace Nonepower{    ///<power control register
        using Addr = Register::Address<0x40012c00,0xfffffffc,0,unsigned>;
        ///PWRCTRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pwrctrl{}; 
    }
    namespace Noneclkcr{    ///<SDI clock control register
        using Addr = Register::Address<0x40012c04,0xffff8000,0,unsigned>;
        ///HW Flow Control enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> hwfcEn{}; 
        ///SDIO_CK dephasing selection
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> negedge{}; 
        ///Wide bus mode enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> widbus{}; 
        ///Clock divider bypass enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bypass{}; 
        ///Power saving configuration
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pwrsav{}; 
        ///Clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Clock divide factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
    }
    namespace Nonearg{    ///<argument register
        using Addr = Register::Address<0x40012c08,0x00000000,0,unsigned>;
        ///Command argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdarg{}; 
    }
    namespace Nonecmd{    ///<command register
        using Addr = Register::Address<0x40012c0c,0xffff8000,0,unsigned>;
        ///CE-ATA command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ceAtacmd{}; 
        ///not Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nien{}; 
        ///Enable CMD completion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> encmdcompl{}; 
        ///SD I/O suspend command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdiosuspend{}; 
        ///Command path state machine (CPSM) Enable
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cpsmen{}; 
        ///CPSM Waits for ends of data transfer
              (CmdPend internal signal).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> waitpend{}; 
        ///CPSM waits for interrupt
              request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> waitint{}; 
        ///Wait for response bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> waitresp{}; 
        ///Command index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdindex{}; 
    }
    namespace Nonerespcmd{    ///<command response register
        using Addr = Register::Address<0x40012c10,0xffffffc0,0,unsigned>;
        ///Response command index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> respcmd{}; 
    }
    namespace Noneresp1{    ///<response 1..4 register
        using Addr = Register::Address<0x40012c14,0x00000000,0,unsigned>;
        ///see Table 132.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus1{}; 
    }
    namespace Noneresp2{    ///<response 1..4 register
        using Addr = Register::Address<0x40012c18,0x00000000,0,unsigned>;
        ///see Table 132.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus2{}; 
    }
    namespace Noneresp3{    ///<response 1..4 register
        using Addr = Register::Address<0x40012c1c,0x00000000,0,unsigned>;
        ///see Table 132.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus3{}; 
    }
    namespace Noneresp4{    ///<response 1..4 register
        using Addr = Register::Address<0x40012c20,0x00000000,0,unsigned>;
        ///see Table 132.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cardstatus4{}; 
    }
    namespace Nonedtimer{    ///<data timer register
        using Addr = Register::Address<0x40012c24,0x00000000,0,unsigned>;
        ///Data timeout period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datatime{}; 
    }
    namespace Nonedlen{    ///<data length register
        using Addr = Register::Address<0x40012c28,0xfe000000,0,unsigned>;
        ///Data length value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> datalength{}; 
    }
    namespace Nonedctrl{    ///<data control register
        using Addr = Register::Address<0x40012c2c,0xfffff000,0,unsigned>;
        ///SD I/O enable functions
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> sdioen{}; 
        ///Read wait mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rwmod{}; 
        ///Read wait stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwstop{}; 
        ///Read wait start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rwstart{}; 
        ///Data block size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dblocksize{}; 
        ///DMA enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Data transfer mode selection 1: Stream
              or SDIO multibyte data transfer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dtmode{}; 
        ///Data transfer direction
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dtdir{}; 
        ///DTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dten{}; 
    }
    namespace Nonedcount{    ///<data counter register
        using Addr = Register::Address<0x40012c30,0xfe000000,0,unsigned>;
        ///Data count value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,0),Register::ReadWriteAccess,unsigned> datacount{}; 
    }
    namespace Nonesta{    ///<status register
        using Addr = Register::Address<0x40012c34,0xff000000,0,unsigned>;
        ///CE-ATA command completion signal
              received for CMD61
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceataend{}; 
        ///SDIO interrupt received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioit{}; 
        ///Data available in receive
              FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rxdavl{}; 
        ///Data available in transmit
              FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> txdavl{}; 
        ///Receive FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxfifoe{}; 
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoe{}; 
        ///Receive FIFO full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifof{}; 
        ///Transmit FIFO full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txfifof{}; 
        ///Receive FIFO half full: there are at
              least 8 words in the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohf{}; 
        ///Transmit FIFO half empty: at least 8
              words can be written into the FIFO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifohe{}; 
        ///Data receive in progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rxact{}; 
        ///Data transmit in progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txact{}; 
        ///Command transfer in
              progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmdact{}; 
        ///Data block sent/received (CRC check
              passed)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckend{}; 
        ///Start bit not detected on all data
              signals in wide bus mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterr{}; 
        ///Data end (data counter, SDIDCOUNT, is
              zero)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataend{}; 
        ///Command sent (no response
              required)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsent{}; 
        ///Command response received (CRC check
              passed)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrend{}; 
        ///Received FIFO overrun
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverr{}; 
        ///Transmit FIFO underrun
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderr{}; 
        ///Data timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeout{}; 
        ///Command response timeout
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeout{}; 
        ///Data block sent/received (CRC check
              failed)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfail{}; 
        ///Command response received (CRC check
              failed)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfail{}; 
    }
    namespace Noneicr{    ///<interrupt clear register
        using Addr = Register::Address<0x40012c38,0xff3ff800,0,unsigned>;
        ///CEATAEND flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceataendc{}; 
        ///SDIOIT flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioitc{}; 
        ///DBCKEND flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckendc{}; 
        ///STBITERR flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterrc{}; 
        ///DATAEND flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendc{}; 
        ///CMDSENT flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentc{}; 
        ///CMDREND flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrendc{}; 
        ///RXOVERR flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrc{}; 
        ///TXUNDERR flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrc{}; 
        ///DTIMEOUT flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeoutc{}; 
        ///CTIMEOUT flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeoutc{}; 
        ///DCRCFAIL flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfailc{}; 
        ///CCRCFAIL flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfailc{}; 
    }
    namespace Nonemask{    ///<mask register
        using Addr = Register::Address<0x40012c3c,0xff000000,0,unsigned>;
        ///CE-ATA command completion signal
              received interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ceataendie{}; 
        ///SDIO mode interrupt received interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> sdioitie{}; 
        ///Data available in Rx FIFO interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rxdavlie{}; 
        ///Data available in Tx FIFO interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> txdavlie{}; 
        ///Rx FIFO empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxfifoeie{}; 
        ///Tx FIFO empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoeie{}; 
        ///Rx FIFO full interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifofie{}; 
        ///Tx FIFO full interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txfifofie{}; 
        ///Rx FIFO half full interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohfie{}; 
        ///Tx FIFO half empty interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifoheie{}; 
        ///Data receive acting interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rxactie{}; 
        ///Data transmit acting interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txactie{}; 
        ///Command acting interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmdactie{}; 
        ///Data block end interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dbckendie{}; 
        ///Start bit error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stbiterrie{}; 
        ///Data end interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendie{}; 
        ///Command sent interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentie{}; 
        ///Command response received interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrendie{}; 
        ///Rx FIFO overrun error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrie{}; 
        ///Tx FIFO underrun error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrie{}; 
        ///Data timeout interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dtimeoutie{}; 
        ///Command timeout interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctimeoutie{}; 
        ///Data CRC fail interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcrcfailie{}; 
        ///Command CRC fail interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccrcfailie{}; 
    }
    namespace Nonefifocnt{    ///<FIFO counter register
        using Addr = Register::Address<0x40012c48,0xff000000,0,unsigned>;
        ///Remaining number of words to be written
              to or read from the FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> fifocount{}; 
    }
    namespace Nonefifo{    ///<data FIFO register
        using Addr = Register::Address<0x40012c80,0x00000000,0,unsigned>;
        ///Receive and transmit FIFO
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
}
