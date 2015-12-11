#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High Speed MultiMedia Card Interface
    namespace HsmciCr{    ///<Control Register
        using Addr = Register::Address<0x40000000,0xffffff70,0,unsigned>;
        ///Multi-Media Interface Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcien{}; 
        ///Multi-Media Interface Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcidis{}; 
        ///Power Save Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pwsen{}; 
        ///Power Save Mode Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwsdis{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace HsmciMr{    ///<Mode Register
        using Addr = Register::Address<0x40000004,0xffff8000,0,unsigned>;
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Power Saving Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pwsdiv{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rdproof{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrproof{}; 
        ///Force Byte Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbyte{}; 
        ///Padding Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> padv{}; 
    }
    namespace HsmciDtor{    ///<Data Timeout Register
        using Addr = Register::Address<0x40000008,0xffffff80,0,unsigned>;
        ///Data Timeout Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dtocyc{}; 
        ///Data Timeout Multiplier
        enum class DtomulVal {
            v1=0x00000000,     ///<DTOCYC
            v16=0x00000001,     ///<DTOCYC x 16
            v128=0x00000002,     ///<DTOCYC x 128
            v256=0x00000003,     ///<DTOCYC x 256
            v1024=0x00000004,     ///<DTOCYC x 1024
            v4096=0x00000005,     ///<DTOCYC x 4096
            v65536=0x00000006,     ///<DTOCYC x 65536
            v1048576=0x00000007,     ///<DTOCYC x 1048576
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,DtomulVal> dtomul{}; 
        namespace DtomulValC{
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v1> v1{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v16> v16{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v128> v128{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v256> v256{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v1024> v1024{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v4096> v4096{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v65536> v65536{};
            constexpr Register::FieldValue<decltype(dtomul)::Type,DtomulVal::v1048576> v1048576{};
        }
    }
    namespace HsmciSdcr{    ///<SD/SDIO Card Register
        using Addr = Register::Address<0x4000000c,0xffffff3c,0,unsigned>;
        ///SDCard/SDIO Slot
        enum class SdcselVal {
            slota=0x00000000,     ///<Slot A is selected.
            slotb=0x00000001,     ///<SDCARD/SDIO Slot B selected
            slotc=0x00000002,     ///<-
            slotd=0x00000003,     ///<-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SdcselVal> sdcsel{}; 
        namespace SdcselValC{
            constexpr Register::FieldValue<decltype(sdcsel)::Type,SdcselVal::slota> slota{};
            constexpr Register::FieldValue<decltype(sdcsel)::Type,SdcselVal::slotb> slotb{};
            constexpr Register::FieldValue<decltype(sdcsel)::Type,SdcselVal::slotc> slotc{};
            constexpr Register::FieldValue<decltype(sdcsel)::Type,SdcselVal::slotd> slotd{};
        }
        ///SDCard/SDIO Bus Width
        enum class SdcbusVal {
            v1=0x00000000,     ///<1 bit
            v4=0x00000002,     ///<4 bit
            v8=0x00000003,     ///<8 bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,SdcbusVal> sdcbus{}; 
        namespace SdcbusValC{
            constexpr Register::FieldValue<decltype(sdcbus)::Type,SdcbusVal::v1> v1{};
            constexpr Register::FieldValue<decltype(sdcbus)::Type,SdcbusVal::v4> v4{};
            constexpr Register::FieldValue<decltype(sdcbus)::Type,SdcbusVal::v8> v8{};
        }
    }
    namespace HsmciArgr{    ///<Argument Register
        using Addr = Register::Address<0x40000010,0x00000000,0,unsigned>;
        ///Command Argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arg{}; 
    }
    namespace HsmciCmdr{    ///<Command Register
        using Addr = Register::Address<0x40000014,0xf0c0e000,0,unsigned>;
        ///Command Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdnb{}; 
        ///Response Type
        enum class RsptypVal {
            noresp=0x00000000,     ///<No response.
            v48Bit=0x00000001,     ///<48-bit response.
            v136Bit=0x00000002,     ///<136-bit response.
            r1b=0x00000003,     ///<R1b response type
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,RsptypVal> rsptyp{}; 
        namespace RsptypValC{
            constexpr Register::FieldValue<decltype(rsptyp)::Type,RsptypVal::noresp> noresp{};
            constexpr Register::FieldValue<decltype(rsptyp)::Type,RsptypVal::v48Bit> v48Bit{};
            constexpr Register::FieldValue<decltype(rsptyp)::Type,RsptypVal::v136Bit> v136Bit{};
            constexpr Register::FieldValue<decltype(rsptyp)::Type,RsptypVal::r1b> r1b{};
        }
        ///Special Command
        enum class SpcmdVal {
            std=0x00000000,     ///<Not a special CMD.
            init=0x00000001,     ///<Initialization CMD: 74 clock cycles for initialization sequence.
            sync=0x00000002,     ///<Synchronized CMD: Wait for the end of the current data block transfer before sending the pending command.
            ceAta=0x00000003,     ///<CE-ATA Completion Signal disable Command. The host cancels the ability for the device to return a command completion signal on the command line.
            itCmd=0x00000004,     ///<Interrupt command: Corresponds to the Interrupt Mode (CMD40).
            itResp=0x00000005,     ///<Interrupt response: Corresponds to the Interrupt Mode (CMD40).
            bor=0x00000006,     ///<Boot Operation Request. Start a boot operation mode, the host processor can read boot data from the MMC device directly.
            ebo=0x00000007,     ///<End Boot Operation. This command allows the host processor to terminate the boot operation mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,SpcmdVal> spcmd{}; 
        namespace SpcmdValC{
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::std> std{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::init> init{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::sync> sync{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::ceAta> ceAta{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::itCmd> itCmd{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::itResp> itResp{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::bor> bor{};
            constexpr Register::FieldValue<decltype(spcmd)::Type,SpcmdVal::ebo> ebo{};
        }
        ///Open Drain Command
        enum class OpdcmdVal {
            pushpull=0x00000000,     ///<Push pull command.
            opendrain=0x00000001,     ///<Open drain command.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,OpdcmdVal> opdcmd{}; 
        namespace OpdcmdValC{
            constexpr Register::FieldValue<decltype(opdcmd)::Type,OpdcmdVal::pushpull> pushpull{};
            constexpr Register::FieldValue<decltype(opdcmd)::Type,OpdcmdVal::opendrain> opendrain{};
        }
        ///Max Latency for Command to Response
        enum class MaxlatVal {
            v5=0x00000000,     ///<5-cycle max latency.
            v64=0x00000001,     ///<64-cycle max latency.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,MaxlatVal> maxlat{}; 
        namespace MaxlatValC{
            constexpr Register::FieldValue<decltype(maxlat)::Type,MaxlatVal::v5> v5{};
            constexpr Register::FieldValue<decltype(maxlat)::Type,MaxlatVal::v64> v64{};
        }
        ///Transfer Command
        enum class TrcmdVal {
            noData=0x00000000,     ///<No data transfer
            startData=0x00000001,     ///<Start data transfer
            stopData=0x00000002,     ///<Stop data transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,TrcmdVal> trcmd{}; 
        namespace TrcmdValC{
            constexpr Register::FieldValue<decltype(trcmd)::Type,TrcmdVal::noData> noData{};
            constexpr Register::FieldValue<decltype(trcmd)::Type,TrcmdVal::startData> startData{};
            constexpr Register::FieldValue<decltype(trcmd)::Type,TrcmdVal::stopData> stopData{};
        }
        ///Transfer Direction
        enum class TrdirVal {
            write=0x00000000,     ///<Write.
            read=0x00000001,     ///<Read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TrdirVal> trdir{}; 
        namespace TrdirValC{
            constexpr Register::FieldValue<decltype(trdir)::Type,TrdirVal::write> write{};
            constexpr Register::FieldValue<decltype(trdir)::Type,TrdirVal::read> read{};
        }
        ///Transfer Type
        enum class TrtypVal {
            single=0x00000000,     ///<MMC/SDCard Single Block
            multiple=0x00000001,     ///<MMC/SDCard Multiple Block
            stream=0x00000002,     ///<MMC Stream
            byte=0x00000004,     ///<SDIO Byte
            block=0x00000005,     ///<SDIO Block
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,TrtypVal> trtyp{}; 
        namespace TrtypValC{
            constexpr Register::FieldValue<decltype(trtyp)::Type,TrtypVal::single> single{};
            constexpr Register::FieldValue<decltype(trtyp)::Type,TrtypVal::multiple> multiple{};
            constexpr Register::FieldValue<decltype(trtyp)::Type,TrtypVal::stream> stream{};
            constexpr Register::FieldValue<decltype(trtyp)::Type,TrtypVal::byte> byte{};
            constexpr Register::FieldValue<decltype(trtyp)::Type,TrtypVal::block> block{};
        }
        ///SDIO Special Command
        enum class IospcmdVal {
            std=0x00000000,     ///<Not an SDIO Special Command
            suspend=0x00000001,     ///<SDIO Suspend Command
            resume=0x00000002,     ///<SDIO Resume Command
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,IospcmdVal> iospcmd{}; 
        namespace IospcmdValC{
            constexpr Register::FieldValue<decltype(iospcmd)::Type,IospcmdVal::std> std{};
            constexpr Register::FieldValue<decltype(iospcmd)::Type,IospcmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(iospcmd)::Type,IospcmdVal::resume> resume{};
        }
        ///ATA with Command Completion Signal
        enum class AtacsVal {
            normal=0x00000000,     ///<Normal operation mode.
            completion=0x00000001,     ///<This bit indicates that a completion signal is expected within a programmed amount of time (HSMCI_CSTOR).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,AtacsVal> atacs{}; 
        namespace AtacsValC{
            constexpr Register::FieldValue<decltype(atacs)::Type,AtacsVal::normal> normal{};
            constexpr Register::FieldValue<decltype(atacs)::Type,AtacsVal::completion> completion{};
        }
        ///Boot Operation Acknowledge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> bootAck{}; 
    }
    namespace HsmciBlkr{    ///<Block Register
        using Addr = Register::Address<0x40000018,0x00000000,0,unsigned>;
        ///MMC/SDIO Block Count - SDIO Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcnt{}; 
        ///Data Block Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blklen{}; 
    }
    namespace HsmciCstor{    ///<Completion Signal Timeout Register
        using Addr = Register::Address<0x4000001c,0xffffff80,0,unsigned>;
        ///Completion Signal Timeout Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cstocyc{}; 
        ///Completion Signal Timeout Multiplier
        enum class CstomulVal {
            v1=0x00000000,     ///<CSTOCYC x 1
            v16=0x00000001,     ///<CSTOCYC x 16
            v128=0x00000002,     ///<CSTOCYC x 128
            v256=0x00000003,     ///<CSTOCYC x 256
            v1024=0x00000004,     ///<CSTOCYC x 1024
            v4096=0x00000005,     ///<CSTOCYC x 4096
            v65536=0x00000006,     ///<CSTOCYC x 65536
            v1048576=0x00000007,     ///<CSTOCYC x 1048576
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,CstomulVal> cstomul{}; 
        namespace CstomulValC{
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v1> v1{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v16> v16{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v128> v128{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v256> v256{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v1024> v1024{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v4096> v4096{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v65536> v65536{};
            constexpr Register::FieldValue<decltype(cstomul)::Type,CstomulVal::v1048576> v1048576{};
        }
    }
    namespace HsmciRspr0{    ///<Response Register
        using Addr = Register::Address<0x40000020,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace HsmciRspr1{    ///<Response Register
        using Addr = Register::Address<0x40000024,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace HsmciRspr2{    ///<Response Register
        using Addr = Register::Address<0x40000028,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace HsmciRspr3{    ///<Response Register
        using Addr = Register::Address<0x4000002c,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace HsmciRdr{    ///<Receive Data Register
        using Addr = Register::Address<0x40000030,0x00000000,0,unsigned>;
        ///Data to Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40000034,0x00000000,0,unsigned>;
        ///Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciSr{    ///<Status Register
        using Addr = Register::Address<0x40000040,0x0000ccc0,0,unsigned>;
        ///Command Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///HSMCI Not Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqforslota{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdioirqforslotb{}; 
        ///SDIO Read Wait Operation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        ///CE-ATA Completion Signal Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        ///Response Index Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Completion Signal Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        ///DMA Block Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> blkovre{}; 
        ///DMA Transfer done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmadone{}; 
        ///FIFO empty flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        ///Transfer Done flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Boot Operation Acknowledge Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        ///Boot Operation Acknowledge Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        ///Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace HsmciIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40000044,0x0000ccc0,0,unsigned>;
        ///Command Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqforslota{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdioirqforslotb{}; 
        ///SDIO Read Wait Operation Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        ///Completion Signal Received Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        ///Response Index Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Completion Signal Timeout Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        ///DMA Block Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> blkovre{}; 
        ///DMA Transfer completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmadone{}; 
        ///FIFO empty Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Boot Acknowledge Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        ///Boot Acknowledge Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        ///Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Underrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace HsmciIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x40000048,0x0000ccc0,0,unsigned>;
        ///Command Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqforslota{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdioirqforslotb{}; 
        ///SDIO Read Wait Operation Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        ///Completion Signal received interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        ///Response Index Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Completion Signal Time out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        ///DMA Block Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> blkovre{}; 
        ///DMA Transfer completed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmadone{}; 
        ///FIFO empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Boot Acknowledge Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        ///Boot Acknowledge Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        ///Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Underrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace HsmciImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4000004c,0x0000ccc0,0,unsigned>;
        ///Command Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqforslota{}; 
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sdioirqforslotb{}; 
        ///SDIO Read Wait Operation Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        ///Completion Signal Received Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        ///Response Index Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Completion Signal Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        ///DMA Block Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> blkovre{}; 
        ///DMA Transfer Completed Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmadone{}; 
        ///FIFO Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Boot Operation Acknowledge Received Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        ///Boot Operation Acknowledge Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        ///Overrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Underrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace HsmciDma{    ///<DMA Configuration Register
        using Addr = Register::Address<0x40000050,0xffffeeec,0,unsigned>;
        ///DMA Write Buffer Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DMA Channel Read and Write Chunk Size
        enum class ChksizeVal {
            v1=0x00000000,     ///<1 data available
            v4=0x00000001,     ///<4 data available
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ChksizeVal> chksize{}; 
        namespace ChksizeValC{
            constexpr Register::FieldValue<decltype(chksize)::Type,ChksizeVal::v1> v1{};
            constexpr Register::FieldValue<decltype(chksize)::Type,ChksizeVal::v4> v4{};
        }
        ///DMA Hardware Handshaking Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Read Optimization with padding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ropt{}; 
    }
    namespace HsmciCfg{    ///<Configuration Register
        using Addr = Register::Address<0x40000054,0xffffeeee,0,unsigned>;
        ///HSMCI Internal FIFO control mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fifomode{}; 
        ///Flow Error flag reset control mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ferrctrl{}; 
        ///High Speed Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hsmode{}; 
        ///Synchronize on the last block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lsync{}; 
    }
    namespace HsmciWpmr{    ///<Write Protection Mode Register
        using Addr = Register::Address<0x400000e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        ///Write Protection Key password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
    }
    namespace HsmciWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0x400000e8,0xff0000f0,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wpVs{}; 
        ///Write Protection Violation SouRCe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpVsrc{}; 
    }
    namespace HsmciFifo0{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000200,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo1{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000204,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo2{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000208,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo3{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000020c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo4{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000210,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo5{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000214,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo6{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000218,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo7{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000021c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo8{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000220,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo9{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000224,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo10{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000228,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo11{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000022c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo12{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000230,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo13{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000234,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo14{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000238,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo15{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000023c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo16{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000240,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo17{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000244,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo18{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000248,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo19{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000024c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo20{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000250,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo21{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000254,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo22{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000258,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo23{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000025c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo24{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000260,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo25{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000264,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo26{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000268,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo27{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000026c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo28{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000270,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo29{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000274,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo30{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000278,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo31{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000027c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo32{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000280,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo33{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000284,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo34{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000288,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo35{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000028c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo36{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000290,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo37{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000294,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo38{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000298,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo39{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000029c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo40{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo41{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo42{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo43{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo44{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo45{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo46{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo47{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo48{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo49{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo50{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo51{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo52{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo53{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo54{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo55{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo56{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo57{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo58{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo59{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo60{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo61{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo62{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo63{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo64{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000300,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo65{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000304,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo66{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000308,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo67{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000030c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo68{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000310,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo69{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000314,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo70{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000318,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo71{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000031c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo72{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000320,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo73{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000324,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo74{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000328,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo75{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000032c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo76{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000330,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo77{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000334,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo78{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000338,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo79{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000033c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo80{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000340,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo81{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000344,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo82{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000348,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo83{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000034c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo84{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000350,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo85{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000354,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo86{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000358,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo87{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000035c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo88{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000360,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo89{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000364,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo90{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000368,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo91{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000036c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo92{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000370,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo93{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000374,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo94{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000378,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo95{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000037c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo96{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000380,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo97{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000384,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo98{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000388,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo99{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000038c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo100{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000390,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo101{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000394,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo102{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000398,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo103{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000039c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo104{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo105{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo106{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo107{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo108{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo109{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo110{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo111{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo112{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo113{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo114{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo115{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo116{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo117{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo118{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo119{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo120{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo121{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo122{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo123{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo124{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo125{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo126{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo127{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo128{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000400,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo129{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000404,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo130{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000408,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo131{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000040c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo132{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000410,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo133{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000414,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo134{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000418,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo135{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000041c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo136{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000420,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo137{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000424,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo138{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000428,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo139{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000042c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo140{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000430,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo141{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000434,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo142{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000438,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo143{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000043c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo144{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000440,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo145{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000444,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo146{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000448,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo147{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000044c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo148{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000450,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo149{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000454,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo150{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000458,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo151{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000045c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo152{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000460,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo153{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000464,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo154{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000468,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo155{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000046c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo156{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000470,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo157{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000474,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo158{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000478,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo159{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000047c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo160{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000480,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo161{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000484,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo162{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000488,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo163{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000048c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo164{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000490,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo165{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000494,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo166{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000498,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo167{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000049c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo168{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo169{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo170{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo171{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo172{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo173{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo174{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo175{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo176{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo177{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo178{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo179{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo180{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo181{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo182{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo183{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo184{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo185{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo186{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo187{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo188{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo189{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo190{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo191{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo192{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000500,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo193{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000504,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo194{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000508,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo195{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000050c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo196{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000510,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo197{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000514,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo198{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000518,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo199{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000051c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo200{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000520,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo201{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000524,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo202{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000528,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo203{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000052c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo204{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000530,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo205{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000534,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo206{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000538,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo207{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000053c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo208{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000540,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo209{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000544,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo210{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000548,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo211{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000054c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo212{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000550,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo213{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000554,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo214{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000558,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo215{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000055c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo216{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000560,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo217{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000564,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo218{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000568,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo219{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000056c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo220{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000570,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo221{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000574,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo222{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000578,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo223{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000057c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo224{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000580,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo225{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000584,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo226{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000588,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo227{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000058c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo228{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000590,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo229{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000594,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo230{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000598,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo231{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000059c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo232{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo233{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo234{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo235{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo236{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo237{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo238{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo239{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo240{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo241{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo242{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo243{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo244{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo245{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo246{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo247{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo248{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo249{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo250{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo251{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo252{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo253{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo254{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo255{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
