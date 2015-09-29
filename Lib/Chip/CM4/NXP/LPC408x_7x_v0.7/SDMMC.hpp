#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SD card
    namespace Nonepwr{    ///<Power control register.
        using Addr = Register::Address<0x400c0000,0xffffff3c,0,unsigned>;
        ///Power control
        enum class ctrlVal {
            powerOff=0x00000000,     ///<Power-off
            reserved=0x00000001,     ///<Reserved
            powerUp=0x00000002,     ///<Power-up
            powerOn=0x00000003,     ///<Power-on
        };
        namespace ctrlValC{
            constexpr MPL::Value<ctrlVal,ctrlVal::powerOff> powerOff{};
            constexpr MPL::Value<ctrlVal,ctrlVal::reserved> reserved{};
            constexpr MPL::Value<ctrlVal,ctrlVal::powerUp> powerUp{};
            constexpr MPL::Value<ctrlVal,ctrlVal::powerOn> powerOn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ctrlVal> ctrl{}; 
        ///SD_CMD output control.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> opendrain{}; 
        ///Rod control.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rod{}; 
    }
    namespace Noneclock{    ///<Clock control register.
        using Addr = Register::Address<0x400c0004,0xfffff000,0,unsigned>;
        ///Bus clock period: SD_CLK frequency = MCLK / [2x(ClkDiv+1)].
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Enable SD card bus clock:
        enum class enableVal {
            clockDisabled=0x00000000,     ///<Clock disabled.
            clockEnabled=0x00000001,     ///<Clock enabled.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::clockDisabled> clockDisabled{};
            constexpr MPL::Value<enableVal,enableVal::clockEnabled> clockEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,enableVal> enable{}; 
        ///Disable SD_CLK output when bus is idle:
        enum class pwrsaveVal {
            alwaysEnabled=0x00000000,     ///<Always enabled.
            clockEnabledWhenB=0x00000001,     ///<Clock enabled when bus is active.
        };
        namespace pwrsaveValC{
            constexpr MPL::Value<pwrsaveVal,pwrsaveVal::alwaysEnabled> alwaysEnabled{};
            constexpr MPL::Value<pwrsaveVal,pwrsaveVal::clockEnabledWhenB> clockEnabledWhenB{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,pwrsaveVal> pwrsave{}; 
        ///Enable bypass of clock divide logic:
        enum class bypassVal {
            disableBypass=0x00000000,     ///<Disable bypass.
            enableBypassMclk=0x00000001,     ///<Enable bypass. MCLK driven to card bus output (SD_CLK).
        };
        namespace bypassValC{
            constexpr MPL::Value<bypassVal,bypassVal::disableBypass> disableBypass{};
            constexpr MPL::Value<bypassVal,bypassVal::enableBypassMclk> enableBypassMclk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,bypassVal> bypass{}; 
        ///Enable wide bus mode.
        enum class widebusVal {
            standardBusModeO=0x00000000,     ///<Standard bus mode (only SD_DAT[0] used).
            wideBusModeSdDa=0x00000001,     ///<Wide bus mode (SD_DAT[3:0] used)
        };
        namespace widebusValC{
            constexpr MPL::Value<widebusVal,widebusVal::standardBusModeO> standardBusModeO{};
            constexpr MPL::Value<widebusVal,widebusVal::wideBusModeSdDa> wideBusModeSdDa{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,widebusVal> widebus{}; 
    }
    namespace Noneargument{    ///<Argument register.
        using Addr = Register::Address<0x400c0008,0x00000000,0,unsigned>;
        ///Command argument
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdarg{}; 
    }
    namespace Nonecommand{    ///<Command register.
        using Addr = Register::Address<0x400c000c,0xfffff800,0,unsigned>;
        ///Command index.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdindex{}; 
        ///If set, CPSM waits for a response.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> response{}; 
        ///If set, CPSM receives a 136 bit long response.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> longrsp{}; 
        ///If set, CPSM disables command timer and waits for interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> interrupt{}; 
        ///If set, CPSM waits for CmdPend before it starts sending a command.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pending{}; 
        ///If set, CPSM is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Nonerespcmd{    ///<Response command register.
        using Addr = Register::Address<0x400c0010,0xffffffc0,0,unsigned>;
        ///Response command index
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> respcmd{}; 
    }
    namespace Noneresponse0{    ///<Response register.
        using Addr = Register::Address<0x400c0014,0x00000000,0,unsigned>;
        ///Card status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> status{}; 
    }
    namespace Noneresponse1{    ///<Response register.
        using Addr = Register::Address<0x400c0018,0x00000000,0,unsigned>;
        ///Card status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> status{}; 
    }
    namespace Noneresponse2{    ///<Response register.
        using Addr = Register::Address<0x400c001c,0x00000000,0,unsigned>;
        ///Card status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> status{}; 
    }
    namespace Noneresponse3{    ///<Response register.
        using Addr = Register::Address<0x400c0020,0x00000000,0,unsigned>;
        ///Card status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> status{}; 
    }
    namespace Nonedatatimer{    ///<Data Timer.
        using Addr = Register::Address<0x400c0024,0x00000000,0,unsigned>;
        ///Data timeout period.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datatime{}; 
    }
    namespace Nonedatalength{    ///<Data length register.
        using Addr = Register::Address<0x400c0028,0xffff0000,0,unsigned>;
        ///Data length value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> datalength{}; 
    }
    namespace Nonedatactrl{    ///<Data control register.
        using Addr = Register::Address<0x400c002c,0xffffff00,0,unsigned>;
        ///Data transfer enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        ///Data transfer direction
        enum class directionVal {
            fromControllerToC=0x00000000,     ///<From controller to card.
            fromCardToControl=0x00000001,     ///<From card to controller.
        };
        namespace directionValC{
            constexpr MPL::Value<directionVal,directionVal::fromControllerToC> fromControllerToC{};
            constexpr MPL::Value<directionVal,directionVal::fromCardToControl> fromCardToControl{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,directionVal> direction{}; 
        ///Data transfer mode
        enum class modeVal {
            blockDataTransfer=0x00000000,     ///<Block data transfer.
            streamDataTransfer=0x00000001,     ///<Stream data transfer.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::blockDataTransfer> blockDataTransfer{};
            constexpr MPL::Value<modeVal,modeVal::streamDataTransfer> streamDataTransfer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enable DMA
        enum class dmaenableVal {
            dmaDisabled=0x00000000,     ///<DMA disabled.
            dmaEnabled=0x00000001,     ///<DMA enabled.
        };
        namespace dmaenableValC{
            constexpr MPL::Value<dmaenableVal,dmaenableVal::dmaDisabled> dmaDisabled{};
            constexpr MPL::Value<dmaenableVal,dmaenableVal::dmaEnabled> dmaEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dmaenableVal> dmaenable{}; 
        ///Data block length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> blocksize{}; 
    }
    namespace Nonedatacnt{    ///<Data counter.
        using Addr = Register::Address<0x400c0030,0xffff0000,0,unsigned>;
        ///Remaining data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> datacount{}; 
    }
    namespace Nonestatus{    ///<Status register.
        using Addr = Register::Address<0x400c0034,0xffc00000,0,unsigned>;
        ///Command response received (CRC check failed).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdcrcfail{}; 
        ///Data block sent/received (CRC check failed).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datacrcfail{}; 
        ///Command response timeout.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmdtimeout{}; 
        ///Data timeout.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> datatimeout{}; 
        ///Transmit FIFO underrun error.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrun{}; 
        ///Receive FIFO overrun error.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrun{}; 
        ///Command response received (CRC check passed).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrespend{}; 
        ///Command sent (no response required).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsent{}; 
        ///Data end (data counter is zero).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataend{}; 
        ///Start bit not detected on all data signals in wide bus mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> startbiterr{}; 
        ///Data block sent/received (CRC check passed).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> datablockend{}; 
        ///Command transfer in progress.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cmdactive{}; 
        ///Data transmit in progress.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txactive{}; 
        ///Data receive in progress.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rxactive{}; 
        ///Transmit FIFO half empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txfifohalfempty{}; 
        ///Receive FIFO half full.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxfifohalffull{}; 
        ///Transmit FIFO full.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txfifofull{}; 
        ///Receive FIFO full.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxfifofull{}; 
        ///Transmit FIFO empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> txfifoempty{}; 
        ///Receive FIFO empty.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rxfifoempty{}; 
        ///Data available in transmit FIFO.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> txdataavlbl{}; 
        ///Data available in receive FIFO.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rxdataavlbl{}; 
    }
    namespace Noneclear{    ///<Clear register.
        using Addr = Register::Address<0x400c0038,0xfffff800,0,unsigned>;
        ///Clears CmdCrcFail flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdcrcfailclr{}; 
        ///Clears DataCrcFail flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datacrcfailclr{}; 
        ///Clears CmdTimeOut flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmdtimeoutclr{}; 
        ///Clears DataTimeOut flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> datatimeoutclr{}; 
        ///Clears TxUnderrun flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txunderrunclr{}; 
        ///Clears RxOverrun flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxoverrunclr{}; 
        ///Clears CmdRespEnd flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmdrespendclr{}; 
        ///Clears CmdSent flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdsentclr{}; 
        ///Clears DataEnd flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dataendclr{}; 
        ///Clears StartBitErr flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> startbiterrclr{}; 
        ///Clears DataBlockEnd flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> datablockendclr{}; 
    }
    namespace Nonemask0{    ///<Interrupt 0 mask register.
        using Addr = Register::Address<0x400c003c,0xffc00000,0,unsigned>;
        ///Mask CmdCrcFail flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mask0{}; 
        ///Mask DataCrcFail flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mask1{}; 
        ///Mask CmdTimeOut flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mask2{}; 
        ///Mask DataTimeOut flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mask3{}; 
        ///Mask TxUnderrun flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mask4{}; 
        ///Mask RxOverrun flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mask5{}; 
        ///Mask CmdRespEnd flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask6{}; 
        ///Mask CmdSent flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mask7{}; 
        ///Mask DataEnd flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mask8{}; 
        ///Mask StartBitErr flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mask9{}; 
        ///Mask DataBlockEnd flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mask10{}; 
        ///Mask CmdActive flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mask11{}; 
        ///Mask TxActive flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mask12{}; 
        ///Mask RxActive flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mask13{}; 
        ///Mask TxFifoHalfEmpty flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mask14{}; 
        ///Mask RxFifoHalfFull flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mask15{}; 
        ///Mask TxFifoFull flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mask16{}; 
        ///Mask RxFifoFull flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mask17{}; 
        ///Mask TxFifoEmpty flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mask18{}; 
        ///Mask RxFifoEmpty flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mask19{}; 
        ///Mask TxDataAvlbl flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mask20{}; 
        ///Mask RxDataAvlbl flag.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mask21{}; 
    }
    namespace Nonefifocnt{    ///<FIFO Counter.
        using Addr = Register::Address<0x400c0048,0xffff8000,0,unsigned>;
        ///Remaining data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> datacount{}; 
    }
    namespace Nonefifo0{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c0080,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo1{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c0084,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo2{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c0088,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo3{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c008c,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo4{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c0090,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo5{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c0094,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo6{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c0098,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo7{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c009c,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo8{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c00a0,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo9{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c00a4,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo10{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c00a8,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo11{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c00ac,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo12{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c00b0,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo13{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c00b4,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo14{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c00b8,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonefifo15{    ///<Data FIFO Register.
        using Addr = Register::Address<0x400c00bc,0x00000000,0,unsigned>;
        ///FIFO data.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
