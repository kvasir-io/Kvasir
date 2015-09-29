#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Management Controller
    namespace PmcLvdsc1{    ///<Low Voltage Detect Status And Control 1 register
        using Addr = Register::Address<0x4007d000,0xffffff0c,0,unsigned char>;
        ///Low-Voltage Detect Voltage Select
        enum class lvdvVal {
            v00=0x00000000,     ///<Low trip point selected (V LVD = V LVDL )
            v01=0x00000001,     ///<High trip point selected (V LVD = V LVDH )
        };
        namespace lvdvValC{
            constexpr MPL::Value<lvdvVal,lvdvVal::v00> v00{};
            constexpr MPL::Value<lvdvVal,lvdvVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lvdvVal> lvdv{}; 
        ///Low-Voltage Detect Reset Enable
        enum class lvdreVal {
            v0=0x00000000,     ///<LVDF does not generate hardware resets
            v1=0x00000001,     ///<Force an MCU reset when LVDF = 1
        };
        namespace lvdreValC{
            constexpr MPL::Value<lvdreVal,lvdreVal::v0> v0{};
            constexpr MPL::Value<lvdreVal,lvdreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lvdreVal> lvdre{}; 
        ///Low-Voltage Detect Interrupt Enable
        enum class lvdieVal {
            v0=0x00000000,     ///<Hardware interrupt disabled (use polling)
            v1=0x00000001,     ///<Request a hardware interrupt when LVDF = 1
        };
        namespace lvdieValC{
            constexpr MPL::Value<lvdieVal,lvdieVal::v0> v0{};
            constexpr MPL::Value<lvdieVal,lvdieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,lvdieVal> lvdie{}; 
        ///Low-Voltage Detect Acknowledge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lvdack{}; 
        ///Low-Voltage Detect Flag
        enum class lvdfVal {
            v0=0x00000000,     ///<Low-voltage event not detected
            v1=0x00000001,     ///<Low-voltage event detected
        };
        namespace lvdfValC{
            constexpr MPL::Value<lvdfVal,lvdfVal::v0> v0{};
            constexpr MPL::Value<lvdfVal,lvdfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lvdfVal> lvdf{}; 
    }
    namespace PmcLvdsc2{    ///<Low Voltage Detect Status And Control 2 register
        using Addr = Register::Address<0x4007d001,0xffffff1c,0,unsigned char>;
        ///Low-Voltage Warning Voltage Select
        enum class lvwvVal {
            v00=0x00000000,     ///<Low trip point selected (VLVW = VLVW1)
            v01=0x00000001,     ///<Mid 1 trip point selected (VLVW = VLVW2)
            v10=0x00000002,     ///<Mid 2 trip point selected (VLVW = VLVW3)
            v11=0x00000003,     ///<High trip point selected (VLVW = VLVW4)
        };
        namespace lvwvValC{
            constexpr MPL::Value<lvwvVal,lvwvVal::v00> v00{};
            constexpr MPL::Value<lvwvVal,lvwvVal::v01> v01{};
            constexpr MPL::Value<lvwvVal,lvwvVal::v10> v10{};
            constexpr MPL::Value<lvwvVal,lvwvVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lvwvVal> lvwv{}; 
        ///Low-Voltage Warning Interrupt Enable
        enum class lvwieVal {
            v0=0x00000000,     ///<Hardware interrupt disabled (use polling)
            v1=0x00000001,     ///<Request a hardware interrupt when LVWF = 1
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
            v0=0x00000000,     ///<Low-voltage warning event not detected
            v1=0x00000001,     ///<Low-voltage warning event detected
        };
        namespace lvwfValC{
            constexpr MPL::Value<lvwfVal,lvwfVal::v0> v0{};
            constexpr MPL::Value<lvwfVal,lvwfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lvwfVal> lvwf{}; 
    }
    namespace PmcRegsc{    ///<Regulator Status And Control register
        using Addr = Register::Address<0x4007d002,0xffffffe2,0,unsigned char>;
        ///Bandgap Buffer Enable
        enum class bgbeVal {
            v0=0x00000000,     ///<Bandgap buffer not enabled
            v1=0x00000001,     ///<Bandgap buffer enabled
        };
        namespace bgbeValC{
            constexpr MPL::Value<bgbeVal,bgbeVal::v0> v0{};
            constexpr MPL::Value<bgbeVal,bgbeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bgbeVal> bgbe{}; 
        ///Regulator In Run Regulation Status
        enum class regonsVal {
            v0=0x00000000,     ///<Regulator is in stop regulation or in transition to/from it
            v1=0x00000001,     ///<Regulator is in run regulation
        };
        namespace regonsValC{
            constexpr MPL::Value<regonsVal,regonsVal::v0> v0{};
            constexpr MPL::Value<regonsVal,regonsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,regonsVal> regons{}; 
        ///Acknowledge Isolation
        enum class ackisoVal {
            v0=0x00000000,     ///<Peripherals and I/O pads are in normal run state.
            v1=0x00000001,     ///<Certain peripherals and I/O pads are in an isolated and latched state.
        };
        namespace ackisoValC{
            constexpr MPL::Value<ackisoVal,ackisoVal::v0> v0{};
            constexpr MPL::Value<ackisoVal,ackisoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ackisoVal> ackiso{}; 
        ///Bandgap Enable In VLPx Operation
        enum class bgenVal {
            v0=0x00000000,     ///<Bandgap voltage reference is disabled in VLPx , LLS , and VLLSx modes.
            v1=0x00000001,     ///<Bandgap voltage reference is enabled in VLPx , LLS , and VLLSx modes.
        };
        namespace bgenValC{
            constexpr MPL::Value<bgenVal,bgenVal::v0> v0{};
            constexpr MPL::Value<bgenVal,bgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bgenVal> bgen{}; 
    }
}
