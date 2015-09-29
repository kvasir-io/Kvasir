#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40028000,0xffff90e8,0,unsigned>;
        ///Seed Initialization Enable. 
        enum class sinitenVal {
            disabled=0x00000000,     ///<Do not initialize the CRC module to the value set by the SEED bit.
            enabled=0x00000001,     ///<Initialize the CRC module to the value set by the SEED bit.
        };
        namespace sinitenValC{
            constexpr MPL::Value<sinitenVal,sinitenVal::disabled> disabled{};
            constexpr MPL::Value<sinitenVal,sinitenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sinitenVal> siniten{}; 
        ///Seed Setting. 
        enum class seedVal {
            allZeroes=0x00000000,     ///<CRC seed value is all 0's (0x00000000)
            allOnes=0x00000001,     ///<CRC seed value is all 1's (0xFFFFFFFF).
        };
        namespace seedValC{
            constexpr MPL::Value<seedVal,seedVal::allZeroes> allZeroes{};
            constexpr MPL::Value<seedVal,seedVal::allOnes> allOnes{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,seedVal> seed{}; 
        ///CRC Enable. 
        enum class crcenVal {
            disabled=0x00000000,     ///<Disable CRC operations.
            enabled=0x00000001,     ///<Enable CRC operations.
        };
        namespace crcenValC{
            constexpr MPL::Value<crcenVal,crcenVal::disabled> disabled{};
            constexpr MPL::Value<crcenVal,crcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,crcenVal> crcen{}; 
        ///Polynomial Selection. 
        enum class polyselVal {
            crc32Fixed=0x00000000,     ///<Select the fixed 32-bit polynomial: 0x04C11DB7.
            crc16Prog=0x00000001,     ///<Select the programmable 16-bit polynomial. The POLY register sets the polynomial coefficients.
        };
        namespace polyselValC{
            constexpr MPL::Value<polyselVal,polyselVal::crc32Fixed> crc32Fixed{};
            constexpr MPL::Value<polyselVal,polyselVal::crc16Prog> crc16Prog{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,polyselVal> polysel{}; 
        ///Byte Mode Enable. 
        enum class bmdenVal {
            disabled=0x00000000,     ///<Disable byte mode (word/byte width is determined automatically by the hardware).
            enabled=0x00000001,     ///<Enable byte mode (all writes are considered as bytes).
        };
        namespace bmdenValC{
            constexpr MPL::Value<bmdenVal,bmdenVal::disabled> disabled{};
            constexpr MPL::Value<bmdenVal,bmdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,bmdenVal> bmden{}; 
        ///Byte-Level Bit Reversal Enable. 
        enum class bbrenVal {
            disabled=0x00000000,     ///<No byte-level bit reversal (input is same order as written).
            enabled=0x00000001,     ///<Byte-level bit reversal enabled (the bits in each byte are reversed).
        };
        namespace bbrenValC{
            constexpr MPL::Value<bbrenVal,bbrenVal::disabled> disabled{};
            constexpr MPL::Value<bbrenVal,bbrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,bbrenVal> bbren{}; 
        ///Input Processing Order. 
        enum class orderVal {
            noReorder=0x00000000,     ///<No byte reorientation (output is same order as input).
            bigEndian16=0x00000001,     ///<Swap for 16-bit big endian order (input: B3 B2 B1 B0, output: B2 B3 B0 B1).
            bigEndian32=0x00000002,     ///<Swap for 32-bit big endian order (input: B3 B2 B1 B0, output: B0 B1 B2 B3).
        };
        namespace orderValC{
            constexpr MPL::Value<orderVal,orderVal::noReorder> noReorder{};
            constexpr MPL::Value<orderVal,orderVal::bigEndian16> bigEndian16{};
            constexpr MPL::Value<orderVal,orderVal::bigEndian32> bigEndian32{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,orderVal> order{}; 
        ///Automatic Seed Enable. 
        enum class aseedenVal {
            disabled=0x00000000,     ///<Disable automatic seeding.
            enabled=0x00000001,     ///<Enable automatic seeding. Reading the byte of the DATA register selected by ASEEDSEL re-seeds the CRC result with the setting selected by SEED.
        };
        namespace aseedenValC{
            constexpr MPL::Value<aseedenVal,aseedenVal::disabled> disabled{};
            constexpr MPL::Value<aseedenVal,aseedenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,aseedenVal> aseeden{}; 
        ///Automatic Seed Byte Select. 
        enum class aseedselVal {
            lsbRead=0x00000000,     ///<Select a read of the least-significant byte ([7:0]) of DATA, RDATA or BRDATA for automatic re-seeding.
            msbRead=0x00000001,     ///<Select a read of the most-significant byte [31:24] for 32-bit operations, and [15:8] for 16-bit operations) of DATA, RDATA or BRDATA for automatic re-seeding.
        };
        namespace aseedselValC{
            constexpr MPL::Value<aseedselVal,aseedselVal::lsbRead> lsbRead{};
            constexpr MPL::Value<aseedselVal,aseedselVal::msbRead> msbRead{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,aseedselVal> aseedsel{}; 
    }
    namespace Nonepoly{    ///<16-bit Programmable Polynomial
        using Addr = Register::Address<0x40028010,0xffff0000,0,unsigned>;
        ///16-bit Programmable Polynomial. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> poly{}; 
    }
    namespace Nonedata{    ///<Input/Result Data
        using Addr = Register::Address<0x40028020,0x00000000,0,unsigned>;
        ///Input/Result Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonerdata{    ///<Bit-Reversed Output Data
        using Addr = Register::Address<0x40028030,0x00000000,0,unsigned>;
        ///Bit-Reversed Output Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
    namespace Nonebrdata{    ///<Byte-Reversed Output Data
        using Addr = Register::Address<0x40028040,0x00000000,0,unsigned>;
        ///Byte-Reversed Output Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> brdata{}; 
    }
    namespace Nonescontrol{    ///<Bus Snooping Control
        using Addr = Register::Address<0x40028050,0xf003ff0c,0,unsigned>;
        ///Snooping Enable. 
        enum class senVal {
            disabled=0x00000000,     ///<Disable automatic bus snooping.
            enabled=0x00000001,     ///<Enable automatic bus snooping.
        };
        namespace senValC{
            constexpr MPL::Value<senVal,senVal::disabled> disabled{};
            constexpr MPL::Value<senVal,senVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,senVal> sen{}; 
        ///Snooping Direction Select. 
        enum class sdirselVal {
            writes=0x00000000,     ///<ECRC will snoop writes to the selected peripheral.
            reads=0x00000001,     ///<ECRC will snoop reads from the selected peripheral.
        };
        namespace sdirselValC{
            constexpr MPL::Value<sdirselVal,sdirselVal::writes> writes{};
            constexpr MPL::Value<sdirselVal,sdirselVal::reads> reads{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,sdirselVal> sdirsel{}; 
        ///Snooping Peripheral Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> sperisel{}; 
        ///Snooping Address. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,18),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
}
