#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//NAND flash controller
    namespace NfcCmd1{    ///<Flash command 1
        using Addr = Register::Address<0x400abf00,0x0000ffff,0,unsigned>;
        ///Third command byte that may be sent to the flash device
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> byte3{}; 
        ///Second command byte that may be sent to the flash device
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> byte2{}; 
    }
    namespace NfcCmd2{    ///<Flash command 2
        using Addr = Register::Address<0x400abf04,0x000000f8,0,unsigned>;
        ///Busy indicator and start command
        enum class busyStartVal {
            v0=0x00000000,     ///<During reads, flash controller is idle and it is okay to send next command. During writes, no action.
            v1=0x00000001,     ///<During reads, command execution is busy. During writes, start command execution.
        };
        namespace busyStartValC{
            constexpr MPL::Value<busyStartVal,busyStartVal::v0> v0{};
            constexpr MPL::Value<busyStartVal,busyStartVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,busyStartVal> busyStart{}; 
        ///Internal buffer number used for this command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> bufno{}; 
        ///User-defined flash operation sequencer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> code{}; 
        ///First command byte that may be sent to the flash device
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> byte1{}; 
    }
    namespace NfcCar{    ///<Column address
        using Addr = Register::Address<0x400abf08,0xffff0000,0,unsigned>;
        ///First byte of column address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> byte1{}; 
        ///Second byte of column address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> byte2{}; 
    }
    namespace NfcRar{    ///<Row address
        using Addr = Register::Address<0x400abf0c,0xcc000000,0,unsigned>;
        ///First byte of row address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> byte1{}; 
        ///Second byte of row address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> byte2{}; 
        ///Third byte of row address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> byte3{}; 
        ///Ready/busy 0 enable
        enum class rb0Val {
            v0=0x00000000,     ///<NFC_R/ B 0 is disabled
            v1=0x00000001,     ///<NFC_R/ B 0 is enabled
        };
        namespace rb0ValC{
            constexpr MPL::Value<rb0Val,rb0Val::v0> v0{};
            constexpr MPL::Value<rb0Val,rb0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,rb0Val> rb0{}; 
        ///Ready/busy 1 enable
        enum class rb1Val {
            v0=0x00000000,     ///<NFC_R/ B 1 is disabled
            v1=0x00000001,     ///<NFC_R/ B 1 is enabled
        };
        namespace rb1ValC{
            constexpr MPL::Value<rb1Val,rb1Val::v0> v0{};
            constexpr MPL::Value<rb1Val,rb1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,rb1Val> rb1{}; 
        ///Chip select 0 enable
        enum class cs0Val {
            v0=0x00000000,     ///<NFC_CE0 is disabled
            v1=0x00000001,     ///<NFC_CE0 is enabled
        };
        namespace cs0ValC{
            constexpr MPL::Value<cs0Val,cs0Val::v0> v0{};
            constexpr MPL::Value<cs0Val,cs0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,cs0Val> cs0{}; 
        ///Chip select 1 enable
        enum class cs1Val {
            v0=0x00000000,     ///<NFC_CE1 is disabled
            v1=0x00000001,     ///<NFC_CE1 is enabled
        };
        namespace cs1ValC{
            constexpr MPL::Value<cs1Val,cs1Val::v0> v0{};
            constexpr MPL::Value<cs1Val,cs1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,cs1Val> cs1{}; 
    }
    namespace NfcRpt{    ///<Flash command repeat
        using Addr = Register::Address<0x400abf10,0xffff0000,0,unsigned>;
        ///16-bit repeat count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace NfcRai{    ///<Row address increment
        using Addr = Register::Address<0x400abf14,0xff000000,0,unsigned>;
        ///Increment for the first byte of row address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> inc1{}; 
        ///Increment for the second byte of row address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> inc2{}; 
        ///Increment for the third byte of row address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> inc3{}; 
    }
    namespace NfcSr1{    ///<Flash status 1
        using Addr = Register::Address<0x400abf18,0x00000000,0,unsigned>;
        ///Fourth byte returned by read ID command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> id4{}; 
        ///Third byte returned by read ID command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> id3{}; 
        ///Second byte returned by read ID command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> id2{}; 
        ///First byte returned by read ID command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> id1{}; 
    }
    namespace NfcSr2{    ///<Flash status 2
        using Addr = Register::Address<0x400abf1c,0x00ffff00,0,unsigned>;
        ///Byte returned by read status command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> status1{}; 
        ///Fifth byte returned by read ID command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> id5{}; 
    }
    namespace NfcDma1{    ///<DMA channel 1 address
        using Addr = Register::Address<0x400abf20,0x00000000,0,unsigned>;
        ///DMA channel 1 address. DMA channel 1 address, it is 8-byte aligned.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace NfcDmacfg{    ///<DMA configuration
        using Addr = Register::Address<0x400abf24,0x000001fc,0,unsigned>;
        ///DMA channel 2 status
        enum class act2Val {
            v0=0x00000000,     ///<Inactive
            v1=0x00000001,     ///<Active, and transfers to memory when triggered
        };
        namespace act2ValC{
            constexpr MPL::Value<act2Val,act2Val::v0> v0{};
            constexpr MPL::Value<act2Val,act2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,act2Val> act2{}; 
        ///DMA channel 1 status
        enum class act1Val {
            v0=0x00000000,     ///<Inactive
            v1=0x00000001,     ///<Active, and transfers to memory when triggered
        };
        namespace act1ValC{
            constexpr MPL::Value<act1Val,act1Val::v0> v0{};
            constexpr MPL::Value<act1Val,act1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,act1Val> act1{}; 
        ///256-byte offset for DMA channel 2. DMA channel 2 transfer starts at this offset count x 256 bytes. For example, if OFFSET2 = 0x2, DMA channel 2 transfer starts at 0x200.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> offset2{}; 
        ///Number of bytes to be transferred by DMA channel 2. It should be multiple of 8 bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,13),Register::ReadWriteAccess,unsigned> count2{}; 
        ///Number of bytes to be transferred by DMA channel 1. It should be multiple of 8 bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> count1{}; 
    }
    namespace NfcSwap{    ///<Cach swap
        using Addr = Register::Address<0x400abf28,0xf001f001,0,unsigned>;
        ///Upper swap address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,1),Register::ReadWriteAccess,unsigned> addr2{}; 
        ///Lower swap address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,17),Register::ReadWriteAccess,unsigned> addr1{}; 
    }
    namespace NfcSecsz{    ///<Sector size
        using Addr = Register::Address<0x400abf2c,0xffffe000,0,unsigned>;
        ///Size in bytes of one elementary transfer unit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> size{}; 
    }
    namespace NfcCfg{    ///<Flash configuration
        using Addr = Register::Address<0x400abf30,0x00000040,0,unsigned>;
        ///Number of virtual pages (in one physical flash page) to be programmed or read, etc.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pagecnt{}; 
        ///no description available
        enum class aibnVal {
            v0=0x00000000,     ///<Do not auto-increment buffer number
            v1=0x00000001,     ///<Auto-increment buffer number
        };
        namespace aibnValC{
            constexpr MPL::Value<aibnVal,aibnVal::v0> v0{};
            constexpr MPL::Value<aibnVal,aibnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,aibnVal> aibn{}; 
        ///no description available
        enum class aiadVal {
            v0=0x00000000,     ///<Do not auto-increment flash row address
            v1=0x00000001,     ///<Auto-increment flash row address
        };
        namespace aiadValC{
            constexpr MPL::Value<aiadVal,aiadVal::v0> v0{};
            constexpr MPL::Value<aiadVal,aiadVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,aiadVal> aiad{}; 
        ///no description available
        enum class bitwidthVal {
            v0=0x00000000,     ///<8-bit wide flash mode
            v1=0x00000001,     ///<16-bit wide flash mode
        };
        namespace bitwidthValC{
            constexpr MPL::Value<bitwidthVal,bitwidthVal::v0> v0{};
            constexpr MPL::Value<bitwidthVal,bitwidthVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bitwidthVal> bitwidth{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///Number of bytes that are read for the read id command.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> idcnt{}; 
        ///See the "Fast Flash Configuration for EDO" section for more details.
        enum class fastVal {
            v0=0x00000000,     ///<Slow flash timing. Clock in read data on rising edge of read strobe
            v1=0x00000001,     ///<Fast flash timing. Clock in read data a half clock later than rising edge of read strobe
        };
        namespace fastValC{
            constexpr MPL::Value<fastVal,fastVal::v0> v0{};
            constexpr MPL::Value<fastVal,fastVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,fastVal> fast{}; 
        ///no description available
        enum class eccmodeVal {
            v000=0x00000000,     ///<No correction, ECC bypass
            v001=0x00000001,     ///<4-error correction (8 ECC bytes)
            v010=0x00000002,     ///<6-error correction (12 ECC bytes)
            v011=0x00000003,     ///<8-error correction (15 ECC bytes)
            v100=0x00000004,     ///<12-error correction (23 ECC bytes)
            v101=0x00000005,     ///<16-error correction (30 ECC bytes)
            v110=0x00000006,     ///<24-error correction (45 ECC bytes)
            v111=0x00000007,     ///<32-error correction (60 ECC bytes)
        };
        namespace eccmodeValC{
            constexpr MPL::Value<eccmodeVal,eccmodeVal::v000> v000{};
            constexpr MPL::Value<eccmodeVal,eccmodeVal::v001> v001{};
            constexpr MPL::Value<eccmodeVal,eccmodeVal::v010> v010{};
            constexpr MPL::Value<eccmodeVal,eccmodeVal::v011> v011{};
            constexpr MPL::Value<eccmodeVal,eccmodeVal::v100> v100{};
            constexpr MPL::Value<eccmodeVal,eccmodeVal::v101> v101{};
            constexpr MPL::Value<eccmodeVal,eccmodeVal::v110> v110{};
            constexpr MPL::Value<eccmodeVal,eccmodeVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,eccmodeVal> eccmode{}; 
        ///no description available
        enum class dmareqVal {
            v0=0x00000000,     ///<Do not transfer sector after ECC done
            v1=0x00000001,     ///<After ECC done, transfer sector using DMA
        };
        namespace dmareqValC{
            constexpr MPL::Value<dmareqVal,dmareqVal::v0> v0{};
            constexpr MPL::Value<dmareqVal,dmareqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dmareqVal> dmareq{}; 
        ///no description available
        enum class eccsramVal {
            v0=0x00000000,     ///<Do not write ECC status to SRAM
            v1=0x00000001,     ///<Write ECC status to SRAM
        };
        namespace eccsramValC{
            constexpr MPL::Value<eccsramVal,eccsramVal::v0> v0{};
            constexpr MPL::Value<eccsramVal,eccsramVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,eccsramVal> eccsram{}; 
        ///Byte address in SRAM where ECC status is written.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,22),Register::ReadWriteAccess,unsigned> eccad{}; 
        ///no description available
        enum class stopwerrVal {
            v0=0x00000000,     ///<No stop on write error
            v1=0x00000001,     ///<Auto-sequencer stops on a write error
        };
        namespace stopwerrValC{
            constexpr MPL::Value<stopwerrVal,stopwerrVal::v0> v0{};
            constexpr MPL::Value<stopwerrVal,stopwerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,stopwerrVal> stopwerr{}; 
    }
    namespace NfcDma2{    ///<DMA channel 2 address
        using Addr = Register::Address<0x400abf34,0x00000000,0,unsigned>;
        ///DMA channel 2 address. DMA channel 2 address, it is 8-byte aligned.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
    namespace NfcIsr{    ///<Interrupt status
        using Addr = Register::Address<0x400abf38,0x1001ffc0,0,unsigned>;
        ///DMA buffer number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> dmabn{}; 
        ///ECC buffer number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eccbn{}; 
        ///Residue buffer number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> resbn{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> idleclr{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> doneclr{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> werrclr{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> idleen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> doneen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> werren{}; 
        ///DMA engine busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> dmabusy{}; 
        ///ECC engine busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eccbusy{}; 
        ///Residue engine busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> resbusy{}; 
        ///Command busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cmdbusy{}; 
        ///Write error status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> werrns{}; 
        ///Command idle interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> idle{}; 
        ///Done interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> done{}; 
        ///Write error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> werr{}; 
    }
}
