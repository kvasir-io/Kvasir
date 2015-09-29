#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40028000,0xfffff0c8,0,unsigned>;
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
            crc3204c11db7=0x00000000,     ///<Select 32-bit polynomial: 0x04C11DB7.
            crc161021=0x00000001,     ///<Select 16-bit polynomial: 0x1021.
            crc163d65=0x00000002,     ///<Select 16-bit polynomial: 0x3D65.
            crc168005=0x00000003,     ///<Select 16-bit polynomial: 0x8005.
        };
        namespace polyselValC{
            constexpr MPL::Value<polyselVal,polyselVal::crc3204c11db7> crc3204c11db7{};
            constexpr MPL::Value<polyselVal,polyselVal::crc161021> crc161021{};
            constexpr MPL::Value<polyselVal,polyselVal::crc163d65> crc163d65{};
            constexpr MPL::Value<polyselVal,polyselVal::crc168005> crc168005{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,polyselVal> polysel{}; 
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
    }
    namespace Nonedata{    ///<Input/Result Data
        using Addr = Register::Address<0x40028010,0x00000000,0,unsigned>;
        ///Input/Result Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace Nonerdata{    ///<Bit-Reversed Output Data
        using Addr = Register::Address<0x40028020,0x00000000,0,unsigned>;
        ///Bit-Reversed Output Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdata{}; 
    }
}
