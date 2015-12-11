#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog comparators ACMP0/1/2/3
    namespace Nonectrl{    ///<Comparator block control register
        using Addr = Register::Address<0x40008000,0xfffffcff,0,unsigned>;
        ///Selects the which comparators set and reset the ROSC output.
        enum class RoscctlVal {
            acmp1Acmp0=0x00000000,     ///<ACMP1/ACMP0. The ROSC output is set by ACMP1 and reset by ACMP0.
            acmp0Acmp1=0x00000001,     ///<ACMP0/ACMP1. The ROSC output is set by ACMP0 and reset by ACMP1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RoscctlVal> roscctl{}; 
        namespace RoscctlValC{
            constexpr Register::FieldValue<decltype(roscctl)::Type,RoscctlVal::acmp1Acmp0> acmp1Acmp0{};
            constexpr Register::FieldValue<decltype(roscctl)::Type,RoscctlVal::acmp0Acmp1> acmp0Acmp1{};
        }
        }
        ///Selects the reset source for the ROSC output.
        enum class ExtresetVal {
            internal=0x00000000,     ///<Internal. The ROSC output is reset by the internal chip reset.
            fromPinRoscReset=0x00000001,     ///<From pin ROSC_RESET. The ROSC output is reset by the ROSC_RESET input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ExtresetVal> extReset{}; 
        namespace ExtresetValC{
            constexpr Register::FieldValue<decltype(extReset)::Type,ExtresetVal::internal> internal{};
            constexpr Register::FieldValue<decltype(extReset)::Type,ExtresetVal::fromPinRoscReset> fromPinRoscReset{};
        }
        }
    }
    namespace Nonecmp0{    ///<Comparator 0 source control
        using Addr = Register::Address<0x40008004,0x80a01882,0,unsigned>;
        ///Comparator enable control.
        enum class EnVal {
            disabled=0x00000000,     ///<Disabled. Comparator disabled.
            enabled=0x00000001,     ///<Enabled. Comparator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::enabled> enabled{};
        }
        }
        ///Interrupt enable.
        enum class IntenVal {
            disabled=0x00000000,     ///<Disabled. Interrupts are disabled..
            enabled=0x00000001,     ///<Enabled. Interrupts are enabled.. Must set to 1 for interrupts to propagate to the NVIC and start-up logic.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::enabled> enabled{};
        }
        }
        ///Comparator status. This bit reflects the comparator output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stat{}; 
        ///VM input select.
        enum class VmVal {
            vrefDivider0=0x00000000,     ///<Vref divider 0.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp0I3=0x00000003,     ///<ACMP0_I3.
            acmp0I4=0x00000004,     ///<ACMP0_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            tempSensor=0x00000006,     ///<Temp sensor.
            adc02=0x00000007,     ///<ADC0_2. Input for ADC0 channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,VmVal> vm{}; 
        namespace VmValC{
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::vrefDivider0> vrefDivider0{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmp0I3> acmp0I3{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmp0I4> acmp0I4{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::internal0> internal0{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::tempSensor> tempSensor{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::adc02> adc02{};
        }
        }
        ///VP input select.
        enum class VpVal {
            vrefDivider0=0x00000000,     ///<Vref divider 0.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp0I3=0x00000003,     ///<ACMP0_I3.
            acmp0I4=0x00000004,     ///<ACMP0_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            tempSensor=0x00000006,     ///<Temp sensor.
            adc02=0x00000007,     ///<ADC0_2. Input for ADC0 channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,VpVal> vp{}; 
        namespace VpValC{
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::vrefDivider0> vrefDivider0{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmp0I3> acmp0I3{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmp0I4> acmp0I4{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::internal0> internal0{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::tempSensor> tempSensor{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::adc02> adc02{};
        }
        }
        ///Hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class HysVal {
            hysteresisIsTurned=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisIsTurned> hysteresisIsTurned{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        }
        ///Selects the polarity of the CMP output for purposes of generating level interrupts.
        enum class IntpolVal {
            notInverted=0x00000000,     ///<Not inverted. The output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<Inverted. The output is used inverted for generating interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,IntpolVal> intpol{}; 
        namespace IntpolValC{
            constexpr Register::FieldValue<decltype(intpol)::Type,IntpolVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(intpol)::Type,IntpolVal::inverted> inverted{};
        }
        }
        ///Select interrupt type.
        enum class InttypeVal {
            edge=0x00000000,     ///<Edge. Comparator interrupt is edge triggered.
            level=0x00000001,     ///<Level. Comparator interrupt is level triggered.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,InttypeVal> inttype{}; 
        namespace InttypeValC{
            constexpr Register::FieldValue<decltype(inttype)::Type,InttypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(inttype)::Type,InttypeVal::level> level{};
        }
        }
        ///Select edge triggered interrupt to be active on either high or low transitions, when INTTYPE = 0.
        enum class IntedgeVal {
            falling=0x00000000,     ///<Falling. Comparator interrupt is active on falling edges.
            rising=0x00000001,     ///<Rising. Comparator interrupt is active on rising edges.
            bothEdges=0x00000002,     ///<Both edges. Comparator Interrupt is active on both edges.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,IntedgeVal> intedge{}; 
        namespace IntedgeValC{
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::falling> falling{};
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::rising> rising{};
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::bothEdges> bothEdges{};
        }
        }
        ///Interrupt flag.
        enum class IntflagVal {
            notPending=0x00000000,     ///<Not pending. The Comparator interrupt is not pending.
            pending=0x00000001,     ///<Pending. The Comparator interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::pending> pending{};
        }
        }
        ///Voltage ladder enable for comparator 0.
        enum class VladenVal {
            disabled=0x00000000,     ///<Disabled. The Comparator voltage ladder is disabled.
            enabled=0x00000001,     ///<Enabled. The Comparator voltage ladder is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,VladenVal> vladen{}; 
        namespace VladenValC{
            constexpr Register::FieldValue<decltype(vladen)::Type,VladenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vladen)::Type,VladenVal::enabled> enabled{};
        }
        }
        ///Voltage reference select for comparator 0 voltage ladder.
        enum class VladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,VladrefVal> vladref{}; 
        namespace VladrefValC{
            constexpr Register::FieldValue<decltype(vladref)::Type,VladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr Register::FieldValue<decltype(vladref)::Type,VladrefVal::vddaPin> vddaPin{};
        }
        }
        ///Voltage ladder value for comparator 0. The reference voltage Vref depends on the setting of VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x Vref / 31. 00010 = 2 x Vref / 31. ... 11111 = Vref
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> vsel{}; 
        ///Configure the propagation delay. A shorter propagation delay means higher power consumption. Use values from 0x0 (shortest propagation delay and highest power consumption) to 0x2 (longest propagation delay and lowest power consumption). See the  data sheet for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonecmp1{    ///<Comparator 1 source control
        using Addr = Register::Address<0x4000800c,0x80a01882,0,unsigned>;
        ///Comparator enable control.
        enum class EnVal {
            disabled=0x00000000,     ///<Disabled. Comparator disabled.
            enabled=0x00000001,     ///<Enabled. Comparator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::enabled> enabled{};
        }
        }
        ///Interrupt enable.
        enum class IntenVal {
            disabled=0x00000000,     ///<Disabled. Interrupts are disabled..
            enabled=0x00000001,     ///<Enabled. Interrupts are enabled.. Must set to 1 for interrupts to propagate to the NVIC and start-up logic.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::enabled> enabled{};
        }
        }
        ///Comparator status. This bit reflects the comparator output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stat{}; 
        ///VM input select.
        enum class VmVal {
            vrefDivider1=0x00000000,     ///<Vref divider 1.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp1I3=0x00000003,     ///<ACMP1_I3.
            acmp1I4=0x00000004,     ///<ACMP1_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc01=0x00000006,     ///<ADC0_1. Input for ADC0 channel 1.
            adc03=0x00000007,     ///<ADC0_3. Input for ADC0 channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,VmVal> vm{}; 
        namespace VmValC{
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::vrefDivider1> vrefDivider1{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmp1I3> acmp1I3{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmp1I4> acmp1I4{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::internal0> internal0{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::adc01> adc01{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::adc03> adc03{};
        }
        }
        ///VP input select.
        enum class VpVal {
            vrefDivider1=0x00000000,     ///<Vref divider 1.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp1I3=0x00000003,     ///<ACMP1_I3.
            acmp1I4=0x00000004,     ///<ACMP1_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc01=0x00000006,     ///<ADC0_1. Input for ADC0 channel 1.
            adc03=0x00000007,     ///<ADC0_3. Input for ADC0 channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,VpVal> vp{}; 
        namespace VpValC{
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::vrefDivider1> vrefDivider1{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmp1I3> acmp1I3{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmp1I4> acmp1I4{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::internal0> internal0{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::adc01> adc01{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::adc03> adc03{};
        }
        }
        ///Hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class HysVal {
            hysteresisIsTurned=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisIsTurned> hysteresisIsTurned{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        }
        ///Selects the polarity of the CMP output for purposes of generating level interrupts.
        enum class IntpolVal {
            notInverted=0x00000000,     ///<Not inverted. The output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<Inverted. The output is used inverted for generating interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,IntpolVal> intpol{}; 
        namespace IntpolValC{
            constexpr Register::FieldValue<decltype(intpol)::Type,IntpolVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(intpol)::Type,IntpolVal::inverted> inverted{};
        }
        }
        ///Select interrupt type.
        enum class InttypeVal {
            edge=0x00000000,     ///<Edge. Comparator interrupt is edge triggered.
            level=0x00000001,     ///<Level. Comparator interrupt is level triggered.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,InttypeVal> inttype{}; 
        namespace InttypeValC{
            constexpr Register::FieldValue<decltype(inttype)::Type,InttypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(inttype)::Type,InttypeVal::level> level{};
        }
        }
        ///Select edge triggered interrupt to be active on either high or low transitions, when INTTYPE = 0.
        enum class IntedgeVal {
            falling=0x00000000,     ///<Falling. Comparator interrupt is active on falling edges.
            rising=0x00000001,     ///<Rising. Comparator interrupt is active on rising edges.
            bothEdges=0x00000002,     ///<Both edges. Comparator Interrupt is active on both edges.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,IntedgeVal> intedge{}; 
        namespace IntedgeValC{
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::falling> falling{};
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::rising> rising{};
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::bothEdges> bothEdges{};
        }
        }
        ///Interrupt flag.
        enum class IntflagVal {
            notPending=0x00000000,     ///<Not pending. The Comparator interrupt is not pending.
            pending=0x00000001,     ///<Pending. The Comparator interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::pending> pending{};
        }
        }
        ///Voltage ladder enable for comparator 1.
        enum class VladenVal {
            disabled=0x00000000,     ///<Disabled. The Comparator voltage ladder is disabled.
            enabled=0x00000001,     ///<Enabled. The Comparator voltage ladder is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,VladenVal> vladen{}; 
        namespace VladenValC{
            constexpr Register::FieldValue<decltype(vladen)::Type,VladenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vladen)::Type,VladenVal::enabled> enabled{};
        }
        }
        ///Voltage reference select for comparator 1 voltage ladder.
        enum class VladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,VladrefVal> vladref{}; 
        namespace VladrefValC{
            constexpr Register::FieldValue<decltype(vladref)::Type,VladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr Register::FieldValue<decltype(vladref)::Type,VladrefVal::vddaPin> vddaPin{};
        }
        }
        ///Voltage ladder value for comparator 1. The reference voltage Vref depends on the setting of VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x Vref / 31. 00010 = 2 x Vref / 31. ... 11111 = Vref
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> vsel{}; 
        ///Configure the propagation delay. A shorter propagation delay means higher power consumption. Use values from 0x0 (shortest propagation delay and highest power consumption) to 0x2 (longest propagation delay and lowest power consumption). See the  data sheet for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonecmp2{    ///<Comparator 2 source control
        using Addr = Register::Address<0x40008014,0x80a01882,0,unsigned>;
        ///Comparator enable control.
        enum class EnVal {
            disabled=0x00000000,     ///<Disabled. Comparator disabled.
            enabled=0x00000001,     ///<Enabled. Comparator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::enabled> enabled{};
        }
        }
        ///Interrupt enable.
        enum class IntenVal {
            disabled=0x00000000,     ///<Disabled. Interrupts are disabled..
            enabled=0x00000001,     ///<Enabled. Interrupts are enabled.. Must set to 1 for interrupts to propagate to the NVIC and start-up logic.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::enabled> enabled{};
        }
        }
        ///Comparator status. This bit reflects the comparator output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stat{}; 
        ///VM input select.
        enum class VmVal {
            vrefDivider2=0x00000000,     ///<Vref divider 2.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp2I3=0x00000003,     ///<ACMP2_I3.
            acmp2I4=0x00000004,     ///<ACMP2_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc00=0x00000006,     ///<ADC0_0. Input for ADC0 channel 0.
            adc12=0x00000007,     ///<ADC1_2. Input for ADC1 channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,VmVal> vm{}; 
        namespace VmValC{
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::vrefDivider2> vrefDivider2{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmp2I3> acmp2I3{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmp2I4> acmp2I4{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::internal0> internal0{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::adc00> adc00{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::adc12> adc12{};
        }
        }
        ///VP input select.
        enum class VpVal {
            vrefDivider2=0x00000000,     ///<Vref divider 2.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp2I3=0x00000003,     ///<ACMP2_I3.
            acmp2I4=0x00000004,     ///<ACMP2_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc00=0x00000006,     ///<ADC0_0. Input for ADC0 channel 0.
            adc12=0x00000007,     ///<ADC1_2. Input for ADC1 channel 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,VpVal> vp{}; 
        namespace VpValC{
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::vrefDivider2> vrefDivider2{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmp2I3> acmp2I3{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmp2I4> acmp2I4{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::internal0> internal0{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::adc00> adc00{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::adc12> adc12{};
        }
        }
        ///Hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class HysVal {
            hysteresisIsTurned=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisIsTurned> hysteresisIsTurned{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        }
        ///Selects the polarity of the CMP output for purposes of generating level interrupts.
        enum class IntpolVal {
            notInverted=0x00000000,     ///<Not inverted. The output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<Inverted. The output is used inverted for generating interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,IntpolVal> intpol{}; 
        namespace IntpolValC{
            constexpr Register::FieldValue<decltype(intpol)::Type,IntpolVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(intpol)::Type,IntpolVal::inverted> inverted{};
        }
        }
        ///Select interrupt type.
        enum class InttypeVal {
            edge=0x00000000,     ///<Edge. Comparator interrupt is edge triggered.
            level=0x00000001,     ///<Level. Comparator interrupt is level triggered.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,InttypeVal> inttype{}; 
        namespace InttypeValC{
            constexpr Register::FieldValue<decltype(inttype)::Type,InttypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(inttype)::Type,InttypeVal::level> level{};
        }
        }
        ///Select edge triggered interrupt to be active on either high or low transitions, when INTTYPE = 0.
        enum class IntedgeVal {
            falling=0x00000000,     ///<Falling. Comparator interrupt is active on falling edges.
            rising=0x00000001,     ///<Rising. Comparator interrupt is active on rising edges.
            bothEdges=0x00000002,     ///<Both edges. Comparator Interrupt is active on both edges.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,IntedgeVal> intedge{}; 
        namespace IntedgeValC{
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::falling> falling{};
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::rising> rising{};
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::bothEdges> bothEdges{};
        }
        }
        ///Interrupt flag.
        enum class IntflagVal {
            notPending=0x00000000,     ///<Not pending. The Comparator interrupt is not pending.
            pending=0x00000001,     ///<Pending. The Comparator interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::pending> pending{};
        }
        }
        ///Voltage ladder enable for comparator 2.
        enum class VladenVal {
            disabled=0x00000000,     ///<Disabled. The Comparator voltage ladder is disabled.
            enabled=0x00000001,     ///<Enabled. The Comparator voltage ladder is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,VladenVal> vladen{}; 
        namespace VladenValC{
            constexpr Register::FieldValue<decltype(vladen)::Type,VladenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vladen)::Type,VladenVal::enabled> enabled{};
        }
        }
        ///Voltage reference select for comparator 2 voltage ladder.
        enum class VladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,VladrefVal> vladref{}; 
        namespace VladrefValC{
            constexpr Register::FieldValue<decltype(vladref)::Type,VladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr Register::FieldValue<decltype(vladref)::Type,VladrefVal::vddaPin> vddaPin{};
        }
        }
        ///Voltage ladder value for comparator 2. The reference voltage Vref depends on the setting of VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x Vref / 31. 00010 = 2 x Vref / 31. ... 11111 = Vref
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> vsel{}; 
        ///Configure the propagation delay. A shorter propagation delay means higher power consumption. Use values from 0x0 (shortest propagation delay and highest power consumption) to 0x2 (longest propagation delay and lowest power consumption). See the  data sheet for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonecmp3{    ///<Comparator 3 source control
        using Addr = Register::Address<0x4000801c,0x80a01882,0,unsigned>;
        ///Comparator enable control.
        enum class EnVal {
            disabled=0x00000000,     ///<Disabled. Comparator disabled.
            enabled=0x00000001,     ///<Enabled. Comparator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::enabled> enabled{};
        }
        }
        ///Interrupt enable.
        enum class IntenVal {
            disabled=0x00000000,     ///<Disabled. Interrupts are disabled..
            enabled=0x00000001,     ///<Enabled. Interrupts are enabled.. Must set to 1 for interrupts to propagate to the NVIC and start-up logic.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,IntenVal> inten{}; 
        namespace IntenValC{
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(inten)::Type,IntenVal::enabled> enabled{};
        }
        }
        ///Comparator status. This bit reflects the comparator output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stat{}; 
        ///VM input select.
        enum class VmVal {
            vrefDivider3=0x00000000,     ///<Vref divider 3.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp3I3=0x00000003,     ///<ACMP3_I3.
            acmp3I4=0x00000004,     ///<ACMP3_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc11=0x00000006,     ///<ADC1_1. Input for ADC1 channel 1.
            adc13=0x00000007,     ///<ADC1_3. Input for ADC1 channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,VmVal> vm{}; 
        namespace VmValC{
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::vrefDivider3> vrefDivider3{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmp3I3> acmp3I3{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::acmp3I4> acmp3I4{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::internal0> internal0{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::adc11> adc11{};
            constexpr Register::FieldValue<decltype(vm)::Type,VmVal::adc13> adc13{};
        }
        }
        ///VP input select.
        enum class VpVal {
            vrefDivider3=0x00000000,     ///<Vref divider 3.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp3I3=0x00000003,     ///<ACMP3_I3.
            acmp3I4=0x00000004,     ///<ACMP3_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc11=0x00000006,     ///<ADC1_1. Input for ADC1 channel 1.
            adc13=0x00000007,     ///<ADC1_3. Input for ADC1 channel 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,VpVal> vp{}; 
        namespace VpValC{
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::vrefDivider3> vrefDivider3{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmp3I3> acmp3I3{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::acmp3I4> acmp3I4{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::internal0> internal0{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::adc11> adc11{};
            constexpr Register::FieldValue<decltype(vp)::Type,VpVal::adc13> adc13{};
        }
        }
        ///Hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class HysVal {
            hysteresisIsTurned=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisIsTurned> hysteresisIsTurned{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        }
        ///Selects the polarity of the CMP output for purposes of generating level interrupts.
        enum class IntpolVal {
            notInverted=0x00000000,     ///<Not inverted. The output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<Inverted. The output is used inverted for generating interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,IntpolVal> intpol{}; 
        namespace IntpolValC{
            constexpr Register::FieldValue<decltype(intpol)::Type,IntpolVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(intpol)::Type,IntpolVal::inverted> inverted{};
        }
        }
        ///Select interrupt type.
        enum class InttypeVal {
            edge=0x00000000,     ///<Edge. Comparator interrupt is edge triggered.
            level=0x00000001,     ///<Level. Comparator interrupt is level triggered.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,InttypeVal> inttype{}; 
        namespace InttypeValC{
            constexpr Register::FieldValue<decltype(inttype)::Type,InttypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(inttype)::Type,InttypeVal::level> level{};
        }
        }
        ///Select edge triggered interrupt to be active on either high or low transitions, when INTTYPE = 0.
        enum class IntedgeVal {
            falling=0x00000000,     ///<Falling. Comparator interrupt is active on falling edges.
            rising=0x00000001,     ///<Rising. Comparator interrupt is active on rising edges.
            bothEdges=0x00000002,     ///<Both edges. Comparator Interrupt is active on both edges.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,IntedgeVal> intedge{}; 
        namespace IntedgeValC{
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::falling> falling{};
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::rising> rising{};
            constexpr Register::FieldValue<decltype(intedge)::Type,IntedgeVal::bothEdges> bothEdges{};
        }
        }
        ///Interrupt flag.
        enum class IntflagVal {
            notPending=0x00000000,     ///<Not pending. The Comparator interrupt is not pending.
            pending=0x00000001,     ///<Pending. The Comparator interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,IntflagVal> intflag{}; 
        namespace IntflagValC{
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::notPending> notPending{};
            constexpr Register::FieldValue<decltype(intflag)::Type,IntflagVal::pending> pending{};
        }
        }
        ///Voltage ladder enable for comparator 3.
        enum class VladenVal {
            disabled=0x00000000,     ///<Disabled. The Comparator voltage ladder is disabled.
            enabled=0x00000001,     ///<Enabled. The Comparator voltage ladder is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,VladenVal> vladen{}; 
        namespace VladenValC{
            constexpr Register::FieldValue<decltype(vladen)::Type,VladenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(vladen)::Type,VladenVal::enabled> enabled{};
        }
        }
        ///Voltage reference select for comparator 3 voltage ladder.
        enum class VladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,VladrefVal> vladref{}; 
        namespace VladrefValC{
            constexpr Register::FieldValue<decltype(vladref)::Type,VladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr Register::FieldValue<decltype(vladref)::Type,VladrefVal::vddaPin> vddaPin{};
        }
        }
        ///Voltage ladder value for comparator 3. The reference voltage Vref depends on the setting of VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x Vref / 31. 00010 = 2 x Vref / 31. ... 11111 = Vref
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> vsel{}; 
        ///Configure the propagation delay. A shorter propagation delay means higher power consumption. Use values from 0x0 (shortest propagation delay and highest power consumption) to 0x2 (longest propagation delay and lowest power consumption). See the  data sheet for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonecmpfiltr0{    ///<Comparator 0 pin filter set-up
        using Addr = Register::Address<0x40008008,0xffffffe0,0,unsigned>;
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select clock divider for comparator clock CMP_PCLK.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonecmpfiltr1{    ///<Comparator 0 pin filter set-up
        using Addr = Register::Address<0x40008010,0xffffffe0,0,unsigned>;
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select clock divider for comparator clock CMP_PCLK.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonecmpfiltr2{    ///<Comparator 0 pin filter set-up
        using Addr = Register::Address<0x40008018,0xffffffe0,0,unsigned>;
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select clock divider for comparator clock CMP_PCLK.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
    namespace Nonecmpfiltr3{    ///<Comparator 0 pin filter set-up
        using Addr = Register::Address<0x40008020,0xffffffe0,0,unsigned>;
        ///Digital filter sample mode.
        enum class SmodeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SmodeVal> sMode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::bypassInputFilter> bypassInputFilter{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v1ClockCycle> v1ClockCycle{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v2ClockCycles> v2ClockCycles{};
            constexpr Register::FieldValue<decltype(sMode)::Type,SmodeVal::v3ClockCycles> v3ClockCycles{};
        }
        }
        ///Select clock divider for comparator clock CMP_PCLK.
        enum class ClkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclk> cmpPclk{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        }
    }
}
