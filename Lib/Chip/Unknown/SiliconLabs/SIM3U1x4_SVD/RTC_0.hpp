#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Rtc0Config{    ///<RTC Configuration
        using Addr = Register::Address<0x40029000,0x18f8ff00,0x00000000,unsigned>;
        ///Alarm 0 Automatic Reset Enable. 
        enum class Alm0arenVal {
            disabled=0x00000000,     ///<Disable the Alarm 0 automatic reset.
            enabled=0x00000001,     ///<Enable the Alarm 0 automatic reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Alm0arenVal> alm0aren{}; 
        namespace Alm0arenValC{
            constexpr Register::FieldValue<decltype(alm0aren)::Type,Alm0arenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(alm0aren)::Type,Alm0arenVal::enabled> enabled{};
        }
        ///RTC Timer Enable. 
        enum class RunVal {
            stop=0x00000000,     ///<Stop the RTC timer.
            start=0x00000001,     ///<Start the RTC timer running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::stop> stop{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::start> start{};
        }
        ///Missing Clock Detector Enable. 
        enum class MclkenVal {
            disabled=0x00000000,     ///<Disable the missing clock detector.
            enabled=0x00000001,     ///<Enable the missing clock detector. If the missing clock detector triggers, it will generate an RTC Fail event.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MclkenVal> mclken{}; 
        namespace MclkenValC{
            constexpr Register::FieldValue<decltype(mclken)::Type,MclkenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mclken)::Type,MclkenVal::enabled> enabled{};
        }
        ///Automatic Crystal Load Capacitance Stepping Enable. 
        enum class AsenVal {
            disabled=0x00000000,     ///<Disable automatic load capacitance stepping.
            enabled=0x00000001,     ///<Enable automatic load capacitance stepping.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AsenVal> asen{}; 
        namespace AsenValC{
            constexpr Register::FieldValue<decltype(asen)::Type,AsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(asen)::Type,AsenVal::enabled> enabled{};
        }
        ///Load Capacitance Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rtclc{}; 
        ///Bias Doubler Enable. 
        enum class BdenVal {
            disabled=0x00000000,     ///<Disable the bias doubler, saving power.
            enabled=0x00000001,     ///<Enable the bias doubler, allowing for faster oscillator start up time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,BdenVal> bden{}; 
        namespace BdenValC{
            constexpr Register::FieldValue<decltype(bden)::Type,BdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bden)::Type,BdenVal::enabled> enabled{};
        }
        ///Crystal Oscillator Enable. 
        enum class CrysenVal {
            disabled=0x00000000,     ///<Disable the crystal oscillator circuitry.
            enabled=0x00000001,     ///<Enable the crystal oscillator circuitry.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CrysenVal> crysen{}; 
        namespace CrysenValC{
            constexpr Register::FieldValue<decltype(crysen)::Type,CrysenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crysen)::Type,CrysenVal::enabled> enabled{};
        }
        ///Automatic Gain Control Enable. 
        enum class AgcenVal {
            disabled=0x00000000,     ///<Disable automatic gain control.
            enabled=0x00000001,     ///<Enable automatic gain control, saving power.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,AgcenVal> agcen{}; 
        namespace AgcenValC{
            constexpr Register::FieldValue<decltype(agcen)::Type,AgcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(agcen)::Type,AgcenVal::enabled> enabled{};
        }
        ///Alarm 0 Enable. 
        enum class Alm0enVal {
            disabled=0x00000000,     ///<Disable RTC Alarm 0.
            enabled=0x00000001,     ///<Enable RTC Alarm 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Alm0enVal> alm0en{}; 
        namespace Alm0enValC{
            constexpr Register::FieldValue<decltype(alm0en)::Type,Alm0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(alm0en)::Type,Alm0enVal::enabled> enabled{};
        }
        ///Alarm 1 Enable. 
        enum class Alm1enVal {
            disabled=0x00000000,     ///<Disable RTC Alarm 1.
            enabled=0x00000001,     ///<Enable RTC Alarm 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Alm1enVal> alm1en{}; 
        namespace Alm1enValC{
            constexpr Register::FieldValue<decltype(alm1en)::Type,Alm1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(alm1en)::Type,Alm1enVal::enabled> enabled{};
        }
        ///Alarm 2 Enable. 
        enum class Alm2enVal {
            disabled=0x00000000,     ///<Disable RTC Alarm 2.
            enabled=0x00000001,     ///<Enable RTC Alarm 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Alm2enVal> alm2en{}; 
        namespace Alm2enValC{
            constexpr Register::FieldValue<decltype(alm2en)::Type,Alm2enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(alm2en)::Type,Alm2enVal::enabled> enabled{};
        }
        ///RTC0 External Output Enable. 
        enum class RtcoenVal {
            disabled=0x00000000,     ///<Disable the external RTCnOSC output.
            enabled=0x00000001,     ///<Enable the external RTCnOSC output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,RtcoenVal> rtcoen{}; 
        namespace RtcoenValC{
            constexpr Register::FieldValue<decltype(rtcoen)::Type,RtcoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtcoen)::Type,RtcoenVal::enabled> enabled{};
        }
        ///RTC Timer Clock Select. 
        enum class ClkselVal {
            rtcnosc=0x00000000,     ///<Select the RTC clock (RTCnOSC) as the RTC Timer clock.
            lfoscn=0x00000001,     ///<Select the Low Frequency Oscillator (LFOSCn) clock as the RTC Timer clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ClkselVal> clksel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::rtcnosc> rtcnosc{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::lfoscn> lfoscn{};
        }
        ///RTC Oscillator and Timer Enable. 
        enum class RtcenVal {
            disabled=0x00000000,     ///<Disable the RTC Oscillator and Timer.
            enabled=0x00000001,     ///<Enable the RTC Oscillator and Timer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RtcenVal> rtcen{}; 
        namespace RtcenValC{
            constexpr Register::FieldValue<decltype(rtcen)::Type,RtcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rtcen)::Type,RtcenVal::enabled> enabled{};
        }
    }
    namespace Rtc0Control{    ///<RTC Control
        using Addr = Register::Address<0x40029010,0xfffffe00,0x00000000,unsigned>;
        ///Alarm 0 Interrupt Flag. 
        enum class Alm0iVal {
            notSet=0x00000000,     ///<Alarm 0 event has not occurred.
            set=0x00000001,     ///<Alarm 0 event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Alm0iVal> alm0i{}; 
        namespace Alm0iValC{
            constexpr Register::FieldValue<decltype(alm0i)::Type,Alm0iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(alm0i)::Type,Alm0iVal::set> set{};
        }
        ///Alarm 1 Interrupt Flag. 
        enum class Alm1iVal {
            notSet=0x00000000,     ///<Alarm 1 event has not occurred.
            set=0x00000001,     ///<Alarm 1 event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Alm1iVal> alm1i{}; 
        namespace Alm1iValC{
            constexpr Register::FieldValue<decltype(alm1i)::Type,Alm1iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(alm1i)::Type,Alm1iVal::set> set{};
        }
        ///Alarm 2 Interrupt Flag. 
        enum class Alm2iVal {
            notSet=0x00000000,     ///<Alarm 2 event has not occurred.
            set=0x00000001,     ///<Alarm 2 event occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Alm2iVal> alm2i{}; 
        namespace Alm2iValC{
            constexpr Register::FieldValue<decltype(alm2i)::Type,Alm2iVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(alm2i)::Type,Alm2iVal::set> set{};
        }
        ///RTC Timer Capture. 
        enum class TmrcapVal {
            notSet=0x00000000,     ///<RTC timer capture operation is complete.
            set=0x00000001,     ///<Start the RTC timer capture.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TmrcapVal> tmrcap{}; 
        namespace TmrcapValC{
            constexpr Register::FieldValue<decltype(tmrcap)::Type,TmrcapVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tmrcap)::Type,TmrcapVal::set> set{};
        }
        ///RTC Timer Set. 
        enum class TmrsetVal {
            notSet=0x00000000,     ///<RTC timer set operation is complete.
            set=0x00000001,     ///<Start the RTC timer set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TmrsetVal> tmrset{}; 
        namespace TmrsetValC{
            constexpr Register::FieldValue<decltype(tmrset)::Type,TmrsetVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(tmrset)::Type,TmrsetVal::set> set{};
        }
        ///RTC External Oscillator Valid Flag. 
        enum class ClkvfVal {
            notSet=0x00000000,     ///<External oscillator is not valid.
            set=0x00000001,     ///<External oscillator is valid.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,ClkvfVal> clkvf{}; 
        namespace ClkvfValC{
            constexpr Register::FieldValue<decltype(clkvf)::Type,ClkvfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(clkvf)::Type,ClkvfVal::set> set{};
        }
        ///RTC Oscillator Fail Interrupt Flag. 
        enum class OscfiVal {
            notSet=0x00000000,     ///<Oscillator is running.
            set=0x00000001,     ///<Oscillator has failed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OscfiVal> oscfi{}; 
        namespace OscfiValC{
            constexpr Register::FieldValue<decltype(oscfi)::Type,OscfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oscfi)::Type,OscfiVal::set> set{};
        }
        ///RTC High Speed Mode Enable. 
        enum class HsmdenVal {
            disabled=0x00000000,     ///<Disable high speed mode.
            enabled=0x00000001,     ///<Enable high speed mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HsmdenVal> hsmden{}; 
        namespace HsmdenValC{
            constexpr Register::FieldValue<decltype(hsmden)::Type,HsmdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(hsmden)::Type,HsmdenVal::enabled> enabled{};
        }
        ///RTC Load Capacitance Ready Flag. 
        enum class LrdyfVal {
            notSet=0x00000000,     ///<The load capacitance is currently stepping.
            set=0x00000001,     ///<The load capacitance has reached its programmed value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,LrdyfVal> lrdyf{}; 
        namespace LrdyfValC{
            constexpr Register::FieldValue<decltype(lrdyf)::Type,LrdyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(lrdyf)::Type,LrdyfVal::set> set{};
        }
    }
    namespace Rtc0Alarm0{    ///<RTC Alarm 0
        using Addr = Register::Address<0x40029020,0x00000000,0x00000000,unsigned>;
        ///RTC Alarm 0. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> alarm0{}; 
    }
    namespace Rtc0Alarm1{    ///<RTC Alarm 1
        using Addr = Register::Address<0x40029030,0x00000000,0x00000000,unsigned>;
        ///RTC Alarm 1. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> alarm1{}; 
    }
    namespace Rtc0Alarm2{    ///<RTC Alarm 2
        using Addr = Register::Address<0x40029040,0x00000000,0x00000000,unsigned>;
        ///RTC Alarm 2. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> alarm2{}; 
    }
    namespace Rtc0Setcap{    ///<RTC Timer Set/Capture Value
        using Addr = Register::Address<0x40029050,0x00000000,0x00000000,unsigned>;
        ///RTC Timer Set/Capture Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setcap{}; 
    }
    namespace Rtc0Lfocontrol{    ///<LFOSC Control
        using Addr = Register::Address<0x40029060,0x7fffffff,0x00000000,unsigned>;
        ///Low Frequency Oscillator Enable. 
        enum class LfoscenVal {
            disabled=0x00000000,     ///<Disable the Low Frequency Oscillator (LFOSCn).
            enabled=0x00000001,     ///<Enable the Low Frequency Oscillator (LFOSCn).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,LfoscenVal> lfoscen{}; 
        namespace LfoscenValC{
            constexpr Register::FieldValue<decltype(lfoscen)::Type,LfoscenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lfoscen)::Type,LfoscenVal::enabled> enabled{};
        }
    }
    namespace Rtc0Lfoscadj{    ///<LFOSC Output Frequency Adjust
        using Addr = Register::Address<0x40029080,0xfffffff0,0x00000000,unsigned>;
        ///LFOSC Output Frequency Adjust. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lfoscadj{}; 
    }
}
