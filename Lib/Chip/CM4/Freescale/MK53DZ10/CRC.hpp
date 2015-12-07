#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Cyclic Redundancy Check
    namespace CrcCrc{    ///<CRC Data Register
        using Addr = Register::Address<0x40032000,0x00000000,0,unsigned>;
        ///CRC Low Lower Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        namespace LlValC{
        }
        ///CRC Low Upper Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lu{}; 
        namespace LuValC{
        }
        ///CRC High Lower Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        namespace HlValC{
        }
        ///CRC High Upper Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hu{}; 
        namespace HuValC{
        }
    }
    namespace CrcCrcl{    ///<CRC_CRCL register.
        using Addr = Register::Address<0x40032000,0xffff0000,0,unsigned>;
        ///CRCL stores the lower 16 bits of the 16/32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crcl{}; 
        namespace CrclValC{
        }
    }
    namespace CrcCrcll{    ///<CRC_CRCLL register.
        using Addr = Register::Address<0x40032000,0xffffff00,0,unsigned char>;
        ///CRCLL stores the first 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> crcll{}; 
        namespace CrcllValC{
        }
    }
    namespace CrcCrclu{    ///<CRC_CRCLU register.
        using Addr = Register::Address<0x40032001,0xffffff00,0,unsigned char>;
        ///CRCLL stores the second 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> crclu{}; 
        namespace CrcluValC{
        }
    }
    namespace CrcCrch{    ///<CRC_CRCH register.
        using Addr = Register::Address<0x40032002,0xffff0000,0,unsigned>;
        ///CRCH stores the high 16 bits of the 16/32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> crch{}; 
        namespace CrchValC{
        }
    }
    namespace CrcCrchl{    ///<CRC_CRCHL register.
        using Addr = Register::Address<0x40032002,0xffffff00,0,unsigned char>;
        ///CRCHL stores the third 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> crchl{}; 
        namespace CrchlValC{
        }
    }
    namespace CrcCrchu{    ///<CRC_CRCHU register.
        using Addr = Register::Address<0x40032003,0xffffff00,0,unsigned char>;
        ///CRCHU stores the fourth 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> crchu{}; 
        namespace CrchuValC{
        }
    }
    namespace CrcGpoly{    ///<CRC Polynomial Register
        using Addr = Register::Address<0x40032004,0x00000000,0,unsigned>;
        ///Low polynominal half-word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> low{}; 
        namespace LowValC{
        }
        ///High polynominal half-word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> high{}; 
        namespace HighValC{
        }
    }
    namespace CrcGpolyl{    ///<CRC_GPOLYL register.
        using Addr = Register::Address<0x40032004,0xffff0000,0,unsigned>;
        ///POLYL stores the lower 16 bits of the 16/32 bit CRC polynomial value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpolyl{}; 
        namespace GpolylValC{
        }
    }
    namespace CrcGpolyll{    ///<CRC_GPOLYLL register.
        using Addr = Register::Address<0x40032004,0xffffff00,0,unsigned char>;
        ///POLYLL stores the first 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolyll{}; 
        namespace GpolyllValC{
        }
    }
    namespace CrcGpolylu{    ///<CRC_GPOLYLU register.
        using Addr = Register::Address<0x40032005,0xffffff00,0,unsigned char>;
        ///POLYLL stores the second 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolylu{}; 
        namespace GpolyluValC{
        }
    }
    namespace CrcGpolyh{    ///<CRC_GPOLYH register.
        using Addr = Register::Address<0x40032006,0xffff0000,0,unsigned>;
        ///POLYH stores the high 16 bits of the 16/32 bit CRC polynomial value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpolyh{}; 
        namespace GpolyhValC{
        }
    }
    namespace CrcGpolyhl{    ///<CRC_GPOLYHL register.
        using Addr = Register::Address<0x40032006,0xffffff00,0,unsigned char>;
        ///POLYHL stores the third 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolyhl{}; 
        namespace GpolyhlValC{
        }
    }
    namespace CrcGpolyhu{    ///<CRC_GPOLYHU register.
        using Addr = Register::Address<0x40032007,0xffffff00,0,unsigned char>;
        ///POLYHU stores the fourth 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolyhu{}; 
        namespace GpolyhuValC{
        }
    }
    namespace CrcCtrl{    ///<CRC Control Register
        using Addr = Register::Address<0x40032008,0x08ffffff,0,unsigned>;
        ///no description available
        enum class TcrcVal {
            v0=0x00000000,     ///<16-bit CRC protocol.
            v1=0x00000001,     ///<32-bit CRC protocol.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,TcrcVal> tcrc{}; 
        namespace TcrcValC{
            constexpr Register::FieldValue<decltype(tcrc),TcrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcrc),TcrcVal::v1> v1{};
        }
        ///Write CRC data register as seed
        enum class WasVal {
            v0=0x00000000,     ///<Writes to the CRC data register are data values.
            v1=0x00000001,     ///<Writes to the CRC data register are seed values.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,WasVal> was{}; 
        namespace WasValC{
            constexpr Register::FieldValue<decltype(was),WasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(was),WasVal::v1> v1{};
        }
        ///Complement Read of CRC data register
        enum class FxorVal {
            v0=0x00000000,     ///<No XOR on reading.
            v1=0x00000001,     ///<Invert or complement the read value of the CRC data register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,FxorVal> fxor{}; 
        namespace FxorValC{
            constexpr Register::FieldValue<decltype(fxor),FxorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fxor),FxorVal::v1> v1{};
        }
        ///Type of Transpose for Read
        enum class TotrVal {
            v00=0x00000000,     ///<No transposition.
            v01=0x00000001,     ///<Bits in bytes are transposed; bytes are not transposed.
            v10=0x00000002,     ///<Both bits in bytes and bytes are transposed.
            v11=0x00000003,     ///<Only bytes are transposed; no bits in a byte are transposed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,TotrVal> totr{}; 
        namespace TotrValC{
            constexpr Register::FieldValue<decltype(totr),TotrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(totr),TotrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(totr),TotrVal::v10> v10{};
            constexpr Register::FieldValue<decltype(totr),TotrVal::v11> v11{};
        }
        ///Type of Transpose for Writes
        enum class TotVal {
            v00=0x00000000,     ///<No transposition.
            v01=0x00000001,     ///<Bits in bytes are transposed; bytes are not transposed.
            v10=0x00000002,     ///<Both bits in bytes and bytes are transposed.
            v11=0x00000003,     ///<Only bytes are transposed; no bits in a byte are transposed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,TotVal> tot{}; 
        namespace TotValC{
            constexpr Register::FieldValue<decltype(tot),TotVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tot),TotVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tot),TotVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tot),TotVal::v11> v11{};
        }
    }
    namespace CrcCtrlhu{    ///<CRC_CTRLHU register.
        using Addr = Register::Address<0x4003200b,0xffffff08,0,unsigned char>;
        ///no description available
        enum class TcrcVal {
            v0=0x00000000,     ///<16-bit CRC protocol.
            v1=0x00000001,     ///<32-bit CRC protocol.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TcrcVal> tcrc{}; 
        namespace TcrcValC{
            constexpr Register::FieldValue<decltype(tcrc),TcrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcrc),TcrcVal::v1> v1{};
        }
        ///no description available
        enum class WasVal {
            v0=0x00000000,     ///<Writes to CRC data register are data values.
            v1=0x00000001,     ///<Writes to CRC data reguster are seed values.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WasVal> was{}; 
        namespace WasValC{
            constexpr Register::FieldValue<decltype(was),WasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(was),WasVal::v1> v1{};
        }
        ///no description available
        enum class FxorVal {
            v0=0x00000000,     ///<No XOR on reading.
            v1=0x00000001,     ///<Invert or complement the read value of CRC data register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FxorVal> fxor{}; 
        namespace FxorValC{
            constexpr Register::FieldValue<decltype(fxor),FxorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fxor),FxorVal::v1> v1{};
        }
        ///no description available
        enum class TotrVal {
            v00=0x00000000,     ///<No Transposition.
            v01=0x00000001,     ///<Bits in bytes are transposed, bytes are not transposed.
            v10=0x00000002,     ///<Both bits in bytes and bytes are transposed.
            v11=0x00000003,     ///<Only bytes are transposed; no bits in a byte are transposed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,TotrVal> totr{}; 
        namespace TotrValC{
            constexpr Register::FieldValue<decltype(totr),TotrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(totr),TotrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(totr),TotrVal::v10> v10{};
            constexpr Register::FieldValue<decltype(totr),TotrVal::v11> v11{};
        }
        ///no description available
        enum class TotVal {
            v00=0x00000000,     ///<No Transposition.
            v01=0x00000001,     ///<Bits in bytes are transposed, bytes are not transposed.
            v10=0x00000002,     ///<Both bits in bytes and bytes are transposed.
            v11=0x00000003,     ///<Only bytes are transposed; no bits in a byte are transposed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TotVal> tot{}; 
        namespace TotValC{
            constexpr Register::FieldValue<decltype(tot),TotVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tot),TotVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tot),TotVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tot),TotVal::v11> v11{};
        }
    }
}
