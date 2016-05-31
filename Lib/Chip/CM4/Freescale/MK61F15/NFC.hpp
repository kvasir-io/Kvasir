#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//NAND flash controller
    namespace NfcCmd1{    ///<Flash command 1
        using Addr = Register::Address<0x400abf00,0x0000ffff,0x00000000,unsigned>;
        ///Third command byte that may be sent to the flash device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> byte3{}; 
        ///Second command byte that may be sent to the flash device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> byte2{}; 
    }
    namespace NfcCmd2{    ///<Flash command 2
        using Addr = Register::Address<0x400abf04,0x000000f8,0x00000000,unsigned>;
        ///Busy indicator and start command
        enum class BusystartVal {
            v0=0x00000000,     ///<During reads, flash controller is idle and it is okay to send next command. During writes, no action.
            v1=0x00000001,     ///<During reads, command execution is busy. During writes, start command execution.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BusystartVal> busyStart{}; 
        namespace BusystartValC{
            constexpr Register::FieldValue<decltype(busyStart)::Type,BusystartVal::v0> v0{};
            constexpr Register::FieldValue<decltype(busyStart)::Type,BusystartVal::v1> v1{};
        }
        ///Internal buffer number used for this command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> bufno{}; 
        ///User-defined flash operation sequencer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> code{}; 
        ///First command byte that may be sent to the flash device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> byte1{}; 
    }
    namespace NfcCar{    ///<Column address
        using Addr = Register::Address<0x400abf08,0xffff0000,0x00000000,unsigned>;
        ///First byte of column address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> byte1{}; 
        ///Second byte of column address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> byte2{}; 
    }
    namespace NfcRar{    ///<Row address
        using Addr = Register::Address<0x400abf0c,0xcc000000,0x00000000,unsigned>;
        ///First byte of row address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> byte1{}; 
        ///Second byte of row address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> byte2{}; 
        ///Third byte of row address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> byte3{}; 
        ///Ready/busy 0 enable
        enum class Rb0Val {
            v0=0x00000000,     ///<NFC_R/ B 0 is disabled
            v1=0x00000001,     ///<NFC_R/ B 0 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Rb0Val> rb0{}; 
        namespace Rb0ValC{
            constexpr Register::FieldValue<decltype(rb0)::Type,Rb0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rb0)::Type,Rb0Val::v1> v1{};
        }
        ///Ready/busy 1 enable
        enum class Rb1Val {
            v0=0x00000000,     ///<NFC_R/ B 1 is disabled
            v1=0x00000001,     ///<NFC_R/ B 1 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Rb1Val> rb1{}; 
        namespace Rb1ValC{
            constexpr Register::FieldValue<decltype(rb1)::Type,Rb1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(rb1)::Type,Rb1Val::v1> v1{};
        }
        ///Chip select 0 enable
        enum class Cs0Val {
            v0=0x00000000,     ///<NFC_CE0 is disabled
            v1=0x00000001,     ///<NFC_CE0 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Cs0Val> cs0{}; 
        namespace Cs0ValC{
            constexpr Register::FieldValue<decltype(cs0)::Type,Cs0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cs0)::Type,Cs0Val::v1> v1{};
        }
        ///Chip select 1 enable
        enum class Cs1Val {
            v0=0x00000000,     ///<NFC_CE1 is disabled
            v1=0x00000001,     ///<NFC_CE1 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Cs1Val> cs1{}; 
        namespace Cs1ValC{
            constexpr Register::FieldValue<decltype(cs1)::Type,Cs1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cs1)::Type,Cs1Val::v1> v1{};
        }
    }
    namespace NfcRpt{    ///<Flash command repeat
        using Addr = Register::Address<0x400abf10,0xffff0000,0x00000000,unsigned>;
        ///16-bit repeat count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace NfcRai{    ///<Row address increment
        using Addr = Register::Address<0x400abf14,0xff000000,0x00000000,unsigned>;
        ///Increment for the first byte of row address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inc1{}; 
        ///Increment for the second byte of row address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> inc2{}; 
        ///Increment for the third byte of row address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> inc3{}; 
    }
    namespace NfcSr1{    ///<Flash status 1
        using Addr = Register::Address<0x400abf18,0x00000000,0x00000000,unsigned>;
        ///Fourth byte returned by read ID command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id4{}; 
        ///Third byte returned by read ID command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id3{}; 
        ///Second byte returned by read ID command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id2{}; 
        ///First byte returned by read ID command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id1{}; 
    }
    namespace NfcSr2{    ///<Flash status 2
        using Addr = Register::Address<0x400abf1c,0x00ffff00,0x00000000,unsigned>;
        ///Byte returned by read status command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> status1{}; 
        ///Fifth byte returned by read ID command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> id5{}; 
    }
    namespace NfcDma1{    ///<DMA channel 1 address
        using Addr = Register::Address<0x400abf20,0x00000000,0x00000000,unsigned>;
        ///DMA channel 1 address. DMA channel 1 address, it is 8-byte aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace NfcDmacfg{    ///<DMA configuration
        using Addr = Register::Address<0x400abf24,0x000001fc,0x00000000,unsigned>;
        ///DMA channel 2 status
        enum class Act2Val {
            v0=0x00000000,     ///<Inactive
            v1=0x00000001,     ///<Active, and transfers to memory when triggered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Act2Val> act2{}; 
        namespace Act2ValC{
            constexpr Register::FieldValue<decltype(act2)::Type,Act2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(act2)::Type,Act2Val::v1> v1{};
        }
        ///DMA channel 1 status
        enum class Act1Val {
            v0=0x00000000,     ///<Inactive
            v1=0x00000001,     ///<Active, and transfers to memory when triggered
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Act1Val> act1{}; 
        namespace Act1ValC{
            constexpr Register::FieldValue<decltype(act1)::Type,Act1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(act1)::Type,Act1Val::v1> v1{};
        }
        ///256-byte offset for DMA channel 2. DMA channel 2 transfer starts at this offset count x 256 bytes. For example, if OFFSET2 = 0x2, DMA channel 2 transfer starts at 0x200.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> offset2{}; 
        ///Number of bytes to be transferred by DMA channel 2. It should be multiple of 8 bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,13),Register::ReadWriteAccess,unsigned> count2{}; 
        ///Number of bytes to be transferred by DMA channel 1. It should be multiple of 8 bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> count1{}; 
    }
    namespace NfcSwap{    ///<Cach swap
        using Addr = Register::Address<0x400abf28,0xf001f001,0x00000000,unsigned>;
        ///Upper swap address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,1),Register::ReadWriteAccess,unsigned> addr2{}; 
        ///Lower swap address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> addr1{}; 
    }
    namespace NfcSecsz{    ///<Sector size
        using Addr = Register::Address<0x400abf2c,0xffffe000,0x00000000,unsigned>;
        ///Size in bytes of one elementary transfer unit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> size{}; 
    }
    namespace NfcCfg{    ///<Flash configuration
        using Addr = Register::Address<0x400abf30,0x00000040,0x00000000,unsigned>;
        ///Number of virtual pages (in one physical flash page) to be programmed or read, etc.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pagecnt{}; 
        ///no description available
        enum class AibnVal {
            v0=0x00000000,     ///<Do not auto-increment buffer number
            v1=0x00000001,     ///<Auto-increment buffer number
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AibnVal> aibn{}; 
        namespace AibnValC{
            constexpr Register::FieldValue<decltype(aibn)::Type,AibnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aibn)::Type,AibnVal::v1> v1{};
        }
        ///no description available
        enum class AiadVal {
            v0=0x00000000,     ///<Do not auto-increment flash row address
            v1=0x00000001,     ///<Auto-increment flash row address
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AiadVal> aiad{}; 
        namespace AiadValC{
            constexpr Register::FieldValue<decltype(aiad)::Type,AiadVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aiad)::Type,AiadVal::v1> v1{};
        }
        ///no description available
        enum class BitwidthVal {
            v0=0x00000000,     ///<8-bit wide flash mode
            v1=0x00000001,     ///<16-bit wide flash mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BitwidthVal> bitwidth{}; 
        namespace BitwidthValC{
            constexpr Register::FieldValue<decltype(bitwidth)::Type,BitwidthVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bitwidth)::Type,BitwidthVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///Number of bytes that are read for the read id command.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> idcnt{}; 
        ///See the "Fast Flash Configuration for EDO" section for more details.
        enum class FastVal {
            v0=0x00000000,     ///<Slow flash timing. Clock in read data on rising edge of read strobe
            v1=0x00000001,     ///<Fast flash timing. Clock in read data a half clock later than rising edge of read strobe
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,FastVal> fast{}; 
        namespace FastValC{
            constexpr Register::FieldValue<decltype(fast)::Type,FastVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fast)::Type,FastVal::v1> v1{};
        }
        ///no description available
        enum class EccmodeVal {
            v000=0x00000000,     ///<No correction, ECC bypass
            v001=0x00000001,     ///<4-error correction (8 ECC bytes)
            v010=0x00000002,     ///<6-error correction (12 ECC bytes)
            v011=0x00000003,     ///<8-error correction (15 ECC bytes)
            v100=0x00000004,     ///<12-error correction (23 ECC bytes)
            v101=0x00000005,     ///<16-error correction (30 ECC bytes)
            v110=0x00000006,     ///<24-error correction (45 ECC bytes)
            v111=0x00000007,     ///<32-error correction (60 ECC bytes)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,EccmodeVal> eccmode{}; 
        namespace EccmodeValC{
            constexpr Register::FieldValue<decltype(eccmode)::Type,EccmodeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(eccmode)::Type,EccmodeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(eccmode)::Type,EccmodeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(eccmode)::Type,EccmodeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(eccmode)::Type,EccmodeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(eccmode)::Type,EccmodeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(eccmode)::Type,EccmodeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(eccmode)::Type,EccmodeVal::v111> v111{};
        }
        ///no description available
        enum class DmareqVal {
            v0=0x00000000,     ///<Do not transfer sector after ECC done
            v1=0x00000001,     ///<After ECC done, transfer sector using DMA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DmareqVal> dmareq{}; 
        namespace DmareqValC{
            constexpr Register::FieldValue<decltype(dmareq)::Type,DmareqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmareq)::Type,DmareqVal::v1> v1{};
        }
        ///no description available
        enum class EccsramVal {
            v0=0x00000000,     ///<Do not write ECC status to SRAM
            v1=0x00000001,     ///<Write ECC status to SRAM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,EccsramVal> eccsram{}; 
        namespace EccsramValC{
            constexpr Register::FieldValue<decltype(eccsram)::Type,EccsramVal::v0> v0{};
            constexpr Register::FieldValue<decltype(eccsram)::Type,EccsramVal::v1> v1{};
        }
        ///Byte address in SRAM where ECC status is written.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,22),Register::ReadWriteAccess,unsigned> eccad{}; 
        ///no description available
        enum class StopwerrVal {
            v0=0x00000000,     ///<No stop on write error
            v1=0x00000001,     ///<Auto-sequencer stops on a write error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,StopwerrVal> stopwerr{}; 
        namespace StopwerrValC{
            constexpr Register::FieldValue<decltype(stopwerr)::Type,StopwerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopwerr)::Type,StopwerrVal::v1> v1{};
        }
    }
    namespace NfcDma2{    ///<DMA channel 2 address
        using Addr = Register::Address<0x400abf34,0x00000000,0x00000000,unsigned>;
        ///DMA channel 2 address. DMA channel 2 address, it is 8-byte aligned.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace NfcIsr{    ///<Interrupt status
        using Addr = Register::Address<0x400abf38,0x1001ffc0,0x00000000,unsigned>;
        ///DMA buffer number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmabn{}; 
        ///ECC buffer number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccbn{}; 
        ///Residue buffer number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> resbn{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> idleclr{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> doneclr{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> werrclr{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> idleen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> doneen{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> werren{}; 
        ///DMA engine busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmabusy{}; 
        ///ECC engine busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eccbusy{}; 
        ///Residue engine busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> resbusy{}; 
        ///Command busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmdbusy{}; 
        ///Write error status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> werrns{}; 
        ///Command idle interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> idle{}; 
        ///Done interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> done{}; 
        ///Write error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> werr{}; 
    }
}
