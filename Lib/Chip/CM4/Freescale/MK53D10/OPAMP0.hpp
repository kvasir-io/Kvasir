#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Operational Amplifier
    namespace Opamp0C0{    ///<Control Register 0
        using Addr = Register::Address<0x400f5000,0xffffff3c,0x00000000,unsigned char>;
        ///OPAMP Mode Select
        enum class ModeVal {
            v00=0x00000000,     ///<Buffer
            v10=0x00000002,     ///<General-purpose
            v11=0x00000003,     ///<Programmable gain
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v11> v11{};
        }
        ///Low-Power Mode Enable
        enum class LpenVal {
            v0=0x00000000,     ///<High-Speed mode selected. In this mode, OPAMP has faster slew rate and unity gain bandwidth performance with higher current consumption.
            v1=0x00000001,     ///<Low-Power mode selected. In this mode, OPAMP has lower current consumption with slower slew rate and unity gain bandwidth performance.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LpenVal> lpen{}; 
        namespace LpenValC{
            constexpr Register::FieldValue<decltype(lpen)::Type,LpenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lpen)::Type,LpenVal::v1> v1{};
        }
        ///OPAMP Enable
        enum class EnVal {
            v0=0x00000000,     ///<OPAMP is disabled and not powered.
            v1=0x00000001,     ///<OPAMP is enabled and powered.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::v1> v1{};
        }
    }
    namespace Opamp0C1{    ///<Control Register 1
        using Addr = Register::Address<0x400f5001,0xffffffe0,0x00000000,unsigned char>;
        ///Gains Selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> ampri{}; 
        ///Gains Selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> amprf{}; 
    }
    namespace Opamp0C2{    ///<Control Register 2
        using Addr = Register::Address<0x400f5002,0xffffff88,0x00000000,unsigned char>;
        ///Amplifier Negative Input Terminal Selector
        enum class AmpnselVal {
            v000=0x00000000,     ///<Negative input 0
            v001=0x00000001,     ///<Negative input 1
            v010=0x00000002,     ///<Negative input 2
            v011=0x00000003,     ///<Negative input 3
            v100=0x00000004,     ///<Negative input 4
            v101=0x00000005,     ///<Negative input 5
            v110=0x00000006,     ///<Negative input 6
            v111=0x00000007,     ///<Negative input 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AmpnselVal> ampnsel{}; 
        namespace AmpnselValC{
            constexpr Register::FieldValue<decltype(ampnsel)::Type,AmpnselVal::v000> v000{};
            constexpr Register::FieldValue<decltype(ampnsel)::Type,AmpnselVal::v001> v001{};
            constexpr Register::FieldValue<decltype(ampnsel)::Type,AmpnselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(ampnsel)::Type,AmpnselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(ampnsel)::Type,AmpnselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(ampnsel)::Type,AmpnselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(ampnsel)::Type,AmpnselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(ampnsel)::Type,AmpnselVal::v111> v111{};
        }
        ///Amplifier Positive Input Terminal Selector
        enum class AmppselVal {
            v000=0x00000000,     ///<Positive input 0
            v001=0x00000001,     ///<Positive input 1
            v010=0x00000002,     ///<Positive input 2
            v011=0x00000003,     ///<Positive input 3
            v100=0x00000004,     ///<Positive input 4
            v101=0x00000005,     ///<Positive input 5
            v110=0x00000006,     ///<Positive input 6
            v111=0x00000007,     ///<Positive input 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,AmppselVal> amppsel{}; 
        namespace AmppselValC{
            constexpr Register::FieldValue<decltype(amppsel)::Type,AmppselVal::v000> v000{};
            constexpr Register::FieldValue<decltype(amppsel)::Type,AmppselVal::v001> v001{};
            constexpr Register::FieldValue<decltype(amppsel)::Type,AmppselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(amppsel)::Type,AmppselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(amppsel)::Type,AmppselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(amppsel)::Type,AmppselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(amppsel)::Type,AmppselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(amppsel)::Type,AmppselVal::v111> v111{};
        }
    }
}
