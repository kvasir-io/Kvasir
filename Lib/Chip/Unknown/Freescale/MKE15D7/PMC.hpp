#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power management
    namespace PmcSpmsc1{    ///<System Power Management Status and Control 1 Register
        using Addr = Register::Address<0x40054000,0xffffff00,0,unsigned char>;
        ///Bandgap Buffer Enable
        enum class bgbeVal {
            v0=0x00000000,     ///<Bandgap buffer disabled.
            v1=0x00000001,     ///<Bandgap buffer enabled.
        };
        namespace bgbeValC{
            constexpr MPL::Value<bgbeVal,bgbeVal::v0> v0{};
            constexpr MPL::Value<bgbeVal,bgbeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bgbeVal> bgbe{}; 
        ///Bandgap Buffer Drive Select
        enum class bgbdsVal {
            v0=0x00000000,     ///<Bandgap buffer enabled in low drive mode if BGBE = 1.
            v1=0x00000001,     ///<Bandgap buffer enabled in high drive mode if BGBE = 1.
        };
        namespace bgbdsValC{
            constexpr MPL::Value<bgbdsVal,bgbdsVal::v0> v0{};
            constexpr MPL::Value<bgbdsVal,bgbdsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bgbdsVal> bgbds{}; 
        ///Low-Voltage Detect Enable
        enum class lvdeVal {
            v0=0x00000000,     ///<LVD logic disabled.
            v1=0x00000001,     ///<LVD logic enabled.
        };
        namespace lvdeValC{
            constexpr MPL::Value<lvdeVal,lvdeVal::v0> v0{};
            constexpr MPL::Value<lvdeVal,lvdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,lvdeVal> lvde{}; 
        ///Low-Voltage Detect Stop Enable
        enum class lvdseVal {
            v0=0x00000000,     ///<Low-voltage detect disabled during stop mode.
            v1=0x00000001,     ///<Low-voltage detect enabled during stop mode.
        };
        namespace lvdseValC{
            constexpr MPL::Value<lvdseVal,lvdseVal::v0> v0{};
            constexpr MPL::Value<lvdseVal,lvdseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lvdseVal> lvdse{}; 
        ///Low-Voltage Detect Reset Enable
        enum class lvdreVal {
            v0=0x00000000,     ///<LVD events do not generate hardware resets.
            v1=0x00000001,     ///<Force an MCU reset when an enabled low-voltage detect event occurs.
        };
        namespace lvdreValC{
            constexpr MPL::Value<lvdreVal,lvdreVal::v0> v0{};
            constexpr MPL::Value<lvdreVal,lvdreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lvdreVal> lvdre{}; 
        ///Low-Voltage Warning Interrupt Enable
        enum class lvwieVal {
            v0=0x00000000,     ///<Hardware interrupt disabled (use polling).
            v1=0x00000001,     ///<Request a hardware interrupt when LVWF = 1.
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
        using Addr = Register::Address<0x40054001,0xffffff8f,0,unsigned char>;
        ///Low-Voltage Warning Voltage Select
        enum class lvwvVal {
            v00=0x00000000,     ///<Low trip point selected (VLVW = VLVW1).
            v01=0x00000001,     ///<Middle 1 trip point selected (VLVW = VLVW2).
            v10=0x00000002,     ///<Middle 2 trip point selected (VLVW = VLVW3).
            v11=0x00000003,     ///<High trip point selected (VLVW = VLVW4).
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
            v0=0x00000000,     ///<Low trip point selected (VLVD = VLVDL).
            v1=0x00000001,     ///<High trip point selected (VLVD = VLVDH).
        };
        namespace lvdvValC{
            constexpr MPL::Value<lvdvVal,lvdvVal::v0> v0{};
            constexpr MPL::Value<lvdvVal,lvdvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,lvdvVal> lvdv{}; 
    }
}
