#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pin Control and Interrupts
    namespace PortbPcr0{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a000,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr1{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a004,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr2{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a008,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr3{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a00c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr4{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a010,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr5{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a014,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr6{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a018,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr7{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a01c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr8{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a020,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr9{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a024,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr10{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a028,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr11{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a02c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr12{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a030,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr13{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a034,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr14{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a038,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr15{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a03c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr16{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a040,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr17{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a044,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr18{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a048,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr19{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a04c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr20{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a050,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr21{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a054,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr22{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a058,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr23{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a05c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr24{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a060,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr25{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a064,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr26{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a068,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr27{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a06c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr28{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a070,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr29{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a074,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr30{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a078,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbPcr31{    ///<Pin Control Register n
        using Addr = Register::Address<0x4004a07c,0xfef07888,0,unsigned>;
        ///Pull Select
        enum class psVal {
            v0=0x00000000,     ///<Internal pull-down resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
            v1=0x00000001,     ///<Internal pull-up resistor is enabled on the corresponding pin, if the corresponding Port Pull Enable Register bit is set.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Pull Enable
        enum class peVal {
            v0=0x00000000,     ///<Internal pull-up or pull-down resistor is not enabled on the corresponding pin.
            v1=0x00000001,     ///<Internal pull-up or pull-down resistor is enabled on the corresponding pin, provided pin is configured as a digital input.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::v0> v0{};
            constexpr MPL::Value<peVal,peVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,peVal> pe{}; 
        ///Slew Rate Enable
        enum class sreVal {
            v0=0x00000000,     ///<Fast slew rate is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<Slow slew rate is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Passive Filter Enable
        enum class pfeVal {
            v0=0x00000000,     ///<Passive Input Filter is disabled on the corresponding pin.
            v1=0x00000001,     ///<Passive Input Filter is enabled on the corresponding pin, provided pin is configured as a digital input. A low pass filter (10 MHz to 30 MHz bandwidth) is enabled on the digital input path. Disable the Passive Input Filter when supporting high speed interfaces (> 2 MHz) on the pin.
        };
        namespace pfeValC{
            constexpr MPL::Value<pfeVal,pfeVal::v0> v0{};
            constexpr MPL::Value<pfeVal,pfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pfeVal> pfe{}; 
        ///Open Drain Enable
        enum class odeVal {
            v0=0x00000000,     ///<Open Drain output is disabled on the corresponding pin.
            v1=0x00000001,     ///<Open Drain output is enabled on the corresponding pin, provided pin is configured as a digital output.
        };
        namespace odeValC{
            constexpr MPL::Value<odeVal,odeVal::v0> v0{};
            constexpr MPL::Value<odeVal,odeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,odeVal> ode{}; 
        ///Drive Strength Enable
        enum class dseVal {
            v0=0x00000000,     ///<Low drive strength is configured on the corresponding pin, if pin is configured as a digital output.
            v1=0x00000001,     ///<High drive strength is configured on the corresponding pin, if pin is configured as a digital output.
        };
        namespace dseValC{
            constexpr MPL::Value<dseVal,dseVal::v0> v0{};
            constexpr MPL::Value<dseVal,dseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dseVal> dse{}; 
        ///Pin Mux Control
        enum class muxVal {
            v000=0x00000000,     ///<Pin Disabled (Analog).
            v001=0x00000001,     ///<Alternative 1 (GPIO).
            v010=0x00000002,     ///<Alternative 2 (chip specific).
            v011=0x00000003,     ///<Alternative 3 (chip specific).
            v100=0x00000004,     ///<Alternative 4 (chip specific).
            v101=0x00000005,     ///<Alternative 5 (chip specific).
            v110=0x00000006,     ///<Alternative 6 (chip specific).
            v111=0x00000007,     ///<Alternative 7 (chip specific / JTAG / NMI).
        };
        namespace muxValC{
            constexpr MPL::Value<muxVal,muxVal::v000> v000{};
            constexpr MPL::Value<muxVal,muxVal::v001> v001{};
            constexpr MPL::Value<muxVal,muxVal::v010> v010{};
            constexpr MPL::Value<muxVal,muxVal::v011> v011{};
            constexpr MPL::Value<muxVal,muxVal::v100> v100{};
            constexpr MPL::Value<muxVal,muxVal::v101> v101{};
            constexpr MPL::Value<muxVal,muxVal::v110> v110{};
            constexpr MPL::Value<muxVal,muxVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,muxVal> mux{}; 
        ///Lock Register
        enum class lkVal {
            v0=0x00000000,     ///<Pin Control Register bits [15:0] are not locked.
            v1=0x00000001,     ///<Pin Control Register bits [15:0] are locked and cannot be updated until the next System Reset.
        };
        namespace lkValC{
            constexpr MPL::Value<lkVal,lkVal::v0> v0{};
            constexpr MPL::Value<lkVal,lkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lkVal> lk{}; 
        ///Interrupt Configuration
        enum class irqcVal {
            v0000=0x00000000,     ///<Interrupt/DMA Request disabled.
            v0001=0x00000001,     ///<DMA Request on rising edge.
            v0010=0x00000002,     ///<DMA Request on falling edge.
            v0011=0x00000003,     ///<DMA Request on either edge.
            v1000=0x00000008,     ///<Interrupt when logic zero.
            v1001=0x00000009,     ///<Interrupt on rising edge.
            v1010=0x0000000a,     ///<Interrupt on falling edge.
            v1011=0x0000000b,     ///<Interrupt on either edge.
            v1100=0x0000000c,     ///<Interrupt when logic one.
        };
        namespace irqcValC{
            constexpr MPL::Value<irqcVal,irqcVal::v0000> v0000{};
            constexpr MPL::Value<irqcVal,irqcVal::v0001> v0001{};
            constexpr MPL::Value<irqcVal,irqcVal::v0010> v0010{};
            constexpr MPL::Value<irqcVal,irqcVal::v0011> v0011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1000> v1000{};
            constexpr MPL::Value<irqcVal,irqcVal::v1001> v1001{};
            constexpr MPL::Value<irqcVal,irqcVal::v1010> v1010{};
            constexpr MPL::Value<irqcVal,irqcVal::v1011> v1011{};
            constexpr MPL::Value<irqcVal,irqcVal::v1100> v1100{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,irqcVal> irqc{}; 
        ///Interrupt Status Flag
        enum class isfVal {
            v0=0x00000000,     ///<Configured interrupt has not been detected.
            v1=0x00000001,     ///<Configured interrupt has been detected. If pin is configured to generate a DMA request then the corresponding flag will be cleared automatically at the completion of the requested DMA transfer, otherwise the flag remains set until a logic one is written to that flag. If configured for a level sensitive interrupt that remains asserted then flag will set again immediately.
        };
        namespace isfValC{
            constexpr MPL::Value<isfVal,isfVal::v0> v0{};
            constexpr MPL::Value<isfVal,isfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,isfVal> isf{}; 
    }
    namespace PortbGpclr{    ///<Global Pin Control Low Register
        using Addr = Register::Address<0x4004a080,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
    }
    namespace PortbGpchr{    ///<Global Pin Control High Register
        using Addr = Register::Address<0x4004a084,0x00000000,0,unsigned>;
        ///Global Pin Write Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gpwd{}; 
        ///Global Pin Write Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpwe{}; 
    }
    namespace PortbIsfr{    ///<Interrupt Status Flag Register
        using Addr = Register::Address<0x4004a0a0,0x00000000,0,unsigned>;
        ///Interrupt Status Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> isf{}; 
    }
}
