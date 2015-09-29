#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparators
    namespace Nonectrl{    ///<Comparator block control register
        using Addr = Register::Address<0x40020000,0xffff0c00,0,unsigned>;
        ///Controls the current source used by the comparators. These bits must be set when either comparator is used.
        enum class cmpPdIrefVal {
            disabled=0x00000000,     ///<The comparator current source is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The comparator current source is disabled in Deep Sleep and Power-down modes and restored automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The comparator current source is disabled in Power-down mode and restored automatically when exiting Power-down.
            enabled=0x00000003,     ///<The comparator current source is powered up.
        };
        namespace cmpPdIrefValC{
            constexpr MPL::Value<cmpPdIrefVal,cmpPdIrefVal::disabled> disabled{};
            constexpr MPL::Value<cmpPdIrefVal,cmpPdIrefVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr MPL::Value<cmpPdIrefVal,cmpPdIrefVal::disPwrdwn> disPwrdwn{};
            constexpr MPL::Value<cmpPdIrefVal,cmpPdIrefVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,cmpPdIrefVal> cmpPdIref{}; 
        ///Controls the bandgap reference source that is used by the comparators. These bits must be set when either comparator is used.
        enum class cmpPdVbgVal {
            disabled=0x00000000,     ///<The comparator bandgap reference is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The comparator bandgap reference is disabled in Deep Sleep and Power-down modes and restored automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The comparator bandgap reference is disabled in Power-down mode and restored automatically when exiting Power-down.
            enabled=0x00000003,     ///<The comparator bandgap reference is powered up.
        };
        namespace cmpPdVbgValC{
            constexpr MPL::Value<cmpPdVbgVal,cmpPdVbgVal::disabled> disabled{};
            constexpr MPL::Value<cmpPdVbgVal,cmpPdVbgVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr MPL::Value<cmpPdVbgVal,cmpPdVbgVal::disPwrdwn> disPwrdwn{};
            constexpr MPL::Value<cmpPdVbgVal,cmpPdVbgVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,cmpPdVbgVal> cmpPdVbg{}; 
        ///Controls the voltage reference of the temperature sensor. These bits must be set when the temperature sensor is used.
        enum class cmpVtempVal {
            disabled=0x00000000,     ///<The temperature sensor voltage reference is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The temperature sensor voltage reference is disabled in Deep Sleep and Power-down modes and restored automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The temperature sensor voltage reference is disabled in Power-down mode and restored automatically when exiting Power-down.
            enabled=0x00000003,     ///<The temperature sensor voltage reference is powered up.
        };
        namespace cmpVtempValC{
            constexpr MPL::Value<cmpVtempVal,cmpVtempVal::disabled> disabled{};
            constexpr MPL::Value<cmpVtempVal,cmpVtempVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr MPL::Value<cmpVtempVal,cmpVtempVal::disPwrdwn> disPwrdwn{};
            constexpr MPL::Value<cmpVtempVal,cmpVtempVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,cmpVtempVal> cmpVtemp{}; 
        ///Enables the temperature sensor. These bits must be set when the temperature sensor is used.
        enum class cmpTempsenVal {
            disabled=0x00000000,     ///<Temperature sensor is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The temperature sensor is disabled in Deep Sleep and Power-down modes and restored automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The temperature sensor is disabled in Power-down mode and restored automatically when exiting Power-down.
            enabled=0x00000003,     ///<Temperature sensor is enabled.
        };
        namespace cmpTempsenValC{
            constexpr MPL::Value<cmpTempsenVal,cmpTempsenVal::disabled> disabled{};
            constexpr MPL::Value<cmpTempsenVal,cmpTempsenVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr MPL::Value<cmpTempsenVal,cmpTempsenVal::disPwrdwn> disPwrdwn{};
            constexpr MPL::Value<cmpTempsenVal,cmpTempsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,cmpTempsenVal> cmpTempsen{}; 
        ///Selects the inputs for the flip/flops that provide the CMP_ROSC output.
        enum class cmpRoscctlVal {
            cmp1=0x00000000,     ///<The CMP_ROSC output is set by CMP1 and reset by CMP0.
            cmp0=0x00000001,     ///<The CMP_ROSC output is set by CMP0 and reset by CMP1.
        };
        namespace cmpRoscctlValC{
            constexpr MPL::Value<cmpRoscctlVal,cmpRoscctlVal::cmp1> cmp1{};
            constexpr MPL::Value<cmpRoscctlVal,cmpRoscctlVal::cmp0> cmp0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cmpRoscctlVal> cmpRoscctl{}; 
        ///Selects the reset source for the CMP_ROSC output.
        enum class cmpExtResetVal {
            intreset=0x00000000,     ///<The CMP_ROSC output is reset by the internal chip reset.
            cmpResetin=0x00000001,     ///<The CMP_ROSC output is reset by the CMP_RESET input.
        };
        namespace cmpExtResetValC{
            constexpr MPL::Value<cmpExtResetVal,cmpExtResetVal::intreset> intreset{};
            constexpr MPL::Value<cmpExtResetVal,cmpExtResetVal::cmpResetin> cmpResetin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,cmpExtResetVal> cmpExtReset{}; 
        ///Selects the input for Timer 0 capture input 2.
        enum class cmpT0cap2Val {
            comp0=0x00000000,     ///<T0CAP2 is connected to comparator 0 level output.
            comp1=0x00000001,     ///<T0CAP2 is connected to comparator 1 level output.
        };
        namespace cmpT0cap2ValC{
            constexpr MPL::Value<cmpT0cap2Val,cmpT0cap2Val::comp0> comp0{};
            constexpr MPL::Value<cmpT0cap2Val,cmpT0cap2Val::comp1> comp1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,cmpT0cap2Val> cmpT0cap2{}; 
        ///Selects the input for Timer 0 capture input 3.
        enum class cmpT0cap3Val {
            comp0=0x00000000,     ///<T0CAP3 is connected to comparator 0 edge output.
            comp1=0x00000001,     ///<T0CAP3 is connected to comparator 1 edge output.
        };
        namespace cmpT0cap3ValC{
            constexpr MPL::Value<cmpT0cap3Val,cmpT0cap3Val::comp0> comp0{};
            constexpr MPL::Value<cmpT0cap3Val,cmpT0cap3Val::comp1> comp1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,cmpT0cap3Val> cmpT0cap3{}; 
        ///Selects the input for Timer 1 capture input 2.
        enum class cmpT1cap2Val {
            comp1=0x00000000,     ///<T1CAP2 is connected to comparator 1 edge output.
            comp0=0x00000001,     ///<T1CAP2 is connected to comparator 0 level output.
        };
        namespace cmpT1cap2ValC{
            constexpr MPL::Value<cmpT1cap2Val,cmpT1cap2Val::comp1> comp1{};
            constexpr MPL::Value<cmpT1cap2Val,cmpT1cap2Val::comp0> comp0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,cmpT1cap2Val> cmpT1cap2{}; 
        ///Selects the input for Timer 1 capture input 3.
        enum class cmpT1cap3Val {
            comp1=0x00000000,     ///<T1CAP3 is connected to comparator 1 level output.
            comp0=0x00000001,     ///<T1CAP3 is connected to comparator 0 edge output.
        };
        namespace cmpT1cap3ValC{
            constexpr MPL::Value<cmpT1cap3Val,cmpT1cap3Val::comp1> comp1{};
            constexpr MPL::Value<cmpT1cap3Val,cmpT1cap3Val::comp0> comp0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,cmpT1cap3Val> cmpT1cap3{}; 
    }
    namespace Nonectrl0{    ///<Comparator 0 control register
        using Addr = Register::Address<0x40020004,0xe0800880,0,unsigned>;
        ///Comparator 0 enable control.
        enum class cmp0EnVal {
            disabled=0x00000000,     ///<Comparator 0 disabled.
            disDeepslpPwrdwn=0x00000001,     ///<Comparator 0 is disabled in Deep Sleep and Power-down modes and re-enabled automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<Comparator 0 is disabled in Power-down mode and re-enabled automatically when exiting Power-down.
            enabled=0x00000003,     ///<Comparator 0 is enabled.
        };
        namespace cmp0EnValC{
            constexpr MPL::Value<cmp0EnVal,cmp0EnVal::disabled> disabled{};
            constexpr MPL::Value<cmp0EnVal,cmp0EnVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr MPL::Value<cmp0EnVal,cmp0EnVal::disPwrdwn> disPwrdwn{};
            constexpr MPL::Value<cmp0EnVal,cmp0EnVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,cmp0EnVal> cmp0En{}; 
        ///Comparator 0 output enable.
        enum class cmp0OeVal {
            disabled=0x00000000,     ///<Comparator 0 output is disabled.
            enabled=0x00000001,     ///<Comparator 0 output is enabled.
        };
        namespace cmp0OeValC{
            constexpr MPL::Value<cmp0OeVal,cmp0OeVal::disabled> disabled{};
            constexpr MPL::Value<cmp0OeVal,cmp0OeVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cmp0OeVal> cmp0Oe{}; 
        ///Comparator 0 status. This bit reflects the comparator 0 output, and is not affected by CMP0_OE.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp0Stat{}; 
        ///Comparator 0 VM input select.
        enum class cmp0VmVal {
            vrefDivider0=0x00000000,     ///<Vref divider 0.
            cmp0In0=0x00000001,     ///<CMP0_IN[0].
            cmp0In1=0x00000002,     ///<CMP0_IN[1].
            cmp0In2=0x00000003,     ///<CMP0_IN[2].
            cmp0In3=0x00000004,     ///<CMP0_IN[3].
            cmp1In0=0x00000005,     ///<CMP1_IN[0].
            internal09VBand=0x00000006,     ///<internal 0.9 V band gap reference.
            temperatureSensor=0x00000007,     ///<temperature sensor.
        };
        namespace cmp0VmValC{
            constexpr MPL::Value<cmp0VmVal,cmp0VmVal::vrefDivider0> vrefDivider0{};
            constexpr MPL::Value<cmp0VmVal,cmp0VmVal::cmp0In0> cmp0In0{};
            constexpr MPL::Value<cmp0VmVal,cmp0VmVal::cmp0In1> cmp0In1{};
            constexpr MPL::Value<cmp0VmVal,cmp0VmVal::cmp0In2> cmp0In2{};
            constexpr MPL::Value<cmp0VmVal,cmp0VmVal::cmp0In3> cmp0In3{};
            constexpr MPL::Value<cmp0VmVal,cmp0VmVal::cmp1In0> cmp1In0{};
            constexpr MPL::Value<cmp0VmVal,cmp0VmVal::internal09VBand> internal09VBand{};
            constexpr MPL::Value<cmp0VmVal,cmp0VmVal::temperatureSensor> temperatureSensor{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,cmp0VmVal> cmp0Vm{}; 
        ///Comparator 0 VP input select.
        enum class cmp0VpVal {
            vrefDivider0=0x00000000,     ///<Vref divider 0.
            cmp0In0=0x00000001,     ///<CMP0_IN[0].
            cmp0In1=0x00000002,     ///<CMP0_IN[1].
            cmp0In2=0x00000003,     ///<CMP0_IN[2].
            cmp0In3=0x00000004,     ///<CMP0_IN[3].
            cmp1In0=0x00000005,     ///<CMP1_IN[0].
            internal09VBand=0x00000006,     ///<internal 0.9 V band gap reference.
            temperatureSensor=0x00000007,     ///<temperature sensor.
        };
        namespace cmp0VpValC{
            constexpr MPL::Value<cmp0VpVal,cmp0VpVal::vrefDivider0> vrefDivider0{};
            constexpr MPL::Value<cmp0VpVal,cmp0VpVal::cmp0In0> cmp0In0{};
            constexpr MPL::Value<cmp0VpVal,cmp0VpVal::cmp0In1> cmp0In1{};
            constexpr MPL::Value<cmp0VpVal,cmp0VpVal::cmp0In2> cmp0In2{};
            constexpr MPL::Value<cmp0VpVal,cmp0VpVal::cmp0In3> cmp0In3{};
            constexpr MPL::Value<cmp0VpVal,cmp0VpVal::cmp1In0> cmp1In0{};
            constexpr MPL::Value<cmp0VpVal,cmp0VpVal::internal09VBand> internal09VBand{};
            constexpr MPL::Value<cmp0VpVal,cmp0VpVal::temperatureSensor> temperatureSensor{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,cmp0VpVal> cmp0Vp{}; 
        ///Comparator 0 output synchronization control.
        enum class cmp0SyncVal {
            direct=0x00000000,     ///<The comparator 0 output is used directly.
            synch=0x00000001,     ///<The comparator 0 output is synchronized with the internal bus clock for output to other peripherals.
        };
        namespace cmp0SyncValC{
            constexpr MPL::Value<cmp0SyncVal,cmp0SyncVal::direct> direct{};
            constexpr MPL::Value<cmp0SyncVal,cmp0SyncVal::synch> synch{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,cmp0SyncVal> cmp0Sync{}; 
        ///Comparator 0 hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class cmp0HysVal {
            hysteresisoff=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        namespace cmp0HysValC{
            constexpr MPL::Value<cmp0HysVal,cmp0HysVal::hysteresisoff> hysteresisoff{};
            constexpr MPL::Value<cmp0HysVal,cmp0HysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr MPL::Value<cmp0HysVal,cmp0HysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr MPL::Value<cmp0HysVal,cmp0HysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,cmp0HysVal> cmp0Hys{}; 
        ///Selects the polarity of the CMP0 output for purposes of generating level interrupts. See Table 412.
        enum class cmp0IntpolVal {
            notinverted=0x00000000,     ///<The CMP0 output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<The CMP0 output is used inverted for generating interrupts.
        };
        namespace cmp0IntpolValC{
            constexpr MPL::Value<cmp0IntpolVal,cmp0IntpolVal::notinverted> notinverted{};
            constexpr MPL::Value<cmp0IntpolVal,cmp0IntpolVal::inverted> inverted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,cmp0IntpolVal> cmp0Intpol{}; 
        ///Select comparator 0 interrupt type. See Table 412.
        enum class cmp0InttypeVal {
            edge=0x00000000,     ///<Comparator 0 interrupt is edge triggered.
            level=0x00000001,     ///<Comparator 0 interrupt is level triggered.
        };
        namespace cmp0InttypeValC{
            constexpr MPL::Value<cmp0InttypeVal,cmp0InttypeVal::edge> edge{};
            constexpr MPL::Value<cmp0InttypeVal,cmp0InttypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,cmp0InttypeVal> cmp0Inttype{}; 
        ///Select edge triggered interrupt to be active on either high or low transitions, when CMP0_IntType = 0. See Table 412.
        enum class cmp0IntedgeVal {
            falling=0x00000000,     ///<Comparator 0 interrupt is active on falling edges.
            rising=0x00000001,     ///<Comparator 0 interrupt is active on rising edges.
            dualedge=0x00000002,     ///<Comparator 0 Interrupt is active on both edges.
            reserved=0x00000003,     ///<reserved.
        };
        namespace cmp0IntedgeValC{
            constexpr MPL::Value<cmp0IntedgeVal,cmp0IntedgeVal::falling> falling{};
            constexpr MPL::Value<cmp0IntedgeVal,cmp0IntedgeVal::rising> rising{};
            constexpr MPL::Value<cmp0IntedgeVal,cmp0IntedgeVal::dualedge> dualedge{};
            constexpr MPL::Value<cmp0IntedgeVal,cmp0IntedgeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,cmp0IntedgeVal> cmp0Intedge{}; 
        ///Comparator 0 interrupt flag.
        enum class cmp0IntflagVal {
            notpending=0x00000000,     ///<The Comparator 0 interrupt is not pending.
            pending=0x00000001,     ///<The Comparator 0 interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        namespace cmp0IntflagValC{
            constexpr MPL::Value<cmp0IntflagVal,cmp0IntflagVal::notpending> notpending{};
            constexpr MPL::Value<cmp0IntflagVal,cmp0IntflagVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cmp0IntflagVal> cmp0Intflag{}; 
        ///Voltage ladder enable for comparator 0.
        enum class cmp0VladenVal {
            disabled=0x00000000,     ///<The Comparator 0 voltage ladder is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The Comparator 0 voltage ladder is disabled in Deep Sleep and Power-down modes and re-enabled automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The Comparator 0 voltage ladder is disabled in Power-down mode and re-enabled automatically when exiting Power-down.
            enabled=0x00000003,     ///<The Comparator 0 voltage ladder is enabled.
        };
        namespace cmp0VladenValC{
            constexpr MPL::Value<cmp0VladenVal,cmp0VladenVal::disabled> disabled{};
            constexpr MPL::Value<cmp0VladenVal,cmp0VladenVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr MPL::Value<cmp0VladenVal,cmp0VladenVal::disPwrdwn> disPwrdwn{};
            constexpr MPL::Value<cmp0VladenVal,cmp0VladenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,cmp0VladenVal> cmp0Vladen{}; 
        ///Voltage reference select for comparator 0 voltage ladder.
        enum class cmp0VladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        namespace cmp0VladrefValC{
            constexpr MPL::Value<cmp0VladrefVal,cmp0VladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr MPL::Value<cmp0VladrefVal,cmp0VladrefVal::vddaPin> vddaPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,cmp0VladrefVal> cmp0Vladref{}; 
        ///Voltage ladder value for comparator 0. The reference voltage Vref depends on the setting of CMP0_VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x  Vref0 / 31. 00010 = 2 x Vref0 / 31. ... 11111 = Vref0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> cmp0Vsel{}; 
    }
    namespace Nonectrl1{    ///<Comparator 1 control register
        using Addr = Register::Address<0x40020008,0xe0800880,0,unsigned>;
        ///Comparator 1 enable control.
        enum class cmp1EnVal {
            disabled=0x00000000,     ///<Comparator 1 disabled.
            disDeepslpPwrdwn=0x00000001,     ///<Comparator 1 is disabled in Deep Sleep and Power-down modes and re-enabled automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<Comparator 1 is disabled in Power-down mode and re-enabled automatically when exiting Power-down.
            enabled=0x00000003,     ///<Comparator 1 is enabled.
        };
        namespace cmp1EnValC{
            constexpr MPL::Value<cmp1EnVal,cmp1EnVal::disabled> disabled{};
            constexpr MPL::Value<cmp1EnVal,cmp1EnVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr MPL::Value<cmp1EnVal,cmp1EnVal::disPwrdwn> disPwrdwn{};
            constexpr MPL::Value<cmp1EnVal,cmp1EnVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,cmp1EnVal> cmp1En{}; 
        ///Comparator 1 output enable.
        enum class cmp1OeVal {
            disabled=0x00000000,     ///<Comparator 1 output is disabled.
            enabled=0x00000001,     ///<Comparator 1 output is enabled.
        };
        namespace cmp1OeValC{
            constexpr MPL::Value<cmp1OeVal,cmp1OeVal::disabled> disabled{};
            constexpr MPL::Value<cmp1OeVal,cmp1OeVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cmp1OeVal> cmp1Oe{}; 
        ///Comparator 1 status. This bit reflects the comparator 1 output, and is not affected by CMP1_OE.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cmp1Stat{}; 
        ///Comparator 1 VM input select.
        enum class cmp1VmVal {
            vrefDivider1=0x00000000,     ///<Vref divider 1.
            cmp1In0=0x00000001,     ///<CMP1_IN[0].
            cmp1In1=0x00000002,     ///<CMP1_IN[1].
            cmp1In2=0x00000003,     ///<CMP1_IN[2].
            cmp1In3=0x00000004,     ///<CMP1_IN[3].
            cmp0In0=0x00000005,     ///<CMP0_IN[0].
            internal09VBand=0x00000006,     ///<internal 0.9 V band gap reference.
            temperatureSensor=0x00000007,     ///<temperature sensor.
        };
        namespace cmp1VmValC{
            constexpr MPL::Value<cmp1VmVal,cmp1VmVal::vrefDivider1> vrefDivider1{};
            constexpr MPL::Value<cmp1VmVal,cmp1VmVal::cmp1In0> cmp1In0{};
            constexpr MPL::Value<cmp1VmVal,cmp1VmVal::cmp1In1> cmp1In1{};
            constexpr MPL::Value<cmp1VmVal,cmp1VmVal::cmp1In2> cmp1In2{};
            constexpr MPL::Value<cmp1VmVal,cmp1VmVal::cmp1In3> cmp1In3{};
            constexpr MPL::Value<cmp1VmVal,cmp1VmVal::cmp0In0> cmp0In0{};
            constexpr MPL::Value<cmp1VmVal,cmp1VmVal::internal09VBand> internal09VBand{};
            constexpr MPL::Value<cmp1VmVal,cmp1VmVal::temperatureSensor> temperatureSensor{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,cmp1VmVal> cmp1Vm{}; 
        ///Comparator 1 VP input select.
        enum class cmp1VpVal {
            vrefDivider0=0x00000000,     ///<Vref divider 0.
            cmp1In0=0x00000001,     ///<CMP1_IN[0].
            cmp1In1=0x00000002,     ///<CMP1_IN[1].
            cmp1In2=0x00000003,     ///<CMP1_IN[2].
            cmp1In3=0x00000004,     ///<CMP1_IN[3].
            cmp0In0=0x00000005,     ///<CMP0_IN[0].
            internal09VBand=0x00000006,     ///<internal 0.9 V band gap reference.
            temperatureSensor=0x00000007,     ///<temperature sensor.
        };
        namespace cmp1VpValC{
            constexpr MPL::Value<cmp1VpVal,cmp1VpVal::vrefDivider0> vrefDivider0{};
            constexpr MPL::Value<cmp1VpVal,cmp1VpVal::cmp1In0> cmp1In0{};
            constexpr MPL::Value<cmp1VpVal,cmp1VpVal::cmp1In1> cmp1In1{};
            constexpr MPL::Value<cmp1VpVal,cmp1VpVal::cmp1In2> cmp1In2{};
            constexpr MPL::Value<cmp1VpVal,cmp1VpVal::cmp1In3> cmp1In3{};
            constexpr MPL::Value<cmp1VpVal,cmp1VpVal::cmp0In0> cmp0In0{};
            constexpr MPL::Value<cmp1VpVal,cmp1VpVal::internal09VBand> internal09VBand{};
            constexpr MPL::Value<cmp1VpVal,cmp1VpVal::temperatureSensor> temperatureSensor{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,cmp1VpVal> cmp1Vp{}; 
        ///Comparator 1 output synchronization control.
        enum class cmp1SyncVal {
            direct=0x00000000,     ///<The comparator 1 output is used directly.
            synch=0x00000001,     ///<The comparator 1 output is synchronized with the internal bus clock for output to other peripherals.
        };
        namespace cmp1SyncValC{
            constexpr MPL::Value<cmp1SyncVal,cmp1SyncVal::direct> direct{};
            constexpr MPL::Value<cmp1SyncVal,cmp1SyncVal::synch> synch{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,cmp1SyncVal> cmp1Sync{}; 
        ///Comparator 1 hysteresis control. When enabled, hysteresis determines the difference required between the comparator inputs before the comparator output switches. The difference must be in the direction opposite of the current comparator output.
        enum class cmp1HysVal {
            hysteresisoff=0x00000000,     ///<Hysteresis is turned off, comparator output will change as the input voltages cross.
            hysteresisEq5Mv=0x00000001,     ///<Hysteresis = 5 mV.
            hysteresisEq10Mv=0x00000002,     ///<Hysteresis = 10 mV.
            hysteresisEq15Mv=0x00000003,     ///<Hysteresis = 15 mV.
        };
        namespace cmp1HysValC{
            constexpr MPL::Value<cmp1HysVal,cmp1HysVal::hysteresisoff> hysteresisoff{};
            constexpr MPL::Value<cmp1HysVal,cmp1HysVal::hysteresisEq5Mv> hysteresisEq5Mv{};
            constexpr MPL::Value<cmp1HysVal,cmp1HysVal::hysteresisEq10Mv> hysteresisEq10Mv{};
            constexpr MPL::Value<cmp1HysVal,cmp1HysVal::hysteresisEq15Mv> hysteresisEq15Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,cmp1HysVal> cmp1Hys{}; 
        ///Selects the polarity of the CMP1 output for purposes of generating level interrupts. See Table 412.
        enum class cmp1IntpolVal {
            notinverted=0x00000000,     ///<The CMP1 output is used as-is for generating interrupts.
            inverted=0x00000001,     ///<The CMP1 output is used inverted for generating interrupts.
        };
        namespace cmp1IntpolValC{
            constexpr MPL::Value<cmp1IntpolVal,cmp1IntpolVal::notinverted> notinverted{};
            constexpr MPL::Value<cmp1IntpolVal,cmp1IntpolVal::inverted> inverted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,cmp1IntpolVal> cmp1Intpol{}; 
        ///Select comparator 1 interrupt type. See Table 412.
        enum class cmp1InttypeVal {
            edge=0x00000000,     ///<Comparator 1 interrupt is edge triggered.
            level=0x00000001,     ///<Comparator 1 interrupt is level triggered.
        };
        namespace cmp1InttypeValC{
            constexpr MPL::Value<cmp1InttypeVal,cmp1InttypeVal::edge> edge{};
            constexpr MPL::Value<cmp1InttypeVal,cmp1InttypeVal::level> level{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,cmp1InttypeVal> cmp1Inttype{}; 
        ///Select edge triggered interrupt to be active on either high or low transitions, when CMP1_IntType = 0. See Table 412.
        enum class cmp1IntedgeVal {
            falling=0x00000000,     ///<Comparator 1 interrupt is active on falling edges.
            rising=0x00000001,     ///<Comparator 1 interrupt is active on rising edges.
            dualedge=0x00000002,     ///<Comparator 1 Interrupt is active on both edges.
            reserved=0x00000003,     ///<reserved.
        };
        namespace cmp1IntedgeValC{
            constexpr MPL::Value<cmp1IntedgeVal,cmp1IntedgeVal::falling> falling{};
            constexpr MPL::Value<cmp1IntedgeVal,cmp1IntedgeVal::rising> rising{};
            constexpr MPL::Value<cmp1IntedgeVal,cmp1IntedgeVal::dualedge> dualedge{};
            constexpr MPL::Value<cmp1IntedgeVal,cmp1IntedgeVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,cmp1IntedgeVal> cmp1Intedge{}; 
        ///Comparator 1 interrupt flag.
        enum class cmp1IntflagVal {
            notpending=0x00000000,     ///<The Comparator 1 interrupt is not pending.
            pending=0x00000001,     ///<The Comparator 1 interrupt is pending. Writing a 1 to this bit clears the flag.
        };
        namespace cmp1IntflagValC{
            constexpr MPL::Value<cmp1IntflagVal,cmp1IntflagVal::notpending> notpending{};
            constexpr MPL::Value<cmp1IntflagVal,cmp1IntflagVal::pending> pending{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cmp1IntflagVal> cmp1Intflag{}; 
        ///Voltage ladder enable for comparator 1.
        enum class cmp1VladenVal {
            disabled=0x00000000,     ///<The Comparator 1 voltage ladder is disabled.
            disDeepslpPwrdwn=0x00000001,     ///<The Comparator 1 voltage ladder is disabled in Deep Sleep and Power-down modes and re-enabled automatically when exiting those modes.
            disPwrdwn=0x00000002,     ///<The Comparator 1 voltage ladder is disabled in Power-down mode and re-enabled automatically when exiting Power-down.
            enabled=0x00000003,     ///<The Comparator 1 voltage ladder is enabled.
        };
        namespace cmp1VladenValC{
            constexpr MPL::Value<cmp1VladenVal,cmp1VladenVal::disabled> disabled{};
            constexpr MPL::Value<cmp1VladenVal,cmp1VladenVal::disDeepslpPwrdwn> disDeepslpPwrdwn{};
            constexpr MPL::Value<cmp1VladenVal,cmp1VladenVal::disPwrdwn> disPwrdwn{};
            constexpr MPL::Value<cmp1VladenVal,cmp1VladenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,cmp1VladenVal> cmp1Vladen{}; 
        ///Voltage reference select for comparator 1 voltage ladder.
        enum class cmp1VladrefVal {
            vrefCmpPin=0x00000000,     ///<VREF_CMP pin.
            vddaPin=0x00000001,     ///<VDDA pin.
        };
        namespace cmp1VladrefValC{
            constexpr MPL::Value<cmp1VladrefVal,cmp1VladrefVal::vrefCmpPin> vrefCmpPin{};
            constexpr MPL::Value<cmp1VladrefVal,cmp1VladrefVal::vddaPin> vddaPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,cmp1VladrefVal> cmp1Vladref{}; 
        ///Voltage ladder value for comparator 1. The reference voltage Vref depends on the setting of CMP1_VLADREF (either VDD(3V3) or voltage on pin VREF_CMP). 00000 = Vss. 00001 = 1 x Vref1 / 31. 00010 = 2 x Vref1 / 31. ... 11111 = Vref1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> cmp1Vsel{}; 
    }
}
