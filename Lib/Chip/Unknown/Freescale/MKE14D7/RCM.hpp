#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Reset control module
    namespace RcmSrsl{    ///<RCM System Reset Status Low Register
        using Addr = Register::Address<0x40057000,0xffffff00,0x00000000,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Low Voltage Detect
        enum class LvdVal {
            v0=0x00000000,     ///<Reset not caused by LVD trip or POR.
            v1=0x00000001,     ///<Reset caused by LVD trip or POR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LvdVal> lvd{}; 
        namespace LvdValC{
            constexpr Register::FieldValue<decltype(lvd)::Type,LvdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvd)::Type,LvdVal::v1> v1{};
        }
        ///Loss Of Clock Reset
        enum class LocVal {
            v0=0x00000000,     ///<Reset not caused by Watchdog Reset.
            v1=0x00000001,     ///<Reset caused by loss of external clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LocVal> loc{}; 
        namespace LocValC{
            constexpr Register::FieldValue<decltype(loc)::Type,LocVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loc)::Type,LocVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///COP Watchdog Reset
        enum class CopVal {
            v0=0x00000000,     ///<Reset not caused by Watchdog Reset.
            v1=0x00000001,     ///<Reset caused by Watchdog Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CopVal> cop{}; 
        namespace CopValC{
            constexpr Register::FieldValue<decltype(cop)::Type,CopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cop)::Type,CopVal::v1> v1{};
        }
        ///External RESETb Pin
        enum class PinVal {
            v0=0x00000000,     ///<Reset not caused by external RESETb pin.
            v1=0x00000001,     ///<Reset caused by external RESETb pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PinVal> pin{}; 
        namespace PinValC{
            constexpr Register::FieldValue<decltype(pin)::Type,PinVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pin)::Type,PinVal::v1> v1{};
        }
        ///Power On Reset
        enum class PorVal {
            v0=0x00000000,     ///<Reset not caused by POR.
            v1=0x00000001,     ///<Reset caused by POR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PorVal> por{}; 
        namespace PorValC{
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(por)::Type,PorVal::v1> v1{};
        }
    }
    namespace RcmSrsh{    ///<RCM System Reset Status High Register
        using Addr = Register::Address<0x40057001,0xffffff00,0x00000000,unsigned char>;
        ///JTAG Reset
        enum class JtagVal {
            v0=0x00000000,     ///<Reset not caused by JTAG.
            v1=0x00000001,     ///<Reset caused by JTAG.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,JtagVal> jtag{}; 
        namespace JtagValC{
            constexpr Register::FieldValue<decltype(jtag)::Type,JtagVal::v0> v0{};
            constexpr Register::FieldValue<decltype(jtag)::Type,JtagVal::v1> v1{};
        }
        ///CPU LOCKUP Reset
        enum class LockupVal {
            v0=0x00000000,     ///<Reset not caused by CPU LOCKUP.
            v1=0x00000001,     ///<Reset caused by CPU LOCKUP.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LockupVal> lockup{}; 
        namespace LockupValC{
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lockup)::Type,LockupVal::v1> v1{};
        }
        ///Software Reset
        enum class SwVal {
            v0=0x00000000,     ///<Reset not caused by Software Reset.
            v1=0x00000001,     ///<Reset caused by Software Reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SwVal> sw{}; 
        namespace SwValC{
            constexpr Register::FieldValue<decltype(sw)::Type,SwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sw)::Type,SwVal::v1> v1{};
        }
        ///MDM-AP system reset request
        enum class MdmapVal {
            v0=0x00000000,     ///<Reset not caused by MDM-AP request.
            v1=0x00000001,     ///<Reset caused by MDM-AP request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,MdmapVal> mdmap{}; 
        namespace MdmapValC{
            constexpr Register::FieldValue<decltype(mdmap)::Type,MdmapVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mdmap)::Type,MdmapVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Stop Mode Acknowledge Error Reset
        enum class SackerrVal {
            v0=0x00000000,     ///<Reset not caused by peripheral failure to acknowledge attempt to enter stop mode.
            v1=0x00000001,     ///<Reset caused by peripheral failure to acknowledge attempt to enter stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,SackerrVal> sackerr{}; 
        namespace SackerrValC{
            constexpr Register::FieldValue<decltype(sackerr)::Type,SackerrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sackerr)::Type,SackerrVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace RcmRpfc{    ///<RCM RESETb Pin Filter Control Register
        using Addr = Register::Address<0x40057004,0xffffff00,0x00000000,unsigned char>;
        ///Reset Pin Filter Select in Run and Wait Modes
        enum class RstfltsrwVal {
            v00=0x00000000,     ///<All filtering disabled.
            v01=0x00000001,     ///<Bus Clock filter enabled.
            v10=0x00000002,     ///<LPO clock filter enabled.
            v11=0x00000003,     ///<All filtering disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RstfltsrwVal> rstfltsrw{}; 
        namespace RstfltsrwValC{
            constexpr Register::FieldValue<decltype(rstfltsrw)::Type,RstfltsrwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rstfltsrw)::Type,RstfltsrwVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rstfltsrw)::Type,RstfltsrwVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rstfltsrw)::Type,RstfltsrwVal::v11> v11{};
        }
        ///Reset Pin Filter Select in Stop Modes
        enum class RstfltssVal {
            v0=0x00000000,     ///<All filtering disabled.
            v1=0x00000001,     ///<LPO clock filter enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RstfltssVal> rstfltss{}; 
        namespace RstfltssValC{
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace RcmRpfw{    ///<RCM RESETb Pin Filter Width Register
        using Addr = Register::Address<0x40057005,0xffffff00,0x00000000,unsigned char>;
        ///RESETb Pin bus clock filter width
        enum class RstfltssVal {
            v00000=0x00000000,     ///<Bus Clock Filter Width is 1.
            v00001=0x00000001,     ///<Bus Clock Filter Width is 2.
            v00010=0x00000002,     ///<Bus Clock Filter Width is 3.
            v00011=0x00000003,     ///<Bus Clock Filter Width is 4.
            v00100=0x00000004,     ///<Bus Clock Filter Width is 5.
            v00101=0x00000005,     ///<Bus Clock Filter Width is 6.
            v00110=0x00000006,     ///<Bus Clock Filter Width is 7.
            v00111=0x00000007,     ///<Bus Clock Filter Width is 8.
            v01000=0x00000008,     ///<Bus Clock Filter Width is 9.
            v01001=0x00000009,     ///<Bus Clock Filter Width is 10.
            v01010=0x0000000a,     ///<Bus Clock Filter Width is 11.
            v01011=0x0000000b,     ///<Bus Clock Filter Width is 12.
            v01100=0x0000000c,     ///<Bus Clock Filter Width is 13.
            v01101=0x0000000d,     ///<Bus Clock Filter Width is 14.
            v01110=0x0000000e,     ///<Bus Clock Filter Width is 15.
            v01111=0x0000000f,     ///<Bus Clock Filter Width is 16.
            v10000=0x00000010,     ///<Bus Clock Filter Width is 17.
            v10001=0x00000011,     ///<Bus Clock Filter Width is 18.
            v10010=0x00000012,     ///<Bus Clock Filter Width is 19.
            v10011=0x00000013,     ///<Bus Clock Filter Width is 20.
            v10100=0x00000014,     ///<Bus Clock Filter Width is 21.
            v10101=0x00000015,     ///<Bus Clock Filter Width is 22.
            v10110=0x00000016,     ///<Bus Clock Filter Width is 23.
            v10111=0x00000017,     ///<Bus Clock Filter Width is 24.
            v11000=0x00000018,     ///<Bus Clock Filter Width is 25.
            v11001=0x00000019,     ///<Bus Clock Filter Width is 26.
            v11010=0x0000001a,     ///<Bus Clock Filter Width is 27.
            v11011=0x0000001b,     ///<Bus Clock Filter Width is 28.
            v11100=0x0000001c,     ///<Bus Clock Filter Width is 29.
            v11101=0x0000001d,     ///<Bus Clock Filter Width is 30.
            v11110=0x0000001e,     ///<Bus Clock Filter Width is 31.
            v11111=0x0000001f,     ///<Bus Clock Filter Width is 32.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,RstfltssVal> rstfltss{}; 
        namespace RstfltssValC{
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v00000> v00000{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v00001> v00001{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v00010> v00010{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v00011> v00011{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v00100> v00100{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v00101> v00101{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v00110> v00110{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v00111> v00111{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v01000> v01000{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v01001> v01001{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v01010> v01010{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v01011> v01011{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v01100> v01100{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v01101> v01101{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v01110> v01110{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v01111> v01111{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v10001> v10001{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v10010> v10010{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v10011> v10011{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v10100> v10100{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v10101> v10101{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v10110> v10110{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v10111> v10111{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v11000> v11000{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v11001> v11001{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v11010> v11010{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v11011> v11011{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v11100> v11100{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v11101> v11101{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v11110> v11110{};
            constexpr Register::FieldValue<decltype(rstfltss)::Type,RstfltssVal::v11111> v11111{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
}
