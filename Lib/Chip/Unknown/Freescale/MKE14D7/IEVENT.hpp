#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Intelligent event controller
    namespace IeventDrl{    ///<iEvent Data Register: Low
        using Addr = Register::Address<0x40019000,0x00000000,0,unsigned>;
        ///Event Inputs {A0}
        enum class inA0Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inA0ValC{
            constexpr MPL::Value<inA0Val,inA0Val::v0> v0{};
            constexpr MPL::Value<inA0Val,inA0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,inA0Val> inA0{}; 
        ///Event Inputs {B0}
        enum class inB0Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inB0ValC{
            constexpr MPL::Value<inB0Val,inB0Val::v0> v0{};
            constexpr MPL::Value<inB0Val,inB0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,inB0Val> inB0{}; 
        ///Event Inputs {C0}
        enum class inC0Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inC0ValC{
            constexpr MPL::Value<inC0Val,inC0Val::v0> v0{};
            constexpr MPL::Value<inC0Val,inC0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,inC0Val> inC0{}; 
        ///Event Inputs {D0}
        enum class inD0Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inD0ValC{
            constexpr MPL::Value<inD0Val,inD0Val::v0> v0{};
            constexpr MPL::Value<inD0Val,inD0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,inD0Val> inD0{}; 
        ///Output Finite State Machine 0
        enum class outputFsm0Val {
            v000=0x00000000,     ///<The channel is disabled; FSM = idle.
            v001=0x00000001,     ///<The channel is enabled and waiting for the programmed event to occur; FSM = wfevt.
            v011=0x00000003,     ///<The programmed event has occurred and the channel is asserting its output; FSM = assert.
            v100=0x00000004,     ///<The channel is programmed for one-shot operation and the event has completed; FSM = os_hold.
            v101=0x00000005,     ///<The channel is waiting for the selected input signals to be negated before rearming; FSM = wfclr.
            v111=0x00000007,     ///<The event output has been acknowledged; done signals are broadcast during 1-cycle state; FSM = done.
        };
        namespace outputFsm0ValC{
            constexpr MPL::Value<outputFsm0Val,outputFsm0Val::v000> v000{};
            constexpr MPL::Value<outputFsm0Val,outputFsm0Val::v001> v001{};
            constexpr MPL::Value<outputFsm0Val,outputFsm0Val::v011> v011{};
            constexpr MPL::Value<outputFsm0Val,outputFsm0Val::v100> v100{};
            constexpr MPL::Value<outputFsm0Val,outputFsm0Val::v101> v101{};
            constexpr MPL::Value<outputFsm0Val,outputFsm0Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,outputFsm0Val> outputFsm0{}; 
        ///Event Output 0
        enum class evOut0Val {
            v0=0x00000000,     ///<The event output is negated.
            v1=0x00000001,     ///<The event output is asserted.
        };
        namespace evOut0ValC{
            constexpr MPL::Value<evOut0Val,evOut0Val::v0> v0{};
            constexpr MPL::Value<evOut0Val,evOut0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,evOut0Val> evOut0{}; 
        ///Event Inputs {A1}
        enum class inA1Val {
            v0=0x00000000,     ///<The state of the event input was negated.
        };
        namespace inA1ValC{
            constexpr MPL::Value<inA1Val,inA1Val::v0> v0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,inA1Val> inA1{}; 
        ///Event Inputs {B1}
        enum class inB1Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inB1ValC{
            constexpr MPL::Value<inB1Val,inB1Val::v0> v0{};
            constexpr MPL::Value<inB1Val,inB1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,inB1Val> inB1{}; 
        ///Event Inputs {C1}
        enum class inC1Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inC1ValC{
            constexpr MPL::Value<inC1Val,inC1Val::v0> v0{};
            constexpr MPL::Value<inC1Val,inC1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,inC1Val> inC1{}; 
        ///Event Inputs {D1}
        enum class inD1Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inD1ValC{
            constexpr MPL::Value<inD1Val,inD1Val::v0> v0{};
            constexpr MPL::Value<inD1Val,inD1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,inD1Val> inD1{}; 
        ///Output Finite State Machine 1
        enum class outputFsm1Val {
            v000=0x00000000,     ///<The channel is disabled; FSM = idle.
            v001=0x00000001,     ///<The channel is enabled and waiting for the programmed event to occur; FSM = wfevt.
            v011=0x00000003,     ///<The programmed event has occurred and the channel is asserting its output; FSM = assert.
            v100=0x00000004,     ///<The channel is programmed for one-shot operation and the event has completed; FSM = os_hold.
            v101=0x00000005,     ///<The channel is waiting for the selected input signals to be negated before rearming; FSM = wfclr.
            v111=0x00000007,     ///<The event output has been acknowledged; done signals are broadcast during 1-cycle state; FSM = done.
        };
        namespace outputFsm1ValC{
            constexpr MPL::Value<outputFsm1Val,outputFsm1Val::v000> v000{};
            constexpr MPL::Value<outputFsm1Val,outputFsm1Val::v001> v001{};
            constexpr MPL::Value<outputFsm1Val,outputFsm1Val::v011> v011{};
            constexpr MPL::Value<outputFsm1Val,outputFsm1Val::v100> v100{};
            constexpr MPL::Value<outputFsm1Val,outputFsm1Val::v101> v101{};
            constexpr MPL::Value<outputFsm1Val,outputFsm1Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,outputFsm1Val> outputFsm1{}; 
        ///Event Output 1
        enum class evOut1Val {
            v0=0x00000000,     ///<The event output is negated.
            v1=0x00000001,     ///<The event output is asserted.
        };
        namespace evOut1ValC{
            constexpr MPL::Value<evOut1Val,evOut1Val::v0> v0{};
            constexpr MPL::Value<evOut1Val,evOut1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,evOut1Val> evOut1{}; 
        ///Event Inputs {A2}
        enum class inA2Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inA2ValC{
            constexpr MPL::Value<inA2Val,inA2Val::v0> v0{};
            constexpr MPL::Value<inA2Val,inA2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,inA2Val> inA2{}; 
        ///Event Inputs {B2}
        enum class inB2Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inB2ValC{
            constexpr MPL::Value<inB2Val,inB2Val::v0> v0{};
            constexpr MPL::Value<inB2Val,inB2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,inB2Val> inB2{}; 
        ///Event Inputs {C2}
        enum class inC2Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inC2ValC{
            constexpr MPL::Value<inC2Val,inC2Val::v0> v0{};
            constexpr MPL::Value<inC2Val,inC2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,inC2Val> inC2{}; 
        ///Event Inputs {D2}
        enum class inD2Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inD2ValC{
            constexpr MPL::Value<inD2Val,inD2Val::v0> v0{};
            constexpr MPL::Value<inD2Val,inD2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,inD2Val> inD2{}; 
        ///Output Finite State Machine 2
        enum class outputFsm2Val {
            v000=0x00000000,     ///<The channel is disabled; FSM = idle.
            v001=0x00000001,     ///<The channel is enabled and waiting for the programmed event to occur; FSM = wfevt.
            v011=0x00000003,     ///<The programmed event has occurred and the channel is asserting its output; FSM = assert.
            v100=0x00000004,     ///<The channel is programmed for one-shot operation and the event has completed; FSM = os_hold.
            v101=0x00000005,     ///<The channel is waiting for the selected input signals to be negated before rearming; FSM = wfclr.
            v111=0x00000007,     ///<The event output has been acknowledged; done signals are broadcast during 1-cycle state; FSM = done.
        };
        namespace outputFsm2ValC{
            constexpr MPL::Value<outputFsm2Val,outputFsm2Val::v000> v000{};
            constexpr MPL::Value<outputFsm2Val,outputFsm2Val::v001> v001{};
            constexpr MPL::Value<outputFsm2Val,outputFsm2Val::v011> v011{};
            constexpr MPL::Value<outputFsm2Val,outputFsm2Val::v100> v100{};
            constexpr MPL::Value<outputFsm2Val,outputFsm2Val::v101> v101{};
            constexpr MPL::Value<outputFsm2Val,outputFsm2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,outputFsm2Val> outputFsm2{}; 
        ///Event Output 2
        enum class evOut2Val {
            v0=0x00000000,     ///<The event output is negated.
            v1=0x00000001,     ///<The event output is asserted.
        };
        namespace evOut2ValC{
            constexpr MPL::Value<evOut2Val,evOut2Val::v0> v0{};
            constexpr MPL::Value<evOut2Val,evOut2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,evOut2Val> evOut2{}; 
        ///Event Inputs {A3}
        enum class inA3Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inA3ValC{
            constexpr MPL::Value<inA3Val,inA3Val::v0> v0{};
            constexpr MPL::Value<inA3Val,inA3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,inA3Val> inA3{}; 
        ///Event Inputs {B3}
        enum class inB3Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inB3ValC{
            constexpr MPL::Value<inB3Val,inB3Val::v0> v0{};
            constexpr MPL::Value<inB3Val,inB3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,inB3Val> inB3{}; 
        ///Event Inputs {C3}
        enum class inC3Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inC3ValC{
            constexpr MPL::Value<inC3Val,inC3Val::v0> v0{};
            constexpr MPL::Value<inC3Val,inC3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,inC3Val> inC3{}; 
        ///Event Inputs {D3}
        enum class inD3Val {
            v0=0x00000000,     ///<The state of the event input was negated.
            v1=0x00000001,     ///<The state of the event input was asserted.
        };
        namespace inD3ValC{
            constexpr MPL::Value<inD3Val,inD3Val::v0> v0{};
            constexpr MPL::Value<inD3Val,inD3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,inD3Val> inD3{}; 
        ///Output Finite State Machine 3
        enum class outputFsm3Val {
            v000=0x00000000,     ///<The channel is disabled; FSM = idle.
            v001=0x00000001,     ///<The channel is enabled and waiting for the programmed event to occur; FSM = wfevt.
            v011=0x00000003,     ///<The programmed event has occurred and the channel is asserting its output; FSM = assert.
            v100=0x00000004,     ///<The channel is programmed for one-shot operation and the event has completed; FSM = os_hold.
            v101=0x00000005,     ///<The channel is waiting for the selected input signals to be negated before rearming; FSM = wfclr.
            v111=0x00000007,     ///<The event output has been acknowledged; done signals are broadcast during 1-cycle state; FSM = done.
        };
        namespace outputFsm3ValC{
            constexpr MPL::Value<outputFsm3Val,outputFsm3Val::v000> v000{};
            constexpr MPL::Value<outputFsm3Val,outputFsm3Val::v001> v001{};
            constexpr MPL::Value<outputFsm3Val,outputFsm3Val::v011> v011{};
            constexpr MPL::Value<outputFsm3Val,outputFsm3Val::v100> v100{};
            constexpr MPL::Value<outputFsm3Val,outputFsm3Val::v101> v101{};
            constexpr MPL::Value<outputFsm3Val,outputFsm3Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,outputFsm3Val> outputFsm3{}; 
        ///Event Output 3
        enum class evOut3Val {
            v0=0x00000000,     ///<The event output is negated.
            v1=0x00000001,     ///<The event output is asserted.
        };
        namespace evOut3ValC{
            constexpr MPL::Value<evOut3Val,evOut3Val::v0> v0{};
            constexpr MPL::Value<evOut3Val,evOut3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,evOut3Val> evOut3{}; 
    }
    namespace IeventCrl{    ///<iEvent Control Register: Low
        using Addr = Register::Address<0x40019080,0x70707070,0,unsigned>;
        ///Output Channel Type 0
        enum class type0Val {
            v00=0x00000000,     ///<The channel is disabled.
            v01=0x00000001,     ///<The channel is defined as a DMA request output.
            v10=0x00000002,     ///<The channel is defined as a hardware trigger output.
            v11=0x00000003,     ///<The channel is defined as an interrupt request output.
        };
        namespace type0ValC{
            constexpr MPL::Value<type0Val,type0Val::v00> v00{};
            constexpr MPL::Value<type0Val,type0Val::v01> v01{};
            constexpr MPL::Value<type0Val,type0Val::v10> v10{};
            constexpr MPL::Value<type0Val,type0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,type0Val> type0{}; 
        ///One-Shot Enable 0
        enum class ose0Val {
            v0=0x00000000,     ///<The channel event output is enabled to occur multiple times.
            v1=0x00000001,     ///<The channel event output is enabled to occur one time.
        };
        namespace ose0ValC{
            constexpr MPL::Value<ose0Val,ose0Val::v0> v0{};
            constexpr MPL::Value<ose0Val,ose0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ose0Val> ose0{}; 
        ///Disable Done Broadcast 0
        enum class ddb0Val {
            v0=0x00000000,     ///<The event done indicators are broadcast to the appropriate selected event inputs.
            v1=0x00000001,     ///<The event done indicators are not broadcast to the appropriate selected event inputs.
        };
        namespace ddb0ValC{
            constexpr MPL::Value<ddb0Val,ddb0Val::v0> v0{};
            constexpr MPL::Value<ddb0Val,ddb0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ddb0Val> ddb0{}; 
        ///Read-Only 0
        enum class ro0Val {
            v0=0x00000000,     ///<The iEvent configuration registers for this channel can be read and written.
            v1=0x00000001,     ///<The iEvent configuration registers for this channel can only be read.
        };
        namespace ro0ValC{
            constexpr MPL::Value<ro0Val,ro0Val::v0> v0{};
            constexpr MPL::Value<ro0Val,ro0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ro0Val> ro0{}; 
        ///Output Channel Type 1
        enum class type1Val {
            v00=0x00000000,     ///<The channel is disabled.
            v01=0x00000001,     ///<The channel is defined as a DMA request output.
            v10=0x00000002,     ///<The channel is defined as a hardware trigger output.
            v11=0x00000003,     ///<The channel is defined as an interrupt request output.
        };
        namespace type1ValC{
            constexpr MPL::Value<type1Val,type1Val::v00> v00{};
            constexpr MPL::Value<type1Val,type1Val::v01> v01{};
            constexpr MPL::Value<type1Val,type1Val::v10> v10{};
            constexpr MPL::Value<type1Val,type1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,type1Val> type1{}; 
        ///One-Shot Enable 1
        enum class ose1Val {
            v0=0x00000000,     ///<The channel event output is enabled to occur multiple times.
            v1=0x00000001,     ///<The channel event output is enabled to occur one time.
        };
        namespace ose1ValC{
            constexpr MPL::Value<ose1Val,ose1Val::v0> v0{};
            constexpr MPL::Value<ose1Val,ose1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ose1Val> ose1{}; 
        ///Disable Done Broadcast 1
        enum class ddb1Val {
            v0=0x00000000,     ///<The event done indicators are broadcast to the appropriate selected event inputs.
            v1=0x00000001,     ///<The event done indicators are not broadcast to the appropriate selected event inputs.
        };
        namespace ddb1ValC{
            constexpr MPL::Value<ddb1Val,ddb1Val::v0> v0{};
            constexpr MPL::Value<ddb1Val,ddb1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ddb1Val> ddb1{}; 
        ///Read-Only 1
        enum class ro1Val {
            v0=0x00000000,     ///<The iEvent configuration registers for this channel can be read and written.
            v1=0x00000001,     ///<The iEvent configuration registers for this channel can only be read.
        };
        namespace ro1ValC{
            constexpr MPL::Value<ro1Val,ro1Val::v0> v0{};
            constexpr MPL::Value<ro1Val,ro1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ro1Val> ro1{}; 
        ///Output Channel Type 2
        enum class type2Val {
            v00=0x00000000,     ///<The channel is disabled.
            v01=0x00000001,     ///<The channel is defined as a DMA request output.
            v10=0x00000002,     ///<The channel is defined as a hardware trigger output.
            v11=0x00000003,     ///<The channel is defined as an interrupt request output.
        };
        namespace type2ValC{
            constexpr MPL::Value<type2Val,type2Val::v00> v00{};
            constexpr MPL::Value<type2Val,type2Val::v01> v01{};
            constexpr MPL::Value<type2Val,type2Val::v10> v10{};
            constexpr MPL::Value<type2Val,type2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,type2Val> type2{}; 
        ///One-Shot Enable 2
        enum class ose2Val {
            v0=0x00000000,     ///<The channel event output is enabled to occur multiple times.
            v1=0x00000001,     ///<The channel event output is enabled to occur one time.
        };
        namespace ose2ValC{
            constexpr MPL::Value<ose2Val,ose2Val::v0> v0{};
            constexpr MPL::Value<ose2Val,ose2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ose2Val> ose2{}; 
        ///Disable Done Broadcast 2
        enum class ddb2Val {
            v0=0x00000000,     ///<The event done indicators are broadcast to the appropriate selected event inputs.
            v1=0x00000001,     ///<The event done indicators are not broadcast to the appropriate selected event inputs.
        };
        namespace ddb2ValC{
            constexpr MPL::Value<ddb2Val,ddb2Val::v0> v0{};
            constexpr MPL::Value<ddb2Val,ddb2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ddb2Val> ddb2{}; 
        ///Read-Only 2
        enum class ro2Val {
            v0=0x00000000,     ///<The iEvent configuration registers for this channel can be read and written.
            v1=0x00000001,     ///<The iEvent configuration registers for this channel can only be read.
        };
        namespace ro2ValC{
            constexpr MPL::Value<ro2Val,ro2Val::v0> v0{};
            constexpr MPL::Value<ro2Val,ro2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ro2Val> ro2{}; 
        ///Output Channel Type 3
        enum class type3Val {
            v00=0x00000000,     ///<The channel is disabled.
            v01=0x00000001,     ///<The channel is defined as a DMA request output.
            v10=0x00000002,     ///<The channel is defined as a hardware trigger output.
            v11=0x00000003,     ///<The channel is defined as an interrupt request output.
        };
        namespace type3ValC{
            constexpr MPL::Value<type3Val,type3Val::v00> v00{};
            constexpr MPL::Value<type3Val,type3Val::v01> v01{};
            constexpr MPL::Value<type3Val,type3Val::v10> v10{};
            constexpr MPL::Value<type3Val,type3Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,type3Val> type3{}; 
        ///One-Shot Enable 3
        enum class ose3Val {
            v0=0x00000000,     ///<The channel event output is enabled to occur multiple times.
            v1=0x00000001,     ///<The channel event output is enabled to occur one time.
        };
        namespace ose3ValC{
            constexpr MPL::Value<ose3Val,ose3Val::v0> v0{};
            constexpr MPL::Value<ose3Val,ose3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ose3Val> ose3{}; 
        ///Disable Done Broadcast 3
        enum class ddb3Val {
            v0=0x00000000,     ///<The event done indicators are broadcast to the appropriate selected event inputs.
            v1=0x00000001,     ///<The event done indicators are not broadcast to the appropriate selected event inputs.
        };
        namespace ddb3ValC{
            constexpr MPL::Value<ddb3Val,ddb3Val::v0> v0{};
            constexpr MPL::Value<ddb3Val,ddb3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ddb3Val> ddb3{}; 
        ///Read-Only 3
        enum class ro3Val {
            v0=0x00000000,     ///<The iEvent configuration registers for this channel can be read and written.
            v1=0x00000001,     ///<The iEvent configuration registers for this channel can only be read.
        };
        namespace ro3ValC{
            constexpr MPL::Value<ro3Val,ro3Val::v0> v0{};
            constexpr MPL::Value<ro3Val,ro3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ro3Val> ro3{}; 
    }
    namespace IeventImxcr0{    ///<iEvent Input Mux Configuration Register
        using Addr = Register::Address<0x40019100,0xf0f0f0f0,0,unsigned>;
        ///no description available
        enum class dSelectVal {
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
        namespace dSelectValC{
            constexpr MPL::Value<dSelectVal,dSelectVal::v0000> v0000{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0001> v0001{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0010> v0010{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0011> v0011{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0100> v0100{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0101> v0101{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0110> v0110{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0111> v0111{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1000> v1000{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1001> v1001{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1010> v1010{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1011> v1011{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1100> v1100{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1101> v1101{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1110> v1110{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,dSelectVal> dSelect{}; 
        ///no description available
        enum class cSelectVal {
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
        namespace cSelectValC{
            constexpr MPL::Value<cSelectVal,cSelectVal::v0000> v0000{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0001> v0001{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0010> v0010{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0011> v0011{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0100> v0100{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0101> v0101{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0110> v0110{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0111> v0111{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1000> v1000{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1001> v1001{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1010> v1010{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1011> v1011{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1100> v1100{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1101> v1101{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1110> v1110{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,cSelectVal> cSelect{}; 
        ///no description available
        enum class bSelectVal {
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
        namespace bSelectValC{
            constexpr MPL::Value<bSelectVal,bSelectVal::v0000> v0000{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0001> v0001{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0010> v0010{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0011> v0011{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0100> v0100{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0101> v0101{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0110> v0110{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0111> v0111{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1000> v1000{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1001> v1001{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1010> v1010{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1011> v1011{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1100> v1100{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1101> v1101{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1110> v1110{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,bSelectVal> bSelect{}; 
        ///no description available
        enum class aSelectVal {
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
        namespace aSelectValC{
            constexpr MPL::Value<aSelectVal,aSelectVal::v0000> v0000{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0001> v0001{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0010> v0010{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0011> v0011{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0100> v0100{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0101> v0101{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0110> v0110{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0111> v0111{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1000> v1000{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1001> v1001{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1010> v1010{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1011> v1011{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1100> v1100{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1101> v1101{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1110> v1110{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,aSelectVal> aSelect{}; 
    }
    namespace IeventImxcr1{    ///<iEvent Input Mux Configuration Register
        using Addr = Register::Address<0x40019108,0xf0f0f0f0,0,unsigned>;
        ///no description available
        enum class dSelectVal {
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
        namespace dSelectValC{
            constexpr MPL::Value<dSelectVal,dSelectVal::v0000> v0000{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0001> v0001{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0010> v0010{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0011> v0011{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0100> v0100{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0101> v0101{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0110> v0110{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0111> v0111{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1000> v1000{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1001> v1001{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1010> v1010{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1011> v1011{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1100> v1100{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1101> v1101{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1110> v1110{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,dSelectVal> dSelect{}; 
        ///no description available
        enum class cSelectVal {
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
        namespace cSelectValC{
            constexpr MPL::Value<cSelectVal,cSelectVal::v0000> v0000{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0001> v0001{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0010> v0010{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0011> v0011{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0100> v0100{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0101> v0101{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0110> v0110{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0111> v0111{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1000> v1000{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1001> v1001{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1010> v1010{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1011> v1011{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1100> v1100{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1101> v1101{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1110> v1110{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,cSelectVal> cSelect{}; 
        ///no description available
        enum class bSelectVal {
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
        namespace bSelectValC{
            constexpr MPL::Value<bSelectVal,bSelectVal::v0000> v0000{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0001> v0001{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0010> v0010{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0011> v0011{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0100> v0100{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0101> v0101{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0110> v0110{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0111> v0111{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1000> v1000{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1001> v1001{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1010> v1010{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1011> v1011{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1100> v1100{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1101> v1101{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1110> v1110{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,bSelectVal> bSelect{}; 
        ///no description available
        enum class aSelectVal {
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
        namespace aSelectValC{
            constexpr MPL::Value<aSelectVal,aSelectVal::v0000> v0000{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0001> v0001{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0010> v0010{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0011> v0011{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0100> v0100{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0101> v0101{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0110> v0110{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0111> v0111{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1000> v1000{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1001> v1001{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1010> v1010{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1011> v1011{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1100> v1100{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1101> v1101{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1110> v1110{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,aSelectVal> aSelect{}; 
    }
    namespace IeventImxcr2{    ///<iEvent Input Mux Configuration Register
        using Addr = Register::Address<0x40019110,0xf0f0f0f0,0,unsigned>;
        ///no description available
        enum class dSelectVal {
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
        namespace dSelectValC{
            constexpr MPL::Value<dSelectVal,dSelectVal::v0000> v0000{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0001> v0001{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0010> v0010{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0011> v0011{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0100> v0100{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0101> v0101{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0110> v0110{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0111> v0111{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1000> v1000{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1001> v1001{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1010> v1010{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1011> v1011{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1100> v1100{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1101> v1101{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1110> v1110{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,dSelectVal> dSelect{}; 
        ///no description available
        enum class cSelectVal {
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
        namespace cSelectValC{
            constexpr MPL::Value<cSelectVal,cSelectVal::v0000> v0000{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0001> v0001{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0010> v0010{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0011> v0011{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0100> v0100{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0101> v0101{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0110> v0110{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0111> v0111{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1000> v1000{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1001> v1001{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1010> v1010{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1011> v1011{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1100> v1100{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1101> v1101{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1110> v1110{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,cSelectVal> cSelect{}; 
        ///no description available
        enum class bSelectVal {
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
        namespace bSelectValC{
            constexpr MPL::Value<bSelectVal,bSelectVal::v0000> v0000{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0001> v0001{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0010> v0010{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0011> v0011{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0100> v0100{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0101> v0101{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0110> v0110{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0111> v0111{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1000> v1000{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1001> v1001{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1010> v1010{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1011> v1011{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1100> v1100{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1101> v1101{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1110> v1110{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,bSelectVal> bSelect{}; 
        ///no description available
        enum class aSelectVal {
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
        namespace aSelectValC{
            constexpr MPL::Value<aSelectVal,aSelectVal::v0000> v0000{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0001> v0001{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0010> v0010{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0011> v0011{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0100> v0100{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0101> v0101{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0110> v0110{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0111> v0111{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1000> v1000{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1001> v1001{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1010> v1010{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1011> v1011{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1100> v1100{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1101> v1101{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1110> v1110{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,aSelectVal> aSelect{}; 
    }
    namespace IeventImxcr3{    ///<iEvent Input Mux Configuration Register
        using Addr = Register::Address<0x40019118,0xf0f0f0f0,0,unsigned>;
        ///no description available
        enum class dSelectVal {
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
        namespace dSelectValC{
            constexpr MPL::Value<dSelectVal,dSelectVal::v0000> v0000{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0001> v0001{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0010> v0010{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0011> v0011{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0100> v0100{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0101> v0101{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0110> v0110{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v0111> v0111{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1000> v1000{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1001> v1001{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1010> v1010{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1011> v1011{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1100> v1100{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1101> v1101{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1110> v1110{};
            constexpr MPL::Value<dSelectVal,dSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,dSelectVal> dSelect{}; 
        ///no description available
        enum class cSelectVal {
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
        namespace cSelectValC{
            constexpr MPL::Value<cSelectVal,cSelectVal::v0000> v0000{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0001> v0001{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0010> v0010{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0011> v0011{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0100> v0100{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0101> v0101{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0110> v0110{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v0111> v0111{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1000> v1000{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1001> v1001{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1010> v1010{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1011> v1011{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1100> v1100{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1101> v1101{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1110> v1110{};
            constexpr MPL::Value<cSelectVal,cSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,cSelectVal> cSelect{}; 
        ///no description available
        enum class bSelectVal {
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
        namespace bSelectValC{
            constexpr MPL::Value<bSelectVal,bSelectVal::v0000> v0000{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0001> v0001{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0010> v0010{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0011> v0011{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0100> v0100{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0101> v0101{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0110> v0110{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v0111> v0111{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1000> v1000{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1001> v1001{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1010> v1010{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1011> v1011{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1100> v1100{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1101> v1101{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1110> v1110{};
            constexpr MPL::Value<bSelectVal,bSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,bSelectVal> bSelect{}; 
        ///no description available
        enum class aSelectVal {
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
        namespace aSelectValC{
            constexpr MPL::Value<aSelectVal,aSelectVal::v0000> v0000{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0001> v0001{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0010> v0010{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0011> v0011{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0100> v0100{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0101> v0101{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0110> v0110{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v0111> v0111{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1000> v1000{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1001> v1001{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1010> v1010{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1011> v1011{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1100> v1100{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1101> v1101{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1110> v1110{};
            constexpr MPL::Value<aSelectVal,aSelectVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,aSelectVal> aSelect{}; 
    }
    namespace IeventBfecr0{    ///<iEvent Boolean Function Eva1ation Configuration Register
        using Addr = Register::Address<0x40019104,0x00000000,0,unsigned>;
        ///Product Term 3, D input Configuration
        enum class pt3DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt3DcValC{
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v00> v00{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v01> v01{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v10> v10{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt3DcVal> pt3Dc{}; 
        ///Product Term 3, C input Configuration
        enum class pt3CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt3CcValC{
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v00> v00{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v01> v01{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v10> v10{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt3CcVal> pt3Cc{}; 
        ///Product Term 3, B input Configuration
        enum class pt3BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt3BcValC{
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v00> v00{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v01> v01{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v10> v10{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt3BcVal> pt3Bc{}; 
        ///Product Term 3, A input Configuration
        enum class pt3AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt3AcValC{
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v00> v00{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v01> v01{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v10> v10{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt3AcVal> pt3Ac{}; 
        ///Product Term 2, D input Configuration
        enum class pt2DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt2DcValC{
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v00> v00{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v01> v01{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v10> v10{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt2DcVal> pt2Dc{}; 
        ///Product Term 2, C input Configuration
        enum class pt2CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt2CcValC{
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v00> v00{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v01> v01{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v10> v10{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt2CcVal> pt2Cc{}; 
        ///Product Term 2, B input Configuration
        enum class pt2BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt2BcValC{
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v00> v00{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v01> v01{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v10> v10{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt2BcVal> pt2Bc{}; 
        ///Product Term 2, A input Configuration
        enum class pt2AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt2AcValC{
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v00> v00{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v01> v01{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v10> v10{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt2AcVal> pt2Ac{}; 
        ///Product Term 1, D input Configuration
        enum class pt1DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt1DcValC{
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v00> v00{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v01> v01{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v10> v10{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pt1DcVal> pt1Dc{}; 
        ///Product Term 1, C input Configuration
        enum class pt1CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt1CcValC{
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v00> v00{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v01> v01{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v10> v10{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,pt1CcVal> pt1Cc{}; 
        ///Product Term 1, B input Configuration
        enum class pt1BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt1BcValC{
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v00> v00{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v01> v01{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v10> v10{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,pt1BcVal> pt1Bc{}; 
        ///Product Term 1, A input Configuration
        enum class pt1AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt1AcValC{
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v00> v00{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v01> v01{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v10> v10{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,pt1AcVal> pt1Ac{}; 
        ///Product Term 0, D input Configuration
        enum class pt0DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt0DcValC{
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v00> v00{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v01> v01{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v10> v10{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,pt0DcVal> pt0Dc{}; 
        ///Product Term 0, C input Configuration
        enum class pt0CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt0CcValC{
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v00> v00{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v01> v01{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v10> v10{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,pt0CcVal> pt0Cc{}; 
        ///Product Term 0, B input Configuration
        enum class pt0BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt0BcValC{
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v00> v00{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v01> v01{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v10> v10{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,pt0BcVal> pt0Bc{}; 
        ///Product Term 0, A input Configuration
        enum class pt0AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt0AcValC{
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v00> v00{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v01> v01{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v10> v10{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,pt0AcVal> pt0Ac{}; 
    }
    namespace IeventBfecr1{    ///<iEvent Boolean Function Eva1ation Configuration Register
        using Addr = Register::Address<0x4001910c,0x00000000,0,unsigned>;
        ///Product Term 3, D input Configuration
        enum class pt3DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt3DcValC{
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v00> v00{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v01> v01{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v10> v10{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt3DcVal> pt3Dc{}; 
        ///Product Term 3, C input Configuration
        enum class pt3CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt3CcValC{
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v00> v00{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v01> v01{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v10> v10{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt3CcVal> pt3Cc{}; 
        ///Product Term 3, B input Configuration
        enum class pt3BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt3BcValC{
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v00> v00{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v01> v01{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v10> v10{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt3BcVal> pt3Bc{}; 
        ///Product Term 3, A input Configuration
        enum class pt3AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt3AcValC{
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v00> v00{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v01> v01{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v10> v10{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt3AcVal> pt3Ac{}; 
        ///Product Term 2, D input Configuration
        enum class pt2DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt2DcValC{
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v00> v00{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v01> v01{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v10> v10{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt2DcVal> pt2Dc{}; 
        ///Product Term 2, C input Configuration
        enum class pt2CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt2CcValC{
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v00> v00{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v01> v01{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v10> v10{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt2CcVal> pt2Cc{}; 
        ///Product Term 2, B input Configuration
        enum class pt2BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt2BcValC{
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v00> v00{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v01> v01{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v10> v10{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt2BcVal> pt2Bc{}; 
        ///Product Term 2, A input Configuration
        enum class pt2AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt2AcValC{
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v00> v00{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v01> v01{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v10> v10{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt2AcVal> pt2Ac{}; 
        ///Product Term 1, D input Configuration
        enum class pt1DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt1DcValC{
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v00> v00{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v01> v01{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v10> v10{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pt1DcVal> pt1Dc{}; 
        ///Product Term 1, C input Configuration
        enum class pt1CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt1CcValC{
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v00> v00{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v01> v01{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v10> v10{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,pt1CcVal> pt1Cc{}; 
        ///Product Term 1, B input Configuration
        enum class pt1BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt1BcValC{
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v00> v00{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v01> v01{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v10> v10{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,pt1BcVal> pt1Bc{}; 
        ///Product Term 1, A input Configuration
        enum class pt1AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt1AcValC{
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v00> v00{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v01> v01{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v10> v10{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,pt1AcVal> pt1Ac{}; 
        ///Product Term 0, D input Configuration
        enum class pt0DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt0DcValC{
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v00> v00{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v01> v01{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v10> v10{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,pt0DcVal> pt0Dc{}; 
        ///Product Term 0, C input Configuration
        enum class pt0CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt0CcValC{
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v00> v00{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v01> v01{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v10> v10{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,pt0CcVal> pt0Cc{}; 
        ///Product Term 0, B input Configuration
        enum class pt0BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt0BcValC{
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v00> v00{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v01> v01{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v10> v10{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,pt0BcVal> pt0Bc{}; 
        ///Product Term 0, A input Configuration
        enum class pt0AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt0AcValC{
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v00> v00{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v01> v01{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v10> v10{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,pt0AcVal> pt0Ac{}; 
    }
    namespace IeventBfecr2{    ///<iEvent Boolean Function Eva1ation Configuration Register
        using Addr = Register::Address<0x40019114,0x00000000,0,unsigned>;
        ///Product Term 3, D input Configuration
        enum class pt3DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt3DcValC{
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v00> v00{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v01> v01{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v10> v10{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt3DcVal> pt3Dc{}; 
        ///Product Term 3, C input Configuration
        enum class pt3CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt3CcValC{
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v00> v00{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v01> v01{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v10> v10{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt3CcVal> pt3Cc{}; 
        ///Product Term 3, B input Configuration
        enum class pt3BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt3BcValC{
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v00> v00{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v01> v01{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v10> v10{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt3BcVal> pt3Bc{}; 
        ///Product Term 3, A input Configuration
        enum class pt3AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt3AcValC{
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v00> v00{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v01> v01{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v10> v10{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt3AcVal> pt3Ac{}; 
        ///Product Term 2, D input Configuration
        enum class pt2DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt2DcValC{
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v00> v00{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v01> v01{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v10> v10{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt2DcVal> pt2Dc{}; 
        ///Product Term 2, C input Configuration
        enum class pt2CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt2CcValC{
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v00> v00{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v01> v01{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v10> v10{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt2CcVal> pt2Cc{}; 
        ///Product Term 2, B input Configuration
        enum class pt2BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt2BcValC{
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v00> v00{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v01> v01{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v10> v10{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt2BcVal> pt2Bc{}; 
        ///Product Term 2, A input Configuration
        enum class pt2AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt2AcValC{
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v00> v00{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v01> v01{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v10> v10{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt2AcVal> pt2Ac{}; 
        ///Product Term 1, D input Configuration
        enum class pt1DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt1DcValC{
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v00> v00{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v01> v01{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v10> v10{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pt1DcVal> pt1Dc{}; 
        ///Product Term 1, C input Configuration
        enum class pt1CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt1CcValC{
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v00> v00{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v01> v01{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v10> v10{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,pt1CcVal> pt1Cc{}; 
        ///Product Term 1, B input Configuration
        enum class pt1BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt1BcValC{
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v00> v00{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v01> v01{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v10> v10{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,pt1BcVal> pt1Bc{}; 
        ///Product Term 1, A input Configuration
        enum class pt1AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt1AcValC{
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v00> v00{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v01> v01{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v10> v10{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,pt1AcVal> pt1Ac{}; 
        ///Product Term 0, D input Configuration
        enum class pt0DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt0DcValC{
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v00> v00{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v01> v01{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v10> v10{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,pt0DcVal> pt0Dc{}; 
        ///Product Term 0, C input Configuration
        enum class pt0CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt0CcValC{
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v00> v00{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v01> v01{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v10> v10{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,pt0CcVal> pt0Cc{}; 
        ///Product Term 0, B input Configuration
        enum class pt0BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt0BcValC{
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v00> v00{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v01> v01{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v10> v10{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,pt0BcVal> pt0Bc{}; 
        ///Product Term 0, A input Configuration
        enum class pt0AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt0AcValC{
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v00> v00{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v01> v01{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v10> v10{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,pt0AcVal> pt0Ac{}; 
    }
    namespace IeventBfecr3{    ///<iEvent Boolean Function Eva1ation Configuration Register
        using Addr = Register::Address<0x4001911c,0x00000000,0,unsigned>;
        ///Product Term 3, D input Configuration
        enum class pt3DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt3DcValC{
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v00> v00{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v01> v01{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v10> v10{};
            constexpr MPL::Value<pt3DcVal,pt3DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pt3DcVal> pt3Dc{}; 
        ///Product Term 3, C input Configuration
        enum class pt3CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt3CcValC{
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v00> v00{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v01> v01{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v10> v10{};
            constexpr MPL::Value<pt3CcVal,pt3CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pt3CcVal> pt3Cc{}; 
        ///Product Term 3, B input Configuration
        enum class pt3BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt3BcValC{
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v00> v00{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v01> v01{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v10> v10{};
            constexpr MPL::Value<pt3BcVal,pt3BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pt3BcVal> pt3Bc{}; 
        ///Product Term 3, A input Configuration
        enum class pt3AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt3AcValC{
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v00> v00{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v01> v01{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v10> v10{};
            constexpr MPL::Value<pt3AcVal,pt3AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pt3AcVal> pt3Ac{}; 
        ///Product Term 2, D input Configuration
        enum class pt2DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt2DcValC{
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v00> v00{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v01> v01{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v10> v10{};
            constexpr MPL::Value<pt2DcVal,pt2DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pt2DcVal> pt2Dc{}; 
        ///Product Term 2, C input Configuration
        enum class pt2CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt2CcValC{
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v00> v00{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v01> v01{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v10> v10{};
            constexpr MPL::Value<pt2CcVal,pt2CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pt2CcVal> pt2Cc{}; 
        ///Product Term 2, B input Configuration
        enum class pt2BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt2BcValC{
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v00> v00{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v01> v01{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v10> v10{};
            constexpr MPL::Value<pt2BcVal,pt2BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,pt2BcVal> pt2Bc{}; 
        ///Product Term 2, A input Configuration
        enum class pt2AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt2AcValC{
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v00> v00{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v01> v01{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v10> v10{};
            constexpr MPL::Value<pt2AcVal,pt2AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,pt2AcVal> pt2Ac{}; 
        ///Product Term 1, D input Configuration
        enum class pt1DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt1DcValC{
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v00> v00{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v01> v01{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v10> v10{};
            constexpr MPL::Value<pt1DcVal,pt1DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,pt1DcVal> pt1Dc{}; 
        ///Product Term 1, C input Configuration
        enum class pt1CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt1CcValC{
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v00> v00{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v01> v01{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v10> v10{};
            constexpr MPL::Value<pt1CcVal,pt1CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,pt1CcVal> pt1Cc{}; 
        ///Product Term 1, B input Configuration
        enum class pt1BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt1BcValC{
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v00> v00{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v01> v01{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v10> v10{};
            constexpr MPL::Value<pt1BcVal,pt1BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,pt1BcVal> pt1Bc{}; 
        ///Product Term 1, A input Configuration
        enum class pt1AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt1AcValC{
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v00> v00{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v01> v01{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v10> v10{};
            constexpr MPL::Value<pt1AcVal,pt1AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,pt1AcVal> pt1Ac{}; 
        ///Product Term 0, D input Configuration
        enum class pt0DcVal {
            v00=0x00000000,     ///<Force the D input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the D input in this product term.
            v10=0x00000002,     ///<Complement the D input in this product term.
            v11=0x00000003,     ///<Force the D input in this product term to a logical one.
        };
        namespace pt0DcValC{
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v00> v00{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v01> v01{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v10> v10{};
            constexpr MPL::Value<pt0DcVal,pt0DcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,pt0DcVal> pt0Dc{}; 
        ///Product Term 0, C input Configuration
        enum class pt0CcVal {
            v00=0x00000000,     ///<Force the C input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the C input in this product term.
            v10=0x00000002,     ///<Complement the C input in this product term.
            v11=0x00000003,     ///<Force the C input in this product term to a logical one.
        };
        namespace pt0CcValC{
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v00> v00{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v01> v01{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v10> v10{};
            constexpr MPL::Value<pt0CcVal,pt0CcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,pt0CcVal> pt0Cc{}; 
        ///Product Term 0, B input Configuration
        enum class pt0BcVal {
            v00=0x00000000,     ///<Force the B input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the B input in this product term.
            v10=0x00000002,     ///<Complement the B input in this product term.
            v11=0x00000003,     ///<Force the B input in this product term to a logical one.
        };
        namespace pt0BcValC{
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v00> v00{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v01> v01{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v10> v10{};
            constexpr MPL::Value<pt0BcVal,pt0BcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,pt0BcVal> pt0Bc{}; 
        ///Product Term 0, A input Configuration
        enum class pt0AcVal {
            v00=0x00000000,     ///<Force the A input in this product term to a logical zero.
            v01=0x00000001,     ///<Pass the A input in this product term.
            v10=0x00000002,     ///<Complement the A input in this product term.
            v11=0x00000003,     ///<Force the A input in this product term to a logical one.
        };
        namespace pt0AcValC{
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v00> v00{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v01> v01{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v10> v10{};
            constexpr MPL::Value<pt0AcVal,pt0AcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,pt0AcVal> pt0Ac{}; 
    }
}
