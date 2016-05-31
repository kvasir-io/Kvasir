#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Vreg0Control{    ///<Module Control
        using Addr = Register::Address<0x40040000,0x7ffffe1c,0x00000000,unsigned>;
        ///VBUS Valid Flag. 
        enum class VbusvldfVal {
            notSet=0x00000000,     ///<The current voltage on the VBUS pin is below the valid threshold.
            set=0x00000001,     ///<The current voltage on the VBUS pin is above the valid threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,VbusvldfVal> vbusvldf{}; 
        namespace VbusvldfValC{
            constexpr Register::FieldValue<decltype(vbusvldf)::Type,VbusvldfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(vbusvldf)::Type,VbusvldfVal::set> set{};
        }
        ///Voltage Regulator Suspend Enable. 
        enum class SusenVal {
            disabled=0x00000000,     ///<Disable regulator suspend mode.
            enabled=0x00000001,     ///<Enable regulator suspend mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SusenVal> susen{}; 
        namespace SusenValC{
            constexpr Register::FieldValue<decltype(susen)::Type,SusenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(susen)::Type,SusenVal::enabled> enabled{};
        }
        ///Band Gap Disable. 
        enum class BgdisVal {
            inactive=0x00000000,     ///<Enable the voltage regulator band gap.
            active=0x00000001,     ///<Disable the voltage regulator band gap.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BgdisVal> bgdis{}; 
        namespace BgdisValC{
            constexpr Register::FieldValue<decltype(bgdis)::Type,BgdisVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(bgdis)::Type,BgdisVal::active> active{};
        }
        ///VREGIN Sense Enable. 
        enum class SenseenVal {
            disabled=0x00000000,     ///<Disable VREGIN voltage sensing.
            enabled=0x00000001,     ///<Enable VREGIN voltage sensing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SenseenVal> senseen{}; 
        namespace SenseenValC{
            constexpr Register::FieldValue<decltype(senseen)::Type,SenseenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(senseen)::Type,SenseenVal::enabled> enabled{};
        }
        ///VBUS Invalid Interrupt Flag. 
        enum class VbusivldiVal {
            notSet=0x00000000,     ///<The voltage on the VBUS pin has not dropped below the valid threshold.
            set=0x00000001,     ///<The voltage on the VBUS pin dropped below the valid threshold since the last time this bit was cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,VbusivldiVal> vbusivldi{}; 
        namespace VbusivldiValC{
            constexpr Register::FieldValue<decltype(vbusivldi)::Type,VbusivldiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(vbusivldi)::Type,VbusivldiVal::set> set{};
        }
        ///VBUS Invalid Interrupt Enable. 
        enum class VbusivldienVal {
            disabled=0x00000000,     ///<Disable the VBUS invalid interrupt.
            enabled=0x00000001,     ///<Enable the VBUS invalid interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,VbusivldienVal> vbusivldien{}; 
        namespace VbusivldienValC{
            constexpr Register::FieldValue<decltype(vbusivldien)::Type,VbusivldienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbusivldien)::Type,VbusivldienVal::enabled> enabled{};
        }
        ///Voltage Regulator Disable. 
        enum class VregdisVal {
            inactive=0x00000000,     ///<Enable the voltage regulator.
            active=0x00000001,     ///<Disable the voltage regulator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,VregdisVal> vregdis{}; 
        namespace VregdisValC{
            constexpr Register::FieldValue<decltype(vregdis)::Type,VregdisVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(vregdis)::Type,VregdisVal::active> active{};
        }
    }
}
