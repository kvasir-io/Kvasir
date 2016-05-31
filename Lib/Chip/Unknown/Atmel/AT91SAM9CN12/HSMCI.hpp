#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//High Speed MultiMedia Card Interface
    namespace HsmciCr{    ///<Control Register
        using Addr = Register::Address<0xf0008000,0xffffff70,0x00000000,unsigned>;
        ///Multi-Media Interface Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mcien{}; 
        ///Multi-Media Interface Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mcidis{}; 
        ///Power Save Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pwsen{}; 
        ///Power Save Mode Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pwsdis{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
    }
    namespace HsmciMr{    ///<Mode Register
        using Addr = Register::Address<0xf0008004,0xfffe8000,0x00000000,unsigned>;
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
    namespace HsmciDtor{    ///<Data Timeout Register
        using Addr = Register::Address<0xf0008008,0xffffff80,0x00000000,unsigned>;
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
        using Addr = Register::Address<0xf000800c,0xffffff3c,0x00000000,unsigned>;
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
    namespace HsmciArgr{    ///<Argument Register
        using Addr = Register::Address<0xf0008010,0x00000000,0x00000000,unsigned>;
        ///Command Argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arg{}; 
    }
    namespace HsmciCmdr{    ///<Command Register
        using Addr = Register::Address<0xf0008014,0xf0c0e000,0x00000000,unsigned>;
        ///Command Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdnb{}; 
        ///Response Type
        enum class RsptypVal {
            noresp=0x00000000,     ///<No response.
            v48Bit=0x00000001,     ///<48-bit response.
            v136Bit=0x00000002,     ///<136-bit response.
            r1b=0x00000003,     ///<R1b response type
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RsptypVal> rsptyp{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SpcmdVal> spcmd{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,OpdcmdVal> opdcmd{}; 
        namespace OpdcmdValC{
            constexpr Register::FieldValue<decltype(opdcmd)::Type,OpdcmdVal::pushpull> pushpull{};
            constexpr Register::FieldValue<decltype(opdcmd)::Type,OpdcmdVal::opendrain> opendrain{};
        }
        ///Max Latency for Command to Response
        enum class MaxlatVal {
            v5=0x00000000,     ///<5-cycle max latency.
            v64=0x00000001,     ///<64-cycle max latency.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,MaxlatVal> maxlat{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TrcmdVal> trcmd{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TrdirVal> trdir{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TrtypVal> trtyp{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IospcmdVal> iospcmd{}; 
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AtacsVal> atacs{}; 
        namespace AtacsValC{
            constexpr Register::FieldValue<decltype(atacs)::Type,AtacsVal::normal> normal{};
            constexpr Register::FieldValue<decltype(atacs)::Type,AtacsVal::completion> completion{};
        }
        ///Boot Operation Acknowledge.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bootAck{}; 
    }
    namespace HsmciBlkr{    ///<Block Register
        using Addr = Register::Address<0xf0008018,0x00000000,0x00000000,unsigned>;
        ///MMC/SDIO Block Count - SDIO Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcnt{}; 
        ///Data Block Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blklen{}; 
    }
    namespace HsmciCstor{    ///<Completion Signal Timeout Register
        using Addr = Register::Address<0xf000801c,0xffffff80,0x00000000,unsigned>;
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
    namespace HsmciRdr{    ///<Receive Data Register
        using Addr = Register::Address<0xf0008030,0x00000000,0x00000000,unsigned>;
        ///Data to Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace HsmciTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0xf0008034,0x00000000,0x00000000,unsigned>;
        ///Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
    }
    namespace HsmciSr{    ///<Status Register
        using Addr = Register::Address<0xf0008040,0x0000cec0,0x00000000,unsigned>;
        ///Command Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdrdy{}; 
        ///Receiver Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Data Block Ended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blke{}; 
        ///Data Transfer in Progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtip{}; 
        ///HSMCI Not Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notbusy{}; 
        ///SDIO Interrupt for Slot A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdiowait{}; 
        ///CE-ATA Completion Signal Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csrcv{}; 
        ///Response Index Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rinde{}; 
        ///Response Direction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdire{}; 
        ///Response CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcrce{}; 
        ///Response End Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rende{}; 
        ///Response Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtoe{}; 
        ///Data CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dcrce{}; 
        ///Data Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Completion Signal Time-out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cstoe{}; 
        ///DMA Block Overrun Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blkovre{}; 
        ///DMA Transfer done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmadone{}; 
        ///FIFO empty flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoempty{}; 
        ///Transfer Done flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Boot Operation Acknowledge Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcv{}; 
        ///Boot Operation Acknowledge Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcve{}; 
        ///Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
    }
    namespace HsmciIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf0008044,0x0000cec0,0x00000000,unsigned>;
        ///Command Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notbusy{}; 
        ///SDIO Interrupt for Slot A Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdiowait{}; 
        ///Completion Signal Received Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csrcv{}; 
        ///Response Index Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Completion Signal Timeout Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cstoe{}; 
        ///DMA Block Overrun Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blkovre{}; 
        ///DMA Transfer completed Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmadone{}; 
        ///FIFO empty Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Boot Acknowledge Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcv{}; 
        ///Boot Acknowledge Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcve{}; 
        ///Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Underrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
    }
    namespace HsmciIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf0008048,0x0000cec0,0x00000000,unsigned>;
        ///Command Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notbusy{}; 
        ///SDIO Interrupt for Slot A Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdiowait{}; 
        ///Completion Signal received interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csrcv{}; 
        ///Response Index Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Completion Signal Time out Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cstoe{}; 
        ///DMA Block Overrun Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blkovre{}; 
        ///DMA Transfer completed Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmadone{}; 
        ///FIFO empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Boot Acknowledge Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcv{}; 
        ///Boot Acknowledge Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcve{}; 
        ///Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Underrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
    }
    namespace HsmciImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf000804c,0x0000cec0,0x00000000,unsigned>;
        ///Command Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> notbusy{}; 
        ///SDIO Interrupt for Slot A Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdiowait{}; 
        ///Completion Signal Received Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> csrcv{}; 
        ///Response Index Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dtoe{}; 
        ///Completion Signal Time-out Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cstoe{}; 
        ///DMA Block Overrun Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> blkovre{}; 
        ///DMA Transfer Completed Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmadone{}; 
        ///FIFO Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> xfrdone{}; 
        ///Boot Operation Acknowledge Received Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcv{}; 
        ///Boot Operation Acknowledge Error Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ackrcve{}; 
        ///Overrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovre{}; 
        ///Underrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> unre{}; 
    }
    namespace HsmciDma{    ///<DMA Configuration Register
        using Addr = Register::Address<0xf0008050,0xffffee8c,0x00000000,unsigned>;
        ///DMA Write Buffer Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> offset{}; 
        ///DMA Channel Read and Write Chunk Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> chksize{}; 
        ///DMA Hardware Handshaking Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///Read Optimization with padding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ropt{}; 
    }
    namespace HsmciCfg{    ///<Configuration Register
        using Addr = Register::Address<0xf0008054,0xffffeeee,0x00000000,unsigned>;
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
        using Addr = Register::Address<0xf00080e4,0x000000fe,0x00000000,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        ///Write Protection Key password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
    }
    namespace HsmciWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0xf00080e8,0xff0000f0,0x00000000,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpVs{}; 
        ///Write Protection Violation SouRCe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpVsrc{}; 
    }
    namespace HsmciRspr0{    ///<Response Register
        using Addr = Register::Address<0xf0008020,0x00000000,0x00000000,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsp{}; 
    }
    namespace HsmciRspr1{    ///<Response Register
        using Addr = Register::Address<0xf0008024,0x00000000,0x00000000,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsp{}; 
    }
    namespace HsmciRspr2{    ///<Response Register
        using Addr = Register::Address<0xf0008028,0x00000000,0x00000000,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsp{}; 
    }
    namespace HsmciRspr3{    ///<Response Register
        using Addr = Register::Address<0xf000802c,0x00000000,0x00000000,unsigned>;
        ///Response
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsp{}; 
    }
    namespace HsmciFifo0{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008200,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo1{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008204,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo2{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008208,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo3{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000820c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo4{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008210,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo5{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008214,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo6{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008218,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo7{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000821c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo8{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008220,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo9{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008224,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo10{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008228,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo11{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000822c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo12{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008230,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo13{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008234,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo14{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008238,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo15{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000823c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo16{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008240,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo17{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008244,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo18{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008248,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo19{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000824c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo20{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008250,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo21{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008254,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo22{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008258,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo23{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000825c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo24{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008260,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo25{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008264,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo26{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008268,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo27{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000826c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo28{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008270,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo29{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008274,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo30{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008278,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo31{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000827c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo32{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008280,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo33{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008284,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo34{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008288,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo35{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000828c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo36{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008290,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo37{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008294,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo38{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008298,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo39{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000829c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo40{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082a0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo41{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082a4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo42{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082a8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo43{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082ac,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo44{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082b0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo45{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082b4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo46{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082b8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo47{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082bc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo48{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082c0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo49{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082c4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo50{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082c8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo51{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082cc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo52{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082d0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo53{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082d4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo54{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082d8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo55{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082dc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo56{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082e0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo57{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082e4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo58{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082e8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo59{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082ec,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo60{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082f0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo61{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082f4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo62{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082f8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo63{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00082fc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo64{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008300,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo65{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008304,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo66{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008308,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo67{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000830c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo68{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008310,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo69{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008314,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo70{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008318,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo71{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000831c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo72{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008320,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo73{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008324,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo74{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008328,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo75{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000832c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo76{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008330,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo77{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008334,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo78{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008338,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo79{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000833c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo80{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008340,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo81{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008344,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo82{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008348,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo83{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000834c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo84{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008350,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo85{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008354,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo86{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008358,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo87{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000835c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo88{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008360,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo89{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008364,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo90{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008368,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo91{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000836c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo92{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008370,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo93{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008374,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo94{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008378,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo95{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000837c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo96{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008380,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo97{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008384,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo98{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008388,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo99{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000838c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo100{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008390,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo101{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008394,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo102{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008398,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo103{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000839c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo104{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083a0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo105{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083a4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo106{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083a8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo107{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083ac,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo108{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083b0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo109{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083b4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo110{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083b8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo111{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083bc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo112{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083c0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo113{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083c4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo114{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083c8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo115{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083cc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo116{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083d0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo117{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083d4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo118{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083d8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo119{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083dc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo120{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083e0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo121{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083e4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo122{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083e8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo123{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083ec,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo124{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083f0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo125{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083f4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo126{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083f8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo127{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00083fc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo128{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008400,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo129{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008404,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo130{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008408,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo131{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000840c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo132{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008410,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo133{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008414,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo134{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008418,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo135{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000841c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo136{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008420,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo137{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008424,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo138{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008428,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo139{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000842c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo140{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008430,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo141{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008434,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo142{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008438,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo143{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000843c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo144{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008440,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo145{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008444,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo146{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008448,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo147{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000844c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo148{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008450,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo149{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008454,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo150{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008458,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo151{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000845c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo152{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008460,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo153{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008464,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo154{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008468,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo155{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000846c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo156{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008470,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo157{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008474,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo158{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008478,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo159{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000847c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo160{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008480,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo161{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008484,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo162{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008488,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo163{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000848c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo164{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008490,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo165{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008494,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo166{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008498,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo167{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000849c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo168{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084a0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo169{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084a4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo170{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084a8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo171{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084ac,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo172{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084b0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo173{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084b4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo174{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084b8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo175{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084bc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo176{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084c0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo177{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084c4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo178{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084c8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo179{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084cc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo180{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084d0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo181{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084d4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo182{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084d8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo183{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084dc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo184{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084e0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo185{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084e4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo186{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084e8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo187{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084ec,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo188{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084f0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo189{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084f4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo190{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084f8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo191{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00084fc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo192{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008500,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo193{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008504,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo194{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008508,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo195{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000850c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo196{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008510,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo197{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008514,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo198{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008518,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo199{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000851c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo200{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008520,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo201{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008524,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo202{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008528,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo203{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000852c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo204{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008530,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo205{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008534,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo206{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008538,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo207{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000853c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo208{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008540,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo209{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008544,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo210{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008548,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo211{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000854c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo212{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008550,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo213{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008554,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo214{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008558,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo215{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000855c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo216{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008560,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo217{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008564,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo218{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008568,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo219{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000856c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo220{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008570,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo221{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008574,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo222{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008578,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo223{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000857c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo224{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008580,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo225{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008584,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo226{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008588,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo227{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000858c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo228{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008590,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo229{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008594,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo230{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf0008598,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo231{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf000859c,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo232{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085a0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo233{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085a4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo234{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085a8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo235{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085ac,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo236{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085b0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo237{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085b4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo238{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085b8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo239{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085bc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo240{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085c0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo241{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085c4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo242{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085c8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo243{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085cc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo244{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085d0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo245{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085d4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo246{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085d8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo247{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085dc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo248{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085e0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo249{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085e4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo250{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085e8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo251{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085ec,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo252{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085f0,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo253{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085f4,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo254{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085f8,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciFifo255{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0xf00085fc,0x00000000,0x00000000,unsigned>;
        ///Data to Read or Data to Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
}
