#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Vmon0Control{    ///<Module Control
        using Addr = Register::Address<0x4002f000,0x7fffff20,0x00000000,unsigned>;
        ///VREGIN Supply Monitor Enable. 
        enum class VreginsenVal {
            disabled=0x00000000,     ///<Disable the VREGIN supply monitor.
            enabled=0x00000001,     ///<Enable the VREGIN supply monitor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,VreginsenVal> vreginsen{}; 
        namespace VreginsenValC{
            constexpr Register::FieldValue<decltype(vreginsen)::Type,VreginsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vreginsen)::Type,VreginsenVal::enabled> enabled{};
        }
        ///VREGIN Low Interrupt Flag. 
        enum class VreginliVal {
            vreginIsLow=0x00000000,     ///<VREGIN is not above the interrupt threshold.
            vreginIsOk=0x00000001,     ///<VREGIN is above the interrupt threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,VreginliVal> vreginli{}; 
        namespace VreginliValC{
            constexpr Register::FieldValue<decltype(vreginli)::Type,VreginliVal::vreginIsLow> vreginIsLow{};
            constexpr Register::FieldValue<decltype(vreginli)::Type,VreginliVal::vreginIsOk> vreginIsOk{};
        }
        ///VDD Reset Threshold Status Flag. 
        enum class VddrstfVal {
            vddIsBelowReset=0x00000000,     ///<The VDD voltage is below the VDD reset threshold.
            vddIsAboveReset=0x00000001,     ///<The VDD voltage is above the VDD reset threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,VddrstfVal> vddrstf{}; 
        namespace VddrstfValC{
            constexpr Register::FieldValue<decltype(vddrstf)::Type,VddrstfVal::vddIsBelowReset> vddIsBelowReset{};
            constexpr Register::FieldValue<decltype(vddrstf)::Type,VddrstfVal::vddIsAboveReset> vddIsAboveReset{};
        }
        ///VDD Low Interrupt Flag. 
        enum class VddliVal {
            vddIsLow=0x00000000,     ///<The VDD voltage is below the early warning threshold.
            vddIsOk=0x00000001,     ///<The VDD voltage is above the early warning threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,VddliVal> vddli{}; 
        namespace VddliValC{
            constexpr Register::FieldValue<decltype(vddli)::Type,VddliVal::vddIsLow> vddIsLow{};
            constexpr Register::FieldValue<decltype(vddli)::Type,VddliVal::vddIsOk> vddIsOk{};
        }
        ///VDD High Threshold Enable. 
        enum class VddhithenVal {
            disabled=0x00000000,     ///<Use the standard VDD thresholds.
            enabled=0x00000001,     ///<Use the high VDD thresholds.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,VddhithenVal> vddhithen{}; 
        namespace VddhithenValC{
            constexpr Register::FieldValue<decltype(vddhithen)::Type,VddhithenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vddhithen)::Type,VddhithenVal::enabled> enabled{};
        }
        ///VDD Low Interrupt Enable. 
        enum class VddlienVal {
            disabled=0x00000000,     ///<Disable the VDD low interrupt.
            enabled=0x00000001,     ///<Enable the VDD low interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,VddlienVal> vddlien{}; 
        namespace VddlienValC{
            constexpr Register::FieldValue<decltype(vddlien)::Type,VddlienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vddlien)::Type,VddlienVal::enabled> enabled{};
        }
        ///VREGIN Low Interrupt Enable. 
        enum class VreginlienVal {
            disabled=0x00000000,     ///<Disable the VREGIN low interrupt.
            enabled=0x00000001,     ///<Enable the VREGIN low interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,VreginlienVal> vreginlien{}; 
        namespace VreginlienValC{
            constexpr Register::FieldValue<decltype(vreginlien)::Type,VreginlienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vreginlien)::Type,VreginlienVal::enabled> enabled{};
        }
        ///VDD Supply Monitor Enable. 
        enum class VmonenVal {
            disabled=0x00000000,     ///<Disable the VDD supply monitor.
            enabled=0x00000001,     ///<Enable the VDD supply monitor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,VmonenVal> vmonen{}; 
        namespace VmonenValC{
            constexpr Register::FieldValue<decltype(vmonen)::Type,VmonenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vmonen)::Type,VmonenVal::enabled> enabled{};
        }
    }
}
