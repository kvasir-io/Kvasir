#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Interrupt
    namespace IrqSc{    ///<Interrupt Pin Request Status and Control Register
        using Addr = Register::Address<0x40031000,0xffffff80,0x00000000,unsigned char>;
        ///IRQ Detection Mode
        enum class IrqmodVal {
            v0=0x00000000,     ///<IRQ event is detected only on falling/rising edges.
            v1=0x00000001,     ///<IRQ event is detected on falling/rising edges and low/high levels.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrqmodVal> irqmod{}; 
        namespace IrqmodValC{
            constexpr Register::FieldValue<decltype(irqmod)::Type,IrqmodVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irqmod)::Type,IrqmodVal::v1> v1{};
        }
        ///IRQ Interrupt Enable
        enum class IrqieVal {
            v0=0x00000000,     ///<Interrupt request when IRQF set is disabled (use polling).
            v1=0x00000001,     ///<Interrupt requested whenever IRQF = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrqieVal> irqie{}; 
        namespace IrqieValC{
            constexpr Register::FieldValue<decltype(irqie)::Type,IrqieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irqie)::Type,IrqieVal::v1> v1{};
        }
        ///IRQ Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> irqack{}; 
        ///IRQ Flag
        enum class IrqfVal {
            v0=0x00000000,     ///<No IRQ request
            v1=0x00000001,     ///<IRQ event is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IrqfVal> irqf{}; 
        namespace IrqfValC{
            constexpr Register::FieldValue<decltype(irqf)::Type,IrqfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irqf)::Type,IrqfVal::v1> v1{};
        }
        ///IRQ Pin Enable
        enum class IrqpeVal {
            v0=0x00000000,     ///<IRQ pin function is disabled.
            v1=0x00000001,     ///<IRQ pin function is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IrqpeVal> irqpe{}; 
        namespace IrqpeValC{
            constexpr Register::FieldValue<decltype(irqpe)::Type,IrqpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irqpe)::Type,IrqpeVal::v1> v1{};
        }
        ///Interrupt Request (IRQ) Edge Select
        enum class IrqedgVal {
            v0=0x00000000,     ///<IRQ is falling-edge or falling-edge/low-level sensitive.
            v1=0x00000001,     ///<IRQ is rising-edge or rising-edge/high-level sensitive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,IrqedgVal> irqedg{}; 
        namespace IrqedgValC{
            constexpr Register::FieldValue<decltype(irqedg)::Type,IrqedgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irqedg)::Type,IrqedgVal::v1> v1{};
        }
        ///Interrupt Request (IRQ) Pull Device Disable
        enum class IrqpddVal {
            v0=0x00000000,     ///<IRQ pull device enabled if IRQPE = 1.
            v1=0x00000001,     ///<IRQ pull device disabled if IRQPE = 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,IrqpddVal> irqpdd{}; 
        namespace IrqpddValC{
            constexpr Register::FieldValue<decltype(irqpdd)::Type,IrqpddVal::v0> v0{};
            constexpr Register::FieldValue<decltype(irqpdd)::Type,IrqpddVal::v1> v1{};
        }
    }
}
