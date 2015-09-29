#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High Speed MultiMedia Card Interface
    namespace HsmciCr{    ///<Control Register
        using Addr = Register::Address<0x40000000,0xffffff70,0,unsigned>;
        ///Multi-Media Interface Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcien{}; 
        ///Multi-Media Interface Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcidis{}; 
        ///Power Save Mode Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pwsen{}; 
        ///Power Save Mode Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwsdis{}; 
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace HsmciMr{    ///<Mode Register
        using Addr = Register::Address<0x40000004,0xffff0000,0,unsigned>;
        ///Clock Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Power Saving Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pwsdiv{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rdproof{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrproof{}; 
        ///Force Byte Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fbyte{}; 
        ///Padding Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> padv{}; 
        ///PDC-oriented Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdcmode{}; 
    }
    namespace HsmciDtor{    ///<Data Timeout Register
        using Addr = Register::Address<0x40000008,0xffffff80,0,unsigned>;
        ///Data Timeout Cycle Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dtocyc{}; 
        ///Data Timeout Multiplier
        enum class dtomulVal {
            v1=0x00000000,     ///<DTOCYC
            v16=0x00000001,     ///<DTOCYC x 16
            v128=0x00000002,     ///<DTOCYC x 128
            v256=0x00000003,     ///<DTOCYC x 256
            v1024=0x00000004,     ///<DTOCYC x 1024
            v4096=0x00000005,     ///<DTOCYC x 4096
            v65536=0x00000006,     ///<DTOCYC x 65536
            v1048576=0x00000007,     ///<DTOCYC x 1048576
        };
        namespace dtomulValC{
            constexpr MPL::Value<dtomulVal,dtomulVal::v1> v1{};
            constexpr MPL::Value<dtomulVal,dtomulVal::v16> v16{};
            constexpr MPL::Value<dtomulVal,dtomulVal::v128> v128{};
            constexpr MPL::Value<dtomulVal,dtomulVal::v256> v256{};
            constexpr MPL::Value<dtomulVal,dtomulVal::v1024> v1024{};
            constexpr MPL::Value<dtomulVal,dtomulVal::v4096> v4096{};
            constexpr MPL::Value<dtomulVal,dtomulVal::v65536> v65536{};
            constexpr MPL::Value<dtomulVal,dtomulVal::v1048576> v1048576{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,dtomulVal> dtomul{}; 
    }
    namespace HsmciSdcr{    ///<SD/SDIO Card Register
        using Addr = Register::Address<0x4000000c,0xffffff3c,0,unsigned>;
        ///SDCard/SDIO Slot
        enum class sdcselVal {
            slota=0x00000000,     ///<Slot A is selected.
            slotb=0x00000001,     ///<-
            slotc=0x00000002,     ///<-
            slotd=0x00000003,     ///<-
        };
        namespace sdcselValC{
            constexpr MPL::Value<sdcselVal,sdcselVal::slota> slota{};
            constexpr MPL::Value<sdcselVal,sdcselVal::slotb> slotb{};
            constexpr MPL::Value<sdcselVal,sdcselVal::slotc> slotc{};
            constexpr MPL::Value<sdcselVal,sdcselVal::slotd> slotd{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sdcselVal> sdcsel{}; 
        ///SDCard/SDIO Bus Width
        enum class sdcbusVal {
            v1=0x00000000,     ///<1 bit
            v4=0x00000002,     ///<4 bit
            v8=0x00000003,     ///<8 bit
        };
        namespace sdcbusValC{
            constexpr MPL::Value<sdcbusVal,sdcbusVal::v1> v1{};
            constexpr MPL::Value<sdcbusVal,sdcbusVal::v4> v4{};
            constexpr MPL::Value<sdcbusVal,sdcbusVal::v8> v8{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,sdcbusVal> sdcbus{}; 
    }
    namespace HsmciArgr{    ///<Argument Register
        using Addr = Register::Address<0x40000010,0x00000000,0,unsigned>;
        ///Command Argument
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arg{}; 
    }
    namespace HsmciCmdr{    ///<Command Register
        using Addr = Register::Address<0x40000014,0xf0c0e000,0,unsigned>;
        ///Command Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdnb{}; 
        ///Response Type
        enum class rsptypVal {
            noresp=0x00000000,     ///<No response.
            v48Bit=0x00000001,     ///<48-bit response.
            v136Bit=0x00000002,     ///<136-bit response.
            r1b=0x00000003,     ///<R1b response type
        };
        namespace rsptypValC{
            constexpr MPL::Value<rsptypVal,rsptypVal::noresp> noresp{};
            constexpr MPL::Value<rsptypVal,rsptypVal::v48Bit> v48Bit{};
            constexpr MPL::Value<rsptypVal,rsptypVal::v136Bit> v136Bit{};
            constexpr MPL::Value<rsptypVal,rsptypVal::r1b> r1b{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,rsptypVal> rsptyp{}; 
        ///Special Command
        enum class spcmdVal {
            std=0x00000000,     ///<Not a special CMD.
            init=0x00000001,     ///<Initialization CMD: 74 clock cycles for initialization sequence.
            sync=0x00000002,     ///<Synchronized CMD: Wait for the end of the current data block transfer before sending the pending command.
            ceAta=0x00000003,     ///<CE-ATA Completion Signal disable Command. The host cancels the ability for the device to return a command completion signal on the command line.
            itCmd=0x00000004,     ///<Interrupt command: Corresponds to the Interrupt Mode (CMD40).
            itResp=0x00000005,     ///<Interrupt response: Corresponds to the Interrupt Mode (CMD40).
            bor=0x00000006,     ///<Boot Operation Request. Start a boot operation mode, the host processor can read boot data from the MMC device directly.
            ebo=0x00000007,     ///<End Boot Operation. This command allows the host processor to terminate the boot operation mode.
        };
        namespace spcmdValC{
            constexpr MPL::Value<spcmdVal,spcmdVal::std> std{};
            constexpr MPL::Value<spcmdVal,spcmdVal::init> init{};
            constexpr MPL::Value<spcmdVal,spcmdVal::sync> sync{};
            constexpr MPL::Value<spcmdVal,spcmdVal::ceAta> ceAta{};
            constexpr MPL::Value<spcmdVal,spcmdVal::itCmd> itCmd{};
            constexpr MPL::Value<spcmdVal,spcmdVal::itResp> itResp{};
            constexpr MPL::Value<spcmdVal,spcmdVal::bor> bor{};
            constexpr MPL::Value<spcmdVal,spcmdVal::ebo> ebo{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,spcmdVal> spcmd{}; 
        ///Open Drain Command
        enum class opdcmdVal {
            pushpull=0x00000000,     ///<Push pull command.
            opendrain=0x00000001,     ///<Open drain command.
        };
        namespace opdcmdValC{
            constexpr MPL::Value<opdcmdVal,opdcmdVal::pushpull> pushpull{};
            constexpr MPL::Value<opdcmdVal,opdcmdVal::opendrain> opendrain{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,opdcmdVal> opdcmd{}; 
        ///Max Latency for Command to Response
        enum class maxlatVal {
            v5=0x00000000,     ///<5-cycle max latency.
            v64=0x00000001,     ///<64-cycle max latency.
        };
        namespace maxlatValC{
            constexpr MPL::Value<maxlatVal,maxlatVal::v5> v5{};
            constexpr MPL::Value<maxlatVal,maxlatVal::v64> v64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,maxlatVal> maxlat{}; 
        ///Transfer Command
        enum class trcmdVal {
            noData=0x00000000,     ///<No data transfer
            startData=0x00000001,     ///<Start data transfer
            stopData=0x00000002,     ///<Stop data transfer
        };
        namespace trcmdValC{
            constexpr MPL::Value<trcmdVal,trcmdVal::noData> noData{};
            constexpr MPL::Value<trcmdVal,trcmdVal::startData> startData{};
            constexpr MPL::Value<trcmdVal,trcmdVal::stopData> stopData{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,trcmdVal> trcmd{}; 
        ///Transfer Direction
        enum class trdirVal {
            write=0x00000000,     ///<Write.
            read=0x00000001,     ///<Read.
        };
        namespace trdirValC{
            constexpr MPL::Value<trdirVal,trdirVal::write> write{};
            constexpr MPL::Value<trdirVal,trdirVal::read> read{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,trdirVal> trdir{}; 
        ///Transfer Type
        enum class trtypVal {
            single=0x00000000,     ///<MMC/SDCard Single Block
            multiple=0x00000001,     ///<MMC/SDCard Multiple Block
            stream=0x00000002,     ///<MMC Stream
            byte=0x00000004,     ///<SDIO Byte
            block=0x00000005,     ///<SDIO Block
        };
        namespace trtypValC{
            constexpr MPL::Value<trtypVal,trtypVal::single> single{};
            constexpr MPL::Value<trtypVal,trtypVal::multiple> multiple{};
            constexpr MPL::Value<trtypVal,trtypVal::stream> stream{};
            constexpr MPL::Value<trtypVal,trtypVal::byte> byte{};
            constexpr MPL::Value<trtypVal,trtypVal::block> block{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,trtypVal> trtyp{}; 
        ///SDIO Special Command
        enum class iospcmdVal {
            std=0x00000000,     ///<Not an SDIO Special Command
            suspend=0x00000001,     ///<SDIO Suspend Command
            resume=0x00000002,     ///<SDIO Resume Command
        };
        namespace iospcmdValC{
            constexpr MPL::Value<iospcmdVal,iospcmdVal::std> std{};
            constexpr MPL::Value<iospcmdVal,iospcmdVal::suspend> suspend{};
            constexpr MPL::Value<iospcmdVal,iospcmdVal::resume> resume{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,iospcmdVal> iospcmd{}; 
        ///ATA with Command Completion Signal
        enum class atacsVal {
            normal=0x00000000,     ///<Normal operation mode.
            completion=0x00000001,     ///<This bit indicates that a completion signal is expected within a programmed amount of time (HSMCI_CSTOR).
        };
        namespace atacsValC{
            constexpr MPL::Value<atacsVal,atacsVal::normal> normal{};
            constexpr MPL::Value<atacsVal,atacsVal::completion> completion{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,atacsVal> atacs{}; 
        ///Boot Operation Acknowledge.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> bootAck{}; 
    }
    namespace HsmciBlkr{    ///<Block Register
        using Addr = Register::Address<0x40000018,0x00000000,0,unsigned>;
        ///MMC/SDIO Block Count - SDIO Byte Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcnt{}; 
        ///Data Block Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blklen{}; 
    }
    namespace HsmciCstor{    ///<Completion Signal Timeout Register
        using Addr = Register::Address<0x4000001c,0xffffff80,0,unsigned>;
        ///Completion Signal Timeout Cycle Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cstocyc{}; 
        ///Completion Signal Timeout Multiplier
        enum class cstomulVal {
            v1=0x00000000,     ///<CSTOCYC x 1
            v16=0x00000001,     ///<CSTOCYC x 16
            v128=0x00000002,     ///<CSTOCYC x 128
            v256=0x00000003,     ///<CSTOCYC x 256
            v1024=0x00000004,     ///<CSTOCYC x 1024
            v4096=0x00000005,     ///<CSTOCYC x 4096
            v65536=0x00000006,     ///<CSTOCYC x 65536
            v1048576=0x00000007,     ///<CSTOCYC x 1048576
        };
        namespace cstomulValC{
            constexpr MPL::Value<cstomulVal,cstomulVal::v1> v1{};
            constexpr MPL::Value<cstomulVal,cstomulVal::v16> v16{};
            constexpr MPL::Value<cstomulVal,cstomulVal::v128> v128{};
            constexpr MPL::Value<cstomulVal,cstomulVal::v256> v256{};
            constexpr MPL::Value<cstomulVal,cstomulVal::v1024> v1024{};
            constexpr MPL::Value<cstomulVal,cstomulVal::v4096> v4096{};
            constexpr MPL::Value<cstomulVal,cstomulVal::v65536> v65536{};
            constexpr MPL::Value<cstomulVal,cstomulVal::v1048576> v1048576{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,cstomulVal> cstomul{}; 
    }
    namespace HsmciRspr0{    ///<Response Register
        using Addr = Register::Address<0x40000020,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace HsmciRspr1{    ///<Response Register
        using Addr = Register::Address<0x40000024,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace HsmciRspr2{    ///<Response Register
        using Addr = Register::Address<0x40000028,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace HsmciRspr3{    ///<Response Register
        using Addr = Register::Address<0x4000002c,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace HsmciRdr{    ///<Receive Data Register
        using Addr = Register::Address<0x40000030,0x00000000,0,unsigned>;
        ///Data to Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40000034,0x00000000,0,unsigned>;
        ///Data to Write
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace HsmciSr{    ///<Status Register
        using Addr = Register::Address<0x40000040,0x03000e00,0,unsigned>;
        ///Command Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///HSMCI Not Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///End of RX Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of TX Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///SDIO Interrupt for Slot A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        ///CE-ATA Completion Signal Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        ///RX Buffer Full
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///TX Buffer Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Response Index Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Completion Signal Time-out Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        ///FIFO empty flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        ///Transfer Done flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Boot Operation Acknowledge Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        ///Boot Operation Acknowledge Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        ///Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace HsmciIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40000044,0x03000e00,0,unsigned>;
        ///Command Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///End of Receive Buffer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///SDIO Interrupt for Slot A Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        ///Completion Signal Received Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Response Index Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Completion Signal Timeout Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        ///FIFO empty Interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Boot Acknowledge Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        ///Boot Acknowledge Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        ///Overrun Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Underrun Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace HsmciIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x40000048,0x03000e00,0,unsigned>;
        ///Command Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///End of Receive Buffer Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///SDIO Interrupt for Slot A Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        ///Completion Signal received interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Response Index Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Completion Signal Time out Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        ///FIFO empty Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Boot Acknowledge Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        ///Boot Acknowledge Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        ///Overrun Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Underrun Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace HsmciImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4000004c,0x03000e00,0,unsigned>;
        ///Command Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///End of Receive Buffer Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///SDIO Interrupt for Slot A Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdioirqa{}; 
        ///SDIO Read Wait Operation Status Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdiowait{}; 
        ///Completion Signal Received Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csrcv{}; 
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Response Index Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Completion Signal Time-out Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> cstoe{}; 
        ///FIFO Empty Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fifoempty{}; 
        ///Transfer Done Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> xfrdone{}; 
        ///Boot Operation Acknowledge Received Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ackrcv{}; 
        ///Boot Operation Acknowledge Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ackrcve{}; 
        ///Overrun Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Underrun Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace HsmciCfg{    ///<Configuration Register
        using Addr = Register::Address<0x40000054,0xffffeeee,0,unsigned>;
        ///HSMCI Internal FIFO control mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fifomode{}; 
        ///Flow Error flag reset control mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ferrctrl{}; 
        ///High Speed Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hsmode{}; 
        ///Synchronize on the last block
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lsync{}; 
    }
    namespace HsmciWpmr{    ///<Write Protection Mode Register
        using Addr = Register::Address<0x400000e4,0x000000fe,0,unsigned>;
        ///Write Protection Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpEn{}; 
        ///Write Protection Key password
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpKey{}; 
    }
    namespace HsmciWpsr{    ///<Write Protection Status Register
        using Addr = Register::Address<0x400000e8,0xff0000f0,0,unsigned>;
        ///Write Protection Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wpVs{}; 
        ///Write Protection Violation SouRCe
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpVsrc{}; 
    }
    namespace HsmciFifo0{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000200,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo1{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000204,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo2{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000208,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo3{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000020c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo4{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000210,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo5{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000214,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo6{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000218,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo7{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000021c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo8{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000220,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo9{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000224,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo10{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000228,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo11{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000022c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo12{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000230,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo13{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000234,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo14{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000238,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo15{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000023c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo16{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000240,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo17{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000244,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo18{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000248,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo19{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000024c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo20{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000250,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo21{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000254,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo22{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000258,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo23{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000025c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo24{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000260,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo25{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000264,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo26{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000268,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo27{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000026c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo28{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000270,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo29{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000274,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo30{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000278,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo31{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000027c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo32{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000280,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo33{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000284,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo34{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000288,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo35{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000028c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo36{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000290,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo37{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000294,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo38{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000298,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo39{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000029c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo40{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002a0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo41{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002a4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo42{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002a8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo43{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002ac,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo44{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002b0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo45{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002b4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo46{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002b8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo47{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002bc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo48{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002c0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo49{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002c4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo50{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002c8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo51{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002cc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo52{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002d0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo53{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002d4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo54{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002d8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo55{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002dc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo56{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002e0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo57{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002e4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo58{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002e8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo59{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002ec,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo60{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002f0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo61{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002f4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo62{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002f8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo63{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400002fc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo64{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000300,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo65{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000304,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo66{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000308,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo67{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000030c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo68{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000310,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo69{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000314,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo70{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000318,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo71{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000031c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo72{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000320,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo73{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000324,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo74{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000328,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo75{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000032c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo76{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000330,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo77{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000334,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo78{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000338,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo79{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000033c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo80{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000340,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo81{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000344,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo82{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000348,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo83{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000034c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo84{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000350,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo85{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000354,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo86{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000358,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo87{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000035c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo88{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000360,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo89{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000364,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo90{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000368,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo91{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000036c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo92{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000370,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo93{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000374,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo94{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000378,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo95{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000037c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo96{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000380,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo97{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000384,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo98{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000388,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo99{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000038c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo100{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000390,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo101{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000394,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo102{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000398,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo103{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000039c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo104{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003a0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo105{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003a4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo106{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003a8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo107{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003ac,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo108{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003b0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo109{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003b4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo110{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003b8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo111{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003bc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo112{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003c0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo113{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003c4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo114{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003c8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo115{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003cc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo116{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003d0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo117{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003d4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo118{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003d8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo119{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003dc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo120{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003e0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo121{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003e4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo122{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003e8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo123{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003ec,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo124{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003f0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo125{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003f4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo126{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003f8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo127{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400003fc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo128{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000400,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo129{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000404,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo130{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000408,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo131{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000040c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo132{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000410,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo133{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000414,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo134{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000418,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo135{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000041c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo136{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000420,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo137{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000424,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo138{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000428,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo139{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000042c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo140{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000430,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo141{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000434,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo142{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000438,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo143{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000043c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo144{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000440,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo145{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000444,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo146{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000448,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo147{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000044c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo148{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000450,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo149{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000454,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo150{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000458,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo151{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000045c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo152{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000460,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo153{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000464,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo154{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000468,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo155{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000046c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo156{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000470,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo157{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000474,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo158{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000478,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo159{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000047c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo160{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000480,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo161{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000484,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo162{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000488,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo163{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000048c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo164{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000490,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo165{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000494,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo166{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000498,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo167{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000049c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo168{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004a0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo169{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004a4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo170{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004a8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo171{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004ac,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo172{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004b0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo173{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004b4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo174{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004b8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo175{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004bc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo176{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004c0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo177{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004c4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo178{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004c8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo179{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004cc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo180{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004d0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo181{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004d4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo182{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004d8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo183{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004dc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo184{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004e0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo185{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004e4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo186{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004e8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo187{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004ec,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo188{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004f0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo189{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004f4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo190{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004f8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo191{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400004fc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo192{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000500,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo193{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000504,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo194{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000508,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo195{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000050c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo196{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000510,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo197{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000514,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo198{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000518,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo199{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000051c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo200{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000520,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo201{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000524,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo202{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000528,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo203{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000052c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo204{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000530,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo205{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000534,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo206{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000538,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo207{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000053c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo208{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000540,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo209{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000544,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo210{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000548,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo211{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000054c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo212{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000550,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo213{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000554,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo214{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000558,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo215{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000055c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo216{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000560,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo217{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000564,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo218{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000568,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo219{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000056c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo220{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000570,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo221{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000574,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo222{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000578,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo223{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000057c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo224{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000580,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo225{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000584,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo226{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000588,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo227{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000058c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo228{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000590,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo229{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000594,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo230{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x40000598,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo231{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x4000059c,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo232{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005a0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo233{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005a4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo234{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005a8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo235{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005ac,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo236{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005b0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo237{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005b4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo238{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005b8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo239{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005bc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo240{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005c0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo241{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005c4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo242{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005c8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo243{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005cc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo244{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005d0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo245{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005d4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo246{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005d8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo247{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005dc,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo248{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005e0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo249{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005e4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo250{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005e8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo251{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005ec,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo252{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005f0,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo253{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005f4,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo254{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005f8,0xffffffff,0,unsigned>;
    }
    namespace HsmciFifo255{    ///<FIFO Memory Aperture0
        using Addr = Register::Address<0x400005fc,0xffffffff,0,unsigned>;
    }
    namespace HsmciRpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0x40000100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace HsmciRcr{    ///<Receive Counter Register
        using Addr = Register::Address<0x40000104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace HsmciTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x40000108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace HsmciTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x4000010c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace HsmciRnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0x40000110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace HsmciRncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0x40000114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace HsmciTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x40000118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace HsmciTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x4000011c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace HsmciPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x40000120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace HsmciPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x40000124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
