#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power management
    namespace PmcSpmsc1{    ///<System Power Management Status and Control 1 Register
        using Addr = Register::Address<0x4007d000,0xffffff02,0,unsigned char>;
        ///Bandgap Buffer Enable
        enum class bgbeVal {
            v0=0x00000000,     ///<Bandgap buffer is disabled.
            v1=0x00000001,     ///<Bandgap buffer is enabled.
        };
        namespace bgbeValC{
            constexpr MPL::Value<bgbeVal,bgbeVal::v0> v0{};
            constexpr MPL::Value<bgbeVal,bgbeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bgbeVal> bgbe{}; 
        ///Low-Voltage Detect Enable
        enum class lvdeVal {
            v0=0x00000000,     ///<LVD logic is disabled.
            v1=0x00000001,     ///<LVD logic is enabled.
        };
        namespace lvdeValC{
            constexpr MPL::Value<lvdeVal,lvdeVal::v0> v0{};
            constexpr MPL::Value<lvdeVal,lvdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,lvdeVal> lvde{}; 
        ///Low-Voltage Detect Stop Enable
        enum class lvdseVal {
            v0=0x00000000,     ///<Low-voltage detect is disabled during Stop mode.
            v1=0x00000001,     ///<Low-voltage detect is enabled during Stop mode.
        };
        namespace lvdseValC{
            constexpr MPL::Value<lvdseVal,lvdseVal::v0> v0{};
            constexpr MPL::Value<lvdseVal,lvdseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lvdseVal> lvdse{}; 
        ///Low-Voltage Detect Reset Enable
        enum class lvdreVal {
            v0=0x00000000,     ///<LVD events do not generate hardware resets.
            v1=0x00000001,     ///<Forces an MCU reset when an enabled low-voltage detect event occurs.
        };
        namespace lvdreValC{
            constexpr MPL::Value<lvdreVal,lvdreVal::v0> v0{};
            constexpr MPL::Value<lvdreVal,lvdreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lvdreVal> lvdre{}; 
        ///Low-Voltage Warning Interrupt Enable
        enum class lvwieVal {
            v0=0x00000000,     ///<Hardware interrupt is disabled (use polling).
            v1=0x00000001,     ///<Requests a hardware interrupt when LVWF = 1.
        };
        namespace lvwieValC{
            constexpr MPL::Value<lvwieVal,lvwieVal::v0> v0{};
            constexpr MPL::Value<lvwieVal,lvwieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,lvwieVal> lvwie{}; 
        ///Low-Voltage Warning Acknowledge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lvwack{}; 
        ///Low-Voltage Warning Flag
        enum class lvwfVal {
            v0=0x00000000,     ///<Low-voltage warning is not present.
            v1=0x00000001,     ///<Low-voltage warning is present or was present.
        };
        namespace lvwfValC{
            constexpr MPL::Value<lvwfVal,lvwfVal::v0> v0{};
            constexpr MPL::Value<lvwfVal,lvwfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lvwfVal> lvwf{}; 
    }
    namespace PmcSpmsc2{    ///<System Power Management Status and Control 2 Register
        using Addr = Register::Address<0x4007d001,0xffffff8f,0,unsigned char>;
        ///Low-Voltage Warning Voltage Select
        enum class lvwvVal {
            v00=0x00000000,     ///<Low trip point is selected (VLVW = VLVW1).
            v01=0x00000001,     ///<Middle 1 trip point is selected (VLVW = VLVW2).
            v10=0x00000002,     ///<Middle 2 trip point is selected (VLVW = VLVW3).
            v11=0x00000003,     ///<High trip point is selected (VLVW = VLVW4).
        };
        namespace lvwvValC{
            constexpr MPL::Value<lvwvVal,lvwvVal::v00> v00{};
            constexpr MPL::Value<lvwvVal,lvwvVal::v01> v01{};
            constexpr MPL::Value<lvwvVal,lvwvVal::v10> v10{};
            constexpr MPL::Value<lvwvVal,lvwvVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,lvwvVal> lvwv{}; 
        ///Low-Voltage Detect Voltage Select
        enum class lvdvVal {
            v0=0x00000000,     ///<Low trip point is selected (VLVD = VLVDL).
            v1=0x00000001,     ///<High trip point is selected (VLVD = VLVDH).
        };
        namespace lvdvValC{
            constexpr MPL::Value<lvdvVal,lvdvVal::v0> v0{};
            constexpr MPL::Value<lvdvVal,lvdvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lvdvVal> lvdv{}; 
    }
}
