#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40028000,0xffff90e8,0,unsigned>;
        ///Seed Initialization Enable. 
        enum class SinitenVal {
            disabled=0x00000000,     ///<Do not initialize the CRC module to the value set by the SEED bit.
            enabled=0x00000001,     ///<Initialize the CRC module to the value set by the SEED bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SinitenVal> siniten{}; 
        namespace SinitenValC{
            constexpr Register::FieldValue<decltype(siniten)::Type,SinitenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(siniten)::Type,SinitenVal::enabled> enabled{};
        }
        }
        ///Seed Setting. 
        enum class SeedVal {
            allZeroes=0x00000000,     ///<CRC seed value is all 0's (0x00000000)
            allOnes=0x00000001,     ///<CRC seed value is all 1's (0xFFFFFFFF).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SeedVal> seed{}; 
        namespace SeedValC{
            constexpr Register::FieldValue<decltype(seed)::Type,SeedVal::allZeroes> allZeroes{};
            constexpr Register::FieldValue<decltype(seed)::Type,SeedVal::allOnes> allOnes{};
        }
        }
        ///CRC Enable. 
        enum class CrcenVal {
            disabled=0x00000000,     ///<Disable CRC operations.
            enabled=0x00000001,     ///<Enable CRC operations.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CrcenVal> crcen{}; 
        namespace CrcenValC{
            constexpr Register::FieldValue<decltype(crcen)::Type,CrcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crcen)::Type,CrcenVal::enabled> enabled{};
        }
        }
        ///Polynomial Selection. 
        enum class PolyselVal {
            crc32Fixed=0x00000000,     ///<Select the fixed 32-bit polynomial: 0x04C11DB7.
            crc16Prog=0x00000001,     ///<Select the programmable 16-bit polynomial. The POLY register sets the polynomial coefficients.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PolyselVal> polysel{}; 
        namespace PolyselValC{
            constexpr Register::FieldValue<decltype(polysel)::Type,PolyselVal::crc32Fixed> crc32Fixed{};
            constexpr Register::FieldValue<decltype(polysel)::Type,PolyselVal::crc16Prog> crc16Prog{};
        }
        }
        ///Byte Mode Enable. 
        enum class BmdenVal {
            disabled=0x00000000,     ///<Disable byte mode (word/byte width is determined automatically by the hardware).
            enabled=0x00000001,     ///<Enable byte mode (all writes are considered as bytes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,BmdenVal> bmden{}; 
        namespace BmdenValC{
            constexpr Register::FieldValue<decltype(bmden)::Type,BmdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bmden)::Type,BmdenVal::enabled> enabled{};
        }
        }
        ///Byte-Level Bit Reversal Enable. 
        enum class BbrenVal {
            disabled=0x00000000,     ///<No byte-level bit reversal (input is same order as written).
            enabled=0x00000001,     ///<Byte-level bit reversal enabled (the bits in each byte are reversed).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,BbrenVal> bbren{}; 
        namespace BbrenValC{
            constexpr Register::FieldValue<decltype(bbren)::Type,BbrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bbren)::Type,BbrenVal::enabled> enabled{};
        }
        }
        ///Input Processing Order. 
        enum class OrderVal {
            noReorder=0x00000000,     ///<No byte reorientation (output is same order as input).
            bigEndian16=0x00000001,     ///<Swap for 16-bit big endian order (input: B3 B2 B1 B0, output: B2 B3 B0 B1).
            bigEndian32=0x00000002,     ///<Swap for 32-bit big endian order (input: B3 B2 B1 B0, output: B0 B1 B2 B3).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,OrderVal> order{}; 
        namespace OrderValC{
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::noReorder> noReorder{};
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::bigEndian16> bigEndian16{};
            constexpr Register::FieldValue<decltype(order)::Type,OrderVal::bigEndian32> bigEndian32{};
        }
        }
        ///Automatic Seed Enable. 
        enum class AseedenVal {
            disabled=0x00000000,     ///<Disable automatic seeding.
            enabled=0x00000001,     ///<Enable automatic seeding. Reading the byte of the DATA register selected by ASEEDSEL re-seeds the CRC result with the setting selected by SEED.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AseedenVal> aseeden{}; 
        namespace AseedenValC{
            constexpr Register::FieldValue<decltype(aseeden)::Type,AseedenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(aseeden)::Type,AseedenVal::enabled> enabled{};
        }
        }
        ///Automatic Seed Byte Select. 
        enum class AseedselVal {
            lsbRead=0x00000000,     ///<Select a read of the least-significant byte ([7:0]) of DATA, RDATA or BRDATA for automatic re-seeding.
            msbRead=0x00000001,     ///<Select a read of the most-significant byte [31:24] for 32-bit operations, and [15:8] for 16-bit operations) of DATA, RDATA or BRDATA for automatic re-seeding.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,AseedselVal> aseedsel{}; 
        namespace AseedselValC{
            constexpr Register::FieldValue<decltype(aseedsel)::Type,AseedselVal::lsbRead> lsbRead{};
            constexpr Register::FieldValue<decltype(aseedsel)::Type,AseedselVal::msbRead> msbRead{};
        }
        }
    }
    namespace Nonepoly{    ///<16-bit Programmable Polynomial
        using Addr = Register::Address<0x40028010,0xffff0000,0,unsigned>;
        ///16-bit Programmable Polynomial. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> poly{}; 
    }
    namespace Nonedata{    ///<Input/Result Data
        using Addr = Register::Address<0x40028020,0x00000000,0,unsigned>;
        ///Input/Result Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonerdata{    ///<Bit-Reversed Output Data
        using Addr = Register::Address<0x40028030,0x00000000,0,unsigned>;
        ///Bit-Reversed Output Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace Nonebrdata{    ///<Byte-Reversed Output Data
        using Addr = Register::Address<0x40028040,0x00000000,0,unsigned>;
        ///Byte-Reversed Output Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> brdata{}; 
    }
    namespace Nonescontrol{    ///<Bus Snooping Control
        using Addr = Register::Address<0x40028050,0xf003ff0c,0,unsigned>;
        ///Snooping Enable. 
        enum class SenVal {
            disabled=0x00000000,     ///<Disable automatic bus snooping.
            enabled=0x00000001,     ///<Enable automatic bus snooping.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SenVal> sen{}; 
        namespace SenValC{
            constexpr Register::FieldValue<decltype(sen)::Type,SenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sen)::Type,SenVal::enabled> enabled{};
        }
        }
        ///Snooping Direction Select. 
        enum class SdirselVal {
            writes=0x00000000,     ///<ECRC will snoop writes to the selected peripheral.
            reads=0x00000001,     ///<ECRC will snoop reads from the selected peripheral.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SdirselVal> sdirsel{}; 
        namespace SdirselValC{
            constexpr Register::FieldValue<decltype(sdirsel)::Type,SdirselVal::writes> writes{};
            constexpr Register::FieldValue<decltype(sdirsel)::Type,SdirselVal::reads> reads{};
        }
        }
        ///Snooping Peripheral Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> sperisel{}; 
        ///Snooping Address. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,18),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
}
