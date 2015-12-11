#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Cyclic Redundancy Check
    namespace CrcData{    ///<CRC Data register
        using Addr = Register::Address<0x40032000,0x00000000,0,unsigned>;
        ///CRC Low Lower Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ll{}; 
        ///CRC Low Upper Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> lu{}; 
        ///CRC High Lower Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> hl{}; 
        ///CRC High Upper Byte
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hu{}; 
    }
    namespace CrcDatal{    ///<CRC_DATAL register.
        using Addr = Register::Address<0x40032000,0xffff0000,0,unsigned>;
        ///DATAL stores the lower 16 bits of the 16/32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> datal{}; 
    }
    namespace CrcDatall{    ///<CRC_DATALL register.
        using Addr = Register::Address<0x40032000,0xffffff00,0,unsigned char>;
        ///CRCLL stores the first 8 bits of the 32 bit DATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> datall{}; 
    }
    namespace CrcDatalu{    ///<CRC_DATALU register.
        using Addr = Register::Address<0x40032001,0xffffff00,0,unsigned char>;
        ///DATALL stores the second 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> datalu{}; 
    }
    namespace CrcDatah{    ///<CRC_DATAH register.
        using Addr = Register::Address<0x40032002,0xffff0000,0,unsigned>;
        ///DATAH stores the high 16 bits of the 16/32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> datah{}; 
    }
    namespace CrcDatahl{    ///<CRC_DATAHL register.
        using Addr = Register::Address<0x40032002,0xffffff00,0,unsigned char>;
        ///DATAHL stores the third 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> datahl{}; 
    }
    namespace CrcDatahu{    ///<CRC_DATAHU register.
        using Addr = Register::Address<0x40032003,0xffffff00,0,unsigned char>;
        ///DATAHU stores the fourth 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> datahu{}; 
    }
    namespace CrcGpoly{    ///<CRC Polynomial register
        using Addr = Register::Address<0x40032004,0x00000000,0,unsigned>;
        ///Low Polynominal Half-word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> low{}; 
        ///High Polynominal Half-word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> high{}; 
    }
    namespace CrcGpolyl{    ///<CRC_GPOLYL register.
        using Addr = Register::Address<0x40032004,0xffff0000,0,unsigned>;
        ///POLYL stores the lower 16 bits of the 16/32 bit CRC polynomial value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpolyl{}; 
    }
    namespace CrcGpolyll{    ///<CRC_GPOLYLL register.
        using Addr = Register::Address<0x40032004,0xffffff00,0,unsigned char>;
        ///POLYLL stores the first 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolyll{}; 
    }
    namespace CrcGpolylu{    ///<CRC_GPOLYLU register.
        using Addr = Register::Address<0x40032005,0xffffff00,0,unsigned char>;
        ///POLYLL stores the second 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolylu{}; 
    }
    namespace CrcGpolyh{    ///<CRC_GPOLYH register.
        using Addr = Register::Address<0x40032006,0xffff0000,0,unsigned>;
        ///POLYH stores the high 16 bits of the 16/32 bit CRC polynomial value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpolyh{}; 
    }
    namespace CrcGpolyhl{    ///<CRC_GPOLYHL register.
        using Addr = Register::Address<0x40032006,0xffffff00,0,unsigned char>;
        ///POLYHL stores the third 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolyhl{}; 
    }
    namespace CrcGpolyhu{    ///<CRC_GPOLYHU register.
        using Addr = Register::Address<0x40032007,0xffffff00,0,unsigned char>;
        ///POLYHU stores the fourth 8 bits of the 32 bit CRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpolyhu{}; 
    }
    namespace CrcCtrl{    ///<CRC Control register
        using Addr = Register::Address<0x40032008,0x08ffffff,0,unsigned>;
        ///no description available
        enum class TcrcVal {
            v0=0x00000000,     ///<16-bit CRC protocol.
            v1=0x00000001,     ///<32-bit CRC protocol.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,TcrcVal> tcrc{}; 
        namespace TcrcValC{
            constexpr Register::FieldValue<decltype(tcrc)::Type,TcrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcrc)::Type,TcrcVal::v1> v1{};
        }
        ///Write CRC Data Register As Seed
        enum class WasVal {
            v0=0x00000000,     ///<Writes to the CRC data register are data values.
            v1=0x00000001,     ///<Writes to the CRC data register are seed values.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,WasVal> was{}; 
        namespace WasValC{
            constexpr Register::FieldValue<decltype(was)::Type,WasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(was)::Type,WasVal::v1> v1{};
        }
        ///Complement Read Of CRC Data Register
        enum class FxorVal {
            v0=0x00000000,     ///<No XOR on reading.
            v1=0x00000001,     ///<Invert or complement the read value of the CRC Data register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,FxorVal> fxor{}; 
        namespace FxorValC{
            constexpr Register::FieldValue<decltype(fxor)::Type,FxorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fxor)::Type,FxorVal::v1> v1{};
        }
        ///Type Of Transpose For Read
        enum class TotrVal {
            v00=0x00000000,     ///<No transposition.
            v01=0x00000001,     ///<Bits in bytes are transposed; bytes are not transposed.
            v10=0x00000002,     ///<Both bits in bytes and bytes are transposed.
            v11=0x00000003,     ///<Only bytes are transposed; no bits in a byte are transposed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,TotrVal> totr{}; 
        namespace TotrValC{
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v10> v10{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v11> v11{};
        }
        ///Type Of Transpose For Writes
        enum class TotVal {
            v00=0x00000000,     ///<No transposition.
            v01=0x00000001,     ///<Bits in bytes are transposed; bytes are not transposed.
            v10=0x00000002,     ///<Both bits in bytes and bytes are transposed.
            v11=0x00000003,     ///<Only bytes are transposed; no bits in a byte are transposed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,TotVal> tot{}; 
        namespace TotValC{
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v11> v11{};
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
            constexpr Register::FieldValue<decltype(tcrc)::Type,TcrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcrc)::Type,TcrcVal::v1> v1{};
        }
        ///no description available
        enum class WasVal {
            v0=0x00000000,     ///<Writes to CRC data register are data values.
            v1=0x00000001,     ///<Writes to CRC data reguster are seed values.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WasVal> was{}; 
        namespace WasValC{
            constexpr Register::FieldValue<decltype(was)::Type,WasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(was)::Type,WasVal::v1> v1{};
        }
        ///no description available
        enum class FxorVal {
            v0=0x00000000,     ///<No XOR on reading.
            v1=0x00000001,     ///<Invert or complement the read value of CRC data register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FxorVal> fxor{}; 
        namespace FxorValC{
            constexpr Register::FieldValue<decltype(fxor)::Type,FxorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fxor)::Type,FxorVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v10> v10{};
            constexpr Register::FieldValue<decltype(totr)::Type,TotrVal::v11> v11{};
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
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v00> v00{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v01> v01{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v10> v10{};
            constexpr Register::FieldValue<decltype(tot)::Type,TotVal::v11> v11{};
        }
    }
}
