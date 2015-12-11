#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High Speed MultiMedia Card Interface 1
    namespace Hsmci1Cr{    ///<Control Register
        using Addr = Register::Address<0xf000c000,0xffffff70,0,unsigned>;
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
    namespace Hsmci1Mr{    ///<Mode Register
        using Addr = Register::Address<0xf000c004,0xfffe8000,0,unsigned>;
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Power Saving Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pwsdiv{}; 
        ///Read Proof Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rdproof{}; 
        ///Write Proof Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrproof{}; 
        ///Force Byte Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbyte{}; 
        ///Padding Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> padv{}; 
        ///Clock divider is odd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clkodd{}; 
    }
    namespace Hsmci1Dtor{    ///<Data Timeout Register
        using Addr = Register::Address<0xf000c008,0xffffff80,0,unsigned>;
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
    namespace Hsmci1Sdcr{    ///<SD/SDIO Card Register
        using Addr = Register::Address<0xf000c00c,0xffffff3c,0,unsigned>;
        ///SDCard/SDIO Slot
        enum class SdcselVal {
            slota=0x00000000,     ///<Slot A is selected.
            slotb=0x00000001,     ///<-
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
    namespace Hsmci1Argr{    ///<Argument Register
        using Addr = Register::Address<0xf000c010,0x00000000,0,unsigned>;
        ///Command Argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arg{}; 
    }
    namespace Hsmci1Cmdr{    ///<Command Register
        using Addr = Register::Address<0xf000c014,0xf0c0e000,0,unsigned>;
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
            single=0x00000000,     ///<MMC/SD Card Single Block
            multiple=0x00000001,     ///<MMC/SD Card Multiple Block
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
    namespace Hsmci1Blkr{    ///<Block Register
        using Addr = Register::Address<0xf000c018,0x00000000,0,unsigned>;
        ///MMC/SDIO Block Count - SDIO Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcnt{}; 
        ///Data Block Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blklen{}; 
    }
    namespace Hsmci1Cstor{    ///<Completion Signal Timeout Register
        using Addr = Register::Address<0xf000c01c,0xffffff80,0,unsigned>;
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
    namespace Hsmci1Rspr0{    ///<Response Register
        using Addr = Register::Address<0xf000c020,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace Hsmci1Rspr1{    ///<Response Register
        using Addr = Register::Address<0xf000c024,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace Hsmci1Rspr2{    ///<Response Register
        using Addr = Register::Address<0xf000c028,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace Hsmci1Rspr3{    ///<Response Register
        using Addr = Register::Address<0xf000c02c,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace Hsmci1Rdr{    ///<Receive Data Register
        using Addr = Register::Address<0xf000c030,0x00000000,0,unsigned>;
        ///Data to Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Tdr{    ///<Transmit Data Register
        using Addr = Register::Address<0xf000c034,0x00000000,0,unsigned>;
        ///Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Sr{    ///<Status Register
        using Addr = Register::Address<0xf000c040,0x0000cec0,0,unsigned>;
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
        ///SDIO Interrupt for Slot A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
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
    namespace Hsmci1Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf000c044,0x0000cec0,0,unsigned>;
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
        ///SDIO Interrupt for Slot A Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
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
    namespace Hsmci1Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf000c048,0x0000cec0,0,unsigned>;
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
        ///SDIO Interrupt for Slot A Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
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
    namespace Hsmci1Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf000c04c,0x0000cec0,0,unsigned>;
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
        ///SDIO Interrupt for Slot A Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
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
    namespace Hsmci1Dma{    ///<DMA Configuration Register
        using Addr = Register::Address<0xf000c050,0xffffeecc,0,unsigned>;
        ///DMA Write Buffer Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DMA Channel Read and Write Chunk Size
        enum class ChksizeVal {
            v1=0x00000000,     ///<1 data available
            v4=0x00000001,     ///<4 data available
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,ChksizeVal> chksize{}; 
        namespace ChksizeValC{
            constexpr Register::FieldValue<decltype(chksize)::Type,ChksizeVal::v1> v1{};
            constexpr Register::FieldValue<decltype(chksize)::Type,ChksizeVal::v4> v4{};
        }
        ///DMA Hardware Handshaking Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Read Optimization with padding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ropt{}; 
    }
    namespace Hsmci1Cfg{    ///<Configuration Register
        using Addr = Register::Address<0xf000c054,0xffffeeee,0,unsigned>;
        ///HSMCI Internal FIFO control mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fifomode{}; 
        ///Flow Error flag reset control mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ferrctrl{}; 
        ///High Speed Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hsmode{}; 
        ///Synchronize on the last block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lsync{}; 
    }
    namespace Hsmci1Wpmr{    ///<Write Protection Mode Register
        using Addr = Register::Address<0xf000c0e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        ///Write Protection Key password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
    }
    namespace Hsmci1Wpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0xf000c0e8,0xff0000f0,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wpVs{}; 
        ///Write Protection Violation SouRCe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpVsrc{}; 
    }
    namespace Hsmci1Fifo0{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c200,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo1{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c204,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo2{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c208,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo3{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c20c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo4{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c210,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo5{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c214,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo6{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c218,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo7{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c21c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo8{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c220,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo9{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c224,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo10{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c228,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo11{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c22c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo12{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c230,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo13{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c234,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo14{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c238,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo15{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c23c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo16{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c240,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo17{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c244,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo18{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c248,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo19{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c24c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo20{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c250,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo21{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c254,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo22{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c258,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo23{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c25c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo24{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c260,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo25{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c264,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo26{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c268,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo27{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c26c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo28{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c270,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo29{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c274,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo30{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c278,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo31{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c27c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo32{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c280,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo33{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c284,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo34{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c288,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo35{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c28c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo36{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c290,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo37{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c294,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo38{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c298,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo39{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c29c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo40{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo41{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo42{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo43{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo44{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo45{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo46{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo47{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo48{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo49{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo50{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo51{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo52{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo53{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo54{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo55{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo56{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo57{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo58{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo59{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo60{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo61{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo62{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo63{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c2fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo64{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c300,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo65{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c304,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo66{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c308,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo67{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c30c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo68{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c310,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo69{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c314,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo70{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c318,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo71{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c31c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo72{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c320,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo73{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c324,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo74{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c328,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo75{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c32c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo76{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c330,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo77{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c334,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo78{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c338,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo79{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c33c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo80{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c340,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo81{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c344,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo82{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c348,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo83{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c34c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo84{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c350,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo85{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c354,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo86{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c358,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo87{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c35c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo88{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c360,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo89{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c364,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo90{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c368,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo91{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c36c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo92{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c370,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo93{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c374,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo94{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c378,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo95{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c37c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo96{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c380,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo97{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c384,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo98{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c388,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo99{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c38c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo100{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c390,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo101{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c394,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo102{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c398,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo103{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c39c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo104{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo105{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo106{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo107{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo108{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo109{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo110{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo111{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo112{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo113{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo114{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo115{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo116{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo117{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo118{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo119{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo120{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo121{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo122{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo123{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo124{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo125{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo126{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo127{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c3fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo128{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c400,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo129{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c404,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo130{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c408,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo131{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c40c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo132{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c410,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo133{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c414,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo134{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c418,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo135{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c41c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo136{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c420,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo137{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c424,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo138{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c428,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo139{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c42c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo140{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c430,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo141{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c434,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo142{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c438,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo143{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c43c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo144{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c440,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo145{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c444,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo146{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c448,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo147{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c44c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo148{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c450,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo149{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c454,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo150{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c458,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo151{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c45c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo152{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c460,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo153{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c464,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo154{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c468,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo155{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c46c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo156{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c470,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo157{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c474,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo158{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c478,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo159{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c47c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo160{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c480,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo161{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c484,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo162{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c488,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo163{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c48c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo164{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c490,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo165{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c494,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo166{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c498,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo167{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c49c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo168{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo169{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo170{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo171{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo172{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo173{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo174{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo175{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo176{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo177{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo178{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo179{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo180{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo181{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo182{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo183{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo184{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo185{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo186{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo187{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo188{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo189{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo190{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo191{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c4fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo192{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c500,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo193{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c504,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo194{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c508,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo195{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c50c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo196{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c510,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo197{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c514,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo198{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c518,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo199{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c51c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo200{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c520,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo201{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c524,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo202{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c528,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo203{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c52c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo204{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c530,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo205{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c534,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo206{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c538,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo207{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c53c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo208{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c540,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo209{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c544,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo210{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c548,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo211{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c54c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo212{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c550,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo213{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c554,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo214{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c558,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo215{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c55c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo216{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c560,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo217{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c564,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo218{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c568,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo219{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c56c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo220{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c570,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo221{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c574,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo222{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c578,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo223{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c57c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo224{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c580,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo225{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c584,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo226{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c588,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo227{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c58c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo228{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c590,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo229{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c594,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo230{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c598,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo231{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c59c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo232{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo233{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo234{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo235{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo236{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo237{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo238{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo239{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo240{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo241{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo242{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo243{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo244{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo245{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo246{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo247{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo248{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo249{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo250{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo251{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo252{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo253{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo254{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Hsmci1Fifo255{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000c5fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
