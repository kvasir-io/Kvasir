#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power management
    namespace PmcSpmsc1{    ///<System Power Management Status and Control 1 Register
        using Addr = Register::Address<0x4007d000,0xffffff02,0,unsigned char>;
        ///Bandgap Buffer Enable
        enum class BgbeVal {
            v0=0x00000000,     ///<Bandgap buffer is disabled.
            v1=0x00000001,     ///<Bandgap buffer is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BgbeVal> bgbe{}; 
        namespace BgbeValC{
            constexpr Register::FieldValue<decltype(bgbe)::Type,BgbeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bgbe)::Type,BgbeVal::v1> v1{};
        }
        }
        ///Low-Voltage Detect Enable
        enum class LvdeVal {
            v0=0x00000000,     ///<LVD logic is disabled.
            v1=0x00000001,     ///<LVD logic is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,LvdeVal> lvde{}; 
        namespace LvdeValC{
            constexpr Register::FieldValue<decltype(lvde)::Type,LvdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvde)::Type,LvdeVal::v1> v1{};
        }
        }
        ///Low-Voltage Detect Stop Enable
        enum class LvdseVal {
            v0=0x00000000,     ///<Low-voltage detect is disabled during Stop mode.
            v1=0x00000001,     ///<Low-voltage detect is enabled during Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,LvdseVal> lvdse{}; 
        namespace LvdseValC{
            constexpr Register::FieldValue<decltype(lvdse)::Type,LvdseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvdse)::Type,LvdseVal::v1> v1{};
        }
        }
        ///Low-Voltage Detect Reset Enable
        enum class LvdreVal {
            v0=0x00000000,     ///<LVD events do not generate hardware resets.
            v1=0x00000001,     ///<Forces an MCU reset when an enabled low-voltage detect event occurs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LvdreVal> lvdre{}; 
        namespace LvdreValC{
            constexpr Register::FieldValue<decltype(lvdre)::Type,LvdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvdre)::Type,LvdreVal::v1> v1{};
        }
        }
        ///Low-Voltage Warning Interrupt Enable
        enum class LvwieVal {
            v0=0x00000000,     ///<Hardware interrupt is disabled (use polling).
            v1=0x00000001,     ///<Requests a hardware interrupt when LVWF = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LvwieVal> lvwie{}; 
        namespace LvwieValC{
            constexpr Register::FieldValue<decltype(lvwie)::Type,LvwieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvwie)::Type,LvwieVal::v1> v1{};
        }
        }
        ///Low-Voltage Warning Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lvwack{}; 
        ///Low-Voltage Warning Flag
        enum class LvwfVal {
            v0=0x00000000,     ///<Low-voltage warning is not present.
            v1=0x00000001,     ///<Low-voltage warning is present or was present.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LvwfVal> lvwf{}; 
        namespace LvwfValC{
            constexpr Register::FieldValue<decltype(lvwf)::Type,LvwfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvwf)::Type,LvwfVal::v1> v1{};
        }
        }
    }
    namespace PmcSpmsc2{    ///<System Power Management Status and Control 2 Register
        using Addr = Register::Address<0x4007d001,0xffffff8f,0,unsigned char>;
        ///Low-Voltage Warning Voltage Select
        enum class LvwvVal {
            v00=0x00000000,     ///<Low trip point is selected (VLVW = VLVW1).
            v01=0x00000001,     ///<Middle 1 trip point is selected (VLVW = VLVW2).
            v10=0x00000002,     ///<Middle 2 trip point is selected (VLVW = VLVW3).
            v11=0x00000003,     ///<High trip point is selected (VLVW = VLVW4).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,LvwvVal> lvwv{}; 
        namespace LvwvValC{
            constexpr Register::FieldValue<decltype(lvwv)::Type,LvwvVal::v00> v00{};
            constexpr Register::FieldValue<decltype(lvwv)::Type,LvwvVal::v01> v01{};
            constexpr Register::FieldValue<decltype(lvwv)::Type,LvwvVal::v10> v10{};
            constexpr Register::FieldValue<decltype(lvwv)::Type,LvwvVal::v11> v11{};
        }
        }
        ///Low-Voltage Detect Voltage Select
        enum class LvdvVal {
            v0=0x00000000,     ///<Low trip point is selected (VLVD = VLVDL).
            v1=0x00000001,     ///<High trip point is selected (VLVD = VLVDH).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LvdvVal> lvdv{}; 
        namespace LvdvValC{
            constexpr Register::FieldValue<decltype(lvdv)::Type,LvdvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lvdv)::Type,LvdvVal::v1> v1{};
        }
        }
    }
}
