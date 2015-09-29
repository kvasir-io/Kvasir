#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog comparators ACMP0/1/2/3
    namespace Nonectrl{    ///<Comparator block control register
        using Addr = Register::Address<0x40008000,0xfffffcff,0,unsigned>;
        ///Selects the which comparators set and reset the ROSC output.
        enum class roscctlVal {
            acmp1Acmp0=0x00000000,     ///<ACMP1/ACMP0. The ROSC output is set by ACMP1 and reset by ACMP0.
            acmp0Acmp1=0x00000001,     ///<ACMP0/ACMP1. The ROSC output is set by ACMP0 and reset by ACMP1.
        };
        namespace roscctlValC{
            constexpr MPL::Value<roscctlVal,roscctlVal::acmp1Acmp0> acmp1Acmp0{};
            constexpr MPL::Value<roscctlVal,roscctlVal::acmp0Acmp1> acmp0Acmp1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,roscctlVal> roscctl{}; 
        ///Selects the reset source for the ROSC output.
        enum class extResetVal {
            internal=0x00000000,     ///<Internal. The ROSC output is reset by the internal chip reset.
            fromPinRoscReset=0x00000001,     ///<From pin ROSC_RESET. The ROSC output is reset by the ROSC_RESET input.
        };
        namespace extResetValC{
            constexpr MPL::Value<extResetVal,extResetVal::internal> internal{};
            constexpr MPL::Value<extResetVal,extResetVal::fromPinRoscReset> fromPinRoscReset{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,extResetVal> extReset{}; 
    }
    namespace Nonecmp0{    ///<Comparator 0 source control
        using Addr = Register::Address<0x40008004,0x80a01882,0,unsigned>;
        ///Comparator enable control.
        enum class enVal {
            disabled=0x00000000,     ///<Disabled. Comparator disabled.
            enabled=0x00000001,     ///<Enabled. Comparator is enabled.
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::disabled> disabled{};
            constexpr MPL::Value<enVal,enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enVal> en{}; 
        ///Interrupt enable.
        enum class intenVal {
            disabled=0x00000000,     ///<Disabled. Interrupts are disabled..
            enabled=0x00000001,     ///<Enabled. Interrupts are enabled.. Must set to 1 for interrupts to propagate to the NVIC and start-up logic.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disabled> disabled{};
            constexpr MPL::Value<intenVal,intenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Comparator status. This bit reflects the comparator output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stat{}; 
        ///VM input select.
        enum class vmVal {
            vrefDivider0=0x00000000,     ///<Vref divider 0.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp0I3=0x00000003,     ///<ACMP0_I3.
            acmp0I4=0x00000004,     ///<ACMP0_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            tempSensor=0x00000006,     ///<Temp sensor.
            adc02=0x00000007,     ///<ADC0_2. Input for ADC0 channel 2.
        };
        namespace vmValC{
            constexpr MPL::Value<vmVal,vmVal::vrefDivider0> vrefDivider0{};
            constexpr MPL::Value<vmVal,vmVal::acmpI1> acmpI1{};
            constexpr MPL::Value<vmVal,vmVal::acmpI2> acmpI2{};
            constexpr MPL::Value<vmVal,vmVal::acmp0I3> acmp0I3{};
            constexpr MPL::Value<vmVal,vmVal::acmp0I4> acmp0I4{};
            constexpr MPL::Value<vmVal,vmVal::internal0> internal0{};
            constexpr MPL::Value<vmVal,vmVal::tempSensor> tempSensor{};
            constexpr MPL::Value<vmVal,vmVal::adc02> adc02{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,vmVal> vm{}; 
        ///VP input select.
        enum class vpVal {
            vrefDivider0=0x00000000,     ///<Vref divider 0.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp0I3=0x00000003,     ///<ACMP0_I3.
            acmp0I4=0x00000004,     ///<ACMP0_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            tempSensor=0x00000006,     ///<Temp sensor.
            adc02=0x00000007,     ///<ADC0_2. Input for ADC0 channel 2.
        };
        namespace vpValC{
            constexpr MPL::Value<vpVal,vpVal::vrefDivider0> vrefDivider0{};
            constexpr MPL::Value<vpVal,vpVal::acmpI1> acmpI1{};
            constexpr MPL::Value<vpVal,vpVal::acmpI2> acmpI2{};
            constexpr MPL::Value<vpVal,vpVal::acmp0I3> acmp0I3{};
            constexpr MPL::Value<vpVal,vpVal::acmp0I4> acmp0I4{};
            constexpr MPL::Value<vpVal,vpVal::internal0> internal0{};
            constexpr MPL::Value<vpVal,vpVal::tempSensor> tempSensor{};
            constexpr MPL::Value<vpVal,vpVal::adc02> adc02{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,vpVal> vp{}; 
        ///Hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class hysVal {
            hysteresisIsTurned=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::hysteresisIsTurned> hysteresisIsTurned{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Selects the polarity of the CMP output for purposes of generating level interrupts.
        enum class intpolVal {
            notInverted=0x00000000,     ///<Not inverted. The output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<Inverted. The output is used inverted for generating interrupts.
        };
        namespace intpolValC{
            constexpr MPL::Value<intpolVal,intpolVal::notInverted> notInverted{};
            constexpr MPL::Value<intpolVal,intpolVal::inverted> inverted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,intpolVal> intpol{}; 
        ///Select interrupt type.
        enum class inttypeVal {
            edge=0x00000000,     ///<Edge. Comparator interrupt is edge triggered.
            level=0x00000001,     ///<Level. Comparator interrupt is level triggered.
        };
        namespace inttypeValC{
            constexpr MPL::Value<inttypeVal,inttypeVal::edge> edge{};
            constexpr MPL::Value<inttypeVal,inttypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,inttypeVal> inttype{}; 
        ///Select edge triggered interrupt to be active on either high or low transitions, when INTTYPE = 0.
        enum class intedgeVal {
            falling=0x00000000,     ///<Falling. Comparator interrupt is active on falling edges.
            rising=0x00000001,     ///<Rising. Comparator interrupt is active on rising edges.
            bothEdges=0x00000002,     ///<Both edges. Comparator Interrupt is active on both edges.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace intedgeValC{
            constexpr MPL::Value<intedgeVal,intedgeVal::falling> falling{};
            constexpr MPL::Value<intedgeVal,intedgeVal::rising> rising{};
            constexpr MPL::Value<intedgeVal,intedgeVal::bothEdges> bothEdges{};
            constexpr MPL::Value<intedgeVal,intedgeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,intedgeVal> intedge{}; 
        ///Interrupt flag.
        enum class intflagVal {
            notPending=0x00000000,     ///<Not pending. The Comparator interrupt is not pending.
            pending=0x00000001,     ///<Pending. The Comparator interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::notPending> notPending{};
            constexpr MPL::Value<intflagVal,intflagVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Voltage ladder enable for comparator 0.
        enum class vladenVal {
            disabled=0x00000000,     ///<Disabled. The Comparator voltage ladder is disabled.
            enabled=0x00000001,     ///<Enabled. The Comparator voltage ladder is enabled.
        };
        namespace vladenValC{
            constexpr MPL::Value<vladenVal,vladenVal::disabled> disabled{};
            constexpr MPL::Value<vladenVal,vladenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,vladenVal> vladen{}; 
        ///Voltage reference select for comparator 0 voltage ladder.
        enum class vladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        namespace vladrefValC{
            constexpr MPL::Value<vladrefVal,vladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr MPL::Value<vladrefVal,vladrefVal::vddaPin> vddaPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,vladrefVal> vladref{}; 
        ///Voltage ladder value for comparator 0. The reference voltage Vref depends on the setting of VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x Vref / 31. 00010 = 2 x Vref / 31. ... 11111 = Vref
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> vsel{}; 
        ///Configure the propagation delay. A shorter propagation delay means higher power consumption. Use values from 0x0 (shortest propagation delay and highest power consumption) to 0x2 (longest propagation delay and lowest power consumption). See the  data sheet for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonecmp1{    ///<Comparator 1 source control
        using Addr = Register::Address<0x4000800c,0x80a01882,0,unsigned>;
        ///Comparator enable control.
        enum class enVal {
            disabled=0x00000000,     ///<Disabled. Comparator disabled.
            enabled=0x00000001,     ///<Enabled. Comparator is enabled.
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::disabled> disabled{};
            constexpr MPL::Value<enVal,enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enVal> en{}; 
        ///Interrupt enable.
        enum class intenVal {
            disabled=0x00000000,     ///<Disabled. Interrupts are disabled..
            enabled=0x00000001,     ///<Enabled. Interrupts are enabled.. Must set to 1 for interrupts to propagate to the NVIC and start-up logic.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disabled> disabled{};
            constexpr MPL::Value<intenVal,intenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Comparator status. This bit reflects the comparator output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stat{}; 
        ///VM input select.
        enum class vmVal {
            vrefDivider1=0x00000000,     ///<Vref divider 1.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp1I3=0x00000003,     ///<ACMP1_I3.
            acmp1I4=0x00000004,     ///<ACMP1_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc01=0x00000006,     ///<ADC0_1. Input for ADC0 channel 1.
            adc03=0x00000007,     ///<ADC0_3. Input for ADC0 channel 3.
        };
        namespace vmValC{
            constexpr MPL::Value<vmVal,vmVal::vrefDivider1> vrefDivider1{};
            constexpr MPL::Value<vmVal,vmVal::acmpI1> acmpI1{};
            constexpr MPL::Value<vmVal,vmVal::acmpI2> acmpI2{};
            constexpr MPL::Value<vmVal,vmVal::acmp1I3> acmp1I3{};
            constexpr MPL::Value<vmVal,vmVal::acmp1I4> acmp1I4{};
            constexpr MPL::Value<vmVal,vmVal::internal0> internal0{};
            constexpr MPL::Value<vmVal,vmVal::adc01> adc01{};
            constexpr MPL::Value<vmVal,vmVal::adc03> adc03{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,vmVal> vm{}; 
        ///VP input select.
        enum class vpVal {
            vrefDivider1=0x00000000,     ///<Vref divider 1.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp1I3=0x00000003,     ///<ACMP1_I3.
            acmp1I4=0x00000004,     ///<ACMP1_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc01=0x00000006,     ///<ADC0_1. Input for ADC0 channel 1.
            adc03=0x00000007,     ///<ADC0_3. Input for ADC0 channel 3.
        };
        namespace vpValC{
            constexpr MPL::Value<vpVal,vpVal::vrefDivider1> vrefDivider1{};
            constexpr MPL::Value<vpVal,vpVal::acmpI1> acmpI1{};
            constexpr MPL::Value<vpVal,vpVal::acmpI2> acmpI2{};
            constexpr MPL::Value<vpVal,vpVal::acmp1I3> acmp1I3{};
            constexpr MPL::Value<vpVal,vpVal::acmp1I4> acmp1I4{};
            constexpr MPL::Value<vpVal,vpVal::internal0> internal0{};
            constexpr MPL::Value<vpVal,vpVal::adc01> adc01{};
            constexpr MPL::Value<vpVal,vpVal::adc03> adc03{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,vpVal> vp{}; 
        ///Hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class hysVal {
            hysteresisIsTurned=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::hysteresisIsTurned> hysteresisIsTurned{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Selects the polarity of the CMP output for purposes of generating level interrupts.
        enum class intpolVal {
            notInverted=0x00000000,     ///<Not inverted. The output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<Inverted. The output is used inverted for generating interrupts.
        };
        namespace intpolValC{
            constexpr MPL::Value<intpolVal,intpolVal::notInverted> notInverted{};
            constexpr MPL::Value<intpolVal,intpolVal::inverted> inverted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,intpolVal> intpol{}; 
        ///Select interrupt type.
        enum class inttypeVal {
            edge=0x00000000,     ///<Edge. Comparator interrupt is edge triggered.
            level=0x00000001,     ///<Level. Comparator interrupt is level triggered.
        };
        namespace inttypeValC{
            constexpr MPL::Value<inttypeVal,inttypeVal::edge> edge{};
            constexpr MPL::Value<inttypeVal,inttypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,inttypeVal> inttype{}; 
        ///Select edge triggered interrupt to be active on either high or low transitions, when INTTYPE = 0.
        enum class intedgeVal {
            falling=0x00000000,     ///<Falling. Comparator interrupt is active on falling edges.
            rising=0x00000001,     ///<Rising. Comparator interrupt is active on rising edges.
            bothEdges=0x00000002,     ///<Both edges. Comparator Interrupt is active on both edges.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace intedgeValC{
            constexpr MPL::Value<intedgeVal,intedgeVal::falling> falling{};
            constexpr MPL::Value<intedgeVal,intedgeVal::rising> rising{};
            constexpr MPL::Value<intedgeVal,intedgeVal::bothEdges> bothEdges{};
            constexpr MPL::Value<intedgeVal,intedgeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,intedgeVal> intedge{}; 
        ///Interrupt flag.
        enum class intflagVal {
            notPending=0x00000000,     ///<Not pending. The Comparator interrupt is not pending.
            pending=0x00000001,     ///<Pending. The Comparator interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::notPending> notPending{};
            constexpr MPL::Value<intflagVal,intflagVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Voltage ladder enable for comparator 1.
        enum class vladenVal {
            disabled=0x00000000,     ///<Disabled. The Comparator voltage ladder is disabled.
            enabled=0x00000001,     ///<Enabled. The Comparator voltage ladder is enabled.
        };
        namespace vladenValC{
            constexpr MPL::Value<vladenVal,vladenVal::disabled> disabled{};
            constexpr MPL::Value<vladenVal,vladenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,vladenVal> vladen{}; 
        ///Voltage reference select for comparator 1 voltage ladder.
        enum class vladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        namespace vladrefValC{
            constexpr MPL::Value<vladrefVal,vladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr MPL::Value<vladrefVal,vladrefVal::vddaPin> vddaPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,vladrefVal> vladref{}; 
        ///Voltage ladder value for comparator 1. The reference voltage Vref depends on the setting of VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x Vref / 31. 00010 = 2 x Vref / 31. ... 11111 = Vref
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> vsel{}; 
        ///Configure the propagation delay. A shorter propagation delay means higher power consumption. Use values from 0x0 (shortest propagation delay and highest power consumption) to 0x2 (longest propagation delay and lowest power consumption). See the  data sheet for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonecmp2{    ///<Comparator 2 source control
        using Addr = Register::Address<0x40008014,0x80a01882,0,unsigned>;
        ///Comparator enable control.
        enum class enVal {
            disabled=0x00000000,     ///<Disabled. Comparator disabled.
            enabled=0x00000001,     ///<Enabled. Comparator is enabled.
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::disabled> disabled{};
            constexpr MPL::Value<enVal,enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enVal> en{}; 
        ///Interrupt enable.
        enum class intenVal {
            disabled=0x00000000,     ///<Disabled. Interrupts are disabled..
            enabled=0x00000001,     ///<Enabled. Interrupts are enabled.. Must set to 1 for interrupts to propagate to the NVIC and start-up logic.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disabled> disabled{};
            constexpr MPL::Value<intenVal,intenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Comparator status. This bit reflects the comparator output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stat{}; 
        ///VM input select.
        enum class vmVal {
            vrefDivider2=0x00000000,     ///<Vref divider 2.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp2I3=0x00000003,     ///<ACMP2_I3.
            acmp2I4=0x00000004,     ///<ACMP2_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc00=0x00000006,     ///<ADC0_0. Input for ADC0 channel 0.
            adc12=0x00000007,     ///<ADC1_2. Input for ADC1 channel 2.
        };
        namespace vmValC{
            constexpr MPL::Value<vmVal,vmVal::vrefDivider2> vrefDivider2{};
            constexpr MPL::Value<vmVal,vmVal::acmpI1> acmpI1{};
            constexpr MPL::Value<vmVal,vmVal::acmpI2> acmpI2{};
            constexpr MPL::Value<vmVal,vmVal::acmp2I3> acmp2I3{};
            constexpr MPL::Value<vmVal,vmVal::acmp2I4> acmp2I4{};
            constexpr MPL::Value<vmVal,vmVal::internal0> internal0{};
            constexpr MPL::Value<vmVal,vmVal::adc00> adc00{};
            constexpr MPL::Value<vmVal,vmVal::adc12> adc12{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,vmVal> vm{}; 
        ///VP input select.
        enum class vpVal {
            vrefDivider2=0x00000000,     ///<Vref divider 2.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp2I3=0x00000003,     ///<ACMP2_I3.
            acmp2I4=0x00000004,     ///<ACMP2_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc00=0x00000006,     ///<ADC0_0. Input for ADC0 channel 0.
            adc12=0x00000007,     ///<ADC1_2. Input for ADC1 channel 2.
        };
        namespace vpValC{
            constexpr MPL::Value<vpVal,vpVal::vrefDivider2> vrefDivider2{};
            constexpr MPL::Value<vpVal,vpVal::acmpI1> acmpI1{};
            constexpr MPL::Value<vpVal,vpVal::acmpI2> acmpI2{};
            constexpr MPL::Value<vpVal,vpVal::acmp2I3> acmp2I3{};
            constexpr MPL::Value<vpVal,vpVal::acmp2I4> acmp2I4{};
            constexpr MPL::Value<vpVal,vpVal::internal0> internal0{};
            constexpr MPL::Value<vpVal,vpVal::adc00> adc00{};
            constexpr MPL::Value<vpVal,vpVal::adc12> adc12{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,vpVal> vp{}; 
        ///Hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class hysVal {
            hysteresisIsTurned=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::hysteresisIsTurned> hysteresisIsTurned{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Selects the polarity of the CMP output for purposes of generating level interrupts.
        enum class intpolVal {
            notInverted=0x00000000,     ///<Not inverted. The output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<Inverted. The output is used inverted for generating interrupts.
        };
        namespace intpolValC{
            constexpr MPL::Value<intpolVal,intpolVal::notInverted> notInverted{};
            constexpr MPL::Value<intpolVal,intpolVal::inverted> inverted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,intpolVal> intpol{}; 
        ///Select interrupt type.
        enum class inttypeVal {
            edge=0x00000000,     ///<Edge. Comparator interrupt is edge triggered.
            level=0x00000001,     ///<Level. Comparator interrupt is level triggered.
        };
        namespace inttypeValC{
            constexpr MPL::Value<inttypeVal,inttypeVal::edge> edge{};
            constexpr MPL::Value<inttypeVal,inttypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,inttypeVal> inttype{}; 
        ///Select edge triggered interrupt to be active on either high or low transitions, when INTTYPE = 0.
        enum class intedgeVal {
            falling=0x00000000,     ///<Falling. Comparator interrupt is active on falling edges.
            rising=0x00000001,     ///<Rising. Comparator interrupt is active on rising edges.
            bothEdges=0x00000002,     ///<Both edges. Comparator Interrupt is active on both edges.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace intedgeValC{
            constexpr MPL::Value<intedgeVal,intedgeVal::falling> falling{};
            constexpr MPL::Value<intedgeVal,intedgeVal::rising> rising{};
            constexpr MPL::Value<intedgeVal,intedgeVal::bothEdges> bothEdges{};
            constexpr MPL::Value<intedgeVal,intedgeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,intedgeVal> intedge{}; 
        ///Interrupt flag.
        enum class intflagVal {
            notPending=0x00000000,     ///<Not pending. The Comparator interrupt is not pending.
            pending=0x00000001,     ///<Pending. The Comparator interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::notPending> notPending{};
            constexpr MPL::Value<intflagVal,intflagVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Voltage ladder enable for comparator 2.
        enum class vladenVal {
            disabled=0x00000000,     ///<Disabled. The Comparator voltage ladder is disabled.
            enabled=0x00000001,     ///<Enabled. The Comparator voltage ladder is enabled.
        };
        namespace vladenValC{
            constexpr MPL::Value<vladenVal,vladenVal::disabled> disabled{};
            constexpr MPL::Value<vladenVal,vladenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,vladenVal> vladen{}; 
        ///Voltage reference select for comparator 2 voltage ladder.
        enum class vladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        namespace vladrefValC{
            constexpr MPL::Value<vladrefVal,vladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr MPL::Value<vladrefVal,vladrefVal::vddaPin> vddaPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,vladrefVal> vladref{}; 
        ///Voltage ladder value for comparator 2. The reference voltage Vref depends on the setting of VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x Vref / 31. 00010 = 2 x Vref / 31. ... 11111 = Vref
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> vsel{}; 
        ///Configure the propagation delay. A shorter propagation delay means higher power consumption. Use values from 0x0 (shortest propagation delay and highest power consumption) to 0x2 (longest propagation delay and lowest power consumption). See the  data sheet for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonecmp3{    ///<Comparator 3 source control
        using Addr = Register::Address<0x4000801c,0x80a01882,0,unsigned>;
        ///Comparator enable control.
        enum class enVal {
            disabled=0x00000000,     ///<Disabled. Comparator disabled.
            enabled=0x00000001,     ///<Enabled. Comparator is enabled.
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::disabled> disabled{};
            constexpr MPL::Value<enVal,enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enVal> en{}; 
        ///Interrupt enable.
        enum class intenVal {
            disabled=0x00000000,     ///<Disabled. Interrupts are disabled..
            enabled=0x00000001,     ///<Enabled. Interrupts are enabled.. Must set to 1 for interrupts to propagate to the NVIC and start-up logic.
        };
        namespace intenValC{
            constexpr MPL::Value<intenVal,intenVal::disabled> disabled{};
            constexpr MPL::Value<intenVal,intenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,intenVal> inten{}; 
        ///Comparator status. This bit reflects the comparator output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stat{}; 
        ///VM input select.
        enum class vmVal {
            vrefDivider3=0x00000000,     ///<Vref divider 3.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp3I3=0x00000003,     ///<ACMP3_I3.
            acmp3I4=0x00000004,     ///<ACMP3_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc11=0x00000006,     ///<ADC1_1. Input for ADC1 channel 1.
            adc13=0x00000007,     ///<ADC1_3. Input for ADC1 channel 3.
        };
        namespace vmValC{
            constexpr MPL::Value<vmVal,vmVal::vrefDivider3> vrefDivider3{};
            constexpr MPL::Value<vmVal,vmVal::acmpI1> acmpI1{};
            constexpr MPL::Value<vmVal,vmVal::acmpI2> acmpI2{};
            constexpr MPL::Value<vmVal,vmVal::acmp3I3> acmp3I3{};
            constexpr MPL::Value<vmVal,vmVal::acmp3I4> acmp3I4{};
            constexpr MPL::Value<vmVal,vmVal::internal0> internal0{};
            constexpr MPL::Value<vmVal,vmVal::adc11> adc11{};
            constexpr MPL::Value<vmVal,vmVal::adc13> adc13{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,vmVal> vm{}; 
        ///VP input select.
        enum class vpVal {
            vrefDivider3=0x00000000,     ///<Vref divider 3.
            acmpI1=0x00000001,     ///<ACMP_I1.
            acmpI2=0x00000002,     ///<ACMP_I2.
            acmp3I3=0x00000003,     ///<ACMP3_I3.
            acmp3I4=0x00000004,     ///<ACMP3_I4.
            internal0=0x00000005,     ///<Internal 0.9 V band gap reference.
            adc11=0x00000006,     ///<ADC1_1. Input for ADC1 channel 1.
            adc13=0x00000007,     ///<ADC1_3. Input for ADC1 channel 3.
        };
        namespace vpValC{
            constexpr MPL::Value<vpVal,vpVal::vrefDivider3> vrefDivider3{};
            constexpr MPL::Value<vpVal,vpVal::acmpI1> acmpI1{};
            constexpr MPL::Value<vpVal,vpVal::acmpI2> acmpI2{};
            constexpr MPL::Value<vpVal,vpVal::acmp3I3> acmp3I3{};
            constexpr MPL::Value<vpVal,vpVal::acmp3I4> acmp3I4{};
            constexpr MPL::Value<vpVal,vpVal::internal0> internal0{};
            constexpr MPL::Value<vpVal,vpVal::adc11> adc11{};
            constexpr MPL::Value<vpVal,vpVal::adc13> adc13{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,vpVal> vp{}; 
        ///Hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class hysVal {
            hysteresisIsTurned=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::hysteresisIsTurned> hysteresisIsTurned{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr MPL::Value<hysVal,hysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,hysVal> hys{}; 
        ///Selects the polarity of the CMP output for purposes of generating level interrupts.
        enum class intpolVal {
            notInverted=0x00000000,     ///<Not inverted. The output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<Inverted. The output is used inverted for generating interrupts.
        };
        namespace intpolValC{
            constexpr MPL::Value<intpolVal,intpolVal::notInverted> notInverted{};
            constexpr MPL::Value<intpolVal,intpolVal::inverted> inverted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,intpolVal> intpol{}; 
        ///Select interrupt type.
        enum class inttypeVal {
            edge=0x00000000,     ///<Edge. Comparator interrupt is edge triggered.
            level=0x00000001,     ///<Level. Comparator interrupt is level triggered.
        };
        namespace inttypeValC{
            constexpr MPL::Value<inttypeVal,inttypeVal::edge> edge{};
            constexpr MPL::Value<inttypeVal,inttypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,inttypeVal> inttype{}; 
        ///Select edge triggered interrupt to be active on either high or low transitions, when INTTYPE = 0.
        enum class intedgeVal {
            falling=0x00000000,     ///<Falling. Comparator interrupt is active on falling edges.
            rising=0x00000001,     ///<Rising. Comparator interrupt is active on rising edges.
            bothEdges=0x00000002,     ///<Both edges. Comparator Interrupt is active on both edges.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace intedgeValC{
            constexpr MPL::Value<intedgeVal,intedgeVal::falling> falling{};
            constexpr MPL::Value<intedgeVal,intedgeVal::rising> rising{};
            constexpr MPL::Value<intedgeVal,intedgeVal::bothEdges> bothEdges{};
            constexpr MPL::Value<intedgeVal,intedgeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,intedgeVal> intedge{}; 
        ///Interrupt flag.
        enum class intflagVal {
            notPending=0x00000000,     ///<Not pending. The Comparator interrupt is not pending.
            pending=0x00000001,     ///<Pending. The Comparator interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        namespace intflagValC{
            constexpr MPL::Value<intflagVal,intflagVal::notPending> notPending{};
            constexpr MPL::Value<intflagVal,intflagVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,intflagVal> intflag{}; 
        ///Voltage ladder enable for comparator 3.
        enum class vladenVal {
            disabled=0x00000000,     ///<Disabled. The Comparator voltage ladder is disabled.
            enabled=0x00000001,     ///<Enabled. The Comparator voltage ladder is enabled.
        };
        namespace vladenValC{
            constexpr MPL::Value<vladenVal,vladenVal::disabled> disabled{};
            constexpr MPL::Value<vladenVal,vladenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,vladenVal> vladen{}; 
        ///Voltage reference select for comparator 3 voltage ladder.
        enum class vladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        namespace vladrefValC{
            constexpr MPL::Value<vladrefVal,vladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr MPL::Value<vladrefVal,vladrefVal::vddaPin> vddaPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,vladrefVal> vladref{}; 
        ///Voltage ladder value for comparator 3. The reference voltage Vref depends on the setting of VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x Vref / 31. 00010 = 2 x Vref / 31. ... 11111 = Vref
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> vsel{}; 
        ///Configure the propagation delay. A shorter propagation delay means higher power consumption. Use values from 0x0 (shortest propagation delay and highest power consumption) to 0x2 (longest propagation delay and lowest power consumption). See the  data sheet for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonecmpfiltr0{    ///<Comparator 0 pin filter set-up
        using Addr = Register::Address<0x40008008,0xffffffe0,0,unsigned>;
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select clock divider for comparator clock CMP_PCLK.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonecmpfiltr1{    ///<Comparator 0 pin filter set-up
        using Addr = Register::Address<0x40008010,0xffffffe0,0,unsigned>;
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select clock divider for comparator clock CMP_PCLK.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonecmpfiltr2{    ///<Comparator 0 pin filter set-up
        using Addr = Register::Address<0x40008018,0xffffffe0,0,unsigned>;
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select clock divider for comparator clock CMP_PCLK.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
    namespace Nonecmpfiltr3{    ///<Comparator 0 pin filter set-up
        using Addr = Register::Address<0x40008020,0xffffffe0,0,unsigned>;
        ///Digital filter sample mode.
        enum class sModeVal {
            bypassInputFilter=0x00000000,     ///<Bypass input filter.
            v1ClockCycle=0x00000001,     ///<1 clock cycle. Input pulses shorter than one filter clock are rejected.
            v2ClockCycles=0x00000002,     ///<2 clock cycles. Input pulses shorter than two filter clocks are rejected.
            v3ClockCycles=0x00000003,     ///<3 clock cycles. Input pulses shorter than three filter clocks are rejected.
        };
        namespace sModeValC{
            constexpr MPL::Value<sModeVal,sModeVal::bypassInputFilter> bypassInputFilter{};
            constexpr MPL::Value<sModeVal,sModeVal::v1ClockCycle> v1ClockCycle{};
            constexpr MPL::Value<sModeVal,sModeVal::v2ClockCycles> v2ClockCycles{};
            constexpr MPL::Value<sModeVal,sModeVal::v3ClockCycles> v3ClockCycles{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sModeVal> sMode{}; 
        ///Select clock divider for comparator clock CMP_PCLK.
        enum class clkdivVal {
            cmpPclk=0x00000000,     ///<CMP_PCLK.
            cmpPclkdiv2=0x00000001,     ///<CMP_PCLK/2.
            cmpPclkdiv4=0x00000002,     ///<CMP_PCLK/4.
            cmpPclkdiv8=0x00000003,     ///<CMP_PCLK/8.
            cmpPclkdiv16=0x00000004,     ///<CMP_PCLK/16.
            cmpPclkdiv32=0x00000005,     ///<CMP_PCLK/32.
            cmpPclkdiv64=0x00000006,     ///<CMP_PCLK/64.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclk> cmpPclk{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv2> cmpPclkdiv2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv4> cmpPclkdiv4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv8> cmpPclkdiv8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv16> cmpPclkdiv16{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv32> cmpPclkdiv32{};
            constexpr MPL::Value<clkdivVal,clkdivVal::cmpPclkdiv64> cmpPclkdiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
    }
}
