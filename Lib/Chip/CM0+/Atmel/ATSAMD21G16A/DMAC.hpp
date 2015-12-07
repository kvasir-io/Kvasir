#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Direct Memory Access Controller
    namespace DmacActive{    ///<Active Channel and Levels
        using Addr = Register::Address<0x41004830,0x000060f0,0,unsigned>;
        ///Level 0 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lvlex0{}; 
        namespace Lvlex0ValC{
        }
        ///Level 1 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lvlex1{}; 
        namespace Lvlex1ValC{
        }
        ///Level 2 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lvlex2{}; 
        namespace Lvlex2ValC{
        }
        ///Level 3 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lvlex3{}; 
        namespace Lvlex3ValC{
        }
        ///Active Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
        ///Active Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abusy{}; 
        namespace AbusyValC{
        }
        ///Active Channel Block Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> btcnt{}; 
        namespace BtcntValC{
        }
    }
    namespace DmacBaseaddr{    ///<Descriptor Memory Section Base Address
        using Addr = Register::Address<0x41004834,0x00000000,0,unsigned>;
        ///Descriptor Memory Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> baseaddr{}; 
        namespace BaseaddrValC{
        }
    }
    namespace DmacBusych{    ///<Busy Channels
        using Addr = Register::Address<0x41004828,0xfffff000,0,unsigned>;
        ///Busy Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> busych0{}; 
        namespace Busych0ValC{
        }
        ///Busy Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busych1{}; 
        namespace Busych1ValC{
        }
        ///Busy Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> busych2{}; 
        namespace Busych2ValC{
        }
        ///Busy Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> busych3{}; 
        namespace Busych3ValC{
        }
        ///Busy Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> busych4{}; 
        namespace Busych4ValC{
        }
        ///Busy Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> busych5{}; 
        namespace Busych5ValC{
        }
        ///Busy Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> busych6{}; 
        namespace Busych6ValC{
        }
        ///Busy Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> busych7{}; 
        namespace Busych7ValC{
        }
        ///Busy Channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> busych8{}; 
        namespace Busych8ValC{
        }
        ///Busy Channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> busych9{}; 
        namespace Busych9ValC{
        }
        ///Busy Channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> busych10{}; 
        namespace Busych10ValC{
        }
        ///Busy Channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> busych11{}; 
        namespace Busych11ValC{
        }
    }
    namespace DmacChctrla{    ///<Channel Control A
        using Addr = Register::Address<0x41004840,0xfffffffc,0,unsigned char>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
    }
    namespace DmacChctrlb{    ///<Channel Control B
        using Addr = Register::Address<0x41004844,0xfc3fc080,0,unsigned>;
        ///Event Input Action
        enum class EvactVal {
            noact=0x00000000,     ///<No action
            trig=0x00000001,     ///<Transfer and periodic transfer trigger
            ctrig=0x00000002,     ///<Conditional transfer trigger
            cblock=0x00000003,     ///<Conditional block transfer
            suspend=0x00000004,     ///<Channel suspend operation
            resume=0x00000005,     ///<Channel resume operation
            sskip=0x00000006,     ///<Skip next block suspend action
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EvactVal> evact{}; 
        namespace EvactValC{
            constexpr Register::FieldValue<decltype(evact),EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact),EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact),EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact),EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact),EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact),EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact),EvactVal::sskip> sskip{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> evie{}; 
        namespace EvieValC{
        }
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> evoe{}; 
        namespace EvoeValC{
        }
        ///Channel Arbitration Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> lvl{}; 
        namespace LvlValC{
        }
        ///Peripheral Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        namespace TrigsrcValC{
        }
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            beat=0x00000002,     ///<One trigger required for each beat transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact),TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact),TrigactVal::beat> beat{};
            constexpr Register::FieldValue<decltype(trigact),TrigactVal::transaction> transaction{};
        }
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd),CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd),CmdVal::resume> resume{};
        }
    }
    namespace DmacChid{    ///<Channel ID
        using Addr = Register::Address<0x4100483f,0xfffffff0,0,unsigned char>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace DmacChintenclr{    ///<Channel Interrupt Enable Clear
        using Addr = Register::Address<0x4100484c,0xfffffff8,0,unsigned char>;
        ///Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        namespace TerrValC{
        }
        ///Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        namespace TcmplValC{
        }
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
    }
    namespace DmacChintenset{    ///<Channel Interrupt Enable Set
        using Addr = Register::Address<0x4100484d,0xfffffff8,0,unsigned char>;
        ///Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        namespace TerrValC{
        }
        ///Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        namespace TcmplValC{
        }
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
    }
    namespace DmacChintflag{    ///<Channel Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100484e,0xfffffff8,0,unsigned char>;
        ///Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        namespace TerrValC{
        }
        ///Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        namespace TcmplValC{
        }
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
    }
    namespace DmacChstatus{    ///<Channel Status
        using Addr = Register::Address<0x4100484f,0xfffffff8,0,unsigned char>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pend{}; 
        namespace PendValC{
        }
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ferr{}; 
        namespace FerrValC{
        }
    }
    namespace DmacCrcchksum{    ///<CRC Checksum
        using Addr = Register::Address<0x41004808,0x00000000,0,unsigned>;
        ///CRC Checksum
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcchksum{}; 
        namespace CrcchksumValC{
        }
    }
    namespace DmacCrcctrl{    ///<CRC Control
        using Addr = Register::Address<0x41004802,0xffffc0f0,0,unsigned>;
        ///CRC Beat Size
        enum class CrcbeatsizeVal {
            byte=0x00000000,     ///<Byte bus access
            hword=0x00000001,     ///<Half-word bus access
            word=0x00000002,     ///<Word bus access
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CrcbeatsizeVal> crcbeatsize{}; 
        namespace CrcbeatsizeValC{
            constexpr Register::FieldValue<decltype(crcbeatsize),CrcbeatsizeVal::byte> byte{};
            constexpr Register::FieldValue<decltype(crcbeatsize),CrcbeatsizeVal::hword> hword{};
            constexpr Register::FieldValue<decltype(crcbeatsize),CrcbeatsizeVal::word> word{};
        }
        ///CRC Polynomial Type
        enum class CrcpolyVal {
            crc16=0x00000000,     ///<CRC-16 (CRC-CCITT)
            crc32=0x00000001,     ///<CRC32 (IEEE 802.3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CrcpolyVal> crcpoly{}; 
        namespace CrcpolyValC{
            constexpr Register::FieldValue<decltype(crcpoly),CrcpolyVal::crc16> crc16{};
            constexpr Register::FieldValue<decltype(crcpoly),CrcpolyVal::crc32> crc32{};
        }
        ///CRC Input Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> crcsrc{}; 
        namespace CrcsrcValC{
        }
    }
    namespace DmacCrcdatain{    ///<CRC Data Input
        using Addr = Register::Address<0x41004804,0x00000000,0,unsigned>;
        ///CRC Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcdatain{}; 
        namespace CrcdatainValC{
        }
    }
    namespace DmacCrcstatus{    ///<CRC Status
        using Addr = Register::Address<0x4100480c,0xfffffffc,0,unsigned char>;
        ///CRC Module Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crcbusy{}; 
        namespace CrcbusyValC{
        }
        ///CRC Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crczero{}; 
        namespace CrczeroValC{
        }
    }
    namespace DmacCtrl{    ///<Control
        using Addr = Register::Address<0x41004800,0xfffff0f8,0,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmaenable{}; 
        namespace DmaenableValC{
        }
        ///CRC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crcenable{}; 
        namespace CrcenableValC{
        }
        ///Priority Level 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lvlen0{}; 
        namespace Lvlen0ValC{
        }
        ///Priority Level 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lvlen1{}; 
        namespace Lvlen1ValC{
        }
        ///Priority Level 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lvlen2{}; 
        namespace Lvlen2ValC{
        }
        ///Priority Level 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lvlen3{}; 
        namespace Lvlen3ValC{
        }
    }
    namespace DmacDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4100480d,0xfffffffe,0,unsigned char>;
        ///Debug Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
        namespace DbgrunValC{
        }
    }
    namespace DmacIntpend{    ///<Interrupt Pending
        using Addr = Register::Address<0x41004820,0xffff18f0,0,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
        ///Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> terr{}; 
        namespace TerrValC{
        }
        ///Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        namespace TcmplValC{
        }
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp{}; 
        namespace SuspValC{
        }
        ///Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ferr{}; 
        namespace FerrValC{
        }
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pend{}; 
        namespace PendValC{
        }
    }
    namespace DmacIntstatus{    ///<Interrupt Status
        using Addr = Register::Address<0x41004824,0xfffff000,0,unsigned>;
        ///Channel 0 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chint0{}; 
        namespace Chint0ValC{
        }
        ///Channel 1 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chint1{}; 
        namespace Chint1ValC{
        }
        ///Channel 2 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chint2{}; 
        namespace Chint2ValC{
        }
        ///Channel 3 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chint3{}; 
        namespace Chint3ValC{
        }
        ///Channel 4 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chint4{}; 
        namespace Chint4ValC{
        }
        ///Channel 5 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chint5{}; 
        namespace Chint5ValC{
        }
        ///Channel 6 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chint6{}; 
        namespace Chint6ValC{
        }
        ///Channel 7 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chint7{}; 
        namespace Chint7ValC{
        }
        ///Channel 8 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> chint8{}; 
        namespace Chint8ValC{
        }
        ///Channel 9 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> chint9{}; 
        namespace Chint9ValC{
        }
        ///Channel 10 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> chint10{}; 
        namespace Chint10ValC{
        }
        ///Channel 11 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> chint11{}; 
        namespace Chint11ValC{
        }
    }
    namespace DmacPendch{    ///<Pending Channels
        using Addr = Register::Address<0x4100482c,0xfffff000,0,unsigned>;
        ///Pending Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pendch0{}; 
        namespace Pendch0ValC{
        }
        ///Pending Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pendch1{}; 
        namespace Pendch1ValC{
        }
        ///Pending Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pendch2{}; 
        namespace Pendch2ValC{
        }
        ///Pending Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pendch3{}; 
        namespace Pendch3ValC{
        }
        ///Pending Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pendch4{}; 
        namespace Pendch4ValC{
        }
        ///Pending Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pendch5{}; 
        namespace Pendch5ValC{
        }
        ///Pending Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pendch6{}; 
        namespace Pendch6ValC{
        }
        ///Pending Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pendch7{}; 
        namespace Pendch7ValC{
        }
        ///Pending Channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pendch8{}; 
        namespace Pendch8ValC{
        }
        ///Pending Channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pendch9{}; 
        namespace Pendch9ValC{
        }
        ///Pending Channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pendch10{}; 
        namespace Pendch10ValC{
        }
        ///Pending Channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pendch11{}; 
        namespace Pendch11ValC{
        }
    }
    namespace DmacPrictrl0{    ///<Priority Control 0
        using Addr = Register::Address<0x41004814,0x70707070,0,unsigned>;
        ///Level 0 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lvlpri0{}; 
        namespace Lvlpri0ValC{
        }
        ///Level 0 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rrlvlen0{}; 
        namespace Rrlvlen0ValC{
        }
        ///Level 1 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> lvlpri1{}; 
        namespace Lvlpri1ValC{
        }
        ///Level 1 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rrlvlen1{}; 
        namespace Rrlvlen1ValC{
        }
        ///Level 2 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> lvlpri2{}; 
        namespace Lvlpri2ValC{
        }
        ///Level 2 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rrlvlen2{}; 
        namespace Rrlvlen2ValC{
        }
        ///Level 3 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> lvlpri3{}; 
        namespace Lvlpri3ValC{
        }
        ///Level 3 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rrlvlen3{}; 
        namespace Rrlvlen3ValC{
        }
    }
    namespace DmacSwtrigctrl{    ///<Software Trigger Control
        using Addr = Register::Address<0x41004810,0xfffff000,0,unsigned>;
        ///Channel 0 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrig0{}; 
        namespace Swtrig0ValC{
        }
        ///Channel 1 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig1{}; 
        namespace Swtrig1ValC{
        }
        ///Channel 2 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrig2{}; 
        namespace Swtrig2ValC{
        }
        ///Channel 3 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> swtrig3{}; 
        namespace Swtrig3ValC{
        }
        ///Channel 4 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swtrig4{}; 
        namespace Swtrig4ValC{
        }
        ///Channel 5 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> swtrig5{}; 
        namespace Swtrig5ValC{
        }
        ///Channel 6 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swtrig6{}; 
        namespace Swtrig6ValC{
        }
        ///Channel 7 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swtrig7{}; 
        namespace Swtrig7ValC{
        }
        ///Channel 8 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swtrig8{}; 
        namespace Swtrig8ValC{
        }
        ///Channel 9 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> swtrig9{}; 
        namespace Swtrig9ValC{
        }
        ///Channel 10 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> swtrig10{}; 
        namespace Swtrig10ValC{
        }
        ///Channel 11 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> swtrig11{}; 
        namespace Swtrig11ValC{
        }
    }
    namespace DmacWrbaddr{    ///<Write-Back Memory Section Base Address
        using Addr = Register::Address<0x41004838,0x00000000,0,unsigned>;
        ///Write-Back Memory Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrbaddr{}; 
        namespace WrbaddrValC{
        }
    }
}
