#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High Speed MultiMedia Card Interface 0
    namespace Hsmci0Cr{    ///<Control Register
        using Addr = Register::Address<0xf0000000,0xffffff70,0,unsigned>;
        ///Multi-Media Interface Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcien{}; 
        namespace McienValC{
        }
        ///Multi-Media Interface Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcidis{}; 
        namespace McidisValC{
        }
        ///Power Save Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pwsen{}; 
        namespace PwsenValC{
        }
        ///Power Save Mode Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwsdis{}; 
        namespace PwsdisValC{
        }
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
    }
    namespace Hsmci0Mr{    ///<Mode Register
        using Addr = Register::Address<0xf0000004,0xfffe8000,0,unsigned>;
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
        ///Power Saving Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pwsdiv{}; 
        namespace PwsdivValC{
        }
        ///Read Proof Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rdproof{}; 
        namespace RdproofValC{
        }
        ///Write Proof Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrproof{}; 
        namespace WrproofValC{
        }
        ///Force Byte Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbyte{}; 
        namespace FbyteValC{
        }
        ///Padding Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> padv{}; 
        namespace PadvValC{
        }
        ///Clock divider is odd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> clkodd{}; 
        namespace ClkoddValC{
        }
    }
    namespace Hsmci0Dtor{    ///<Data Timeout Register
        using Addr = Register::Address<0xf0000008,0xffffff80,0,unsigned>;
        ///Data Timeout Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dtocyc{}; 
        namespace DtocycValC{
        }
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
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::v1> v1{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::v16> v16{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::v128> v128{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::v256> v256{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::v1024> v1024{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::v4096> v4096{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::v65536> v65536{};
            constexpr Register::FieldValue<decltype(dtomul),DtomulVal::v1048576> v1048576{};
        }
    }
    namespace Hsmci0Sdcr{    ///<SD/SDIO Card Register
        using Addr = Register::Address<0xf000000c,0xffffff3c,0,unsigned>;
        ///SDCard/SDIO Slot
        enum class SdcselVal {
            slota=0x00000000,     ///<Slot A is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SdcselVal> sdcsel{}; 
        namespace SdcselValC{
            constexpr Register::FieldValue<decltype(sdcsel),SdcselVal::slota> slota{};
        }
        ///SDCard/SDIO Bus Width
        enum class SdcbusVal {
            v1=0x00000000,     ///<1 bit
            v4=0x00000002,     ///<4 bit
            v8=0x00000003,     ///<8 bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,SdcbusVal> sdcbus{}; 
        namespace SdcbusValC{
            constexpr Register::FieldValue<decltype(sdcbus),SdcbusVal::v1> v1{};
            constexpr Register::FieldValue<decltype(sdcbus),SdcbusVal::v4> v4{};
            constexpr Register::FieldValue<decltype(sdcbus),SdcbusVal::v8> v8{};
        }
    }
    namespace Hsmci0Argr{    ///<Argument Register
        using Addr = Register::Address<0xf0000010,0x00000000,0,unsigned>;
        ///Command Argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arg{}; 
        namespace ArgValC{
        }
    }
    namespace Hsmci0Cmdr{    ///<Command Register
        using Addr = Register::Address<0xf0000014,0xf0c0e000,0,unsigned>;
        ///Command Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdnb{}; 
        namespace CmdnbValC{
        }
        ///Response Type
        enum class RsptypVal {
            noresp=0x00000000,     ///<No response.
            v48Bit=0x00000001,     ///<48-bit response.
            v136Bit=0x00000002,     ///<136-bit response.
            r1b=0x00000003,     ///<R1b response type
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,RsptypVal> rsptyp{}; 
        namespace RsptypValC{
            constexpr Register::FieldValue<decltype(rsptyp),RsptypVal::noresp> noresp{};
            constexpr Register::FieldValue<decltype(rsptyp),RsptypVal::v48Bit> v48Bit{};
            constexpr Register::FieldValue<decltype(rsptyp),RsptypVal::v136Bit> v136Bit{};
            constexpr Register::FieldValue<decltype(rsptyp),RsptypVal::r1b> r1b{};
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
            constexpr Register::FieldValue<decltype(spcmd),SpcmdVal::std> std{};
            constexpr Register::FieldValue<decltype(spcmd),SpcmdVal::init> init{};
            constexpr Register::FieldValue<decltype(spcmd),SpcmdVal::sync> sync{};
            constexpr Register::FieldValue<decltype(spcmd),SpcmdVal::ceAta> ceAta{};
            constexpr Register::FieldValue<decltype(spcmd),SpcmdVal::itCmd> itCmd{};
            constexpr Register::FieldValue<decltype(spcmd),SpcmdVal::itResp> itResp{};
            constexpr Register::FieldValue<decltype(spcmd),SpcmdVal::bor> bor{};
            constexpr Register::FieldValue<decltype(spcmd),SpcmdVal::ebo> ebo{};
        }
        ///Open Drain Command
        enum class OpdcmdVal {
            pushpull=0x00000000,     ///<Push pull command.
            opendrain=0x00000001,     ///<Open drain command.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,OpdcmdVal> opdcmd{}; 
        namespace OpdcmdValC{
            constexpr Register::FieldValue<decltype(opdcmd),OpdcmdVal::pushpull> pushpull{};
            constexpr Register::FieldValue<decltype(opdcmd),OpdcmdVal::opendrain> opendrain{};
        }
        ///Max Latency for Command to Response
        enum class MaxlatVal {
            v5=0x00000000,     ///<5-cycle max latency.
            v64=0x00000001,     ///<64-cycle max latency.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,MaxlatVal> maxlat{}; 
        namespace MaxlatValC{
            constexpr Register::FieldValue<decltype(maxlat),MaxlatVal::v5> v5{};
            constexpr Register::FieldValue<decltype(maxlat),MaxlatVal::v64> v64{};
        }
        ///Transfer Command
        enum class TrcmdVal {
            noData=0x00000000,     ///<No data transfer
            startData=0x00000001,     ///<Start data transfer
            stopData=0x00000002,     ///<Stop data transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,TrcmdVal> trcmd{}; 
        namespace TrcmdValC{
            constexpr Register::FieldValue<decltype(trcmd),TrcmdVal::noData> noData{};
            constexpr Register::FieldValue<decltype(trcmd),TrcmdVal::startData> startData{};
            constexpr Register::FieldValue<decltype(trcmd),TrcmdVal::stopData> stopData{};
        }
        ///Transfer Direction
        enum class TrdirVal {
            write=0x00000000,     ///<Write.
            read=0x00000001,     ///<Read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,TrdirVal> trdir{}; 
        namespace TrdirValC{
            constexpr Register::FieldValue<decltype(trdir),TrdirVal::write> write{};
            constexpr Register::FieldValue<decltype(trdir),TrdirVal::read> read{};
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
            constexpr Register::FieldValue<decltype(trtyp),TrtypVal::single> single{};
            constexpr Register::FieldValue<decltype(trtyp),TrtypVal::multiple> multiple{};
            constexpr Register::FieldValue<decltype(trtyp),TrtypVal::stream> stream{};
            constexpr Register::FieldValue<decltype(trtyp),TrtypVal::byte> byte{};
            constexpr Register::FieldValue<decltype(trtyp),TrtypVal::block> block{};
        }
        ///SDIO Special Command
        enum class IospcmdVal {
            std=0x00000000,     ///<Not an SDIO Special Command
            suspend=0x00000001,     ///<SDIO Suspend Command
            resume=0x00000002,     ///<SDIO Resume Command
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,IospcmdVal> iospcmd{}; 
        namespace IospcmdValC{
            constexpr Register::FieldValue<decltype(iospcmd),IospcmdVal::std> std{};
            constexpr Register::FieldValue<decltype(iospcmd),IospcmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(iospcmd),IospcmdVal::resume> resume{};
        }
        ///ATA with Command Completion Signal
        enum class AtacsVal {
            normal=0x00000000,     ///<Normal operation mode.
            completion=0x00000001,     ///<This bit indicates that a completion signal is expected within a programmed amount of time (HSMCI_CSTOR).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,AtacsVal> atacs{}; 
        namespace AtacsValC{
            constexpr Register::FieldValue<decltype(atacs),AtacsVal::normal> normal{};
            constexpr Register::FieldValue<decltype(atacs),AtacsVal::completion> completion{};
        }
        ///Boot Operation Acknowledge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> bootAck{}; 
        namespace BootackValC{
        }
    }
    namespace Hsmci0Blkr{    ///<Block Register
        using Addr = Register::Address<0xf0000018,0x00000000,0,unsigned>;
        ///MMC/SDIO Block Count - SDIO Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcnt{}; 
        namespace BcntValC{
        }
        ///Data Block Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
    }
    namespace Hsmci0Cstor{    ///<Completion Signal Timeout Register
        using Addr = Register::Address<0xf000001c,0xffffff80,0,unsigned>;
        ///Completion Signal Timeout Cycle Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cstocyc{}; 
        namespace CstocycValC{
        }
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
            constexpr Register::FieldValue<decltype(cstomul),CstomulVal::v1> v1{};
            constexpr Register::FieldValue<decltype(cstomul),CstomulVal::v16> v16{};
            constexpr Register::FieldValue<decltype(cstomul),CstomulVal::v128> v128{};
            constexpr Register::FieldValue<decltype(cstomul),CstomulVal::v256> v256{};
            constexpr Register::FieldValue<decltype(cstomul),CstomulVal::v1024> v1024{};
            constexpr Register::FieldValue<decltype(cstomul),CstomulVal::v4096> v4096{};
            constexpr Register::FieldValue<decltype(cstomul),CstomulVal::v65536> v65536{};
            constexpr Register::FieldValue<decltype(cstomul),CstomulVal::v1048576> v1048576{};
        }
    }
    namespace Hsmci0Rspr0{    ///<Response Register
        using Addr = Register::Address<0xf0000020,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
        namespace RspValC{
        }
    }
    namespace Hsmci0Rspr1{    ///<Response Register
        using Addr = Register::Address<0xf0000024,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
        namespace RspValC{
        }
    }
    namespace Hsmci0Rspr2{    ///<Response Register
        using Addr = Register::Address<0xf0000028,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
        namespace RspValC{
        }
    }
    namespace Hsmci0Rspr3{    ///<Response Register
        using Addr = Register::Address<0xf000002c,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
        namespace RspValC{
        }
    }
    namespace Hsmci0Rdr{    ///<Receive Data Register
        using Addr = Register::Address<0xf0000030,0x00000000,0,unsigned>;
        ///Data to Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Tdr{    ///<Transmit Data Register
        using Addr = Register::Address<0xf0000034,0x00000000,0,unsigned>;
        ///Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Sr{    ///<Status Register
        using Addr = Register::Address<0xf0000040,0x0000cec0,0,unsigned>;
        ///Command Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        namespace CmdrdyValC{
        }
        ///Receiver Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmit Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Data Block Ended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        namespace BlkeValC{
        }
        ///Data Transfer in Progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        namespace DtipValC{
        }
        ///HSMCI Not Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        namespace NotbusyValC{
        }
        ///SDIO Interrupt for Slot A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
        namespace SdioirqaValC{
        }
        ///SDIO Read Wait Operation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        namespace SdiowaitValC{
        }
        ///CE-ATA Completion Signal Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        namespace CsrcvValC{
        }
        ///Response Index Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        namespace RindeValC{
        }
        ///Response Direction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        namespace RdireValC{
        }
        ///Response CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        namespace RcrceValC{
        }
        ///Response End Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        namespace RendeValC{
        }
        ///Response Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        namespace RtoeValC{
        }
        ///Data CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        namespace DcrceValC{
        }
        ///Data Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        namespace DtoeValC{
        }
        ///Completion Signal Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        namespace CstoeValC{
        }
        ///DMA Block Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> blkovre{}; 
        namespace BlkovreValC{
        }
        ///DMA Transfer done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmadone{}; 
        namespace DmadoneValC{
        }
        ///FIFO empty flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        namespace FifoemptyValC{
        }
        ///Transfer Done flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        namespace XfrdoneValC{
        }
        ///Boot Operation Acknowledge Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        namespace AckrcvValC{
        }
        ///Boot Operation Acknowledge Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        namespace AckrcveValC{
        }
        ///Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
    }
    namespace Hsmci0Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf0000044,0x0000cec0,0,unsigned>;
        ///Command Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        namespace CmdrdyValC{
        }
        ///Receiver Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Data Block Ended Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        namespace BlkeValC{
        }
        ///Data Transfer in Progress Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        namespace DtipValC{
        }
        ///Data Not Busy Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        namespace NotbusyValC{
        }
        ///SDIO Interrupt for Slot A Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
        namespace SdioirqaValC{
        }
        ///SDIO Read Wait Operation Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        namespace SdiowaitValC{
        }
        ///Completion Signal Received Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        namespace CsrcvValC{
        }
        ///Response Index Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        namespace RindeValC{
        }
        ///Response Direction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        namespace RdireValC{
        }
        ///Response CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        namespace RcrceValC{
        }
        ///Response End Bit Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        namespace RendeValC{
        }
        ///Response Time-out Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        namespace RtoeValC{
        }
        ///Data CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        namespace DcrceValC{
        }
        ///Data Time-out Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        namespace DtoeValC{
        }
        ///Completion Signal Timeout Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        namespace CstoeValC{
        }
        ///DMA Block Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> blkovre{}; 
        namespace BlkovreValC{
        }
        ///DMA Transfer completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmadone{}; 
        namespace DmadoneValC{
        }
        ///FIFO empty Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        namespace FifoemptyValC{
        }
        ///Transfer Done Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        namespace XfrdoneValC{
        }
        ///Boot Acknowledge Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        namespace AckrcvValC{
        }
        ///Boot Acknowledge Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        namespace AckrcveValC{
        }
        ///Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Underrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
    }
    namespace Hsmci0Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf0000048,0x0000cec0,0,unsigned>;
        ///Command Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        namespace CmdrdyValC{
        }
        ///Receiver Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmit Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Data Block Ended Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        namespace BlkeValC{
        }
        ///Data Transfer in Progress Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        namespace DtipValC{
        }
        ///Data Not Busy Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        namespace NotbusyValC{
        }
        ///SDIO Interrupt for Slot A Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
        namespace SdioirqaValC{
        }
        ///SDIO Read Wait Operation Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        namespace SdiowaitValC{
        }
        ///Completion Signal received interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        namespace CsrcvValC{
        }
        ///Response Index Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        namespace RindeValC{
        }
        ///Response Direction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        namespace RdireValC{
        }
        ///Response CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        namespace RcrceValC{
        }
        ///Response End Bit Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        namespace RendeValC{
        }
        ///Response Time-out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        namespace RtoeValC{
        }
        ///Data CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        namespace DcrceValC{
        }
        ///Data Time-out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        namespace DtoeValC{
        }
        ///Completion Signal Time out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        namespace CstoeValC{
        }
        ///DMA Block Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> blkovre{}; 
        namespace BlkovreValC{
        }
        ///DMA Transfer completed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmadone{}; 
        namespace DmadoneValC{
        }
        ///FIFO empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        namespace FifoemptyValC{
        }
        ///Transfer Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        namespace XfrdoneValC{
        }
        ///Boot Acknowledge Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        namespace AckrcvValC{
        }
        ///Boot Acknowledge Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        namespace AckrcveValC{
        }
        ///Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Underrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
    }
    namespace Hsmci0Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf000004c,0x0000cec0,0,unsigned>;
        ///Command Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        namespace CmdrdyValC{
        }
        ///Receiver Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Transmit Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Data Block Ended Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        namespace BlkeValC{
        }
        ///Data Transfer in Progress Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        namespace DtipValC{
        }
        ///Data Not Busy Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        namespace NotbusyValC{
        }
        ///SDIO Interrupt for Slot A Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
        namespace SdioirqaValC{
        }
        ///SDIO Read Wait Operation Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        namespace SdiowaitValC{
        }
        ///Completion Signal Received Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        namespace CsrcvValC{
        }
        ///Response Index Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        namespace RindeValC{
        }
        ///Response Direction Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        namespace RdireValC{
        }
        ///Response CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        namespace RcrceValC{
        }
        ///Response End Bit Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        namespace RendeValC{
        }
        ///Response Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        namespace RtoeValC{
        }
        ///Data CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        namespace DcrceValC{
        }
        ///Data Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        namespace DtoeValC{
        }
        ///Completion Signal Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        namespace CstoeValC{
        }
        ///DMA Block Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> blkovre{}; 
        namespace BlkovreValC{
        }
        ///DMA Transfer Completed Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmadone{}; 
        namespace DmadoneValC{
        }
        ///FIFO Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        namespace FifoemptyValC{
        }
        ///Transfer Done Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        namespace XfrdoneValC{
        }
        ///Boot Operation Acknowledge Received Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        namespace AckrcvValC{
        }
        ///Boot Operation Acknowledge Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        namespace AckrcveValC{
        }
        ///Overrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        namespace OvreValC{
        }
        ///Underrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
        namespace UnreValC{
        }
    }
    namespace Hsmci0Dma{    ///<DMA Configuration Register
        using Addr = Register::Address<0xf0000050,0xffffee8c,0,unsigned>;
        ///DMA Write Buffer Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
        ///DMA Channel Read and Write Chunk Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> chksize{}; 
        namespace ChksizeValC{
        }
        ///DMA Hardware Handshaking Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///Read Optimization with padding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ropt{}; 
        namespace RoptValC{
        }
    }
    namespace Hsmci0Cfg{    ///<Configuration Register
        using Addr = Register::Address<0xf0000054,0xffffeeee,0,unsigned>;
        ///HSMCI Internal FIFO control mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fifomode{}; 
        namespace FifomodeValC{
        }
        ///Flow Error flag reset control mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ferrctrl{}; 
        namespace FerrctrlValC{
        }
        ///High Speed Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hsmode{}; 
        namespace HsmodeValC{
        }
        ///Synchronize on the last block
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lsync{}; 
        namespace LsyncValC{
        }
    }
    namespace Hsmci0Wpmr{    ///<Write Protection Mode Register
        using Addr = Register::Address<0xf00000e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        namespace WpenValC{
        }
        ///Write Protection Key password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
        namespace WpkeyValC{
        }
    }
    namespace Hsmci0Wpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0xf00000e8,0xff0000f0,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wpVs{}; 
        namespace WpvsValC{
        }
        ///Write Protection Violation SouRCe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpVsrc{}; 
        namespace WpvsrcValC{
        }
    }
    namespace Hsmci0Fifo0{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000200,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo1{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000204,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo2{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000208,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo3{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000020c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo4{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000210,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo5{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000214,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo6{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000218,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo7{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000021c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo8{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000220,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo9{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000224,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo10{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000228,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo11{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000022c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo12{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000230,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo13{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000234,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo14{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000238,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo15{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000023c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo16{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000240,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo17{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000244,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo18{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000248,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo19{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000024c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo20{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000250,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo21{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000254,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo22{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000258,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo23{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000025c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo24{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000260,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo25{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000264,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo26{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000268,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo27{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000026c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo28{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000270,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo29{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000274,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo30{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000278,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo31{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000027c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo32{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000280,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo33{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000284,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo34{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000288,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo35{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000028c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo36{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000290,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo37{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000294,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo38{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000298,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo39{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000029c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo40{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo41{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo42{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo43{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo44{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo45{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo46{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo47{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo48{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo49{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo50{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo51{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo52{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo53{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo54{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo55{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo56{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo57{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo58{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo59{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo60{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo61{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo62{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo63{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00002fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo64{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000300,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo65{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000304,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo66{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000308,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo67{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000030c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo68{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000310,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo69{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000314,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo70{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000318,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo71{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000031c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo72{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000320,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo73{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000324,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo74{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000328,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo75{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000032c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo76{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000330,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo77{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000334,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo78{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000338,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo79{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000033c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo80{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000340,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo81{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000344,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo82{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000348,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo83{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000034c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo84{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000350,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo85{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000354,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo86{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000358,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo87{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000035c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo88{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000360,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo89{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000364,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo90{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000368,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo91{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000036c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo92{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000370,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo93{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000374,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo94{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000378,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo95{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000037c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo96{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000380,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo97{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000384,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo98{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000388,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo99{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000038c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo100{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000390,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo101{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000394,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo102{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000398,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo103{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000039c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo104{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo105{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo106{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo107{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo108{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo109{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo110{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo111{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo112{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo113{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo114{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo115{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo116{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo117{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo118{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo119{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo120{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo121{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo122{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo123{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo124{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo125{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo126{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo127{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00003fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo128{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000400,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo129{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000404,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo130{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000408,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo131{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000040c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo132{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000410,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo133{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000414,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo134{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000418,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo135{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000041c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo136{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000420,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo137{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000424,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo138{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000428,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo139{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000042c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo140{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000430,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo141{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000434,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo142{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000438,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo143{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000043c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo144{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000440,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo145{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000444,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo146{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000448,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo147{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000044c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo148{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000450,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo149{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000454,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo150{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000458,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo151{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000045c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo152{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000460,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo153{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000464,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo154{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000468,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo155{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000046c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo156{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000470,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo157{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000474,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo158{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000478,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo159{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000047c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo160{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000480,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo161{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000484,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo162{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000488,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo163{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000048c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo164{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000490,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo165{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000494,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo166{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000498,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo167{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000049c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo168{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo169{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo170{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo171{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo172{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo173{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo174{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo175{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo176{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo177{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo178{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo179{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo180{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo181{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo182{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo183{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo184{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo185{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo186{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo187{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo188{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo189{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo190{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo191{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00004fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo192{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000500,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo193{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000504,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo194{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000508,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo195{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000050c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo196{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000510,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo197{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000514,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo198{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000518,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo199{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000051c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo200{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000520,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo201{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000524,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo202{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000528,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo203{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000052c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo204{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000530,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo205{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000534,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo206{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000538,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo207{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000053c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo208{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000540,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo209{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000544,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo210{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000548,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo211{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000054c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo212{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000550,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo213{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000554,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo214{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000558,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo215{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000055c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo216{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000560,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo217{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000564,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo218{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000568,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo219{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000056c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo220{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000570,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo221{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000574,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo222{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000578,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo223{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000057c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo224{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000580,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo225{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000584,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo226{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000588,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo227{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000058c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo228{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000590,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo229{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000594,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo230{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0000598,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo231{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000059c,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo232{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005a0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo233{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005a4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo234{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005a8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo235{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005ac,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo236{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005b0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo237{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005b4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo238{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005b8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo239{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005bc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo240{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005c0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo241{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005c4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo242{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005c8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo243{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005cc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo244{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005d0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo245{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005d4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo246{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005d8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo247{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005dc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo248{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005e0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo249{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005e4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo250{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005e8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo251{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005ec,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo252{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005f0,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo253{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005f4,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo254{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005f8,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
    namespace Hsmci0Fifo255{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00005fc,0x00000000,0,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
    }
}
