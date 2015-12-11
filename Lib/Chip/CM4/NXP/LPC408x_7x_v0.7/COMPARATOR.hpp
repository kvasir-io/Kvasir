#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparators
    namespace Nonectrl{    ///<Comparator block control register
        using Addr = Register::Address<0x40020000,0xffff0c00,0,unsigned>;
        ///Controls the current source used by the comparators. These bits must be set when either comparator is used.
        enum class CmppdirefVal {
            disabled=0x00000000,     ///<The comparator current source is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The comparator current source is disabled in Deep Sleep and Power-down modes and restored automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The comparator current source is disabled in Power-down mode and restored automatically when exiting Power-down.
            enabled=0x00000003,     ///<The comparator current source is powered up.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmppdirefVal> cmpPdIref{}; 
        namespace CmppdirefValC{
            constexpr Register::FieldValue<decltype(cmpPdIref)::Type,CmppdirefVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmpPdIref)::Type,CmppdirefVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr Register::FieldValue<decltype(cmpPdIref)::Type,CmppdirefVal::disPwrdwn> disPwrdwn{};
            constexpr Register::FieldValue<decltype(cmpPdIref)::Type,CmppdirefVal::enabled> enabled{};
        }
        ///Controls the bandgap reference source that is used by the comparators. These bits must be set when either comparator is used.
        enum class CmppdvbgVal {
            disabled=0x00000000,     ///<The comparator bandgap reference is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The comparator bandgap reference is disabled in Deep Sleep and Power-down modes and restored automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The comparator bandgap reference is disabled in Power-down mode and restored automatically when exiting Power-down.
            enabled=0x00000003,     ///<The comparator bandgap reference is powered up.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,CmppdvbgVal> cmpPdVbg{}; 
        namespace CmppdvbgValC{
            constexpr Register::FieldValue<decltype(cmpPdVbg)::Type,CmppdvbgVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmpPdVbg)::Type,CmppdvbgVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr Register::FieldValue<decltype(cmpPdVbg)::Type,CmppdvbgVal::disPwrdwn> disPwrdwn{};
            constexpr Register::FieldValue<decltype(cmpPdVbg)::Type,CmppdvbgVal::enabled> enabled{};
        }
        ///Controls the voltage reference of the temperature sensor. These bits must be set when the temperature sensor is used.
        enum class CmpvtempVal {
            disabled=0x00000000,     ///<The temperature sensor voltage reference is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The temperature sensor voltage reference is disabled in Deep Sleep and Power-down modes and restored automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The temperature sensor voltage reference is disabled in Power-down mode and restored automatically when exiting Power-down.
            enabled=0x00000003,     ///<The temperature sensor voltage reference is powered up.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,CmpvtempVal> cmpVtemp{}; 
        namespace CmpvtempValC{
            constexpr Register::FieldValue<decltype(cmpVtemp)::Type,CmpvtempVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmpVtemp)::Type,CmpvtempVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr Register::FieldValue<decltype(cmpVtemp)::Type,CmpvtempVal::disPwrdwn> disPwrdwn{};
            constexpr Register::FieldValue<decltype(cmpVtemp)::Type,CmpvtempVal::enabled> enabled{};
        }
        ///Enables the temperature sensor. These bits must be set when the temperature sensor is used.
        enum class CmptempsenVal {
            disabled=0x00000000,     ///<Temperature sensor is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The temperature sensor is disabled in Deep Sleep and Power-down modes and restored automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The temperature sensor is disabled in Power-down mode and restored automatically when exiting Power-down.
            enabled=0x00000003,     ///<Temperature sensor is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CmptempsenVal> cmpTempsen{}; 
        namespace CmptempsenValC{
            constexpr Register::FieldValue<decltype(cmpTempsen)::Type,CmptempsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmpTempsen)::Type,CmptempsenVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr Register::FieldValue<decltype(cmpTempsen)::Type,CmptempsenVal::disPwrdwn> disPwrdwn{};
            constexpr Register::FieldValue<decltype(cmpTempsen)::Type,CmptempsenVal::enabled> enabled{};
        }
        ///Selects the inputs for the flip/flops that provide the CMP_ROSC output.
        enum class CmproscctlVal {
            cmp1=0x00000000,     ///<The CMP_ROSC output is set by CMP1 and reset by CMP0.
            cmp0=0x00000001,     ///<The CMP_ROSC output is set by CMP0 and reset by CMP1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CmproscctlVal> cmpRoscctl{}; 
        namespace CmproscctlValC{
            constexpr Register::FieldValue<decltype(cmpRoscctl)::Type,CmproscctlVal::cmp1> cmp1{};
            constexpr Register::FieldValue<decltype(cmpRoscctl)::Type,CmproscctlVal::cmp0> cmp0{};
        }
        ///Selects the reset source for the CMP_ROSC output.
        enum class CmpextresetVal {
            intreset=0x00000000,     ///<The CMP_ROSC output is reset by the internal chip reset.
            cmpResetin=0x00000001,     ///<The CMP_ROSC output is reset by the CMP_RESET input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CmpextresetVal> cmpExtReset{}; 
        namespace CmpextresetValC{
            constexpr Register::FieldValue<decltype(cmpExtReset)::Type,CmpextresetVal::intreset> intreset{};
            constexpr Register::FieldValue<decltype(cmpExtReset)::Type,CmpextresetVal::cmpResetin> cmpResetin{};
        }
        ///Selects the input for Timer 0 capture input 2.
        enum class Cmpt0cap2Val {
            comp0=0x00000000,     ///<T0CAP2 is connected to comparator 0 level output.
            comp1=0x00000001,     ///<T0CAP2 is connected to comparator 1 level output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Cmpt0cap2Val> cmpT0cap2{}; 
        namespace Cmpt0cap2ValC{
            constexpr Register::FieldValue<decltype(cmpT0cap2)::Type,Cmpt0cap2Val::comp0> comp0{};
            constexpr Register::FieldValue<decltype(cmpT0cap2)::Type,Cmpt0cap2Val::comp1> comp1{};
        }
        ///Selects the input for Timer 0 capture input 3.
        enum class Cmpt0cap3Val {
            comp0=0x00000000,     ///<T0CAP3 is connected to comparator 0 edge output.
            comp1=0x00000001,     ///<T0CAP3 is connected to comparator 1 edge output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Cmpt0cap3Val> cmpT0cap3{}; 
        namespace Cmpt0cap3ValC{
            constexpr Register::FieldValue<decltype(cmpT0cap3)::Type,Cmpt0cap3Val::comp0> comp0{};
            constexpr Register::FieldValue<decltype(cmpT0cap3)::Type,Cmpt0cap3Val::comp1> comp1{};
        }
        ///Selects the input for Timer 1 capture input 2.
        enum class Cmpt1cap2Val {
            comp1=0x00000000,     ///<T1CAP2 is connected to comparator 1 edge output.
            comp0=0x00000001,     ///<T1CAP2 is connected to comparator 0 level output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Cmpt1cap2Val> cmpT1cap2{}; 
        namespace Cmpt1cap2ValC{
            constexpr Register::FieldValue<decltype(cmpT1cap2)::Type,Cmpt1cap2Val::comp1> comp1{};
            constexpr Register::FieldValue<decltype(cmpT1cap2)::Type,Cmpt1cap2Val::comp0> comp0{};
        }
        ///Selects the input for Timer 1 capture input 3.
        enum class Cmpt1cap3Val {
            comp1=0x00000000,     ///<T1CAP3 is connected to comparator 1 level output.
            comp0=0x00000001,     ///<T1CAP3 is connected to comparator 0 edge output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Cmpt1cap3Val> cmpT1cap3{}; 
        namespace Cmpt1cap3ValC{
            constexpr Register::FieldValue<decltype(cmpT1cap3)::Type,Cmpt1cap3Val::comp1> comp1{};
            constexpr Register::FieldValue<decltype(cmpT1cap3)::Type,Cmpt1cap3Val::comp0> comp0{};
        }
    }
    namespace Nonectrl0{    ///<Comparator 0 control register
        using Addr = Register::Address<0x40020004,0xe0800880,0,unsigned>;
        ///Comparator 0 enable control.
        enum class Cmp0enVal {
            disabled=0x00000000,     ///<Comparator 0 disabled.
            disDeepslpPwrdwn=0x00000001,     ///<Comparator 0 is disabled in Deep Sleep and Power-down modes and re-enabled automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<Comparator 0 is disabled in Power-down mode and re-enabled automatically when exiting Power-down.
            enabled=0x00000003,     ///<Comparator 0 is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Cmp0enVal> cmp0En{}; 
        namespace Cmp0enValC{
            constexpr Register::FieldValue<decltype(cmp0En)::Type,Cmp0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0En)::Type,Cmp0enVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr Register::FieldValue<decltype(cmp0En)::Type,Cmp0enVal::disPwrdwn> disPwrdwn{};
            constexpr Register::FieldValue<decltype(cmp0En)::Type,Cmp0enVal::enabled> enabled{};
        }
        ///Comparator 0 output enable.
        enum class Cmp0oeVal {
            disabled=0x00000000,     ///<Comparator 0 output is disabled.
            enabled=0x00000001,     ///<Comparator 0 output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Cmp0oeVal> cmp0Oe{}; 
        namespace Cmp0oeValC{
            constexpr Register::FieldValue<decltype(cmp0Oe)::Type,Cmp0oeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0Oe)::Type,Cmp0oeVal::enabled> enabled{};
        }
        ///Comparator 0 status. This bit reflects the comparator 0 output, and is not affected by CMP0_OE.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp0Stat{}; 
        ///Comparator 0 VM input select.
        enum class Cmp0vmVal {
            vrefDivider0=0x00000000,     ///<Vref divider 0.
            cmp0In0=0x00000001,     ///<CMP0_IN[0].
            cmp0In1=0x00000002,     ///<CMP0_IN[1].
            cmp0In2=0x00000003,     ///<CMP0_IN[2].
            cmp0In3=0x00000004,     ///<CMP0_IN[3].
            cmp1In0=0x00000005,     ///<CMP1_IN[0].
            internal09VBand=0x00000006,     ///<internal 0.9 V band gap reference.
            temperatureSensor=0x00000007,     ///<temperature sensor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,Cmp0vmVal> cmp0Vm{}; 
        namespace Cmp0vmValC{
            constexpr Register::FieldValue<decltype(cmp0Vm)::Type,Cmp0vmVal::vrefDivider0> vrefDivider0{};
            constexpr Register::FieldValue<decltype(cmp0Vm)::Type,Cmp0vmVal::cmp0In0> cmp0In0{};
            constexpr Register::FieldValue<decltype(cmp0Vm)::Type,Cmp0vmVal::cmp0In1> cmp0In1{};
            constexpr Register::FieldValue<decltype(cmp0Vm)::Type,Cmp0vmVal::cmp0In2> cmp0In2{};
            constexpr Register::FieldValue<decltype(cmp0Vm)::Type,Cmp0vmVal::cmp0In3> cmp0In3{};
            constexpr Register::FieldValue<decltype(cmp0Vm)::Type,Cmp0vmVal::cmp1In0> cmp1In0{};
            constexpr Register::FieldValue<decltype(cmp0Vm)::Type,Cmp0vmVal::internal09VBand> internal09VBand{};
            constexpr Register::FieldValue<decltype(cmp0Vm)::Type,Cmp0vmVal::temperatureSensor> temperatureSensor{};
        }
        ///Comparator 0 VP input select.
        enum class Cmp0vpVal {
            vrefDivider0=0x00000000,     ///<Vref divider 0.
            cmp0In0=0x00000001,     ///<CMP0_IN[0].
            cmp0In1=0x00000002,     ///<CMP0_IN[1].
            cmp0In2=0x00000003,     ///<CMP0_IN[2].
            cmp0In3=0x00000004,     ///<CMP0_IN[3].
            cmp1In0=0x00000005,     ///<CMP1_IN[0].
            internal09VBand=0x00000006,     ///<internal 0.9 V band gap reference.
            temperatureSensor=0x00000007,     ///<temperature sensor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Cmp0vpVal> cmp0Vp{}; 
        namespace Cmp0vpValC{
            constexpr Register::FieldValue<decltype(cmp0Vp)::Type,Cmp0vpVal::vrefDivider0> vrefDivider0{};
            constexpr Register::FieldValue<decltype(cmp0Vp)::Type,Cmp0vpVal::cmp0In0> cmp0In0{};
            constexpr Register::FieldValue<decltype(cmp0Vp)::Type,Cmp0vpVal::cmp0In1> cmp0In1{};
            constexpr Register::FieldValue<decltype(cmp0Vp)::Type,Cmp0vpVal::cmp0In2> cmp0In2{};
            constexpr Register::FieldValue<decltype(cmp0Vp)::Type,Cmp0vpVal::cmp0In3> cmp0In3{};
            constexpr Register::FieldValue<decltype(cmp0Vp)::Type,Cmp0vpVal::cmp1In0> cmp1In0{};
            constexpr Register::FieldValue<decltype(cmp0Vp)::Type,Cmp0vpVal::internal09VBand> internal09VBand{};
            constexpr Register::FieldValue<decltype(cmp0Vp)::Type,Cmp0vpVal::temperatureSensor> temperatureSensor{};
        }
        ///Comparator 0 output synchronization control.
        enum class Cmp0syncVal {
            direct=0x00000000,     ///<The comparator 0 output is used directly.
            synch=0x00000001,     ///<The comparator 0 output is synchronized with the internal bus clock for output to other peripherals.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Cmp0syncVal> cmp0Sync{}; 
        namespace Cmp0syncValC{
            constexpr Register::FieldValue<decltype(cmp0Sync)::Type,Cmp0syncVal::direct> direct{};
            constexpr Register::FieldValue<decltype(cmp0Sync)::Type,Cmp0syncVal::synch> synch{};
        }
        ///Comparator 0 hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class Cmp0hysVal {
            hysteresisoff=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,Cmp0hysVal> cmp0Hys{}; 
        namespace Cmp0hysValC{
            constexpr Register::FieldValue<decltype(cmp0Hys)::Type,Cmp0hysVal::hysteresisoff> hysteresisoff{};
            constexpr Register::FieldValue<decltype(cmp0Hys)::Type,Cmp0hysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr Register::FieldValue<decltype(cmp0Hys)::Type,Cmp0hysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr Register::FieldValue<decltype(cmp0Hys)::Type,Cmp0hysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        ///Selects the polarity of the CMP0 output for purposes of generating level interrupts. See Table 412.
        enum class Cmp0intpolVal {
            notinverted=0x00000000,     ///<The CMP0 output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<The CMP0 output is used inverted for generating interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Cmp0intpolVal> cmp0Intpol{}; 
        namespace Cmp0intpolValC{
            constexpr Register::FieldValue<decltype(cmp0Intpol)::Type,Cmp0intpolVal::notinverted> notinverted{};
            constexpr Register::FieldValue<decltype(cmp0Intpol)::Type,Cmp0intpolVal::inverted> inverted{};
        }
        ///Select comparator 0 interrupt type. See Table 412.
        enum class Cmp0inttypeVal {
            edge=0x00000000,     ///<Comparator 0 interrupt is edge triggered.
            level=0x00000001,     ///<Comparator 0 interrupt is level triggered.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Cmp0inttypeVal> cmp0Inttype{}; 
        namespace Cmp0inttypeValC{
            constexpr Register::FieldValue<decltype(cmp0Inttype)::Type,Cmp0inttypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(cmp0Inttype)::Type,Cmp0inttypeVal::level> level{};
        }
        ///Select edge triggered interrupt to be active on either high or low transitions, when CMP0_IntType = 0. See Table 412.
        enum class Cmp0intedgeVal {
            falling=0x00000000,     ///<Comparator 0 interrupt is active on falling edges.
            rising=0x00000001,     ///<Comparator 0 interrupt is active on rising edges.
            dualedge=0x00000002,     ///<Comparator 0 Interrupt is active on both edges.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,Cmp0intedgeVal> cmp0Intedge{}; 
        namespace Cmp0intedgeValC{
            constexpr Register::FieldValue<decltype(cmp0Intedge)::Type,Cmp0intedgeVal::falling> falling{};
            constexpr Register::FieldValue<decltype(cmp0Intedge)::Type,Cmp0intedgeVal::rising> rising{};
            constexpr Register::FieldValue<decltype(cmp0Intedge)::Type,Cmp0intedgeVal::dualedge> dualedge{};
        }
        ///Comparator 0 interrupt flag.
        enum class Cmp0intflagVal {
            notpending=0x00000000,     ///<The Comparator 0 interrupt is not pending.
            pending=0x00000001,     ///<The Comparator 0 interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Cmp0intflagVal> cmp0Intflag{}; 
        namespace Cmp0intflagValC{
            constexpr Register::FieldValue<decltype(cmp0Intflag)::Type,Cmp0intflagVal::notpending> notpending{};
            constexpr Register::FieldValue<decltype(cmp0Intflag)::Type,Cmp0intflagVal::pending> pending{};
        }
        ///Voltage ladder enable for comparator 0.
        enum class Cmp0vladenVal {
            disabled=0x00000000,     ///<The Comparator 0 voltage ladder is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The Comparator 0 voltage ladder is disabled in Deep Sleep and Power-down modes and re-enabled automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The Comparator 0 voltage ladder is disabled in Power-down mode and re-enabled automatically when exiting Power-down.
            enabled=0x00000003,     ///<The Comparator 0 voltage ladder is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Cmp0vladenVal> cmp0Vladen{}; 
        namespace Cmp0vladenValC{
            constexpr Register::FieldValue<decltype(cmp0Vladen)::Type,Cmp0vladenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp0Vladen)::Type,Cmp0vladenVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr Register::FieldValue<decltype(cmp0Vladen)::Type,Cmp0vladenVal::disPwrdwn> disPwrdwn{};
            constexpr Register::FieldValue<decltype(cmp0Vladen)::Type,Cmp0vladenVal::enabled> enabled{};
        }
        ///Voltage reference select for comparator 0 voltage ladder.
        enum class Cmp0vladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Cmp0vladrefVal> cmp0Vladref{}; 
        namespace Cmp0vladrefValC{
            constexpr Register::FieldValue<decltype(cmp0Vladref)::Type,Cmp0vladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr Register::FieldValue<decltype(cmp0Vladref)::Type,Cmp0vladrefVal::vddaPin> vddaPin{};
        }
        ///Voltage ladder value for comparator 0. The reference voltage Vref depends on the setting of CMP0_VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x  Vref0 / 31. 00010 = 2 x Vref0 / 31. ... 11111 = Vref0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> cmp0Vsel{}; 
    }
    namespace Nonectrl1{    ///<Comparator 1 control register
        using Addr = Register::Address<0x40020008,0xe0800880,0,unsigned>;
        ///Comparator 1 enable control.
        enum class Cmp1enVal {
            disabled=0x00000000,     ///<Comparator 1 disabled.
            disDeepslpPwrdwn=0x00000001,     ///<Comparator 1 is disabled in Deep Sleep and Power-down modes and re-enabled automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<Comparator 1 is disabled in Power-down mode and re-enabled automatically when exiting Power-down.
            enabled=0x00000003,     ///<Comparator 1 is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Cmp1enVal> cmp1En{}; 
        namespace Cmp1enValC{
            constexpr Register::FieldValue<decltype(cmp1En)::Type,Cmp1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1En)::Type,Cmp1enVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr Register::FieldValue<decltype(cmp1En)::Type,Cmp1enVal::disPwrdwn> disPwrdwn{};
            constexpr Register::FieldValue<decltype(cmp1En)::Type,Cmp1enVal::enabled> enabled{};
        }
        ///Comparator 1 output enable.
        enum class Cmp1oeVal {
            disabled=0x00000000,     ///<Comparator 1 output is disabled.
            enabled=0x00000001,     ///<Comparator 1 output is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Cmp1oeVal> cmp1Oe{}; 
        namespace Cmp1oeValC{
            constexpr Register::FieldValue<decltype(cmp1Oe)::Type,Cmp1oeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1Oe)::Type,Cmp1oeVal::enabled> enabled{};
        }
        ///Comparator 1 status. This bit reflects the comparator 1 output, and is not affected by CMP1_OE.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp1Stat{}; 
        ///Comparator 1 VM input select.
        enum class Cmp1vmVal {
            vrefDivider1=0x00000000,     ///<Vref divider 1.
            cmp1In0=0x00000001,     ///<CMP1_IN[0].
            cmp1In1=0x00000002,     ///<CMP1_IN[1].
            cmp1In2=0x00000003,     ///<CMP1_IN[2].
            cmp1In3=0x00000004,     ///<CMP1_IN[3].
            cmp0In0=0x00000005,     ///<CMP0_IN[0].
            internal09VBand=0x00000006,     ///<internal 0.9 V band gap reference.
            temperatureSensor=0x00000007,     ///<temperature sensor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,Cmp1vmVal> cmp1Vm{}; 
        namespace Cmp1vmValC{
            constexpr Register::FieldValue<decltype(cmp1Vm)::Type,Cmp1vmVal::vrefDivider1> vrefDivider1{};
            constexpr Register::FieldValue<decltype(cmp1Vm)::Type,Cmp1vmVal::cmp1In0> cmp1In0{};
            constexpr Register::FieldValue<decltype(cmp1Vm)::Type,Cmp1vmVal::cmp1In1> cmp1In1{};
            constexpr Register::FieldValue<decltype(cmp1Vm)::Type,Cmp1vmVal::cmp1In2> cmp1In2{};
            constexpr Register::FieldValue<decltype(cmp1Vm)::Type,Cmp1vmVal::cmp1In3> cmp1In3{};
            constexpr Register::FieldValue<decltype(cmp1Vm)::Type,Cmp1vmVal::cmp0In0> cmp0In0{};
            constexpr Register::FieldValue<decltype(cmp1Vm)::Type,Cmp1vmVal::internal09VBand> internal09VBand{};
            constexpr Register::FieldValue<decltype(cmp1Vm)::Type,Cmp1vmVal::temperatureSensor> temperatureSensor{};
        }
        ///Comparator 1 VP input select.
        enum class Cmp1vpVal {
            vrefDivider0=0x00000000,     ///<Vref divider 0.
            cmp1In0=0x00000001,     ///<CMP1_IN[0].
            cmp1In1=0x00000002,     ///<CMP1_IN[1].
            cmp1In2=0x00000003,     ///<CMP1_IN[2].
            cmp1In3=0x00000004,     ///<CMP1_IN[3].
            cmp0In0=0x00000005,     ///<CMP0_IN[0].
            internal09VBand=0x00000006,     ///<internal 0.9 V band gap reference.
            temperatureSensor=0x00000007,     ///<temperature sensor.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,Cmp1vpVal> cmp1Vp{}; 
        namespace Cmp1vpValC{
            constexpr Register::FieldValue<decltype(cmp1Vp)::Type,Cmp1vpVal::vrefDivider0> vrefDivider0{};
            constexpr Register::FieldValue<decltype(cmp1Vp)::Type,Cmp1vpVal::cmp1In0> cmp1In0{};
            constexpr Register::FieldValue<decltype(cmp1Vp)::Type,Cmp1vpVal::cmp1In1> cmp1In1{};
            constexpr Register::FieldValue<decltype(cmp1Vp)::Type,Cmp1vpVal::cmp1In2> cmp1In2{};
            constexpr Register::FieldValue<decltype(cmp1Vp)::Type,Cmp1vpVal::cmp1In3> cmp1In3{};
            constexpr Register::FieldValue<decltype(cmp1Vp)::Type,Cmp1vpVal::cmp0In0> cmp0In0{};
            constexpr Register::FieldValue<decltype(cmp1Vp)::Type,Cmp1vpVal::internal09VBand> internal09VBand{};
            constexpr Register::FieldValue<decltype(cmp1Vp)::Type,Cmp1vpVal::temperatureSensor> temperatureSensor{};
        }
        ///Comparator 1 output synchronization control.
        enum class Cmp1syncVal {
            direct=0x00000000,     ///<The comparator 1 output is used directly.
            synch=0x00000001,     ///<The comparator 1 output is synchronized with the internal bus clock for output to other peripherals.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Cmp1syncVal> cmp1Sync{}; 
        namespace Cmp1syncValC{
            constexpr Register::FieldValue<decltype(cmp1Sync)::Type,Cmp1syncVal::direct> direct{};
            constexpr Register::FieldValue<decltype(cmp1Sync)::Type,Cmp1syncVal::synch> synch{};
        }
        ///Comparator 1 hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class Cmp1hysVal {
            hysteresisoff=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,Cmp1hysVal> cmp1Hys{}; 
        namespace Cmp1hysValC{
            constexpr Register::FieldValue<decltype(cmp1Hys)::Type,Cmp1hysVal::hysteresisoff> hysteresisoff{};
            constexpr Register::FieldValue<decltype(cmp1Hys)::Type,Cmp1hysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr Register::FieldValue<decltype(cmp1Hys)::Type,Cmp1hysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr Register::FieldValue<decltype(cmp1Hys)::Type,Cmp1hysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        ///Selects the polarity of the CMP1 output for purposes of generating level interrupts. See Table 412.
        enum class Cmp1intpolVal {
            notinverted=0x00000000,     ///<The CMP1 output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<The CMP1 output is used inverted for generating interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Cmp1intpolVal> cmp1Intpol{}; 
        namespace Cmp1intpolValC{
            constexpr Register::FieldValue<decltype(cmp1Intpol)::Type,Cmp1intpolVal::notinverted> notinverted{};
            constexpr Register::FieldValue<decltype(cmp1Intpol)::Type,Cmp1intpolVal::inverted> inverted{};
        }
        ///Select comparator 1 interrupt type. See Table 412.
        enum class Cmp1inttypeVal {
            edge=0x00000000,     ///<Comparator 1 interrupt is edge triggered.
            level=0x00000001,     ///<Comparator 1 interrupt is level triggered.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Cmp1inttypeVal> cmp1Inttype{}; 
        namespace Cmp1inttypeValC{
            constexpr Register::FieldValue<decltype(cmp1Inttype)::Type,Cmp1inttypeVal::edge> edge{};
            constexpr Register::FieldValue<decltype(cmp1Inttype)::Type,Cmp1inttypeVal::level> level{};
        }
        ///Select edge triggered interrupt to be active on either high or low transitions, when CMP1_IntType = 0. See Table 412.
        enum class Cmp1intedgeVal {
            falling=0x00000000,     ///<Comparator 1 interrupt is active on falling edges.
            rising=0x00000001,     ///<Comparator 1 interrupt is active on rising edges.
            dualedge=0x00000002,     ///<Comparator 1 Interrupt is active on both edges.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,Cmp1intedgeVal> cmp1Intedge{}; 
        namespace Cmp1intedgeValC{
            constexpr Register::FieldValue<decltype(cmp1Intedge)::Type,Cmp1intedgeVal::falling> falling{};
            constexpr Register::FieldValue<decltype(cmp1Intedge)::Type,Cmp1intedgeVal::rising> rising{};
            constexpr Register::FieldValue<decltype(cmp1Intedge)::Type,Cmp1intedgeVal::dualedge> dualedge{};
        }
        ///Comparator 1 interrupt flag.
        enum class Cmp1intflagVal {
            notpending=0x00000000,     ///<The Comparator 1 interrupt is not pending.
            pending=0x00000001,     ///<The Comparator 1 interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Cmp1intflagVal> cmp1Intflag{}; 
        namespace Cmp1intflagValC{
            constexpr Register::FieldValue<decltype(cmp1Intflag)::Type,Cmp1intflagVal::notpending> notpending{};
            constexpr Register::FieldValue<decltype(cmp1Intflag)::Type,Cmp1intflagVal::pending> pending{};
        }
        ///Voltage ladder enable for comparator 1.
        enum class Cmp1vladenVal {
            disabled=0x00000000,     ///<The Comparator 1 voltage ladder is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The Comparator 1 voltage ladder is disabled in Deep Sleep and Power-down modes and re-enabled automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The Comparator 1 voltage ladder is disabled in Power-down mode and re-enabled automatically when exiting Power-down.
            enabled=0x00000003,     ///<The Comparator 1 voltage ladder is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Cmp1vladenVal> cmp1Vladen{}; 
        namespace Cmp1vladenValC{
            constexpr Register::FieldValue<decltype(cmp1Vladen)::Type,Cmp1vladenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmp1Vladen)::Type,Cmp1vladenVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr Register::FieldValue<decltype(cmp1Vladen)::Type,Cmp1vladenVal::disPwrdwn> disPwrdwn{};
            constexpr Register::FieldValue<decltype(cmp1Vladen)::Type,Cmp1vladenVal::enabled> enabled{};
        }
        ///Voltage reference select for comparator 1 voltage ladder.
        enum class Cmp1vladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Cmp1vladrefVal> cmp1Vladref{}; 
        namespace Cmp1vladrefValC{
            constexpr Register::FieldValue<decltype(cmp1Vladref)::Type,Cmp1vladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr Register::FieldValue<decltype(cmp1Vladref)::Type,Cmp1vladrefVal::vddaPin> vddaPin{};
        }
        ///Voltage ladder value for comparator 1. The reference voltage Vref depends on the setting of CMP1_VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x Vref1 / 31. 00010 = 2 x Vref1 / 31. ... 11111 = Vref1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> cmp1Vsel{}; 
    }
}
