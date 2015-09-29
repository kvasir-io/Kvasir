#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Motor Control PWM
    namespace Nonecon{    ///<PWM Control read address
        using Addr = Register::Address<0x400b8000,0x1fe0e0e0,0,unsigned>;
        ///Stops/starts timer channel 0.
        enum class run0Val {
            stop=0x00000000,     ///<Stop.
            run=0x00000001,     ///<Run.
        };
        namespace run0ValC{
            constexpr MPL::Value<run0Val,run0Val::stop> stop{};
            constexpr MPL::Value<run0Val,run0Val::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,run0Val> run0{}; 
        ///Edge/center aligned operation for channel 0.
        enum class center0Val {
            edgeAligned=0x00000000,     ///<Edge-aligned.
            centerAligned=0x00000001,     ///<Center-aligned.
        };
        namespace center0ValC{
            constexpr MPL::Value<center0Val,center0Val::edgeAligned> edgeAligned{};
            constexpr MPL::Value<center0Val,center0Val::centerAligned> centerAligned{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,center0Val> center0{}; 
        ///Selects polarity of the MCOA0 and MCOB0 pins.
        enum class pola0Val {
            passiveStateIsLow=0x00000000,     ///<Passive state is LOW, active state is HIGH.
            passiveStateIsHig=0x00000001,     ///<Passive state is HIGH, active state is LOW.
        };
        namespace pola0ValC{
            constexpr MPL::Value<pola0Val,pola0Val::passiveStateIsLow> passiveStateIsLow{};
            constexpr MPL::Value<pola0Val,pola0Val::passiveStateIsHig> passiveStateIsHig{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pola0Val> pola0{}; 
        ///Controls the dead-time feature for channel 0.
        enum class dte0Val {
            deadTimeDisabled=0x00000000,     ///<Dead-time disabled.
            deadTimeEnabled=0x00000001,     ///<Dead-time enabled.
        };
        namespace dte0ValC{
            constexpr MPL::Value<dte0Val,dte0Val::deadTimeDisabled> deadTimeDisabled{};
            constexpr MPL::Value<dte0Val,dte0Val::deadTimeEnabled> deadTimeEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dte0Val> dte0{}; 
        ///Enable/disable updates of functional registers for channel 0 (see Section 24.8.2).
        enum class disup0Val {
            update=0x00000000,     ///<Functional registers are updated from the write registers at the end of each PWM cycle.
            noupdate=0x00000001,     ///<Functional registers remain the same as long as the timer is running.
        };
        namespace disup0ValC{
            constexpr MPL::Value<disup0Val,disup0Val::update> update{};
            constexpr MPL::Value<disup0Val,disup0Val::noupdate> noupdate{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,disup0Val> disup0{}; 
        ///Stops/starts timer channel 1.
        enum class run1Val {
            stop=0x00000000,     ///<Stop.
            run=0x00000001,     ///<Run.
        };
        namespace run1ValC{
            constexpr MPL::Value<run1Val,run1Val::stop> stop{};
            constexpr MPL::Value<run1Val,run1Val::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,run1Val> run1{}; 
        ///Edge/center aligned operation for channel 1.
        enum class center1Val {
            edgeAligned=0x00000000,     ///<Edge-aligned.
            centerAligned=0x00000001,     ///<Center-aligned.
        };
        namespace center1ValC{
            constexpr MPL::Value<center1Val,center1Val::edgeAligned> edgeAligned{};
            constexpr MPL::Value<center1Val,center1Val::centerAligned> centerAligned{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,center1Val> center1{}; 
        ///Selects polarity of the MCOA1 and MCOB1 pins.
        enum class pola1Val {
            passiveStateIsLow=0x00000000,     ///<Passive state is LOW, active state is HIGH.
            passiveStateIsHig=0x00000001,     ///<Passive state is HIGH, active state is LOW.
        };
        namespace pola1ValC{
            constexpr MPL::Value<pola1Val,pola1Val::passiveStateIsLow> passiveStateIsLow{};
            constexpr MPL::Value<pola1Val,pola1Val::passiveStateIsHig> passiveStateIsHig{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,pola1Val> pola1{}; 
        ///Controls the dead-time feature for channel 1.
        enum class dte1Val {
            deadTimeDisabled=0x00000000,     ///<Dead-time disabled.
            deadTimeEnabled=0x00000001,     ///<Dead-time enabled.
        };
        namespace dte1ValC{
            constexpr MPL::Value<dte1Val,dte1Val::deadTimeDisabled> deadTimeDisabled{};
            constexpr MPL::Value<dte1Val,dte1Val::deadTimeEnabled> deadTimeEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,dte1Val> dte1{}; 
        ///Enable/disable updates of functional registers for channel 1 (see Section 24.8.2).
        enum class disup1Val {
            update=0x00000000,     ///<Functional registers are updated from the write registers at the end of each PWM cycle.
            noupdate=0x00000001,     ///<Functional registers remain the same as long as the timer is running.
        };
        namespace disup1ValC{
            constexpr MPL::Value<disup1Val,disup1Val::update> update{};
            constexpr MPL::Value<disup1Val,disup1Val::noupdate> noupdate{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,disup1Val> disup1{}; 
        ///Stops/starts timer channel 2.
        enum class run2Val {
            stop=0x00000000,     ///<Stop.
            run=0x00000001,     ///<Run.
        };
        namespace run2ValC{
            constexpr MPL::Value<run2Val,run2Val::stop> stop{};
            constexpr MPL::Value<run2Val,run2Val::run> run{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,run2Val> run2{}; 
        ///Edge/center aligned operation for channel 2.
        enum class center2Val {
            edgeAligned=0x00000000,     ///<Edge-aligned.
            centerAligned=0x00000001,     ///<Center-aligned.
        };
        namespace center2ValC{
            constexpr MPL::Value<center2Val,center2Val::edgeAligned> edgeAligned{};
            constexpr MPL::Value<center2Val,center2Val::centerAligned> centerAligned{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,center2Val> center2{}; 
        ///Selects polarity of the MCOA2 and MCOB2 pins.
        enum class pola2Val {
            passiveStateIsLow=0x00000000,     ///<Passive state is LOW, active state is HIGH.
            passiveStateIsHig=0x00000001,     ///<Passive state is HIGH, active state is LOW.
        };
        namespace pola2ValC{
            constexpr MPL::Value<pola2Val,pola2Val::passiveStateIsLow> passiveStateIsLow{};
            constexpr MPL::Value<pola2Val,pola2Val::passiveStateIsHig> passiveStateIsHig{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,pola2Val> pola2{}; 
        ///Controls the dead-time feature for channel 1.
        enum class dte2Val {
            deadTimeDisabled=0x00000000,     ///<Dead-time disabled.
            deadTimeEnabled=0x00000001,     ///<Dead-time enabled.
        };
        namespace dte2ValC{
            constexpr MPL::Value<dte2Val,dte2Val::deadTimeDisabled> deadTimeDisabled{};
            constexpr MPL::Value<dte2Val,dte2Val::deadTimeEnabled> deadTimeEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,dte2Val> dte2{}; 
        ///Enable/disable updates of functional registers for channel 2 (see Section 24.8.2).
        enum class disup2Val {
            update=0x00000000,     ///<Functional registers are updated from the write registers at the end of each PWM cycle.
            noupdate=0x00000001,     ///<Functional registers remain the same as long as the timer is running.
        };
        namespace disup2ValC{
            constexpr MPL::Value<disup2Val,disup2Val::update> update{};
            constexpr MPL::Value<disup2Val,disup2Val::noupdate> noupdate{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,disup2Val> disup2{}; 
        ///Controls the polarity of the MCOB outputs for all 3 channels. This bit is typically set to 1 only in 3-phase DC mode.
        enum class invbdcVal {
            opposite=0x00000000,     ///<The MCOB outputs have opposite polarity from the MCOA outputs (aside from dead time).
            same=0x00000001,     ///<The MCOB outputs have the same basic polarity as the MCOA outputs. (see Section 24.8.6)
        };
        namespace invbdcValC{
            constexpr MPL::Value<invbdcVal,invbdcVal::opposite> opposite{};
            constexpr MPL::Value<invbdcVal,invbdcVal::same> same{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,invbdcVal> invbdc{}; 
        ///3-phase AC mode select (see Section 24.8.7).
        enum class acmodeVal {
            v3PhaseAcModeOff=0x00000000,     ///<3-phase AC-mode off: Each PWM channel uses its own timer-counter and period register.
            v3PhaseAcModeOn=0x00000001,     ///<3-phase AC-mode on: All PWM channels use the timer-counter and period register of channel 0.
        };
        namespace acmodeValC{
            constexpr MPL::Value<acmodeVal,acmodeVal::v3PhaseAcModeOff> v3PhaseAcModeOff{};
            constexpr MPL::Value<acmodeVal,acmodeVal::v3PhaseAcModeOn> v3PhaseAcModeOn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,acmodeVal> acmode{}; 
        ///3-phase DC mode select (see Section 24.8.6).
        enum class dcmodeVal {
            v3PhaseDcModeOff=0x00000000,     ///<3-phase DC mode off: PWM channels are independent (unless bit ACMODE = 1)
            v3PhaseDcModeOn=0x00000001,     ///<3-phase DC mode on: The internal MCOA0 output is routed through the CP register (i.e. a mask) register to all six PWM outputs.
        };
        namespace dcmodeValC{
            constexpr MPL::Value<dcmodeVal,dcmodeVal::v3PhaseDcModeOff> v3PhaseDcModeOff{};
            constexpr MPL::Value<dcmodeVal,dcmodeVal::v3PhaseDcModeOn> v3PhaseDcModeOn{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,dcmodeVal> dcmode{}; 
    }
    namespace NoneconSet{    ///<PWM Control set address
        using Addr = Register::Address<0x400b8004,0x1fe0e0e0,0,unsigned>;
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run0Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> center0Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pola0Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dte0Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> disup0Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> run1Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> center1Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pola1Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dte1Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> disup1Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> run2Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> center2Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pola2Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dte2Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> disup2Set{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> invbdcSet{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> acmodeSet{}; 
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dcmodeSet{}; 
    }
    namespace NoneconClr{    ///<PWM Control clear address
        using Addr = Register::Address<0x400b8008,0x1fe0e0e0,0,unsigned>;
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run0Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> center0Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pola0Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dte0Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> disup0Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> run1Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> center1Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pola1Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dte1Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> disup1Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> run2Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> center2Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pola2Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dte2Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> disup2Clr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> invbdcClr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> acmodClr{}; 
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dcmodeClr{}; 
    }
    namespace Nonecapcon{    ///<Capture Control read address
        using Addr = Register::Address<0x400b800c,0xffe00000,0,unsigned>;
        ///A 1 in this bit enables a channel 0 capture event on a rising edge on MCI0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cap0mci0Re{}; 
        ///A 1 in this bit enables a channel 0 capture event on a falling edge on MCI0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cap0mci0Fe{}; 
        ///A 1 in this bit enables a channel 0 capture event on a rising edge on MCI1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cap0mci1Re{}; 
        ///A 1 in this bit enables a channel 0 capture event on a falling edge on MCI1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cap0mci1Fe{}; 
        ///A 1 in this bit enables a channel 0 capture event on a rising edge on MCI2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cap0mci2Re{}; 
        ///A 1 in this bit enables a channel 0 capture event on a falling edge on MCI2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cap0mci2Fe{}; 
        ///A 1 in this bit enables a channel 1 capture event on a rising edge on MCI0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cap1mci0Re{}; 
        ///A 1 in this bit enables a channel 1 capture event on a falling edge on MCI0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cap1mci0Fe{}; 
        ///A 1 in this bit enables a channel 1 capture event on a rising edge on MCI1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cap1mci1Re{}; 
        ///A 1 in this bit enables a channel 1 capture event on a falling edge on MCI1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cap1mci1Fe{}; 
        ///A 1 in this bit enables a channel 1 capture event on a rising edge on MCI2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cap1mci2Re{}; 
        ///A 1 in this bit enables a channel 1 capture event on a falling edge on MCI2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cap1mci2Fe{}; 
        ///A 1 in this bit enables a channel 2 capture event on a rising edge on MCI0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cap2mci0Re{}; 
        ///A 1 in this bit enables a channel 2 capture event on a falling edge on MCI0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cap2mci0Fe{}; 
        ///A 1 in this bit enables a channel 2 capture event on a rising edge on MCI1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cap2mci1Re{}; 
        ///A 1 in this bit enables a channel 2 capture event on a falling edge on MCI1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cap2mci1Fe{}; 
        ///A 1 in this bit enables a channel 2 capture event on a rising edge on MCI2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cap2mci2Re{}; 
        ///A 1 in this bit enables a channel 2 capture event on a falling edge on MCI2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cap2mci2Fe{}; 
        ///If this bit is 1, TC0 is reset by a channel 0 capture event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rt0{}; 
        ///If this bit is 1, TC1 is reset by a channel 1 capture event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rt1{}; 
        ///If this bit is 1, TC2 is reset by a channel 2 capture event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rt2{}; 
    }
    namespace NonecapconSet{    ///<Capture Control set address
        using Addr = Register::Address<0x400b8010,0xffe00000,0,unsigned>;
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cap0mci0ReSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cap0mci0FeSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cap0mci1ReSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cap0mci1FeSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cap0mci2ReSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cap0mci2FeSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cap1mci0ReSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cap1mci0FeSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cap1mci1ReSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cap1mci1FeSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cap1mci2ReSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cap1mci2FeSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cap2mci0ReSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cap2mci0FeSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cap2mci1ReSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cap2mci1FeSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cap2mci2ReSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cap2mci2FeSet{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rt0Set{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rt1Set{}; 
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rt2Set{}; 
    }
    namespace NonecapconClr{    ///<Event Control clear address
        using Addr = Register::Address<0x400b8014,0xffe00000,0,unsigned>;
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cap0mci0ReClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cap0mci0FeClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cap0mci1ReClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cap0mci1FeClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cap0mci2ReClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cap0mci2FeClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cap1mci0ReClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cap1mci0FeClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cap1mci1ReClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cap1mci1FeClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cap1mci2ReClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cap1mci2FeClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cap2mci0ReClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cap2mci0FeClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cap2mci1ReClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cap2mci1FeClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cap2mci2ReClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cap2mci2FeClr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rt0Clr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rt1Clr{}; 
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rt2Clr{}; 
    }
    namespace Nonetc0{    ///<Timer Counter register
        using Addr = Register::Address<0x400b8018,0x00000000,0,unsigned>;
        ///Timer/Counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mctc{}; 
    }
    namespace Nonetc1{    ///<Timer Counter register
        using Addr = Register::Address<0x400b801c,0x00000000,0,unsigned>;
        ///Timer/Counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mctc{}; 
    }
    namespace Nonetc2{    ///<Timer Counter register
        using Addr = Register::Address<0x400b8020,0x00000000,0,unsigned>;
        ///Timer/Counter value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mctc{}; 
    }
    namespace Nonelim0{    ///<Limit register
        using Addr = Register::Address<0x400b8024,0x00000000,0,unsigned>;
        ///Limit value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mclim{}; 
    }
    namespace Nonelim1{    ///<Limit register
        using Addr = Register::Address<0x400b8028,0x00000000,0,unsigned>;
        ///Limit value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mclim{}; 
    }
    namespace Nonelim2{    ///<Limit register
        using Addr = Register::Address<0x400b802c,0x00000000,0,unsigned>;
        ///Limit value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mclim{}; 
    }
    namespace Nonemat0{    ///<Match register
        using Addr = Register::Address<0x400b8030,0x00000000,0,unsigned>;
        ///Match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mcmat{}; 
    }
    namespace Nonemat1{    ///<Match register
        using Addr = Register::Address<0x400b8034,0x00000000,0,unsigned>;
        ///Match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mcmat{}; 
    }
    namespace Nonemat2{    ///<Match register
        using Addr = Register::Address<0x400b8038,0x00000000,0,unsigned>;
        ///Match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mcmat{}; 
    }
    namespace Nonedt{    ///<Dead time register
        using Addr = Register::Address<0x400b803c,0xc0000000,0,unsigned>;
        ///Dead time for channel 0.[1]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> dt0{}; 
        ///Dead time for channel 1.[2]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> dt1{}; 
        ///Dead time for channel 2.[2]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20),Register::ReadWriteAccess,unsigned> dt2{}; 
    }
    namespace Nonecp{    ///<Communication Pattern register
        using Addr = Register::Address<0x400b8040,0xffffffc0,0,unsigned>;
        ///Communication pattern output A, channel 0.
        enum class ccpa0Val {
            mcoa0Passive=0x00000000,     ///<MCOA0 passive.
            internalMcoa0=0x00000001,     ///<internal MCOA0.
        };
        namespace ccpa0ValC{
            constexpr MPL::Value<ccpa0Val,ccpa0Val::mcoa0Passive> mcoa0Passive{};
            constexpr MPL::Value<ccpa0Val,ccpa0Val::internalMcoa0> internalMcoa0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ccpa0Val> ccpa0{}; 
        ///Communication pattern output B, channel 0.
        enum class ccpb0Val {
            mcob0Passive=0x00000000,     ///<MCOB0 passive.
            mcob0TracksInterna=0x00000001,     ///<MCOB0 tracks internal MCOA0.
        };
        namespace ccpb0ValC{
            constexpr MPL::Value<ccpb0Val,ccpb0Val::mcob0Passive> mcob0Passive{};
            constexpr MPL::Value<ccpb0Val,ccpb0Val::mcob0TracksInterna> mcob0TracksInterna{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ccpb0Val> ccpb0{}; 
        ///Communication pattern output A, channel 1.
        enum class ccpa1Val {
            mcoa1Passive=0x00000000,     ///<MCOA1 passive.
            mcoa1TracksInterna=0x00000001,     ///<MCOA1 tracks internal MCOA0.
        };
        namespace ccpa1ValC{
            constexpr MPL::Value<ccpa1Val,ccpa1Val::mcoa1Passive> mcoa1Passive{};
            constexpr MPL::Value<ccpa1Val,ccpa1Val::mcoa1TracksInterna> mcoa1TracksInterna{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ccpa1Val> ccpa1{}; 
        ///Communication pattern output B, channel 1.
        enum class ccpb1Val {
            mcob1Passive=0x00000000,     ///<MCOB1 passive.
            mcob1TracksInterna=0x00000001,     ///<MCOB1 tracks internal MCOA0.
        };
        namespace ccpb1ValC{
            constexpr MPL::Value<ccpb1Val,ccpb1Val::mcob1Passive> mcob1Passive{};
            constexpr MPL::Value<ccpb1Val,ccpb1Val::mcob1TracksInterna> mcob1TracksInterna{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ccpb1Val> ccpb1{}; 
        ///Communication pattern output A, channel 2.
        enum class ccpa2Val {
            mcoa2Passive=0x00000000,     ///<MCOA2 passive.
            mcoa2TracksInterna=0x00000001,     ///<MCOA2 tracks internal MCOA0.
        };
        namespace ccpa2ValC{
            constexpr MPL::Value<ccpa2Val,ccpa2Val::mcoa2Passive> mcoa2Passive{};
            constexpr MPL::Value<ccpa2Val,ccpa2Val::mcoa2TracksInterna> mcoa2TracksInterna{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ccpa2Val> ccpa2{}; 
        ///Communication pattern output B, channel 2.
        enum class ccpb2Val {
            mcob2Passive=0x00000000,     ///<MCOB2 passive.
            mcob2TracksInterna=0x00000001,     ///<MCOB2 tracks internal MCOA0.
        };
        namespace ccpb2ValC{
            constexpr MPL::Value<ccpb2Val,ccpb2Val::mcob2Passive> mcob2Passive{};
            constexpr MPL::Value<ccpb2Val,ccpb2Val::mcob2TracksInterna> mcob2TracksInterna{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ccpb2Val> ccpb2{}; 
    }
    namespace Nonecap0{    ///<Capture register
        using Addr = Register::Address<0x400b8044,0x00000000,0,unsigned>;
        ///Current TC value at a capture event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Nonecap1{    ///<Capture register
        using Addr = Register::Address<0x400b8048,0x00000000,0,unsigned>;
        ///Current TC value at a capture event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Nonecap2{    ///<Capture register
        using Addr = Register::Address<0x400b804c,0x00000000,0,unsigned>;
        ///Current TC value at a capture event.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
    }
    namespace Noneinten{    ///<Interrupt Enable read address
        using Addr = Register::Address<0x400b8050,0xffff7888,0,unsigned>;
        ///Limit interrupt for channel 0.
        enum class ilim0Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        namespace ilim0ValC{
            constexpr MPL::Value<ilim0Val,ilim0Val::interruptDisabled> interruptDisabled{};
            constexpr MPL::Value<ilim0Val,ilim0Val::interruptEnabled> interruptEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ilim0Val> ilim0{}; 
        ///Match interrupt for channel 0.
        enum class imat0Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        namespace imat0ValC{
            constexpr MPL::Value<imat0Val,imat0Val::interruptDisabled> interruptDisabled{};
            constexpr MPL::Value<imat0Val,imat0Val::interruptEnabled> interruptEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,imat0Val> imat0{}; 
        ///Capture interrupt for channel 0.
        enum class icap0Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        namespace icap0ValC{
            constexpr MPL::Value<icap0Val,icap0Val::interruptDisabled> interruptDisabled{};
            constexpr MPL::Value<icap0Val,icap0Val::interruptEnabled> interruptEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,icap0Val> icap0{}; 
        ///Limit interrupt for channel 1.
        enum class ilim1Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        namespace ilim1ValC{
            constexpr MPL::Value<ilim1Val,ilim1Val::interruptDisabled> interruptDisabled{};
            constexpr MPL::Value<ilim1Val,ilim1Val::interruptEnabled> interruptEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ilim1Val> ilim1{}; 
        ///Match interrupt for channel 1.
        enum class imat1Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        namespace imat1ValC{
            constexpr MPL::Value<imat1Val,imat1Val::interruptDisabled> interruptDisabled{};
            constexpr MPL::Value<imat1Val,imat1Val::interruptEnabled> interruptEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,imat1Val> imat1{}; 
        ///Capture interrupt for channel 1.
        enum class icap1Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        namespace icap1ValC{
            constexpr MPL::Value<icap1Val,icap1Val::interruptDisabled> interruptDisabled{};
            constexpr MPL::Value<icap1Val,icap1Val::interruptEnabled> interruptEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,icap1Val> icap1{}; 
        ///Limit interrupt for channel 2.
        enum class ilim2Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        namespace ilim2ValC{
            constexpr MPL::Value<ilim2Val,ilim2Val::interruptDisabled> interruptDisabled{};
            constexpr MPL::Value<ilim2Val,ilim2Val::interruptEnabled> interruptEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ilim2Val> ilim2{}; 
        ///Match interrupt for channel 2.
        enum class imat2Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        namespace imat2ValC{
            constexpr MPL::Value<imat2Val,imat2Val::interruptDisabled> interruptDisabled{};
            constexpr MPL::Value<imat2Val,imat2Val::interruptEnabled> interruptEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,imat2Val> imat2{}; 
        ///Capture interrupt for channel 2.
        enum class icap2Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        namespace icap2ValC{
            constexpr MPL::Value<icap2Val,icap2Val::interruptDisabled> interruptDisabled{};
            constexpr MPL::Value<icap2Val,icap2Val::interruptEnabled> interruptEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,icap2Val> icap2{}; 
        ///Fast abort interrupt.
        enum class abortVal {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        namespace abortValC{
            constexpr MPL::Value<abortVal,abortVal::interruptDisabled> interruptDisabled{};
            constexpr MPL::Value<abortVal,abortVal::interruptEnabled> interruptEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,abortVal> abort{}; 
    }
    namespace NoneintenSet{    ///<Interrupt Enable set address
        using Addr = Register::Address<0x400b8054,0xffff7188,0,unsigned>;
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ilim0Set{}; 
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> imat0Set{}; 
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icap0Set{}; 
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilim1Set{}; 
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imat1Set{}; 
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icap1Set{}; 
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ilim2Set{}; 
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> imat2Set{}; 
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> icap2Set{}; 
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abortSet{}; 
    }
    namespace NoneintenClr{    ///<Interrupt Enable clear address
        using Addr = Register::Address<0x400b8058,0xffff7888,0,unsigned>;
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ilim0Clr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> imat0Clr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icap0Clr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilim1Clr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imat1Clr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icap1Clr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ilim2Clr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> imat2Clr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> icap2Clr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abortClr{}; 
    }
    namespace Noneintf{    ///<Interrupt flags read address
        using Addr = Register::Address<0x400b8068,0xffff7888,0,unsigned>;
        ///Limit interrupt flag for channel 0.
        enum class ilim0FVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        namespace ilim0FValC{
            constexpr MPL::Value<ilim0FVal,ilim0FVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr MPL::Value<ilim0FVal,ilim0FVal::ifTheCorresponding> ifTheCorresponding{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ilim0FVal> ilim0F{}; 
        ///Match interrupt flag for channel 0.
        enum class imat0FVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        namespace imat0FValC{
            constexpr MPL::Value<imat0FVal,imat0FVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr MPL::Value<imat0FVal,imat0FVal::ifTheCorresponding> ifTheCorresponding{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,imat0FVal> imat0F{}; 
        ///Capture interrupt flag for channel 0.
        enum class icap0FVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        namespace icap0FValC{
            constexpr MPL::Value<icap0FVal,icap0FVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr MPL::Value<icap0FVal,icap0FVal::ifTheCorresponding> ifTheCorresponding{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,icap0FVal> icap0F{}; 
        ///Limit interrupt flag for channel 1.
        enum class ilim1FVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        namespace ilim1FValC{
            constexpr MPL::Value<ilim1FVal,ilim1FVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr MPL::Value<ilim1FVal,ilim1FVal::ifTheCorresponding> ifTheCorresponding{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ilim1FVal> ilim1F{}; 
        ///Match interrupt flag for channel 1.
        enum class imat1FVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        namespace imat1FValC{
            constexpr MPL::Value<imat1FVal,imat1FVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr MPL::Value<imat1FVal,imat1FVal::ifTheCorresponding> ifTheCorresponding{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,imat1FVal> imat1F{}; 
        ///Capture interrupt flag for channel 1.
        enum class icap1FVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        namespace icap1FValC{
            constexpr MPL::Value<icap1FVal,icap1FVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr MPL::Value<icap1FVal,icap1FVal::ifTheCorresponding> ifTheCorresponding{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,icap1FVal> icap1F{}; 
        ///Limit interrupt flag for channel 2.
        enum class ilim2FVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        namespace ilim2FValC{
            constexpr MPL::Value<ilim2FVal,ilim2FVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr MPL::Value<ilim2FVal,ilim2FVal::ifTheCorresponding> ifTheCorresponding{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ilim2FVal> ilim2F{}; 
        ///Match interrupt flag for channel 2.
        enum class imat2FVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        namespace imat2FValC{
            constexpr MPL::Value<imat2FVal,imat2FVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr MPL::Value<imat2FVal,imat2FVal::ifTheCorresponding> ifTheCorresponding{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,imat2FVal> imat2F{}; 
        ///Capture interrupt flag for channel 2.
        enum class icap2FVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        namespace icap2FValC{
            constexpr MPL::Value<icap2FVal,icap2FVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr MPL::Value<icap2FVal,icap2FVal::ifTheCorresponding> ifTheCorresponding{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,icap2FVal> icap2F{}; 
        ///Fast abort interrupt flag.
        enum class abortFVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        namespace abortFValC{
            constexpr MPL::Value<abortFVal,abortFVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr MPL::Value<abortFVal,abortFVal::ifTheCorresponding> ifTheCorresponding{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,abortFVal> abortF{}; 
    }
    namespace NoneintfSet{    ///<Interrupt flags set address
        using Addr = Register::Address<0x400b806c,0xffff7888,0,unsigned>;
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ilim0FSet{}; 
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> imat0FSet{}; 
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icap0FSet{}; 
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilim1FSet{}; 
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imat1FSet{}; 
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icap1FSet{}; 
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ilim2FSet{}; 
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> imat2FSet{}; 
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> icap2FSet{}; 
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abortFSet{}; 
    }
    namespace NoneintfClr{    ///<Interrupt flags clear address
        using Addr = Register::Address<0x400b8070,0xffff7888,0,unsigned>;
        ///Writing a one clears the corresponding bit in the INTF register, thus clearing the corresponding interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ilim0FClr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> imat0FClr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icap0FClr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilim1FClr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imat1FClr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icap1FClr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ilim2FClr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> imat2FClr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> icap2FClr{}; 
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abortFClr{}; 
    }
    namespace Nonecntcon{    ///<Count Control read address
        using Addr = Register::Address<0x400b805c,0x1ffc0000,0,unsigned>;
        ///Counter 0 rising edge mode, channel 0.
        enum class tc0mci0ReVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI0 does not affect counter 0.
            rising=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a rising edge on MCI0.
        };
        namespace tc0mci0ReValC{
            constexpr MPL::Value<tc0mci0ReVal,tc0mci0ReVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr MPL::Value<tc0mci0ReVal,tc0mci0ReVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tc0mci0ReVal> tc0mci0Re{}; 
        ///Counter 0 falling edge mode, channel 0.
        enum class tc0mci0FeVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI0 does not affect counter 0.
            falling=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a falling edge on MCI0.
        };
        namespace tc0mci0FeValC{
            constexpr MPL::Value<tc0mci0FeVal,tc0mci0FeVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr MPL::Value<tc0mci0FeVal,tc0mci0FeVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tc0mci0FeVal> tc0mci0Fe{}; 
        ///Counter 0 rising edge mode, channel 1.
        enum class tc0mci1ReVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI1 does not affect counter 0.
            rising=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a rising edge on MCI1.
        };
        namespace tc0mci1ReValC{
            constexpr MPL::Value<tc0mci1ReVal,tc0mci1ReVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr MPL::Value<tc0mci1ReVal,tc0mci1ReVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tc0mci1ReVal> tc0mci1Re{}; 
        ///Counter 0 falling edge mode, channel 1.
        enum class tc0mci1FeVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI1 does not affect counter 0.
            falling=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a falling edge on MCI1.
        };
        namespace tc0mci1FeValC{
            constexpr MPL::Value<tc0mci1FeVal,tc0mci1FeVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr MPL::Value<tc0mci1FeVal,tc0mci1FeVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tc0mci1FeVal> tc0mci1Fe{}; 
        ///Counter 0 rising edge mode, channel 2.
        enum class tc0mci2ReVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI0 does not affect counter 0.
            rising=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a rising edge on MCI2.
        };
        namespace tc0mci2ReValC{
            constexpr MPL::Value<tc0mci2ReVal,tc0mci2ReVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr MPL::Value<tc0mci2ReVal,tc0mci2ReVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,tc0mci2ReVal> tc0mci2Re{}; 
        ///Counter 0 falling edge mode, channel 2.
        enum class tc0mci2FeVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI0 does not affect counter 0.
            fallling=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a falling edge on MCI2.
        };
        namespace tc0mci2FeValC{
            constexpr MPL::Value<tc0mci2FeVal,tc0mci2FeVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr MPL::Value<tc0mci2FeVal,tc0mci2FeVal::fallling> fallling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,tc0mci2FeVal> tc0mci2Fe{}; 
        ///Counter 1 rising edge mode, channel 0.
        enum class tc1mci0ReVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI0 does not affect counter 1.
            rising=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a rising edge on MCI0.
        };
        namespace tc1mci0ReValC{
            constexpr MPL::Value<tc1mci0ReVal,tc1mci0ReVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr MPL::Value<tc1mci0ReVal,tc1mci0ReVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tc1mci0ReVal> tc1mci0Re{}; 
        ///Counter 1 falling edge mode, channel 0.
        enum class tc1mci0FeVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI0 does not affect counter 1.
            falling=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a falling edge on MCI0.
        };
        namespace tc1mci0FeValC{
            constexpr MPL::Value<tc1mci0FeVal,tc1mci0FeVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr MPL::Value<tc1mci0FeVal,tc1mci0FeVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tc1mci0FeVal> tc1mci0Fe{}; 
        ///Counter 1 rising edge mode, channel 1.
        enum class tc1mci1ReVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI1 does not affect counter 1.
            rising=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a rising edge on MCI1.
        };
        namespace tc1mci1ReValC{
            constexpr MPL::Value<tc1mci1ReVal,tc1mci1ReVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr MPL::Value<tc1mci1ReVal,tc1mci1ReVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,tc1mci1ReVal> tc1mci1Re{}; 
        ///Counter 1 falling edge mode, channel 1.
        enum class tc1mci1FeVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI0 does not affect counter 1.
            falling=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a falling edge on MCI1.
        };
        namespace tc1mci1FeValC{
            constexpr MPL::Value<tc1mci1FeVal,tc1mci1FeVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr MPL::Value<tc1mci1FeVal,tc1mci1FeVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,tc1mci1FeVal> tc1mci1Fe{}; 
        ///Counter 1 rising edge mode, channel 2.
        enum class tc1mci2ReVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI2 does not affect counter 1.
            rising=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a rising edge on MCI2.
        };
        namespace tc1mci2ReValC{
            constexpr MPL::Value<tc1mci2ReVal,tc1mci2ReVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr MPL::Value<tc1mci2ReVal,tc1mci2ReVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,tc1mci2ReVal> tc1mci2Re{}; 
        ///Counter 1 falling edge mode, channel 2.
        enum class tc1mci2FeVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI2 does not affect counter 1.
            falling=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a falling edge on MCI2.
        };
        namespace tc1mci2FeValC{
            constexpr MPL::Value<tc1mci2FeVal,tc1mci2FeVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr MPL::Value<tc1mci2FeVal,tc1mci2FeVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,tc1mci2FeVal> tc1mci2Fe{}; 
        ///Counter 2 rising edge mode, channel 0.
        enum class tc2mci0ReVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI0 does not affect counter 2.
            rising=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a rising edge on MCI0.
        };
        namespace tc2mci0ReValC{
            constexpr MPL::Value<tc2mci0ReVal,tc2mci0ReVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr MPL::Value<tc2mci0ReVal,tc2mci0ReVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,tc2mci0ReVal> tc2mci0Re{}; 
        ///Counter 2 falling edge mode, channel 0.
        enum class tc2mci0FeVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI0 does not affect counter 2.
            falling=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a falling edge on MCI0.
        };
        namespace tc2mci0FeValC{
            constexpr MPL::Value<tc2mci0FeVal,tc2mci0FeVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr MPL::Value<tc2mci0FeVal,tc2mci0FeVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,tc2mci0FeVal> tc2mci0Fe{}; 
        ///Counter 2 rising edge mode, channel 1.
        enum class tc2mci1ReVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI1 does not affect counter 2.
            rising=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a rising edge on MCI1.
        };
        namespace tc2mci1ReValC{
            constexpr MPL::Value<tc2mci1ReVal,tc2mci1ReVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr MPL::Value<tc2mci1ReVal,tc2mci1ReVal::rising> rising{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,tc2mci1ReVal> tc2mci1Re{}; 
        ///Counter 2 falling edge mode, channel 1.
        enum class tc2mci1FeVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI1 does not affect counter 2.
            falling=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a falling edge on MCI1.
        };
        namespace tc2mci1FeValC{
            constexpr MPL::Value<tc2mci1FeVal,tc2mci1FeVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr MPL::Value<tc2mci1FeVal,tc2mci1FeVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,tc2mci1FeVal> tc2mci1Fe{}; 
        ///Counter 2 rising edge mode, channel 2.
        enum class tc2mci2ReVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI2 does not affect counter 2.
            risiing=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a rising edge on MCI2.
        };
        namespace tc2mci2ReValC{
            constexpr MPL::Value<tc2mci2ReVal,tc2mci2ReVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr MPL::Value<tc2mci2ReVal,tc2mci2ReVal::risiing> risiing{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tc2mci2ReVal> tc2mci2Re{}; 
        ///Counter 2 falling edge mode, channel 2.
        enum class tc2mci2FeVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI2 does not affect counter 2.
            falling=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a falling edge on MCI2.
        };
        namespace tc2mci2FeValC{
            constexpr MPL::Value<tc2mci2FeVal,tc2mci2FeVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr MPL::Value<tc2mci2FeVal,tc2mci2FeVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,tc2mci2FeVal> tc2mci2Fe{}; 
        ///Channel 0 counter/timer mode.
        enum class cntr0Val {
            channel0IsInTime=0x00000000,     ///<Channel 0 is in timer mode.
            channel0IsInCoun=0x00000001,     ///<Channel 0 is in counter mode.
        };
        namespace cntr0ValC{
            constexpr MPL::Value<cntr0Val,cntr0Val::channel0IsInTime> channel0IsInTime{};
            constexpr MPL::Value<cntr0Val,cntr0Val::channel0IsInCoun> channel0IsInCoun{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,cntr0Val> cntr0{}; 
        ///Channel 1 counter/timer mode.
        enum class cntr1Val {
            channel1IsInTime=0x00000000,     ///<Channel 1 is in timer mode.
            channel1IsInCoun=0x00000001,     ///<Channel 1 is in counter mode.
        };
        namespace cntr1ValC{
            constexpr MPL::Value<cntr1Val,cntr1Val::channel1IsInTime> channel1IsInTime{};
            constexpr MPL::Value<cntr1Val,cntr1Val::channel1IsInCoun> channel1IsInCoun{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,cntr1Val> cntr1{}; 
        ///Channel 2 counter/timer mode.
        enum class cntr2Val {
            channel2IsInTime=0x00000000,     ///<Channel 2 is in timer mode.
            channel2IsInCoun=0x00000001,     ///<Channel 2 is in counter mode.
        };
        namespace cntr2ValC{
            constexpr MPL::Value<cntr2Val,cntr2Val::channel2IsInTime> channel2IsInTime{};
            constexpr MPL::Value<cntr2Val,cntr2Val::channel2IsInCoun> channel2IsInCoun{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,cntr2Val> cntr2{}; 
    }
    namespace NonecntconSet{    ///<Count Control set address
        using Addr = Register::Address<0x400b8060,0x1ffc0000,0,unsigned>;
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tc0mci0ReSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tc0mci0FeSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tc0mci1ReSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tc0mci1FeSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tc0mci2ReSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc0mci2FeSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc1mci0ReSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tc1mci0FeSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tc1mci1ReSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tc1mci1FeSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tc1mci2ReSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tc1mci2FeSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tc2mci0ReSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tc2mci0FeSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc2mci1ReSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tc2mci1FeSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tc2mci2ReSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tc2mci2FeSet{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cntr0Set{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cntr1Set{}; 
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cntr2Set{}; 
    }
    namespace NonecntconClr{    ///<Count Control clear address
        using Addr = Register::Address<0x400b8064,0x1ffc0000,0,unsigned>;
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tc0mci0ReClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tc0mci0FeClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tc0mci1ReClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tc0mci1FeClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tc0mci2Re{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc0mci2FeClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc1mci0ReClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tc1mci0FeClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tc1mci1ReClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tc1mci1FeClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tc1mci2ReClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tc1mci2FeClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tc2mci0ReClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tc2mci0FeClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc2mci1ReClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tc2mci1FeClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tc2mci2ReClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tc2mci2FeClr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cntr0Clr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cntr1Clr{}; 
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cntr2Clr{}; 
    }
    namespace NonecapClr{    ///<Capture clear address
        using Addr = Register::Address<0x400b8074,0xfffffff8,0,unsigned>;
        ///Writing a 1 to this bit clears the CAP0 register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capClr0{}; 
        ///Writing a 1 to this bit clears the CAP1 register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capClr1{}; 
        ///Writing a 1 to this bit clears the CAP2 register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capClr2{}; 
    }
}
