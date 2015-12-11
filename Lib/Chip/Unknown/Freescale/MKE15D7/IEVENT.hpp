#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Intelligent event controller
    namespace IeventDrl{    ///<iEvent Data Register: Low
        using Addr = Register::Address<0x40019000,0x00000000,0,unsigned>;
        ///Event Inputs {A0}
        enum class Ina0Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ina0Val> inA0{}; 
        namespace Ina0ValC{
            constexpr Register::FieldValue<decltype(inA0)::Type,Ina0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inA0)::Type,Ina0Val::v1> v1{};
        }
        }
        ///Event Inputs {B0}
        enum class Inb0Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Inb0Val> inB0{}; 
        namespace Inb0ValC{
            constexpr Register::FieldValue<decltype(inB0)::Type,Inb0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inB0)::Type,Inb0Val::v1> v1{};
        }
        }
        ///Event Inputs {C0}
        enum class Inc0Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Inc0Val> inC0{}; 
        namespace Inc0ValC{
            constexpr Register::FieldValue<decltype(inC0)::Type,Inc0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inC0)::Type,Inc0Val::v1> v1{};
        }
        }
        ///Event Inputs {D0}
        enum class Ind0Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ind0Val> inD0{}; 
        namespace Ind0ValC{
            constexpr Register::FieldValue<decltype(inD0)::Type,Ind0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inD0)::Type,Ind0Val::v1> v1{};
        }
        }
        ///Output Finite State Machine 0
        enum class Outputfsm0Val {
            v000=0x00000000,     ///<The channel is disabled; FSM = idle.
            v001=0x00000001,     ///<The channel is enabled and waiting for the programmed event to occur; FSM = wfevt.
            v011=0x00000003,     ///<The programmed event has occurred and the channel is asserting its output; FSM = assert.
            v100=0x00000004,     ///<The channel is programmed for one-shot operation and the event has completed; FSM = os_hold.
            v101=0x00000005,     ///<The channel is waiting for the selected input signals to be negated before rearming; FSM = wfclr.
            v111=0x00000007,     ///<The event output has been acknowledged; done signals are broadcast during 1-cycle state; FSM = done.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,Outputfsm0Val> outputFsm0{}; 
        namespace Outputfsm0ValC{
            constexpr Register::FieldValue<decltype(outputFsm0)::Type,Outputfsm0Val::v000> v000{};
            constexpr Register::FieldValue<decltype(outputFsm0)::Type,Outputfsm0Val::v001> v001{};
            constexpr Register::FieldValue<decltype(outputFsm0)::Type,Outputfsm0Val::v011> v011{};
            constexpr Register::FieldValue<decltype(outputFsm0)::Type,Outputfsm0Val::v100> v100{};
            constexpr Register::FieldValue<decltype(outputFsm0)::Type,Outputfsm0Val::v101> v101{};
            constexpr Register::FieldValue<decltype(outputFsm0)::Type,Outputfsm0Val::v111> v111{};
        }
        }
        ///Event Output 0
        enum class Evout0Val {
            v0=0x00000000,     ///<The event output is negated.
            v1=0x00000001,     ///<The event output is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Evout0Val> evOut0{}; 
        namespace Evout0ValC{
            constexpr Register::FieldValue<decltype(evOut0)::Type,Evout0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(evOut0)::Type,Evout0Val::v1> v1{};
        }
        }
        ///Event Inputs {A1}
        enum class Ina1Val {
            v0=0x00000000,     ///<The state of the event input was negated.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ina1Val> inA1{}; 
        namespace Ina1ValC{
            constexpr Register::FieldValue<decltype(inA1)::Type,Ina1Val::v0> v0{};
        }
        }
        ///Event Inputs {B1}
        enum class Inb1Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Inb1Val> inB1{}; 
        namespace Inb1ValC{
            constexpr Register::FieldValue<decltype(inB1)::Type,Inb1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inB1)::Type,Inb1Val::v1> v1{};
        }
        }
        ///Event Inputs {C1}
        enum class Inc1Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Inc1Val> inC1{}; 
        namespace Inc1ValC{
            constexpr Register::FieldValue<decltype(inC1)::Type,Inc1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inC1)::Type,Inc1Val::v1> v1{};
        }
        }
        ///Event Inputs {D1}
        enum class Ind1Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ind1Val> inD1{}; 
        namespace Ind1ValC{
            constexpr Register::FieldValue<decltype(inD1)::Type,Ind1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inD1)::Type,Ind1Val::v1> v1{};
        }
        }
        ///Output Finite State Machine 1
        enum class Outputfsm1Val {
            v000=0x00000000,     ///<The channel is disabled; FSM = idle.
            v001=0x00000001,     ///<The channel is enabled and waiting for the programmed event to occur; FSM = wfevt.
            v011=0x00000003,     ///<The programmed event has occurred and the channel is asserting its output; FSM = assert.
            v100=0x00000004,     ///<The channel is programmed for one-shot operation and the event has completed; FSM = os_hold.
            v101=0x00000005,     ///<The channel is waiting for the selected input signals to be negated before rearming; FSM = wfclr.
            v111=0x00000007,     ///<The event output has been acknowledged; done signals are broadcast during 1-cycle state; FSM = done.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,Outputfsm1Val> outputFsm1{}; 
        namespace Outputfsm1ValC{
            constexpr Register::FieldValue<decltype(outputFsm1)::Type,Outputfsm1Val::v000> v000{};
            constexpr Register::FieldValue<decltype(outputFsm1)::Type,Outputfsm1Val::v001> v001{};
            constexpr Register::FieldValue<decltype(outputFsm1)::Type,Outputfsm1Val::v011> v011{};
            constexpr Register::FieldValue<decltype(outputFsm1)::Type,Outputfsm1Val::v100> v100{};
            constexpr Register::FieldValue<decltype(outputFsm1)::Type,Outputfsm1Val::v101> v101{};
            constexpr Register::FieldValue<decltype(outputFsm1)::Type,Outputfsm1Val::v111> v111{};
        }
        }
        ///Event Output 1
        enum class Evout1Val {
            v0=0x00000000,     ///<The event output is negated.
            v1=0x00000001,     ///<The event output is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Evout1Val> evOut1{}; 
        namespace Evout1ValC{
            constexpr Register::FieldValue<decltype(evOut1)::Type,Evout1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(evOut1)::Type,Evout1Val::v1> v1{};
        }
        }
        ///Event Inputs {A2}
        enum class Ina2Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ina2Val> inA2{}; 
        namespace Ina2ValC{
            constexpr Register::FieldValue<decltype(inA2)::Type,Ina2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inA2)::Type,Ina2Val::v1> v1{};
        }
        }
        ///Event Inputs {B2}
        enum class Inb2Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Inb2Val> inB2{}; 
        namespace Inb2ValC{
            constexpr Register::FieldValue<decltype(inB2)::Type,Inb2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inB2)::Type,Inb2Val::v1> v1{};
        }
        }
        ///Event Inputs {C2}
        enum class Inc2Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Inc2Val> inC2{}; 
        namespace Inc2ValC{
            constexpr Register::FieldValue<decltype(inC2)::Type,Inc2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inC2)::Type,Inc2Val::v1> v1{};
        }
        }
        ///Event Inputs {D2}
        enum class Ind2Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ind2Val> inD2{}; 
        namespace Ind2ValC{
            constexpr Register::FieldValue<decltype(inD2)::Type,Ind2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inD2)::Type,Ind2Val::v1> v1{};
        }
        }
        ///Output Finite State Machine 2
        enum class Outputfsm2Val {
            v000=0x00000000,     ///<The channel is disabled; FSM = idle.
            v001=0x00000001,     ///<The channel is enabled and waiting for the programmed event to occur; FSM = wfevt.
            v011=0x00000003,     ///<The programmed event has occurred and the channel is asserting its output; FSM = assert.
            v100=0x00000004,     ///<The channel is programmed for one-shot operation and the event has completed; FSM = os_hold.
            v101=0x00000005,     ///<The channel is waiting for the selected input signals to be negated before rearming; FSM = wfclr.
            v111=0x00000007,     ///<The event output has been acknowledged; done signals are broadcast during 1-cycle state; FSM = done.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,Outputfsm2Val> outputFsm2{}; 
        namespace Outputfsm2ValC{
            constexpr Register::FieldValue<decltype(outputFsm2)::Type,Outputfsm2Val::v000> v000{};
            constexpr Register::FieldValue<decltype(outputFsm2)::Type,Outputfsm2Val::v001> v001{};
            constexpr Register::FieldValue<decltype(outputFsm2)::Type,Outputfsm2Val::v011> v011{};
            constexpr Register::FieldValue<decltype(outputFsm2)::Type,Outputfsm2Val::v100> v100{};
            constexpr Register::FieldValue<decltype(outputFsm2)::Type,Outputfsm2Val::v101> v101{};
            constexpr Register::FieldValue<decltype(outputFsm2)::Type,Outputfsm2Val::v111> v111{};
        }
        }
        ///Event Output 2
        enum class Evout2Val {
            v0=0x00000000,     ///<The event output is negated.
            v1=0x00000001,     ///<The event output is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Evout2Val> evOut2{}; 
        namespace Evout2ValC{
            constexpr Register::FieldValue<decltype(evOut2)::Type,Evout2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(evOut2)::Type,Evout2Val::v1> v1{};
        }
        }
        ///Event Inputs {A3}
        enum class Ina3Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ina3Val> inA3{}; 
        namespace Ina3ValC{
            constexpr Register::FieldValue<decltype(inA3)::Type,Ina3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inA3)::Type,Ina3Val::v1> v1{};
        }
        }
        ///Event Inputs {B3}
        enum class Inb3Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Inb3Val> inB3{}; 
        namespace Inb3ValC{
            constexpr Register::FieldValue<decltype(inB3)::Type,Inb3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inB3)::Type,Inb3Val::v1> v1{};
        }
        }
        ///Event Inputs {C3}
        enum class Inc3Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Inc3Val> inC3{}; 
        namespace Inc3ValC{
            constexpr Register::FieldValue<decltype(inC3)::Type,Inc3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inC3)::Type,Inc3Val::v1> v1{};
        }
        }
        ///Event Inputs {D3}
        enum class Ind3Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ind3Val> inD3{}; 
        namespace Ind3ValC{
            constexpr Register::FieldValue<decltype(inD3)::Type,Ind3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(inD3)::Type,Ind3Val::v1> v1{};
        }
        }
        ///Output Finite State Machine 3
        enum class Outputfsm3Val {
            v000=0x00000000,     ///<The channel is disabled; FSM = idle.
            v001=0x00000001,     ///<The channel is enabled and waiting for the programmed event to occur; FSM = wfevt.
            v011=0x00000003,     ///<The programmed event has occurred and the channel is asserting its output; FSM = assert.
            v100=0x00000004,     ///<The channel is programmed for one-shot operation and the event has completed; FSM = os_hold.
            v101=0x00000005,     ///<The channel is waiting for the selected input signals to be negated before rearming; FSM = wfclr.
            v111=0x00000007,     ///<The event output has been acknowledged; done signals are broadcast during 1-cycle state; FSM = done.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,Outputfsm3Val> outputFsm3{}; 
        namespace Outputfsm3ValC{
            constexpr Register::FieldValue<decltype(outputFsm3)::Type,Outputfsm3Val::v000> v000{};
            constexpr Register::FieldValue<decltype(outputFsm3)::Type,Outputfsm3Val::v001> v001{};
            constexpr Register::FieldValue<decltype(outputFsm3)::Type,Outputfsm3Val::v011> v011{};
            constexpr Register::FieldValue<decltype(outputFsm3)::Type,Outputfsm3Val::v100> v100{};
            constexpr Register::FieldValue<decltype(outputFsm3)::Type,Outputfsm3Val::v101> v101{};
            constexpr Register::FieldValue<decltype(outputFsm3)::Type,Outputfsm3Val::v111> v111{};
        }
        }
        ///Event Output 3
        enum class Evout3Val {
            v0=0x00000000,     ///<The event output is negated.
            v1=0x00000001,     ///<The event output is asserted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Evout3Val> evOut3{}; 
        namespace Evout3ValC{
            constexpr Register::FieldValue<decltype(evOut3)::Type,Evout3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(evOut3)::Type,Evout3Val::v1> v1{};
        }
        }
    }
    namespace IeventCrl{    ///<iEvent Control Register: Low
        using Addr = Register::Address<0x40019080,0x70707070,0,unsigned>;
        ///Output Channel Type 0
        enum class Type0Val {
            v00=0x00000000,     ///<The channel is disabled.
            v01=0x00000001,     ///<The channel is defined as a DMA request output.
            v10=0x00000002,     ///<The channel is defined as a hardware trigger output.
            v11=0x00000003,     ///<The channel is defined as an interrupt request output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Type0Val> type0{}; 
        namespace Type0ValC{
            constexpr Register::FieldValue<decltype(type0)::Type,Type0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(type0)::Type,Type0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(type0)::Type,Type0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(type0)::Type,Type0Val::v11> v11{};
        }
        }
        ///One-Shot Enable 0
        enum class Ose0Val {
            v0=0x00000000,     ///<The channel event output is enabled to occur multiple times.
            v1=0x00000001,     ///<The channel event output is enabled to occur one time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ose0Val> ose0{}; 
        namespace Ose0ValC{
            constexpr Register::FieldValue<decltype(ose0)::Type,Ose0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ose0)::Type,Ose0Val::v1> v1{};
        }
        }
        ///Disable Done Broadcast 0
        enum class Ddb0Val {
            v0=0x00000000,     ///<The event done indicators are broadcast to the appropriate selected event inputs.
            v1=0x00000001,     ///<The event done indicators are not broadcast to the appropriate selected event inputs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ddb0Val> ddb0{}; 
        namespace Ddb0ValC{
            constexpr Register::FieldValue<decltype(ddb0)::Type,Ddb0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ddb0)::Type,Ddb0Val::v1> v1{};
        }
        }
        ///Read-Only 0
        enum class Ro0Val {
            v0=0x00000000,     ///<The iEvent configuration registers for this channel can be read and written.
            v1=0x00000001,     ///<The iEvent configuration registers for this channel can only be read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ro0Val> ro0{}; 
        namespace Ro0ValC{
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro0)::Type,Ro0Val::v1> v1{};
        }
        }
        ///Output Channel Type 1
        enum class Type1Val {
            v00=0x00000000,     ///<The channel is disabled.
            v01=0x00000001,     ///<The channel is defined as a DMA request output.
            v10=0x00000002,     ///<The channel is defined as a hardware trigger output.
            v11=0x00000003,     ///<The channel is defined as an interrupt request output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Type1Val> type1{}; 
        namespace Type1ValC{
            constexpr Register::FieldValue<decltype(type1)::Type,Type1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(type1)::Type,Type1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(type1)::Type,Type1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(type1)::Type,Type1Val::v11> v11{};
        }
        }
        ///One-Shot Enable 1
        enum class Ose1Val {
            v0=0x00000000,     ///<The channel event output is enabled to occur multiple times.
            v1=0x00000001,     ///<The channel event output is enabled to occur one time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ose1Val> ose1{}; 
        namespace Ose1ValC{
            constexpr Register::FieldValue<decltype(ose1)::Type,Ose1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ose1)::Type,Ose1Val::v1> v1{};
        }
        }
        ///Disable Done Broadcast 1
        enum class Ddb1Val {
            v0=0x00000000,     ///<The event done indicators are broadcast to the appropriate selected event inputs.
            v1=0x00000001,     ///<The event done indicators are not broadcast to the appropriate selected event inputs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ddb1Val> ddb1{}; 
        namespace Ddb1ValC{
            constexpr Register::FieldValue<decltype(ddb1)::Type,Ddb1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ddb1)::Type,Ddb1Val::v1> v1{};
        }
        }
        ///Read-Only 1
        enum class Ro1Val {
            v0=0x00000000,     ///<The iEvent configuration registers for this channel can be read and written.
            v1=0x00000001,     ///<The iEvent configuration registers for this channel can only be read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ro1Val> ro1{}; 
        namespace Ro1ValC{
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro1)::Type,Ro1Val::v1> v1{};
        }
        }
        ///Output Channel Type 2
        enum class Type2Val {
            v00=0x00000000,     ///<The channel is disabled.
            v01=0x00000001,     ///<The channel is defined as a DMA request output.
            v10=0x00000002,     ///<The channel is defined as a hardware trigger output.
            v11=0x00000003,     ///<The channel is defined as an interrupt request output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Type2Val> type2{}; 
        namespace Type2ValC{
            constexpr Register::FieldValue<decltype(type2)::Type,Type2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(type2)::Type,Type2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(type2)::Type,Type2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(type2)::Type,Type2Val::v11> v11{};
        }
        }
        ///One-Shot Enable 2
        enum class Ose2Val {
            v0=0x00000000,     ///<The channel event output is enabled to occur multiple times.
            v1=0x00000001,     ///<The channel event output is enabled to occur one time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ose2Val> ose2{}; 
        namespace Ose2ValC{
            constexpr Register::FieldValue<decltype(ose2)::Type,Ose2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ose2)::Type,Ose2Val::v1> v1{};
        }
        }
        ///Disable Done Broadcast 2
        enum class Ddb2Val {
            v0=0x00000000,     ///<The event done indicators are broadcast to the appropriate selected event inputs.
            v1=0x00000001,     ///<The event done indicators are not broadcast to the appropriate selected event inputs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ddb2Val> ddb2{}; 
        namespace Ddb2ValC{
            constexpr Register::FieldValue<decltype(ddb2)::Type,Ddb2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ddb2)::Type,Ddb2Val::v1> v1{};
        }
        }
        ///Read-Only 2
        enum class Ro2Val {
            v0=0x00000000,     ///<The iEvent configuration registers for this channel can be read and written.
            v1=0x00000001,     ///<The iEvent configuration registers for this channel can only be read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ro2Val> ro2{}; 
        namespace Ro2ValC{
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro2)::Type,Ro2Val::v1> v1{};
        }
        }
        ///Output Channel Type 3
        enum class Type3Val {
            v00=0x00000000,     ///<The channel is disabled.
            v01=0x00000001,     ///<The channel is defined as a DMA request output.
            v10=0x00000002,     ///<The channel is defined as a hardware trigger output.
            v11=0x00000003,     ///<The channel is defined as an interrupt request output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Type3Val> type3{}; 
        namespace Type3ValC{
            constexpr Register::FieldValue<decltype(type3)::Type,Type3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(type3)::Type,Type3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(type3)::Type,Type3Val::v10> v10{};
            constexpr Register::FieldValue<decltype(type3)::Type,Type3Val::v11> v11{};
        }
        }
        ///One-Shot Enable 3
        enum class Ose3Val {
            v0=0x00000000,     ///<The channel event output is enabled to occur multiple times.
            v1=0x00000001,     ///<The channel event output is enabled to occur one time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ose3Val> ose3{}; 
        namespace Ose3ValC{
            constexpr Register::FieldValue<decltype(ose3)::Type,Ose3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ose3)::Type,Ose3Val::v1> v1{};
        }
        }
        ///Disable Done Broadcast 3
        enum class Ddb3Val {
            v0=0x00000000,     ///<The event done indicators are broadcast to the appropriate selected event inputs.
            v1=0x00000001,     ///<The event done indicators are not broadcast to the appropriate selected event inputs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ddb3Val> ddb3{}; 
        namespace Ddb3ValC{
            constexpr Register::FieldValue<decltype(ddb3)::Type,Ddb3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ddb3)::Type,Ddb3Val::v1> v1{};
        }
        }
        ///Read-Only 3
        enum class Ro3Val {
            v0=0x00000000,     ///<The iEvent configuration registers for this channel can be read and written.
            v1=0x00000001,     ///<The iEvent configuration registers for this channel can only be read.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ro3Val> ro3{}; 
        namespace Ro3ValC{
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ro3)::Type,Ro3Val::v1> v1{};
        }
        }
    }
    namespace IeventImxcr0{    ///<iEvent Input Mux Configuration Register
        using Addr = Register::Address<0x40019100,0xf0f0f0f0,0,unsigned>;
        ///no description available
        enum class DselectVal {
            v0000=0x00000000,     ///<Select input[0] as D.
            v0001=0x00000001,     ///<Select input[1] as D.
            v0010=0x00000002,     ///<Select input[2] as D.
            v0011=0x00000003,     ///<Select input[3] as D.
            v0100=0x00000004,     ///<Select input[4] as D.
            v0101=0x00000005,     ///<Select input[5] as D.
            v0110=0x00000006,     ///<Select input[6] as D.
            v0111=0x00000007,     ///<Select input[7] as D.
            v1000=0x00000008,     ///<Select input[8] as D.
            v1001=0x00000009,     ///<Select input[9] as D.
            v1010=0x0000000a,     ///<Select input[10] as D.
            v1011=0x0000000b,     ///<Select input[11] as D.
            v1100=0x0000000c,     ///<Select input[12] as D.
            v1101=0x0000000d,     ///<Select input[13] as D.
            v1110=0x0000000e,     ///<Select input[14] as D.
            v1111=0x0000000f,     ///<Select input[15] as D.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,DselectVal> dSelect{}; 
        namespace DselectValC{
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class CselectVal {
            v0000=0x00000000,     ///<Select input[0] as C.
            v0001=0x00000001,     ///<Select input[1] as C.
            v0010=0x00000002,     ///<Select input[2] as C.
            v0011=0x00000003,     ///<Select input[3] as C.
            v0100=0x00000004,     ///<Select input[4] as C.
            v0101=0x00000005,     ///<Select input[5] as C.
            v0110=0x00000006,     ///<Select input[6] as C.
            v0111=0x00000007,     ///<Select input[7] as C.
            v1000=0x00000008,     ///<Select input[8] as C.
            v1001=0x00000009,     ///<Select input[9] as C.
            v1010=0x0000000a,     ///<Select input[10] as C.
            v1011=0x0000000b,     ///<Select input[11] as C.
            v1100=0x0000000c,     ///<Select input[12] as C.
            v1101=0x0000000d,     ///<Select input[13] as C.
            v1110=0x0000000e,     ///<Select input[14] as C.
            v1111=0x0000000f,     ///<Select input[15] as C.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,CselectVal> cSelect{}; 
        namespace CselectValC{
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class BselectVal {
            v0000=0x00000000,     ///<Select input[0] as B.
            v0001=0x00000001,     ///<Select input[1] as B.
            v0010=0x00000002,     ///<Select input[2] as B.
            v0011=0x00000003,     ///<Select input[3] as B.
            v0100=0x00000004,     ///<Select input[4] as B.
            v0101=0x00000005,     ///<Select input[5] as B.
            v0110=0x00000006,     ///<Select input[6] as B.
            v0111=0x00000007,     ///<Select input[7] as B.
            v1000=0x00000008,     ///<Select input[8] as B.
            v1001=0x00000009,     ///<Select input[9] as B.
            v1010=0x0000000a,     ///<Select input[10] as B.
            v1011=0x0000000b,     ///<Select input[11] as B.
            v1100=0x0000000c,     ///<Select input[12] as B.
            v1101=0x0000000d,     ///<Select input[13] as B.
            v1110=0x0000000e,     ///<Select input[14] as B.
            v1111=0x0000000f,     ///<Select input[15] as B.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,BselectVal> bSelect{}; 
        namespace BselectValC{
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class AselectVal {
            v0000=0x00000000,     ///<Select input[0] as A.
            v0001=0x00000001,     ///<Select input[1] as A.
            v0010=0x00000002,     ///<Select input[2] as A.
            v0011=0x00000003,     ///<Select input[3] as A.
            v0100=0x00000004,     ///<Select input[4] as A.
            v0101=0x00000005,     ///<Select input[5] as A.
            v0110=0x00000006,     ///<Select input[6] as A.
            v0111=0x00000007,     ///<Select input[7] as A.
            v1000=0x00000008,     ///<Select input[8] as A.
            v1001=0x00000009,     ///<Select input[9] as A.
            v1010=0x0000000a,     ///<Select input[10] as A.
            v1011=0x0000000b,     ///<Select input[11] as A.
            v1100=0x0000000c,     ///<Select input[12] as A.
            v1101=0x0000000d,     ///<Select input[13] as A.
            v1110=0x0000000e,     ///<Select input[14] as A.
            v1111=0x0000000f,     ///<Select input[15] as A.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,AselectVal> aSelect{}; 
        namespace AselectValC{
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1111> v1111{};
        }
        }
    }
    namespace IeventImxcr1{    ///<iEvent Input Mux Configuration Register
        using Addr = Register::Address<0x40019108,0xf0f0f0f0,0,unsigned>;
        ///no description available
        enum class DselectVal {
            v0000=0x00000000,     ///<Select input[0] as D.
            v0001=0x00000001,     ///<Select input[1] as D.
            v0010=0x00000002,     ///<Select input[2] as D.
            v0011=0x00000003,     ///<Select input[3] as D.
            v0100=0x00000004,     ///<Select input[4] as D.
            v0101=0x00000005,     ///<Select input[5] as D.
            v0110=0x00000006,     ///<Select input[6] as D.
            v0111=0x00000007,     ///<Select input[7] as D.
            v1000=0x00000008,     ///<Select input[8] as D.
            v1001=0x00000009,     ///<Select input[9] as D.
            v1010=0x0000000a,     ///<Select input[10] as D.
            v1011=0x0000000b,     ///<Select input[11] as D.
            v1100=0x0000000c,     ///<Select input[12] as D.
            v1101=0x0000000d,     ///<Select input[13] as D.
            v1110=0x0000000e,     ///<Select input[14] as D.
            v1111=0x0000000f,     ///<Select input[15] as D.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,DselectVal> dSelect{}; 
        namespace DselectValC{
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class CselectVal {
            v0000=0x00000000,     ///<Select input[0] as C.
            v0001=0x00000001,     ///<Select input[1] as C.
            v0010=0x00000002,     ///<Select input[2] as C.
            v0011=0x00000003,     ///<Select input[3] as C.
            v0100=0x00000004,     ///<Select input[4] as C.
            v0101=0x00000005,     ///<Select input[5] as C.
            v0110=0x00000006,     ///<Select input[6] as C.
            v0111=0x00000007,     ///<Select input[7] as C.
            v1000=0x00000008,     ///<Select input[8] as C.
            v1001=0x00000009,     ///<Select input[9] as C.
            v1010=0x0000000a,     ///<Select input[10] as C.
            v1011=0x0000000b,     ///<Select input[11] as C.
            v1100=0x0000000c,     ///<Select input[12] as C.
            v1101=0x0000000d,     ///<Select input[13] as C.
            v1110=0x0000000e,     ///<Select input[14] as C.
            v1111=0x0000000f,     ///<Select input[15] as C.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,CselectVal> cSelect{}; 
        namespace CselectValC{
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class BselectVal {
            v0000=0x00000000,     ///<Select input[0] as B.
            v0001=0x00000001,     ///<Select input[1] as B.
            v0010=0x00000002,     ///<Select input[2] as B.
            v0011=0x00000003,     ///<Select input[3] as B.
            v0100=0x00000004,     ///<Select input[4] as B.
            v0101=0x00000005,     ///<Select input[5] as B.
            v0110=0x00000006,     ///<Select input[6] as B.
            v0111=0x00000007,     ///<Select input[7] as B.
            v1000=0x00000008,     ///<Select input[8] as B.
            v1001=0x00000009,     ///<Select input[9] as B.
            v1010=0x0000000a,     ///<Select input[10] as B.
            v1011=0x0000000b,     ///<Select input[11] as B.
            v1100=0x0000000c,     ///<Select input[12] as B.
            v1101=0x0000000d,     ///<Select input[13] as B.
            v1110=0x0000000e,     ///<Select input[14] as B.
            v1111=0x0000000f,     ///<Select input[15] as B.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,BselectVal> bSelect{}; 
        namespace BselectValC{
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class AselectVal {
            v0000=0x00000000,     ///<Select input[0] as A.
            v0001=0x00000001,     ///<Select input[1] as A.
            v0010=0x00000002,     ///<Select input[2] as A.
            v0011=0x00000003,     ///<Select input[3] as A.
            v0100=0x00000004,     ///<Select input[4] as A.
            v0101=0x00000005,     ///<Select input[5] as A.
            v0110=0x00000006,     ///<Select input[6] as A.
            v0111=0x00000007,     ///<Select input[7] as A.
            v1000=0x00000008,     ///<Select input[8] as A.
            v1001=0x00000009,     ///<Select input[9] as A.
            v1010=0x0000000a,     ///<Select input[10] as A.
            v1011=0x0000000b,     ///<Select input[11] as A.
            v1100=0x0000000c,     ///<Select input[12] as A.
            v1101=0x0000000d,     ///<Select input[13] as A.
            v1110=0x0000000e,     ///<Select input[14] as A.
            v1111=0x0000000f,     ///<Select input[15] as A.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,AselectVal> aSelect{}; 
        namespace AselectValC{
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1111> v1111{};
        }
        }
    }
    namespace IeventImxcr2{    ///<iEvent Input Mux Configuration Register
        using Addr = Register::Address<0x40019110,0xf0f0f0f0,0,unsigned>;
        ///no description available
        enum class DselectVal {
            v0000=0x00000000,     ///<Select input[0] as D.
            v0001=0x00000001,     ///<Select input[1] as D.
            v0010=0x00000002,     ///<Select input[2] as D.
            v0011=0x00000003,     ///<Select input[3] as D.
            v0100=0x00000004,     ///<Select input[4] as D.
            v0101=0x00000005,     ///<Select input[5] as D.
            v0110=0x00000006,     ///<Select input[6] as D.
            v0111=0x00000007,     ///<Select input[7] as D.
            v1000=0x00000008,     ///<Select input[8] as D.
            v1001=0x00000009,     ///<Select input[9] as D.
            v1010=0x0000000a,     ///<Select input[10] as D.
            v1011=0x0000000b,     ///<Select input[11] as D.
            v1100=0x0000000c,     ///<Select input[12] as D.
            v1101=0x0000000d,     ///<Select input[13] as D.
            v1110=0x0000000e,     ///<Select input[14] as D.
            v1111=0x0000000f,     ///<Select input[15] as D.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,DselectVal> dSelect{}; 
        namespace DselectValC{
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class CselectVal {
            v0000=0x00000000,     ///<Select input[0] as C.
            v0001=0x00000001,     ///<Select input[1] as C.
            v0010=0x00000002,     ///<Select input[2] as C.
            v0011=0x00000003,     ///<Select input[3] as C.
            v0100=0x00000004,     ///<Select input[4] as C.
            v0101=0x00000005,     ///<Select input[5] as C.
            v0110=0x00000006,     ///<Select input[6] as C.
            v0111=0x00000007,     ///<Select input[7] as C.
            v1000=0x00000008,     ///<Select input[8] as C.
            v1001=0x00000009,     ///<Select input[9] as C.
            v1010=0x0000000a,     ///<Select input[10] as C.
            v1011=0x0000000b,     ///<Select input[11] as C.
            v1100=0x0000000c,     ///<Select input[12] as C.
            v1101=0x0000000d,     ///<Select input[13] as C.
            v1110=0x0000000e,     ///<Select input[14] as C.
            v1111=0x0000000f,     ///<Select input[15] as C.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,CselectVal> cSelect{}; 
        namespace CselectValC{
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class BselectVal {
            v0000=0x00000000,     ///<Select input[0] as B.
            v0001=0x00000001,     ///<Select input[1] as B.
            v0010=0x00000002,     ///<Select input[2] as B.
            v0011=0x00000003,     ///<Select input[3] as B.
            v0100=0x00000004,     ///<Select input[4] as B.
            v0101=0x00000005,     ///<Select input[5] as B.
            v0110=0x00000006,     ///<Select input[6] as B.
            v0111=0x00000007,     ///<Select input[7] as B.
            v1000=0x00000008,     ///<Select input[8] as B.
            v1001=0x00000009,     ///<Select input[9] as B.
            v1010=0x0000000a,     ///<Select input[10] as B.
            v1011=0x0000000b,     ///<Select input[11] as B.
            v1100=0x0000000c,     ///<Select input[12] as B.
            v1101=0x0000000d,     ///<Select input[13] as B.
            v1110=0x0000000e,     ///<Select input[14] as B.
            v1111=0x0000000f,     ///<Select input[15] as B.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,BselectVal> bSelect{}; 
        namespace BselectValC{
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class AselectVal {
            v0000=0x00000000,     ///<Select input[0] as A.
            v0001=0x00000001,     ///<Select input[1] as A.
            v0010=0x00000002,     ///<Select input[2] as A.
            v0011=0x00000003,     ///<Select input[3] as A.
            v0100=0x00000004,     ///<Select input[4] as A.
            v0101=0x00000005,     ///<Select input[5] as A.
            v0110=0x00000006,     ///<Select input[6] as A.
            v0111=0x00000007,     ///<Select input[7] as A.
            v1000=0x00000008,     ///<Select input[8] as A.
            v1001=0x00000009,     ///<Select input[9] as A.
            v1010=0x0000000a,     ///<Select input[10] as A.
            v1011=0x0000000b,     ///<Select input[11] as A.
            v1100=0x0000000c,     ///<Select input[12] as A.
            v1101=0x0000000d,     ///<Select input[13] as A.
            v1110=0x0000000e,     ///<Select input[14] as A.
            v1111=0x0000000f,     ///<Select input[15] as A.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,AselectVal> aSelect{}; 
        namespace AselectValC{
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1111> v1111{};
        }
        }
    }
    namespace IeventImxcr3{    ///<iEvent Input Mux Configuration Register
        using Addr = Register::Address<0x40019118,0xf0f0f0f0,0,unsigned>;
        ///no description available
        enum class DselectVal {
            v0000=0x00000000,     ///<Select input[0] as D.
            v0001=0x00000001,     ///<Select input[1] as D.
            v0010=0x00000002,     ///<Select input[2] as D.
            v0011=0x00000003,     ///<Select input[3] as D.
            v0100=0x00000004,     ///<Select input[4] as D.
            v0101=0x00000005,     ///<Select input[5] as D.
            v0110=0x00000006,     ///<Select input[6] as D.
            v0111=0x00000007,     ///<Select input[7] as D.
            v1000=0x00000008,     ///<Select input[8] as D.
            v1001=0x00000009,     ///<Select input[9] as D.
            v1010=0x0000000a,     ///<Select input[10] as D.
            v1011=0x0000000b,     ///<Select input[11] as D.
            v1100=0x0000000c,     ///<Select input[12] as D.
            v1101=0x0000000d,     ///<Select input[13] as D.
            v1110=0x0000000e,     ///<Select input[14] as D.
            v1111=0x0000000f,     ///<Select input[15] as D.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,DselectVal> dSelect{}; 
        namespace DselectValC{
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(dSelect)::Type,DselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class CselectVal {
            v0000=0x00000000,     ///<Select input[0] as C.
            v0001=0x00000001,     ///<Select input[1] as C.
            v0010=0x00000002,     ///<Select input[2] as C.
            v0011=0x00000003,     ///<Select input[3] as C.
            v0100=0x00000004,     ///<Select input[4] as C.
            v0101=0x00000005,     ///<Select input[5] as C.
            v0110=0x00000006,     ///<Select input[6] as C.
            v0111=0x00000007,     ///<Select input[7] as C.
            v1000=0x00000008,     ///<Select input[8] as C.
            v1001=0x00000009,     ///<Select input[9] as C.
            v1010=0x0000000a,     ///<Select input[10] as C.
            v1011=0x0000000b,     ///<Select input[11] as C.
            v1100=0x0000000c,     ///<Select input[12] as C.
            v1101=0x0000000d,     ///<Select input[13] as C.
            v1110=0x0000000e,     ///<Select input[14] as C.
            v1111=0x0000000f,     ///<Select input[15] as C.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,CselectVal> cSelect{}; 
        namespace CselectValC{
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(cSelect)::Type,CselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class BselectVal {
            v0000=0x00000000,     ///<Select input[0] as B.
            v0001=0x00000001,     ///<Select input[1] as B.
            v0010=0x00000002,     ///<Select input[2] as B.
            v0011=0x00000003,     ///<Select input[3] as B.
            v0100=0x00000004,     ///<Select input[4] as B.
            v0101=0x00000005,     ///<Select input[5] as B.
            v0110=0x00000006,     ///<Select input[6] as B.
            v0111=0x00000007,     ///<Select input[7] as B.
            v1000=0x00000008,     ///<Select input[8] as B.
            v1001=0x00000009,     ///<Select input[9] as B.
            v1010=0x0000000a,     ///<Select input[10] as B.
            v1011=0x0000000b,     ///<Select input[11] as B.
            v1100=0x0000000c,     ///<Select input[12] as B.
            v1101=0x0000000d,     ///<Select input[13] as B.
            v1110=0x0000000e,     ///<Select input[14] as B.
            v1111=0x0000000f,     ///<Select input[15] as B.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,BselectVal> bSelect{}; 
        namespace BselectValC{
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(bSelect)::Type,BselectVal::v1111> v1111{};
        }
        }
        ///no description available
        enum class AselectVal {
            v0000=0x00000000,     ///<Select input[0] as A.
            v0001=0x00000001,     ///<Select input[1] as A.
            v0010=0x00000002,     ///<Select input[2] as A.
            v0011=0x00000003,     ///<Select input[3] as A.
            v0100=0x00000004,     ///<Select input[4] as A.
            v0101=0x00000005,     ///<Select input[5] as A.
            v0110=0x00000006,     ///<Select input[6] as A.
            v0111=0x00000007,     ///<Select input[7] as A.
            v1000=0x00000008,     ///<Select input[8] as A.
            v1001=0x00000009,     ///<Select input[9] as A.
            v1010=0x0000000a,     ///<Select input[10] as A.
            v1011=0x0000000b,     ///<Select input[11] as A.
            v1100=0x0000000c,     ///<Select input[12] as A.
            v1101=0x0000000d,     ///<Select input[13] as A.
            v1110=0x0000000e,     ///<Select input[14] as A.
            v1111=0x0000000f,     ///<Select input[15] as A.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,AselectVal> aSelect{}; 
        namespace AselectValC{
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1001> v1001{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1011> v1011{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1100> v1100{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1101> v1101{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(aSelect)::Type,AselectVal::v1111> v1111{};
        }
        }
    }
    namespace IeventBfecr0{    ///<iEvent Boolean Function Eva1ation Configuration Register
        using Addr = Register::Address<0x40019104,0x00000000,0,unsigned>;
        ///Product Term 3, D input Configuration
        enum class Pt3dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt3dcVal> pt3Dc{}; 
        namespace Pt3dcValC{
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v11> v11{};
        }
        }
        ///Product Term 3, C input Configuration
        enum class Pt3ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt3ccVal> pt3Cc{}; 
        namespace Pt3ccValC{
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v11> v11{};
        }
        }
        ///Product Term 3, B input Configuration
        enum class Pt3bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt3bcVal> pt3Bc{}; 
        namespace Pt3bcValC{
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v11> v11{};
        }
        }
        ///Product Term 3, A input Configuration
        enum class Pt3acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt3acVal> pt3Ac{}; 
        namespace Pt3acValC{
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v11> v11{};
        }
        }
        ///Product Term 2, D input Configuration
        enum class Pt2dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt2dcVal> pt2Dc{}; 
        namespace Pt2dcValC{
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v11> v11{};
        }
        }
        ///Product Term 2, C input Configuration
        enum class Pt2ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt2ccVal> pt2Cc{}; 
        namespace Pt2ccValC{
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v11> v11{};
        }
        }
        ///Product Term 2, B input Configuration
        enum class Pt2bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt2bcVal> pt2Bc{}; 
        namespace Pt2bcValC{
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v11> v11{};
        }
        }
        ///Product Term 2, A input Configuration
        enum class Pt2acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt2acVal> pt2Ac{}; 
        namespace Pt2acValC{
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v11> v11{};
        }
        }
        ///Product Term 1, D input Configuration
        enum class Pt1dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Pt1dcVal> pt1Dc{}; 
        namespace Pt1dcValC{
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v11> v11{};
        }
        }
        ///Product Term 1, C input Configuration
        enum class Pt1ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Pt1ccVal> pt1Cc{}; 
        namespace Pt1ccValC{
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v11> v11{};
        }
        }
        ///Product Term 1, B input Configuration
        enum class Pt1bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Pt1bcVal> pt1Bc{}; 
        namespace Pt1bcValC{
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v11> v11{};
        }
        }
        ///Product Term 1, A input Configuration
        enum class Pt1acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Pt1acVal> pt1Ac{}; 
        namespace Pt1acValC{
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v11> v11{};
        }
        }
        ///Product Term 0, D input Configuration
        enum class Pt0dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Pt0dcVal> pt0Dc{}; 
        namespace Pt0dcValC{
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v11> v11{};
        }
        }
        ///Product Term 0, C input Configuration
        enum class Pt0ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Pt0ccVal> pt0Cc{}; 
        namespace Pt0ccValC{
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v11> v11{};
        }
        }
        ///Product Term 0, B input Configuration
        enum class Pt0bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Pt0bcVal> pt0Bc{}; 
        namespace Pt0bcValC{
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v11> v11{};
        }
        }
        ///Product Term 0, A input Configuration
        enum class Pt0acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,Pt0acVal> pt0Ac{}; 
        namespace Pt0acValC{
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v11> v11{};
        }
        }
    }
    namespace IeventBfecr1{    ///<iEvent Boolean Function Eva1ation Configuration Register
        using Addr = Register::Address<0x4001910c,0x00000000,0,unsigned>;
        ///Product Term 3, D input Configuration
        enum class Pt3dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt3dcVal> pt3Dc{}; 
        namespace Pt3dcValC{
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v11> v11{};
        }
        }
        ///Product Term 3, C input Configuration
        enum class Pt3ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt3ccVal> pt3Cc{}; 
        namespace Pt3ccValC{
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v11> v11{};
        }
        }
        ///Product Term 3, B input Configuration
        enum class Pt3bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt3bcVal> pt3Bc{}; 
        namespace Pt3bcValC{
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v11> v11{};
        }
        }
        ///Product Term 3, A input Configuration
        enum class Pt3acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt3acVal> pt3Ac{}; 
        namespace Pt3acValC{
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v11> v11{};
        }
        }
        ///Product Term 2, D input Configuration
        enum class Pt2dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt2dcVal> pt2Dc{}; 
        namespace Pt2dcValC{
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v11> v11{};
        }
        }
        ///Product Term 2, C input Configuration
        enum class Pt2ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt2ccVal> pt2Cc{}; 
        namespace Pt2ccValC{
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v11> v11{};
        }
        }
        ///Product Term 2, B input Configuration
        enum class Pt2bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt2bcVal> pt2Bc{}; 
        namespace Pt2bcValC{
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v11> v11{};
        }
        }
        ///Product Term 2, A input Configuration
        enum class Pt2acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt2acVal> pt2Ac{}; 
        namespace Pt2acValC{
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v11> v11{};
        }
        }
        ///Product Term 1, D input Configuration
        enum class Pt1dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Pt1dcVal> pt1Dc{}; 
        namespace Pt1dcValC{
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v11> v11{};
        }
        }
        ///Product Term 1, C input Configuration
        enum class Pt1ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Pt1ccVal> pt1Cc{}; 
        namespace Pt1ccValC{
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v11> v11{};
        }
        }
        ///Product Term 1, B input Configuration
        enum class Pt1bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Pt1bcVal> pt1Bc{}; 
        namespace Pt1bcValC{
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v11> v11{};
        }
        }
        ///Product Term 1, A input Configuration
        enum class Pt1acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Pt1acVal> pt1Ac{}; 
        namespace Pt1acValC{
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v11> v11{};
        }
        }
        ///Product Term 0, D input Configuration
        enum class Pt0dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Pt0dcVal> pt0Dc{}; 
        namespace Pt0dcValC{
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v11> v11{};
        }
        }
        ///Product Term 0, C input Configuration
        enum class Pt0ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Pt0ccVal> pt0Cc{}; 
        namespace Pt0ccValC{
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v11> v11{};
        }
        }
        ///Product Term 0, B input Configuration
        enum class Pt0bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Pt0bcVal> pt0Bc{}; 
        namespace Pt0bcValC{
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v11> v11{};
        }
        }
        ///Product Term 0, A input Configuration
        enum class Pt0acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,Pt0acVal> pt0Ac{}; 
        namespace Pt0acValC{
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v11> v11{};
        }
        }
    }
    namespace IeventBfecr2{    ///<iEvent Boolean Function Eva1ation Configuration Register
        using Addr = Register::Address<0x40019114,0x00000000,0,unsigned>;
        ///Product Term 3, D input Configuration
        enum class Pt3dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt3dcVal> pt3Dc{}; 
        namespace Pt3dcValC{
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v11> v11{};
        }
        }
        ///Product Term 3, C input Configuration
        enum class Pt3ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt3ccVal> pt3Cc{}; 
        namespace Pt3ccValC{
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v11> v11{};
        }
        }
        ///Product Term 3, B input Configuration
        enum class Pt3bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt3bcVal> pt3Bc{}; 
        namespace Pt3bcValC{
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v11> v11{};
        }
        }
        ///Product Term 3, A input Configuration
        enum class Pt3acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt3acVal> pt3Ac{}; 
        namespace Pt3acValC{
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v11> v11{};
        }
        }
        ///Product Term 2, D input Configuration
        enum class Pt2dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt2dcVal> pt2Dc{}; 
        namespace Pt2dcValC{
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v11> v11{};
        }
        }
        ///Product Term 2, C input Configuration
        enum class Pt2ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt2ccVal> pt2Cc{}; 
        namespace Pt2ccValC{
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v11> v11{};
        }
        }
        ///Product Term 2, B input Configuration
        enum class Pt2bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt2bcVal> pt2Bc{}; 
        namespace Pt2bcValC{
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v11> v11{};
        }
        }
        ///Product Term 2, A input Configuration
        enum class Pt2acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt2acVal> pt2Ac{}; 
        namespace Pt2acValC{
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v11> v11{};
        }
        }
        ///Product Term 1, D input Configuration
        enum class Pt1dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Pt1dcVal> pt1Dc{}; 
        namespace Pt1dcValC{
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v11> v11{};
        }
        }
        ///Product Term 1, C input Configuration
        enum class Pt1ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Pt1ccVal> pt1Cc{}; 
        namespace Pt1ccValC{
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v11> v11{};
        }
        }
        ///Product Term 1, B input Configuration
        enum class Pt1bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Pt1bcVal> pt1Bc{}; 
        namespace Pt1bcValC{
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v11> v11{};
        }
        }
        ///Product Term 1, A input Configuration
        enum class Pt1acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Pt1acVal> pt1Ac{}; 
        namespace Pt1acValC{
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v11> v11{};
        }
        }
        ///Product Term 0, D input Configuration
        enum class Pt0dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Pt0dcVal> pt0Dc{}; 
        namespace Pt0dcValC{
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v11> v11{};
        }
        }
        ///Product Term 0, C input Configuration
        enum class Pt0ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Pt0ccVal> pt0Cc{}; 
        namespace Pt0ccValC{
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v11> v11{};
        }
        }
        ///Product Term 0, B input Configuration
        enum class Pt0bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Pt0bcVal> pt0Bc{}; 
        namespace Pt0bcValC{
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v11> v11{};
        }
        }
        ///Product Term 0, A input Configuration
        enum class Pt0acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,Pt0acVal> pt0Ac{}; 
        namespace Pt0acValC{
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v11> v11{};
        }
        }
    }
    namespace IeventBfecr3{    ///<iEvent Boolean Function Eva1ation Configuration Register
        using Addr = Register::Address<0x4001911c,0x00000000,0,unsigned>;
        ///Product Term 3, D input Configuration
        enum class Pt3dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pt3dcVal> pt3Dc{}; 
        namespace Pt3dcValC{
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Dc)::Type,Pt3dcVal::v11> v11{};
        }
        }
        ///Product Term 3, C input Configuration
        enum class Pt3ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pt3ccVal> pt3Cc{}; 
        namespace Pt3ccValC{
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Cc)::Type,Pt3ccVal::v11> v11{};
        }
        }
        ///Product Term 3, B input Configuration
        enum class Pt3bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pt3bcVal> pt3Bc{}; 
        namespace Pt3bcValC{
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Bc)::Type,Pt3bcVal::v11> v11{};
        }
        }
        ///Product Term 3, A input Configuration
        enum class Pt3acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pt3acVal> pt3Ac{}; 
        namespace Pt3acValC{
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt3Ac)::Type,Pt3acVal::v11> v11{};
        }
        }
        ///Product Term 2, D input Configuration
        enum class Pt2dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pt2dcVal> pt2Dc{}; 
        namespace Pt2dcValC{
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Dc)::Type,Pt2dcVal::v11> v11{};
        }
        }
        ///Product Term 2, C input Configuration
        enum class Pt2ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pt2ccVal> pt2Cc{}; 
        namespace Pt2ccValC{
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Cc)::Type,Pt2ccVal::v11> v11{};
        }
        }
        ///Product Term 2, B input Configuration
        enum class Pt2bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Pt2bcVal> pt2Bc{}; 
        namespace Pt2bcValC{
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Bc)::Type,Pt2bcVal::v11> v11{};
        }
        }
        ///Product Term 2, A input Configuration
        enum class Pt2acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Pt2acVal> pt2Ac{}; 
        namespace Pt2acValC{
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt2Ac)::Type,Pt2acVal::v11> v11{};
        }
        }
        ///Product Term 1, D input Configuration
        enum class Pt1dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Pt1dcVal> pt1Dc{}; 
        namespace Pt1dcValC{
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Dc)::Type,Pt1dcVal::v11> v11{};
        }
        }
        ///Product Term 1, C input Configuration
        enum class Pt1ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Pt1ccVal> pt1Cc{}; 
        namespace Pt1ccValC{
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Cc)::Type,Pt1ccVal::v11> v11{};
        }
        }
        ///Product Term 1, B input Configuration
        enum class Pt1bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Pt1bcVal> pt1Bc{}; 
        namespace Pt1bcValC{
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Bc)::Type,Pt1bcVal::v11> v11{};
        }
        }
        ///Product Term 1, A input Configuration
        enum class Pt1acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Pt1acVal> pt1Ac{}; 
        namespace Pt1acValC{
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt1Ac)::Type,Pt1acVal::v11> v11{};
        }
        }
        ///Product Term 0, D input Configuration
        enum class Pt0dcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Pt0dcVal> pt0Dc{}; 
        namespace Pt0dcValC{
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Dc)::Type,Pt0dcVal::v11> v11{};
        }
        }
        ///Product Term 0, C input Configuration
        enum class Pt0ccVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Pt0ccVal> pt0Cc{}; 
        namespace Pt0ccValC{
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Cc)::Type,Pt0ccVal::v11> v11{};
        }
        }
        ///Product Term 0, B input Configuration
        enum class Pt0bcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Pt0bcVal> pt0Bc{}; 
        namespace Pt0bcValC{
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Bc)::Type,Pt0bcVal::v11> v11{};
        }
        }
        ///Product Term 0, A input Configuration
        enum class Pt0acVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,Pt0acVal> pt0Ac{}; 
        namespace Pt0acValC{
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pt0Ac)::Type,Pt0acVal::v11> v11{};
        }
        }
    }
}
