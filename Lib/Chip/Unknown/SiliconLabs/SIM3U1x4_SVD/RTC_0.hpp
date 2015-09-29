#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<RTC Configuration
        using Addr = Register::Address<0x40029000,0x18f8ff00,0,unsigned>;
        ///Alarm 0 Automatic Reset Enable. 
        enum class alm0arenVal {
            disabled=0x00000000,     ///<Disable the Alarm 0 automatic reset.
            enabled=0x00000001,     ///<Enable the Alarm 0 automatic reset.
        };
        namespace alm0arenValC{
            constexpr MPL::Value<alm0arenVal,alm0arenVal::disabled> disabled{};
            constexpr MPL::Value<alm0arenVal,alm0arenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,alm0arenVal> alm0aren{}; 
        ///RTC Timer Enable. 
        enum class runVal {
            stop=0x00000000,     ///<Stop the RTC timer.
            start=0x00000001,     ///<Start the RTC timer running.
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::stop> stop{};
            constexpr MPL::Value<runVal,runVal::start> start{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,runVal> run{}; 
        ///Missing Clock Detector Enable. 
        enum class mclkenVal {
            disabled=0x00000000,     ///<Disable the missing clock detector.
            enabled=0x00000001,     ///<Enable the missing clock detector. If the missing clock detector triggers, it will generate an RTC Fail event.
        };
        namespace mclkenValC{
            constexpr MPL::Value<mclkenVal,mclkenVal::disabled> disabled{};
            constexpr MPL::Value<mclkenVal,mclkenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,mclkenVal> mclken{}; 
        ///Automatic Crystal Load Capacitance Stepping Enable. 
        enum class asenVal {
            disabled=0x00000000,     ///<Disable automatic load capacitance stepping.
            enabled=0x00000001,     ///<Enable automatic load capacitance stepping.
        };
        namespace asenValC{
            constexpr MPL::Value<asenVal,asenVal::disabled> disabled{};
            constexpr MPL::Value<asenVal,asenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,asenVal> asen{}; 
        ///Load Capacitance Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rtclc{}; 
        ///Bias Doubler Enable. 
        enum class bdenVal {
            disabled=0x00000000,     ///<Disable the bias doubler, saving power.
            enabled=0x00000001,     ///<Enable the bias doubler, allowing for faster oscillator start up time.
        };
        namespace bdenValC{
            constexpr MPL::Value<bdenVal,bdenVal::disabled> disabled{};
            constexpr MPL::Value<bdenVal,bdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,bdenVal> bden{}; 
        ///Crystal Oscillator Enable. 
        enum class crysenVal {
            disabled=0x00000000,     ///<Disable the crystal oscillator circuitry.
            enabled=0x00000001,     ///<Enable the crystal oscillator circuitry.
        };
        namespace crysenValC{
            constexpr MPL::Value<crysenVal,crysenVal::disabled> disabled{};
            constexpr MPL::Value<crysenVal,crysenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,crysenVal> crysen{}; 
        ///Automatic Gain Control Enable. 
        enum class agcenVal {
            disabled=0x00000000,     ///<Disable automatic gain control.
            enabled=0x00000001,     ///<Enable automatic gain control, saving power.
        };
        namespace agcenValC{
            constexpr MPL::Value<agcenVal,agcenVal::disabled> disabled{};
            constexpr MPL::Value<agcenVal,agcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,agcenVal> agcen{}; 
        ///Alarm 0 Enable. 
        enum class alm0enVal {
            disabled=0x00000000,     ///<Disable RTC Alarm 0.
            enabled=0x00000001,     ///<Enable RTC Alarm 0.
        };
        namespace alm0enValC{
            constexpr MPL::Value<alm0enVal,alm0enVal::disabled> disabled{};
            constexpr MPL::Value<alm0enVal,alm0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,alm0enVal> alm0en{}; 
        ///Alarm 1 Enable. 
        enum class alm1enVal {
            disabled=0x00000000,     ///<Disable RTC Alarm 1.
            enabled=0x00000001,     ///<Enable RTC Alarm 1.
        };
        namespace alm1enValC{
            constexpr MPL::Value<alm1enVal,alm1enVal::disabled> disabled{};
            constexpr MPL::Value<alm1enVal,alm1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,alm1enVal> alm1en{}; 
        ///Alarm 2 Enable. 
        enum class alm2enVal {
            disabled=0x00000000,     ///<Disable RTC Alarm 2.
            enabled=0x00000001,     ///<Enable RTC Alarm 2.
        };
        namespace alm2enValC{
            constexpr MPL::Value<alm2enVal,alm2enVal::disabled> disabled{};
            constexpr MPL::Value<alm2enVal,alm2enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,alm2enVal> alm2en{}; 
        ///RTC0 External Output Enable. 
        enum class rtcoenVal {
            disabled=0x00000000,     ///<Disable the external RTCnOSC output.
            enabled=0x00000001,     ///<Enable the external RTCnOSC output.
        };
        namespace rtcoenValC{
            constexpr MPL::Value<rtcoenVal,rtcoenVal::disabled> disabled{};
            constexpr MPL::Value<rtcoenVal,rtcoenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,rtcoenVal> rtcoen{}; 
        ///RTC Timer Clock Select. 
        enum class clkselVal {
            rtcnosc=0x00000000,     ///<Select the RTC clock (RTCnOSC) as the RTC Timer clock.
            lfoscn=0x00000001,     ///<Select the Low Frequency Oscillator (LFOSCn) clock as the RTC Timer clock.
        };
        namespace clkselValC{
            constexpr MPL::Value<clkselVal,clkselVal::rtcnosc> rtcnosc{};
            constexpr MPL::Value<clkselVal,clkselVal::lfoscn> lfoscn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,clkselVal> clksel{}; 
        ///RTC Oscillator and Timer Enable. 
        enum class rtcenVal {
            disabled=0x00000000,     ///<Disable the RTC Oscillator and Timer.
            enabled=0x00000001,     ///<Enable the RTC Oscillator and Timer.
        };
        namespace rtcenValC{
            constexpr MPL::Value<rtcenVal,rtcenVal::disabled> disabled{};
            constexpr MPL::Value<rtcenVal,rtcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,rtcenVal> rtcen{}; 
    }
    namespace Nonecontrol{    ///<RTC Control
        using Addr = Register::Address<0x40029010,0xfffffe00,0,unsigned>;
        ///Alarm 0 Interrupt Flag. 
        enum class alm0iVal {
            notSet=0x00000000,     ///<Alarm 0 event has not occurred.
            set=0x00000001,     ///<Alarm 0 event occurred.
        };
        namespace alm0iValC{
            constexpr MPL::Value<alm0iVal,alm0iVal::notSet> notSet{};
            constexpr MPL::Value<alm0iVal,alm0iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,alm0iVal> alm0i{}; 
        ///Alarm 1 Interrupt Flag. 
        enum class alm1iVal {
            notSet=0x00000000,     ///<Alarm 1 event has not occurred.
            set=0x00000001,     ///<Alarm 1 event occurred.
        };
        namespace alm1iValC{
            constexpr MPL::Value<alm1iVal,alm1iVal::notSet> notSet{};
            constexpr MPL::Value<alm1iVal,alm1iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,alm1iVal> alm1i{}; 
        ///Alarm 2 Interrupt Flag. 
        enum class alm2iVal {
            notSet=0x00000000,     ///<Alarm 2 event has not occurred.
            set=0x00000001,     ///<Alarm 2 event occurred.
        };
        namespace alm2iValC{
            constexpr MPL::Value<alm2iVal,alm2iVal::notSet> notSet{};
            constexpr MPL::Value<alm2iVal,alm2iVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,alm2iVal> alm2i{}; 
        ///RTC Timer Capture. 
        enum class tmrcapVal {
            notSet=0x00000000,     ///<RTC timer capture operation is complete.
            set=0x00000001,     ///<Start the RTC timer capture.
        };
        namespace tmrcapValC{
            constexpr MPL::Value<tmrcapVal,tmrcapVal::notSet> notSet{};
            constexpr MPL::Value<tmrcapVal,tmrcapVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tmrcapVal> tmrcap{}; 
        ///RTC Timer Set. 
        enum class tmrsetVal {
            notSet=0x00000000,     ///<RTC timer set operation is complete.
            set=0x00000001,     ///<Start the RTC timer set.
        };
        namespace tmrsetValC{
            constexpr MPL::Value<tmrsetVal,tmrsetVal::notSet> notSet{};
            constexpr MPL::Value<tmrsetVal,tmrsetVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tmrsetVal> tmrset{}; 
        ///RTC External Oscillator Valid Flag. 
        enum class clkvfVal {
            notSet=0x00000000,     ///<External oscillator is not valid.
            set=0x00000001,     ///<External oscillator is valid.
        };
        namespace clkvfValC{
            constexpr MPL::Value<clkvfVal,clkvfVal::notSet> notSet{};
            constexpr MPL::Value<clkvfVal,clkvfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,clkvfVal> clkvf{}; 
        ///RTC Oscillator Fail Interrupt Flag. 
        enum class oscfiVal {
            notSet=0x00000000,     ///<Oscillator is running.
            set=0x00000001,     ///<Oscillator has failed.
        };
        namespace oscfiValC{
            constexpr MPL::Value<oscfiVal,oscfiVal::notSet> notSet{};
            constexpr MPL::Value<oscfiVal,oscfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,oscfiVal> oscfi{}; 
        ///RTC High Speed Mode Enable. 
        enum class hsmdenVal {
            disabled=0x00000000,     ///<Disable high speed mode.
            enabled=0x00000001,     ///<Enable high speed mode.
        };
        namespace hsmdenValC{
            constexpr MPL::Value<hsmdenVal,hsmdenVal::disabled> disabled{};
            constexpr MPL::Value<hsmdenVal,hsmdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,hsmdenVal> hsmden{}; 
        ///RTC Load Capacitance Ready Flag. 
        enum class lrdyfVal {
            notSet=0x00000000,     ///<The load capacitance is currently stepping.
            set=0x00000001,     ///<The load capacitance has reached its programmed value.
        };
        namespace lrdyfValC{
            constexpr MPL::Value<lrdyfVal,lrdyfVal::notSet> notSet{};
            constexpr MPL::Value<lrdyfVal,lrdyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,lrdyfVal> lrdyf{}; 
    }
    namespace Nonealarm0{    ///<RTC Alarm 0
        using Addr = Register::Address<0x40029020,0x00000000,0,unsigned>;
        ///RTC Alarm 0. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> alarm0{}; 
    }
    namespace Nonealarm1{    ///<RTC Alarm 1
        using Addr = Register::Address<0x40029030,0x00000000,0,unsigned>;
        ///RTC Alarm 1. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> alarm1{}; 
    }
    namespace Nonealarm2{    ///<RTC Alarm 2
        using Addr = Register::Address<0x40029040,0x00000000,0,unsigned>;
        ///RTC Alarm 2. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> alarm2{}; 
    }
    namespace Nonesetcap{    ///<RTC Timer Set/Capture Value
        using Addr = Register::Address<0x40029050,0x00000000,0,unsigned>;
        ///RTC Timer Set/Capture Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setcap{}; 
    }
    namespace Nonelfocontrol{    ///<LFOSC Control
        using Addr = Register::Address<0x40029060,0x7fffffff,0,unsigned>;
        ///Low Frequency Oscillator Enable. 
        enum class lfoscenVal {
            disabled=0x00000000,     ///<Disable the Low Frequency Oscillator (LFOSCn).
            enabled=0x00000001,     ///<Enable the Low Frequency Oscillator (LFOSCn).
        };
        namespace lfoscenValC{
            constexpr MPL::Value<lfoscenVal,lfoscenVal::disabled> disabled{};
            constexpr MPL::Value<lfoscenVal,lfoscenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,lfoscenVal> lfoscen{}; 
    }
    namespace Nonelfoscadj{    ///<LFOSC Output Frequency Adjust
        using Addr = Register::Address<0x40029080,0xfffffff0,0,unsigned>;
        ///LFOSC Output Frequency Adjust. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lfoscadj{}; 
    }
}
