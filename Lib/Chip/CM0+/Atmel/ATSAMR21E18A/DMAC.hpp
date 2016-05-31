#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Direct Memory Access Controller
    namespace DmacActive{    ///<Active Channel and Levels
        using Addr = Register::Address<0x41004830,0x000060f0,0x00000000,unsigned>;
        ///Level 0 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvlex0{}; 
        ///Level 1 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvlex1{}; 
        ///Level 2 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvlex2{}; 
        ///Level 3 Channel Trigger Request Executing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvlex3{}; 
        ///Active Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id{}; 
        ///Active Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> abusy{}; 
        ///Active Channel Block Transfer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> btcnt{}; 
    }
    namespace DmacBaseaddr{    ///<Descriptor Memory Section Base Address
        using Addr = Register::Address<0x41004834,0x00000000,0x00000000,unsigned>;
        ///Descriptor Memory Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> baseaddr{}; 
    }
    namespace DmacBusych{    ///<Busy Channels
        using Addr = Register::Address<0x41004828,0xfffff000,0x00000000,unsigned>;
        ///Busy Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych0{}; 
        ///Busy Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych1{}; 
        ///Busy Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych2{}; 
        ///Busy Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych3{}; 
        ///Busy Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych4{}; 
        ///Busy Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych5{}; 
        ///Busy Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych6{}; 
        ///Busy Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych7{}; 
        ///Busy Channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych8{}; 
        ///Busy Channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych9{}; 
        ///Busy Channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych10{}; 
        ///Busy Channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busych11{}; 
    }
    namespace DmacChctrla{    ///<Channel Control A
        using Addr = Register::Address<0x41004840,0xfffffffc,0x00000000,unsigned char>;
        ///Channel Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///Channel Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace DmacChctrlb{    ///<Channel Control B
        using Addr = Register::Address<0x41004844,0xfc3fc080,0x00000000,unsigned>;
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
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::noact> noact{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::trig> trig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::ctrig> ctrig{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::cblock> cblock{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::resume> resume{};
            constexpr Register::FieldValue<decltype(evact)::Type,EvactVal::sskip> sskip{};
        }
        ///Channel Event Input Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> evie{}; 
        ///Channel Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> evoe{}; 
        ///Channel Arbitration Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> lvl{}; 
        ///Peripheral Trigger Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> trigsrc{}; 
        ///Trigger Action
        enum class TrigactVal {
            block=0x00000000,     ///<One trigger required for each block transfer
            beat=0x00000002,     ///<One trigger required for each beat transfer
            transaction=0x00000003,     ///<One trigger required for each transaction
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,TrigactVal> trigact{}; 
        namespace TrigactValC{
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::block> block{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::beat> beat{};
            constexpr Register::FieldValue<decltype(trigact)::Type,TrigactVal::transaction> transaction{};
        }
        ///Software Command
        enum class CmdVal {
            noact=0x00000000,     ///<No action
            suspend=0x00000001,     ///<Channel suspend operation
            resume=0x00000002,     ///<Channel resume operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::noact> noact{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::suspend> suspend{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::resume> resume{};
        }
    }
    namespace DmacChid{    ///<Channel ID
        using Addr = Register::Address<0x4100483f,0xfffffff0,0x00000000,unsigned char>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace DmacChintenclr{    ///<Channel Interrupt Enable Clear
        using Addr = Register::Address<0x4100484c,0xfffffff8,0x00000000,unsigned char>;
        ///Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintenset{    ///<Channel Interrupt Enable Set
        using Addr = Register::Address<0x4100484d,0xfffffff8,0x00000000,unsigned char>;
        ///Transfer Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Transfer Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChintflag{    ///<Channel Interrupt Flag Status and Clear
        using Addr = Register::Address<0x4100484e,0xfffffff8,0x00000000,unsigned char>;
        ///Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> susp{}; 
    }
    namespace DmacChstatus{    ///<Channel Status
        using Addr = Register::Address<0x4100484f,0xfffffff8,0x00000000,unsigned char>;
        ///Channel Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
        ///Channel Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
    }
    namespace DmacCrcchksum{    ///<CRC Checksum
        using Addr = Register::Address<0x41004808,0x00000000,0x00000000,unsigned>;
        ///CRC Checksum
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcchksum{}; 
    }
    namespace DmacCrcctrl{    ///<CRC Control
        using Addr = Register::Address<0x41004802,0xffffc0f0,0x00000000,unsigned>;
        ///CRC Beat Size
        enum class CrcbeatsizeVal {
            byte=0x00000000,     ///<Byte bus access
            hword=0x00000001,     ///<Half-word bus access
            word=0x00000002,     ///<Word bus access
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CrcbeatsizeVal> crcbeatsize{}; 
        namespace CrcbeatsizeValC{
            constexpr Register::FieldValue<decltype(crcbeatsize)::Type,CrcbeatsizeVal::byte> byte{};
            constexpr Register::FieldValue<decltype(crcbeatsize)::Type,CrcbeatsizeVal::hword> hword{};
            constexpr Register::FieldValue<decltype(crcbeatsize)::Type,CrcbeatsizeVal::word> word{};
        }
        ///CRC Polynomial Type
        enum class CrcpolyVal {
            crc16=0x00000000,     ///<CRC-16 (CRC-CCITT)
            crc32=0x00000001,     ///<CRC32 (IEEE 802.3)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CrcpolyVal> crcpoly{}; 
        namespace CrcpolyValC{
            constexpr Register::FieldValue<decltype(crcpoly)::Type,CrcpolyVal::crc16> crc16{};
            constexpr Register::FieldValue<decltype(crcpoly)::Type,CrcpolyVal::crc32> crc32{};
        }
        ///CRC Input Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> crcsrc{}; 
    }
    namespace DmacCrcdatain{    ///<CRC Data Input
        using Addr = Register::Address<0x41004804,0x00000000,0x00000000,unsigned>;
        ///CRC Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcdatain{}; 
    }
    namespace DmacCrcstatus{    ///<CRC Status
        using Addr = Register::Address<0x4100480c,0xfffffffc,0x00000000,unsigned char>;
        ///CRC Module Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> crcbusy{}; 
        ///CRC Zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> crczero{}; 
    }
    namespace DmacCtrl{    ///<Control
        using Addr = Register::Address<0x41004800,0xfffff0f8,0x00000000,unsigned>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///DMA Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmaenable{}; 
        ///CRC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crcenable{}; 
        ///Priority Level 0 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lvlen0{}; 
        ///Priority Level 1 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lvlen1{}; 
        ///Priority Level 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lvlen2{}; 
        ///Priority Level 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lvlen3{}; 
    }
    namespace DmacDbgctrl{    ///<Debug Control
        using Addr = Register::Address<0x4100480d,0xfffffffe,0x00000000,unsigned char>;
        ///Debug Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dbgrun{}; 
    }
    namespace DmacIntpend{    ///<Interrupt Pending
        using Addr = Register::Address<0x41004820,0xffff18f0,0x00000000,unsigned>;
        ///Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///Transfer Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> terr{}; 
        ///Transfer Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tcmpl{}; 
        ///Channel Suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp{}; 
        ///Fetch Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ferr{}; 
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Pending
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pend{}; 
    }
    namespace DmacIntstatus{    ///<Interrupt Status
        using Addr = Register::Address<0x41004824,0xfffff000,0x00000000,unsigned>;
        ///Channel 0 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint0{}; 
        ///Channel 1 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint1{}; 
        ///Channel 2 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint2{}; 
        ///Channel 3 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint3{}; 
        ///Channel 4 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint4{}; 
        ///Channel 5 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint5{}; 
        ///Channel 6 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint6{}; 
        ///Channel 7 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint7{}; 
        ///Channel 8 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint8{}; 
        ///Channel 9 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint9{}; 
        ///Channel 10 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint10{}; 
        ///Channel 11 Pending Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> chint11{}; 
    }
    namespace DmacPendch{    ///<Pending Channels
        using Addr = Register::Address<0x4100482c,0xfffff000,0x00000000,unsigned>;
        ///Pending Channel 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch0{}; 
        ///Pending Channel 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch1{}; 
        ///Pending Channel 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch2{}; 
        ///Pending Channel 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch3{}; 
        ///Pending Channel 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch4{}; 
        ///Pending Channel 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch5{}; 
        ///Pending Channel 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch6{}; 
        ///Pending Channel 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch7{}; 
        ///Pending Channel 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch8{}; 
        ///Pending Channel 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch9{}; 
        ///Pending Channel 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch10{}; 
        ///Pending Channel 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pendch11{}; 
    }
    namespace DmacPrictrl0{    ///<Priority Control 0
        using Addr = Register::Address<0x41004814,0x70707070,0x00000000,unsigned>;
        ///Level 0 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lvlpri0{}; 
        ///Level 0 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rrlvlen0{}; 
        ///Level 1 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> lvlpri1{}; 
        ///Level 1 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rrlvlen1{}; 
        ///Level 2 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> lvlpri2{}; 
        ///Level 2 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rrlvlen2{}; 
        ///Level 3 Channel Priority Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> lvlpri3{}; 
        ///Level 3 Round-Robin Scheduling Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rrlvlen3{}; 
    }
    namespace DmacSwtrigctrl{    ///<Software Trigger Control
        using Addr = Register::Address<0x41004810,0xfffff000,0x00000000,unsigned>;
        ///Channel 0 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrig0{}; 
        ///Channel 1 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig1{}; 
        ///Channel 2 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swtrig2{}; 
        ///Channel 3 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> swtrig3{}; 
        ///Channel 4 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swtrig4{}; 
        ///Channel 5 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> swtrig5{}; 
        ///Channel 6 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swtrig6{}; 
        ///Channel 7 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swtrig7{}; 
        ///Channel 8 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swtrig8{}; 
        ///Channel 9 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> swtrig9{}; 
        ///Channel 10 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> swtrig10{}; 
        ///Channel 11 Software Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> swtrig11{}; 
    }
    namespace DmacWrbaddr{    ///<Write-Back Memory Section Base Address
        using Addr = Register::Address<0x41004838,0x00000000,0x00000000,unsigned>;
        ///Write-Back Memory Base Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrbaddr{}; 
    }
}
