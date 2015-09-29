#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Interrupt
    namespace IrqSc{    ///<Interrupt Pin Request Status and Control Register
        using Addr = Register::Address<0x40031000,0xffffff80,0,unsigned char>;
        ///IRQ Detection Mode
        enum class irqmodVal {
            v0=0x00000000,     ///<IRQ event is detected only on falling/rising edges.
            v1=0x00000001,     ///<IRQ event is detected on falling/rising edges and low/high levels.
        };
        namespace irqmodValC{
            constexpr MPL::Value<irqmodVal,irqmodVal::v0> v0{};
            constexpr MPL::Value<irqmodVal,irqmodVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,irqmodVal> irqmod{}; 
        ///IRQ Interrupt Enable
        enum class irqieVal {
            v0=0x00000000,     ///<Interrupt request when IRQF set is disabled (use polling).
            v1=0x00000001,     ///<Interrupt requested whenever IRQF = 1.
        };
        namespace irqieValC{
            constexpr MPL::Value<irqieVal,irqieVal::v0> v0{};
            constexpr MPL::Value<irqieVal,irqieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,irqieVal> irqie{}; 
        ///IRQ Acknowledge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> irqack{}; 
        ///IRQ Flag
        enum class irqfVal {
            v0=0x00000000,     ///<No IRQ request
            v1=0x00000001,     ///<IRQ event is detected.
        };
        namespace irqfValC{
            constexpr MPL::Value<irqfVal,irqfVal::v0> v0{};
            constexpr MPL::Value<irqfVal,irqfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,irqfVal> irqf{}; 
        ///IRQ Pin Enable
        enum class irqpeVal {
            v0=0x00000000,     ///<IRQ pin function is disabled.
            v1=0x00000001,     ///<IRQ pin function is enabled.
        };
        namespace irqpeValC{
            constexpr MPL::Value<irqpeVal,irqpeVal::v0> v0{};
            constexpr MPL::Value<irqpeVal,irqpeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,irqpeVal> irqpe{}; 
        ///Interrupt Request (IRQ) Edge Select
        enum class irqedgVal {
            v0=0x00000000,     ///<IRQ is falling-edge or falling-edge/low-level sensitive.
            v1=0x00000001,     ///<IRQ is rising-edge or rising-edge/high-level sensitive.
        };
        namespace irqedgValC{
            constexpr MPL::Value<irqedgVal,irqedgVal::v0> v0{};
            constexpr MPL::Value<irqedgVal,irqedgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,irqedgVal> irqedg{}; 
        ///Interrupt Request (IRQ) Pull Device Disable
        enum class irqpddVal {
            v0=0x00000000,     ///<IRQ pull device enabled if IRQPE = 1.
            v1=0x00000001,     ///<IRQ pull device disabled if IRQPE = 1.
        };
        namespace irqpddValC{
            constexpr MPL::Value<irqpddVal,irqpddVal::v0> v0{};
            constexpr MPL::Value<irqpddVal,irqpddVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,irqpddVal> irqpdd{}; 
    }
}
