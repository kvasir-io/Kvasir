#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4002f000,0x7fffffa3,0,unsigned>;
        ///VBAT Reset Threshold Status Flag. 
        enum class VbatrstfVal {
            vbatIsBelowReset=0x00000000,     ///<The VBAT voltage is below the VBAT reset threshold.
            vbatIsAboveReset=0x00000001,     ///<The VBAT voltage is above the VBAT reset threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,VbatrstfVal> vbatrstf{}; 
        namespace VbatrstfValC{
            constexpr Register::FieldValue<decltype(vbatrstf)::Type,VbatrstfVal::vbatIsBelowReset> vbatIsBelowReset{};
            constexpr Register::FieldValue<decltype(vbatrstf)::Type,VbatrstfVal::vbatIsAboveReset> vbatIsAboveReset{};
        }
        ///VBAT Low Interrupt Flag. 
        enum class VbatliVal {
            vbatIsLow=0x00000000,     ///<The VBAT voltage is below the early warning threshold.
            vbatIsOk=0x00000001,     ///<The VBAT voltage is above the early warning threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,VbatliVal> vbatli{}; 
        namespace VbatliValC{
            constexpr Register::FieldValue<decltype(vbatli)::Type,VbatliVal::vbatIsLow> vbatIsLow{};
            constexpr Register::FieldValue<decltype(vbatli)::Type,VbatliVal::vbatIsOk> vbatIsOk{};
        }
        ///VBAT High Threshold Enable. 
        enum class VbathithenVal {
            disabled=0x00000000,     ///<Use the standard VBAT thresholds.
            enabled=0x00000001,     ///<Use the high VBAT thresholds.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,VbathithenVal> vbathithen{}; 
        namespace VbathithenValC{
            constexpr Register::FieldValue<decltype(vbathithen)::Type,VbathithenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbathithen)::Type,VbathithenVal::enabled> enabled{};
        }
        ///VBAT Low Interrupt Enable. 
        enum class VbatlienVal {
            disabled=0x00000000,     ///<Disable the VBAT low interrupt.
            enabled=0x00000001,     ///<Enable the VBAT low interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,VbatlienVal> vbatlien{}; 
        namespace VbatlienValC{
            constexpr Register::FieldValue<decltype(vbatlien)::Type,VbatlienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vbatlien)::Type,VbatlienVal::enabled> enabled{};
        }
        ///VBAT Supply Monitor Enable. 
        enum class VmonenVal {
            disabled=0x00000000,     ///<Disable the VBAT supply monitor.
            enabled=0x00000001,     ///<Enable the VBAT supply monitor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,VmonenVal> vmonen{}; 
        namespace VmonenValC{
            constexpr Register::FieldValue<decltype(vmonen)::Type,VmonenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vmonen)::Type,VmonenVal::enabled> enabled{};
        }
    }
}
