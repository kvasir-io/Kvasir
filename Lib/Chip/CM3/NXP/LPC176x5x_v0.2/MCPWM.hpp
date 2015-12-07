#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Motor Control PWM
    namespace Nonecon{    ///<PWM Control read address
        using Addr = Register::Address<0x400b8000,0x1fe0e0e0,0,unsigned>;
        ///Stops/starts timer channel 0.
        enum class Run0Val {
            stop=0x00000000,     ///<Stop.
            run=0x00000001,     ///<Run.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Run0Val> run0{}; 
        namespace Run0ValC{
            constexpr Register::FieldValue<decltype(run0),Run0Val::stop> stop{};
            constexpr Register::FieldValue<decltype(run0),Run0Val::run> run{};
        }
        ///Edge/center aligned operation for channel 0.
        enum class Center0Val {
            edgeAligned=0x00000000,     ///<Edge-aligned.
            centerAligned=0x00000001,     ///<Center-aligned.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Center0Val> center0{}; 
        namespace Center0ValC{
            constexpr Register::FieldValue<decltype(center0),Center0Val::edgeAligned> edgeAligned{};
            constexpr Register::FieldValue<decltype(center0),Center0Val::centerAligned> centerAligned{};
        }
        ///Selects polarity of the MCOA0 and MCOB0 pins.
        enum class Pola0Val {
            passiveStateIsLow=0x00000000,     ///<Passive state is LOW, active state is HIGH.
            passiveStateIsHig=0x00000001,     ///<Passive state is HIGH, active state is LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Pola0Val> pola0{}; 
        namespace Pola0ValC{
            constexpr Register::FieldValue<decltype(pola0),Pola0Val::passiveStateIsLow> passiveStateIsLow{};
            constexpr Register::FieldValue<decltype(pola0),Pola0Val::passiveStateIsHig> passiveStateIsHig{};
        }
        ///Controls the dead-time feature for channel 0.
        enum class Dte0Val {
            deadTimeDisabled=0x00000000,     ///<Dead-time disabled.
            deadTimeEnabled=0x00000001,     ///<Dead-time enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Dte0Val> dte0{}; 
        namespace Dte0ValC{
            constexpr Register::FieldValue<decltype(dte0),Dte0Val::deadTimeDisabled> deadTimeDisabled{};
            constexpr Register::FieldValue<decltype(dte0),Dte0Val::deadTimeEnabled> deadTimeEnabled{};
        }
        ///Enable/disable updates of functional registers for channel 0 (see Section 24.8.2).
        enum class Disup0Val {
            update=0x00000000,     ///<Functional registers are updated from the write registers at the end of each PWM cycle.
            noupdate=0x00000001,     ///<Functional registers remain the same as long as the timer is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Disup0Val> disup0{}; 
        namespace Disup0ValC{
            constexpr Register::FieldValue<decltype(disup0),Disup0Val::update> update{};
            constexpr Register::FieldValue<decltype(disup0),Disup0Val::noupdate> noupdate{};
        }
        ///Stops/starts timer channel 1.
        enum class Run1Val {
            stop=0x00000000,     ///<Stop.
            run=0x00000001,     ///<Run.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Run1Val> run1{}; 
        namespace Run1ValC{
            constexpr Register::FieldValue<decltype(run1),Run1Val::stop> stop{};
            constexpr Register::FieldValue<decltype(run1),Run1Val::run> run{};
        }
        ///Edge/center aligned operation for channel 1.
        enum class Center1Val {
            edgeAligned=0x00000000,     ///<Edge-aligned.
            centerAligned=0x00000001,     ///<Center-aligned.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Center1Val> center1{}; 
        namespace Center1ValC{
            constexpr Register::FieldValue<decltype(center1),Center1Val::edgeAligned> edgeAligned{};
            constexpr Register::FieldValue<decltype(center1),Center1Val::centerAligned> centerAligned{};
        }
        ///Selects polarity of the MCOA1 and MCOB1 pins.
        enum class Pola1Val {
            passiveStateIsLow=0x00000000,     ///<Passive state is LOW, active state is HIGH.
            passiveStateIsHig=0x00000001,     ///<Passive state is HIGH, active state is LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Pola1Val> pola1{}; 
        namespace Pola1ValC{
            constexpr Register::FieldValue<decltype(pola1),Pola1Val::passiveStateIsLow> passiveStateIsLow{};
            constexpr Register::FieldValue<decltype(pola1),Pola1Val::passiveStateIsHig> passiveStateIsHig{};
        }
        ///Controls the dead-time feature for channel 1.
        enum class Dte1Val {
            deadTimeDisabled=0x00000000,     ///<Dead-time disabled.
            deadTimeEnabled=0x00000001,     ///<Dead-time enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Dte1Val> dte1{}; 
        namespace Dte1ValC{
            constexpr Register::FieldValue<decltype(dte1),Dte1Val::deadTimeDisabled> deadTimeDisabled{};
            constexpr Register::FieldValue<decltype(dte1),Dte1Val::deadTimeEnabled> deadTimeEnabled{};
        }
        ///Enable/disable updates of functional registers for channel 1 (see Section 24.8.2).
        enum class Disup1Val {
            update=0x00000000,     ///<Functional registers are updated from the write registers at the end of each PWM cycle.
            noupdate=0x00000001,     ///<Functional registers remain the same as long as the timer is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Disup1Val> disup1{}; 
        namespace Disup1ValC{
            constexpr Register::FieldValue<decltype(disup1),Disup1Val::update> update{};
            constexpr Register::FieldValue<decltype(disup1),Disup1Val::noupdate> noupdate{};
        }
        ///Stops/starts timer channel 2.
        enum class Run2Val {
            stop=0x00000000,     ///<Stop.
            run=0x00000001,     ///<Run.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Run2Val> run2{}; 
        namespace Run2ValC{
            constexpr Register::FieldValue<decltype(run2),Run2Val::stop> stop{};
            constexpr Register::FieldValue<decltype(run2),Run2Val::run> run{};
        }
        ///Edge/center aligned operation for channel 2.
        enum class Center2Val {
            edgeAligned=0x00000000,     ///<Edge-aligned.
            centerAligned=0x00000001,     ///<Center-aligned.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Center2Val> center2{}; 
        namespace Center2ValC{
            constexpr Register::FieldValue<decltype(center2),Center2Val::edgeAligned> edgeAligned{};
            constexpr Register::FieldValue<decltype(center2),Center2Val::centerAligned> centerAligned{};
        }
        ///Selects polarity of the MCOA2 and MCOB2 pins.
        enum class Pola2Val {
            passiveStateIsLow=0x00000000,     ///<Passive state is LOW, active state is HIGH.
            passiveStateIsHig=0x00000001,     ///<Passive state is HIGH, active state is LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Pola2Val> pola2{}; 
        namespace Pola2ValC{
            constexpr Register::FieldValue<decltype(pola2),Pola2Val::passiveStateIsLow> passiveStateIsLow{};
            constexpr Register::FieldValue<decltype(pola2),Pola2Val::passiveStateIsHig> passiveStateIsHig{};
        }
        ///Controls the dead-time feature for channel 1.
        enum class Dte2Val {
            deadTimeDisabled=0x00000000,     ///<Dead-time disabled.
            deadTimeEnabled=0x00000001,     ///<Dead-time enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Dte2Val> dte2{}; 
        namespace Dte2ValC{
            constexpr Register::FieldValue<decltype(dte2),Dte2Val::deadTimeDisabled> deadTimeDisabled{};
            constexpr Register::FieldValue<decltype(dte2),Dte2Val::deadTimeEnabled> deadTimeEnabled{};
        }
        ///Enable/disable updates of functional registers for channel 2 (see Section 24.8.2).
        enum class Disup2Val {
            update=0x00000000,     ///<Functional registers are updated from the write registers at the end of each PWM cycle.
            noupdate=0x00000001,     ///<Functional registers remain the same as long as the timer is running.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Disup2Val> disup2{}; 
        namespace Disup2ValC{
            constexpr Register::FieldValue<decltype(disup2),Disup2Val::update> update{};
            constexpr Register::FieldValue<decltype(disup2),Disup2Val::noupdate> noupdate{};
        }
        ///Controls the polarity of the MCOB outputs for all 3 channels. This bit is typically set to 1 only in 3-phase DC mode.
        enum class InvbdcVal {
            opposite=0x00000000,     ///<The MCOB outputs have opposite polarity from the MCOA outputs (aside from dead time).
            same=0x00000001,     ///<The MCOB outputs have the same basic polarity as the MCOA outputs. (see Section 24.8.6)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,InvbdcVal> invbdc{}; 
        namespace InvbdcValC{
            constexpr Register::FieldValue<decltype(invbdc),InvbdcVal::opposite> opposite{};
            constexpr Register::FieldValue<decltype(invbdc),InvbdcVal::same> same{};
        }
        ///3-phase AC mode select (see Section 24.8.7).
        enum class AcmodeVal {
            v3PhaseAcModeOff=0x00000000,     ///<3-phase AC-mode off: Each PWM channel uses its own timer-counter and period register.
            v3PhaseAcModeOn=0x00000001,     ///<3-phase AC-mode on: All PWM channels use the timer-counter and period register of channel 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,AcmodeVal> acmode{}; 
        namespace AcmodeValC{
            constexpr Register::FieldValue<decltype(acmode),AcmodeVal::v3PhaseAcModeOff> v3PhaseAcModeOff{};
            constexpr Register::FieldValue<decltype(acmode),AcmodeVal::v3PhaseAcModeOn> v3PhaseAcModeOn{};
        }
        ///3-phase DC mode select (see Section 24.8.6).
        enum class DcmodeVal {
            v3PhaseDcModeOff=0x00000000,     ///<3-phase DC mode off: PWM channels are independent (unless bit ACMODE = 1)
            v3PhaseDcModeOn=0x00000001,     ///<3-phase DC mode on: The internal MCOA0 output is routed through the CP register (i.e. a mask) register to all six PWM outputs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,DcmodeVal> dcmode{}; 
        namespace DcmodeValC{
            constexpr Register::FieldValue<decltype(dcmode),DcmodeVal::v3PhaseDcModeOff> v3PhaseDcModeOff{};
            constexpr Register::FieldValue<decltype(dcmode),DcmodeVal::v3PhaseDcModeOn> v3PhaseDcModeOn{};
        }
    }
    namespace NoneconSet{    ///<PWM Control set address
        using Addr = Register::Address<0x400b8004,0x1fe0e0e0,0,unsigned>;
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run0Set{}; 
        namespace Run0setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> center0Set{}; 
        namespace Center0setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pola0Set{}; 
        namespace Pola0setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dte0Set{}; 
        namespace Dte0setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> disup0Set{}; 
        namespace Disup0setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> run1Set{}; 
        namespace Run1setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> center1Set{}; 
        namespace Center1setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pola1Set{}; 
        namespace Pola1setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dte1Set{}; 
        namespace Dte1setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> disup1Set{}; 
        namespace Disup1setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> run2Set{}; 
        namespace Run2setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> center2Set{}; 
        namespace Center2setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pola2Set{}; 
        namespace Pola2setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dte2Set{}; 
        namespace Dte2setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> disup2Set{}; 
        namespace Disup2setValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> invbdcSet{}; 
        namespace InvbdcsetValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> acmodeSet{}; 
        namespace AcmodesetValC{
        }
        ///Writing a one sets the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dcmodeSet{}; 
        namespace DcmodesetValC{
        }
    }
    namespace NoneconClr{    ///<PWM Control clear address
        using Addr = Register::Address<0x400b8008,0x1fe0e0e0,0,unsigned>;
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> run0Clr{}; 
        namespace Run0clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> center0Clr{}; 
        namespace Center0clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pola0Clr{}; 
        namespace Pola0clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dte0Clr{}; 
        namespace Dte0clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> disup0Clr{}; 
        namespace Disup0clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> run1Clr{}; 
        namespace Run1clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> center1Clr{}; 
        namespace Center1clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pola1Clr{}; 
        namespace Pola1clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dte1Clr{}; 
        namespace Dte1clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> disup1Clr{}; 
        namespace Disup1clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> run2Clr{}; 
        namespace Run2clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> center2Clr{}; 
        namespace Center2clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pola2Clr{}; 
        namespace Pola2clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dte2Clr{}; 
        namespace Dte2clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> disup2Clr{}; 
        namespace Disup2clrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> invbdcClr{}; 
        namespace InvbdcclrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> acmodClr{}; 
        namespace AcmodclrValC{
        }
        ///Writing a one clears the corresponding bit in the CON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dcmodeClr{}; 
        namespace DcmodeclrValC{
        }
    }
    namespace Nonecapcon{    ///<Capture Control read address
        using Addr = Register::Address<0x400b800c,0xffe00000,0,unsigned>;
        ///A 1 in this bit enables a channel 0 capture event on a rising edge on MCI0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cap0mci0Re{}; 
        namespace Cap0mci0reValC{
        }
        ///A 1 in this bit enables a channel 0 capture event on a falling edge on MCI0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cap0mci0Fe{}; 
        namespace Cap0mci0feValC{
        }
        ///A 1 in this bit enables a channel 0 capture event on a rising edge on MCI1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cap0mci1Re{}; 
        namespace Cap0mci1reValC{
        }
        ///A 1 in this bit enables a channel 0 capture event on a falling edge on MCI1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cap0mci1Fe{}; 
        namespace Cap0mci1feValC{
        }
        ///A 1 in this bit enables a channel 0 capture event on a rising edge on MCI2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cap0mci2Re{}; 
        namespace Cap0mci2reValC{
        }
        ///A 1 in this bit enables a channel 0 capture event on a falling edge on MCI2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cap0mci2Fe{}; 
        namespace Cap0mci2feValC{
        }
        ///A 1 in this bit enables a channel 1 capture event on a rising edge on MCI0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cap1mci0Re{}; 
        namespace Cap1mci0reValC{
        }
        ///A 1 in this bit enables a channel 1 capture event on a falling edge on MCI0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cap1mci0Fe{}; 
        namespace Cap1mci0feValC{
        }
        ///A 1 in this bit enables a channel 1 capture event on a rising edge on MCI1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cap1mci1Re{}; 
        namespace Cap1mci1reValC{
        }
        ///A 1 in this bit enables a channel 1 capture event on a falling edge on MCI1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cap1mci1Fe{}; 
        namespace Cap1mci1feValC{
        }
        ///A 1 in this bit enables a channel 1 capture event on a rising edge on MCI2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cap1mci2Re{}; 
        namespace Cap1mci2reValC{
        }
        ///A 1 in this bit enables a channel 1 capture event on a falling edge on MCI2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cap1mci2Fe{}; 
        namespace Cap1mci2feValC{
        }
        ///A 1 in this bit enables a channel 2 capture event on a rising edge on MCI0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cap2mci0Re{}; 
        namespace Cap2mci0reValC{
        }
        ///A 1 in this bit enables a channel 2 capture event on a falling edge on MCI0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cap2mci0Fe{}; 
        namespace Cap2mci0feValC{
        }
        ///A 1 in this bit enables a channel 2 capture event on a rising edge on MCI1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cap2mci1Re{}; 
        namespace Cap2mci1reValC{
        }
        ///A 1 in this bit enables a channel 2 capture event on a falling edge on MCI1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cap2mci1Fe{}; 
        namespace Cap2mci1feValC{
        }
        ///A 1 in this bit enables a channel 2 capture event on a rising edge on MCI2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cap2mci2Re{}; 
        namespace Cap2mci2reValC{
        }
        ///A 1 in this bit enables a channel 2 capture event on a falling edge on MCI2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cap2mci2Fe{}; 
        namespace Cap2mci2feValC{
        }
        ///If this bit is 1, TC0 is reset by a channel 0 capture event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rt0{}; 
        namespace Rt0ValC{
        }
        ///If this bit is 1, TC1 is reset by a channel 1 capture event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rt1{}; 
        namespace Rt1ValC{
        }
        ///If this bit is 1, TC2 is reset by a channel 2 capture event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rt2{}; 
        namespace Rt2ValC{
        }
    }
    namespace NonecapconSet{    ///<Capture Control set address
        using Addr = Register::Address<0x400b8010,0xffe00000,0,unsigned>;
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cap0mci0ReSet{}; 
        namespace Cap0mci0resetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cap0mci0FeSet{}; 
        namespace Cap0mci0fesetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cap0mci1ReSet{}; 
        namespace Cap0mci1resetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cap0mci1FeSet{}; 
        namespace Cap0mci1fesetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cap0mci2ReSet{}; 
        namespace Cap0mci2resetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cap0mci2FeSet{}; 
        namespace Cap0mci2fesetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cap1mci0ReSet{}; 
        namespace Cap1mci0resetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cap1mci0FeSet{}; 
        namespace Cap1mci0fesetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cap1mci1ReSet{}; 
        namespace Cap1mci1resetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cap1mci1FeSet{}; 
        namespace Cap1mci1fesetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cap1mci2ReSet{}; 
        namespace Cap1mci2resetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cap1mci2FeSet{}; 
        namespace Cap1mci2fesetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cap2mci0ReSet{}; 
        namespace Cap2mci0resetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cap2mci0FeSet{}; 
        namespace Cap2mci0fesetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cap2mci1ReSet{}; 
        namespace Cap2mci1resetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cap2mci1FeSet{}; 
        namespace Cap2mci1fesetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cap2mci2ReSet{}; 
        namespace Cap2mci2resetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cap2mci2FeSet{}; 
        namespace Cap2mci2fesetValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rt0Set{}; 
        namespace Rt0setValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rt1Set{}; 
        namespace Rt1setValC{
        }
        ///Writing a one sets the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rt2Set{}; 
        namespace Rt2setValC{
        }
    }
    namespace NonecapconClr{    ///<Event Control clear address
        using Addr = Register::Address<0x400b8014,0xffe00000,0,unsigned>;
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cap0mci0ReClr{}; 
        namespace Cap0mci0reclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cap0mci0FeClr{}; 
        namespace Cap0mci0feclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cap0mci1ReClr{}; 
        namespace Cap0mci1reclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cap0mci1FeClr{}; 
        namespace Cap0mci1feclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cap0mci2ReClr{}; 
        namespace Cap0mci2reclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cap0mci2FeClr{}; 
        namespace Cap0mci2feclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cap1mci0ReClr{}; 
        namespace Cap1mci0reclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cap1mci0FeClr{}; 
        namespace Cap1mci0feclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cap1mci1ReClr{}; 
        namespace Cap1mci1reclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cap1mci1FeClr{}; 
        namespace Cap1mci1feclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cap1mci2ReClr{}; 
        namespace Cap1mci2reclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cap1mci2FeClr{}; 
        namespace Cap1mci2feclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cap2mci0ReClr{}; 
        namespace Cap2mci0reclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cap2mci0FeClr{}; 
        namespace Cap2mci0feclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cap2mci1ReClr{}; 
        namespace Cap2mci1reclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cap2mci1FeClr{}; 
        namespace Cap2mci1feclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cap2mci2ReClr{}; 
        namespace Cap2mci2reclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cap2mci2FeClr{}; 
        namespace Cap2mci2feclrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rt0Clr{}; 
        namespace Rt0clrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rt1Clr{}; 
        namespace Rt1clrValC{
        }
        ///Writing a one clears the corresponding bits in the CAPCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rt2Clr{}; 
        namespace Rt2clrValC{
        }
    }
    namespace Nonetc0{    ///<Timer Counter register
        using Addr = Register::Address<0x400b8018,0x00000000,0,unsigned>;
        ///Timer/Counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mctc{}; 
        namespace MctcValC{
        }
    }
    namespace Nonetc1{    ///<Timer Counter register
        using Addr = Register::Address<0x400b801c,0x00000000,0,unsigned>;
        ///Timer/Counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mctc{}; 
        namespace MctcValC{
        }
    }
    namespace Nonetc2{    ///<Timer Counter register
        using Addr = Register::Address<0x400b8020,0x00000000,0,unsigned>;
        ///Timer/Counter value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mctc{}; 
        namespace MctcValC{
        }
    }
    namespace Nonelim0{    ///<Limit register
        using Addr = Register::Address<0x400b8024,0x00000000,0,unsigned>;
        ///Limit value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mclim{}; 
        namespace MclimValC{
        }
    }
    namespace Nonelim1{    ///<Limit register
        using Addr = Register::Address<0x400b8028,0x00000000,0,unsigned>;
        ///Limit value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mclim{}; 
        namespace MclimValC{
        }
    }
    namespace Nonelim2{    ///<Limit register
        using Addr = Register::Address<0x400b802c,0x00000000,0,unsigned>;
        ///Limit value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mclim{}; 
        namespace MclimValC{
        }
    }
    namespace Nonemat0{    ///<Match register
        using Addr = Register::Address<0x400b8030,0x00000000,0,unsigned>;
        ///Match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mcmat{}; 
        namespace McmatValC{
        }
    }
    namespace Nonemat1{    ///<Match register
        using Addr = Register::Address<0x400b8034,0x00000000,0,unsigned>;
        ///Match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mcmat{}; 
        namespace McmatValC{
        }
    }
    namespace Nonemat2{    ///<Match register
        using Addr = Register::Address<0x400b8038,0x00000000,0,unsigned>;
        ///Match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mcmat{}; 
        namespace McmatValC{
        }
    }
    namespace Nonedt{    ///<Dead time register
        using Addr = Register::Address<0x400b803c,0xc0000000,0,unsigned>;
        ///Dead time for channel 0.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> dt0{}; 
        namespace Dt0ValC{
        }
        ///Dead time for channel 1.[2]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,10),Register::ReadWriteAccess,unsigned> dt1{}; 
        namespace Dt1ValC{
        }
        ///Dead time for channel 2.[2]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,20),Register::ReadWriteAccess,unsigned> dt2{}; 
        namespace Dt2ValC{
        }
    }
    namespace Nonecp{    ///<Communication Pattern register
        using Addr = Register::Address<0x400b8040,0xffffffc0,0,unsigned>;
        ///Communication pattern output A, channel 0.
        enum class Ccpa0Val {
            mcoa0Passive=0x00000000,     ///<MCOA0 passive.
            internalMcoa0=0x00000001,     ///<internal MCOA0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ccpa0Val> ccpa0{}; 
        namespace Ccpa0ValC{
            constexpr Register::FieldValue<decltype(ccpa0),Ccpa0Val::mcoa0Passive> mcoa0Passive{};
            constexpr Register::FieldValue<decltype(ccpa0),Ccpa0Val::internalMcoa0> internalMcoa0{};
        }
        ///Communication pattern output B, channel 0.
        enum class Ccpb0Val {
            mcob0Passive=0x00000000,     ///<MCOB0 passive.
            mcob0TracksInterna=0x00000001,     ///<MCOB0 tracks internal MCOA0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ccpb0Val> ccpb0{}; 
        namespace Ccpb0ValC{
            constexpr Register::FieldValue<decltype(ccpb0),Ccpb0Val::mcob0Passive> mcob0Passive{};
            constexpr Register::FieldValue<decltype(ccpb0),Ccpb0Val::mcob0TracksInterna> mcob0TracksInterna{};
        }
        ///Communication pattern output A, channel 1.
        enum class Ccpa1Val {
            mcoa1Passive=0x00000000,     ///<MCOA1 passive.
            mcoa1TracksInterna=0x00000001,     ///<MCOA1 tracks internal MCOA0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ccpa1Val> ccpa1{}; 
        namespace Ccpa1ValC{
            constexpr Register::FieldValue<decltype(ccpa1),Ccpa1Val::mcoa1Passive> mcoa1Passive{};
            constexpr Register::FieldValue<decltype(ccpa1),Ccpa1Val::mcoa1TracksInterna> mcoa1TracksInterna{};
        }
        ///Communication pattern output B, channel 1.
        enum class Ccpb1Val {
            mcob1Passive=0x00000000,     ///<MCOB1 passive.
            mcob1TracksInterna=0x00000001,     ///<MCOB1 tracks internal MCOA0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ccpb1Val> ccpb1{}; 
        namespace Ccpb1ValC{
            constexpr Register::FieldValue<decltype(ccpb1),Ccpb1Val::mcob1Passive> mcob1Passive{};
            constexpr Register::FieldValue<decltype(ccpb1),Ccpb1Val::mcob1TracksInterna> mcob1TracksInterna{};
        }
        ///Communication pattern output A, channel 2.
        enum class Ccpa2Val {
            mcoa2Passive=0x00000000,     ///<MCOA2 passive.
            mcoa2TracksInterna=0x00000001,     ///<MCOA2 tracks internal MCOA0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ccpa2Val> ccpa2{}; 
        namespace Ccpa2ValC{
            constexpr Register::FieldValue<decltype(ccpa2),Ccpa2Val::mcoa2Passive> mcoa2Passive{};
            constexpr Register::FieldValue<decltype(ccpa2),Ccpa2Val::mcoa2TracksInterna> mcoa2TracksInterna{};
        }
        ///Communication pattern output B, channel 2.
        enum class Ccpb2Val {
            mcob2Passive=0x00000000,     ///<MCOB2 passive.
            mcob2TracksInterna=0x00000001,     ///<MCOB2 tracks internal MCOA0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ccpb2Val> ccpb2{}; 
        namespace Ccpb2ValC{
            constexpr Register::FieldValue<decltype(ccpb2),Ccpb2Val::mcob2Passive> mcob2Passive{};
            constexpr Register::FieldValue<decltype(ccpb2),Ccpb2Val::mcob2TracksInterna> mcob2TracksInterna{};
        }
    }
    namespace Nonecap0{    ///<Capture register
        using Addr = Register::Address<0x400b8044,0x00000000,0,unsigned>;
        ///Current TC value at a capture event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
        namespace CapValC{
        }
    }
    namespace Nonecap1{    ///<Capture register
        using Addr = Register::Address<0x400b8048,0x00000000,0,unsigned>;
        ///Current TC value at a capture event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
        namespace CapValC{
        }
    }
    namespace Nonecap2{    ///<Capture register
        using Addr = Register::Address<0x400b804c,0x00000000,0,unsigned>;
        ///Current TC value at a capture event.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cap{}; 
        namespace CapValC{
        }
    }
    namespace Noneinten{    ///<Interrupt Enable read address
        using Addr = Register::Address<0x400b8050,0xffff7888,0,unsigned>;
        ///Limit interrupt for channel 0.
        enum class Ilim0Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ilim0Val> ilim0{}; 
        namespace Ilim0ValC{
            constexpr Register::FieldValue<decltype(ilim0),Ilim0Val::interruptDisabled> interruptDisabled{};
            constexpr Register::FieldValue<decltype(ilim0),Ilim0Val::interruptEnabled> interruptEnabled{};
        }
        ///Match interrupt for channel 0.
        enum class Imat0Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Imat0Val> imat0{}; 
        namespace Imat0ValC{
            constexpr Register::FieldValue<decltype(imat0),Imat0Val::interruptDisabled> interruptDisabled{};
            constexpr Register::FieldValue<decltype(imat0),Imat0Val::interruptEnabled> interruptEnabled{};
        }
        ///Capture interrupt for channel 0.
        enum class Icap0Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Icap0Val> icap0{}; 
        namespace Icap0ValC{
            constexpr Register::FieldValue<decltype(icap0),Icap0Val::interruptDisabled> interruptDisabled{};
            constexpr Register::FieldValue<decltype(icap0),Icap0Val::interruptEnabled> interruptEnabled{};
        }
        ///Limit interrupt for channel 1.
        enum class Ilim1Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ilim1Val> ilim1{}; 
        namespace Ilim1ValC{
            constexpr Register::FieldValue<decltype(ilim1),Ilim1Val::interruptDisabled> interruptDisabled{};
            constexpr Register::FieldValue<decltype(ilim1),Ilim1Val::interruptEnabled> interruptEnabled{};
        }
        ///Match interrupt for channel 1.
        enum class Imat1Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Imat1Val> imat1{}; 
        namespace Imat1ValC{
            constexpr Register::FieldValue<decltype(imat1),Imat1Val::interruptDisabled> interruptDisabled{};
            constexpr Register::FieldValue<decltype(imat1),Imat1Val::interruptEnabled> interruptEnabled{};
        }
        ///Capture interrupt for channel 1.
        enum class Icap1Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Icap1Val> icap1{}; 
        namespace Icap1ValC{
            constexpr Register::FieldValue<decltype(icap1),Icap1Val::interruptDisabled> interruptDisabled{};
            constexpr Register::FieldValue<decltype(icap1),Icap1Val::interruptEnabled> interruptEnabled{};
        }
        ///Limit interrupt for channel 2.
        enum class Ilim2Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ilim2Val> ilim2{}; 
        namespace Ilim2ValC{
            constexpr Register::FieldValue<decltype(ilim2),Ilim2Val::interruptDisabled> interruptDisabled{};
            constexpr Register::FieldValue<decltype(ilim2),Ilim2Val::interruptEnabled> interruptEnabled{};
        }
        ///Match interrupt for channel 2.
        enum class Imat2Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Imat2Val> imat2{}; 
        namespace Imat2ValC{
            constexpr Register::FieldValue<decltype(imat2),Imat2Val::interruptDisabled> interruptDisabled{};
            constexpr Register::FieldValue<decltype(imat2),Imat2Val::interruptEnabled> interruptEnabled{};
        }
        ///Capture interrupt for channel 2.
        enum class Icap2Val {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Icap2Val> icap2{}; 
        namespace Icap2ValC{
            constexpr Register::FieldValue<decltype(icap2),Icap2Val::interruptDisabled> interruptDisabled{};
            constexpr Register::FieldValue<decltype(icap2),Icap2Val::interruptEnabled> interruptEnabled{};
        }
        ///Fast abort interrupt.
        enum class AbortVal {
            interruptDisabled=0x00000000,     ///<Interrupt disabled.
            interruptEnabled=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AbortVal> abort{}; 
        namespace AbortValC{
            constexpr Register::FieldValue<decltype(abort),AbortVal::interruptDisabled> interruptDisabled{};
            constexpr Register::FieldValue<decltype(abort),AbortVal::interruptEnabled> interruptEnabled{};
        }
    }
    namespace NoneintenSet{    ///<Interrupt Enable set address
        using Addr = Register::Address<0x400b8054,0xffff7188,0,unsigned>;
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ilim0Set{}; 
        namespace Ilim0setValC{
        }
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> imat0Set{}; 
        namespace Imat0setValC{
        }
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icap0Set{}; 
        namespace Icap0setValC{
        }
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilim1Set{}; 
        namespace Ilim1setValC{
        }
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imat1Set{}; 
        namespace Imat1setValC{
        }
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icap1Set{}; 
        namespace Icap1setValC{
        }
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ilim2Set{}; 
        namespace Ilim2setValC{
        }
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> imat2Set{}; 
        namespace Imat2setValC{
        }
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> icap2Set{}; 
        namespace Icap2setValC{
        }
        ///Writing a one sets the corresponding bit in INTEN, thus enabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abortSet{}; 
        namespace AbortsetValC{
        }
    }
    namespace NoneintenClr{    ///<Interrupt Enable clear address
        using Addr = Register::Address<0x400b8058,0xffff7888,0,unsigned>;
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ilim0Clr{}; 
        namespace Ilim0clrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> imat0Clr{}; 
        namespace Imat0clrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icap0Clr{}; 
        namespace Icap0clrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilim1Clr{}; 
        namespace Ilim1clrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imat1Clr{}; 
        namespace Imat1clrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icap1Clr{}; 
        namespace Icap1clrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ilim2Clr{}; 
        namespace Ilim2clrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> imat2Clr{}; 
        namespace Imat2clrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> icap2Clr{}; 
        namespace Icap2clrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abortClr{}; 
        namespace AbortclrValC{
        }
    }
    namespace Noneintf{    ///<Interrupt flags read address
        using Addr = Register::Address<0x400b8068,0xffff7888,0,unsigned>;
        ///Limit interrupt flag for channel 0.
        enum class Ilim0fVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ilim0fVal> ilim0F{}; 
        namespace Ilim0fValC{
            constexpr Register::FieldValue<decltype(ilim0F),Ilim0fVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr Register::FieldValue<decltype(ilim0F),Ilim0fVal::ifTheCorresponding> ifTheCorresponding{};
        }
        ///Match interrupt flag for channel 0.
        enum class Imat0fVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Imat0fVal> imat0F{}; 
        namespace Imat0fValC{
            constexpr Register::FieldValue<decltype(imat0F),Imat0fVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr Register::FieldValue<decltype(imat0F),Imat0fVal::ifTheCorresponding> ifTheCorresponding{};
        }
        ///Capture interrupt flag for channel 0.
        enum class Icap0fVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Icap0fVal> icap0F{}; 
        namespace Icap0fValC{
            constexpr Register::FieldValue<decltype(icap0F),Icap0fVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr Register::FieldValue<decltype(icap0F),Icap0fVal::ifTheCorresponding> ifTheCorresponding{};
        }
        ///Limit interrupt flag for channel 1.
        enum class Ilim1fVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ilim1fVal> ilim1F{}; 
        namespace Ilim1fValC{
            constexpr Register::FieldValue<decltype(ilim1F),Ilim1fVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr Register::FieldValue<decltype(ilim1F),Ilim1fVal::ifTheCorresponding> ifTheCorresponding{};
        }
        ///Match interrupt flag for channel 1.
        enum class Imat1fVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Imat1fVal> imat1F{}; 
        namespace Imat1fValC{
            constexpr Register::FieldValue<decltype(imat1F),Imat1fVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr Register::FieldValue<decltype(imat1F),Imat1fVal::ifTheCorresponding> ifTheCorresponding{};
        }
        ///Capture interrupt flag for channel 1.
        enum class Icap1fVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Icap1fVal> icap1F{}; 
        namespace Icap1fValC{
            constexpr Register::FieldValue<decltype(icap1F),Icap1fVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr Register::FieldValue<decltype(icap1F),Icap1fVal::ifTheCorresponding> ifTheCorresponding{};
        }
        ///Limit interrupt flag for channel 2.
        enum class Ilim2fVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ilim2fVal> ilim2F{}; 
        namespace Ilim2fValC{
            constexpr Register::FieldValue<decltype(ilim2F),Ilim2fVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr Register::FieldValue<decltype(ilim2F),Ilim2fVal::ifTheCorresponding> ifTheCorresponding{};
        }
        ///Match interrupt flag for channel 2.
        enum class Imat2fVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Imat2fVal> imat2F{}; 
        namespace Imat2fValC{
            constexpr Register::FieldValue<decltype(imat2F),Imat2fVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr Register::FieldValue<decltype(imat2F),Imat2fVal::ifTheCorresponding> ifTheCorresponding{};
        }
        ///Capture interrupt flag for channel 2.
        enum class Icap2fVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Icap2fVal> icap2F{}; 
        namespace Icap2fValC{
            constexpr Register::FieldValue<decltype(icap2F),Icap2fVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr Register::FieldValue<decltype(icap2F),Icap2fVal::ifTheCorresponding> ifTheCorresponding{};
        }
        ///Fast abort interrupt flag.
        enum class AbortfVal {
            thisInterruptSourc=0x00000000,     ///<This interrupt source is not contributing to the MCPWM interrupt request.
            ifTheCorresponding=0x00000001,     ///<If the corresponding bit in INTEN is 1, the MCPWM module is asserting its interrupt request to the Interrupt Controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AbortfVal> abortF{}; 
        namespace AbortfValC{
            constexpr Register::FieldValue<decltype(abortF),AbortfVal::thisInterruptSourc> thisInterruptSourc{};
            constexpr Register::FieldValue<decltype(abortF),AbortfVal::ifTheCorresponding> ifTheCorresponding{};
        }
    }
    namespace NoneintfSet{    ///<Interrupt flags set address
        using Addr = Register::Address<0x400b806c,0xffff7888,0,unsigned>;
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ilim0FSet{}; 
        namespace Ilim0fsetValC{
        }
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> imat0FSet{}; 
        namespace Imat0fsetValC{
        }
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icap0FSet{}; 
        namespace Icap0fsetValC{
        }
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilim1FSet{}; 
        namespace Ilim1fsetValC{
        }
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imat1FSet{}; 
        namespace Imat1fsetValC{
        }
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icap1FSet{}; 
        namespace Icap1fsetValC{
        }
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ilim2FSet{}; 
        namespace Ilim2fsetValC{
        }
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> imat2FSet{}; 
        namespace Imat2fsetValC{
        }
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> icap2FSet{}; 
        namespace Icap2fsetValC{
        }
        ///Writing a one sets the corresponding bit in the INTF register, thus possibly simulating hardware interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abortFSet{}; 
        namespace AbortfsetValC{
        }
    }
    namespace NoneintfClr{    ///<Interrupt flags clear address
        using Addr = Register::Address<0x400b8070,0xffff7888,0,unsigned>;
        ///Writing a one clears the corresponding bit in the INTF register, thus clearing the corresponding interrupt request.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ilim0FClr{}; 
        namespace Ilim0fclrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> imat0FClr{}; 
        namespace Imat0fclrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> icap0FClr{}; 
        namespace Icap0fclrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ilim1FClr{}; 
        namespace Ilim1fclrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> imat1FClr{}; 
        namespace Imat1fclrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> icap1FClr{}; 
        namespace Icap1fclrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ilim2FClr{}; 
        namespace Ilim2fclrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> imat2FClr{}; 
        namespace Imat2fclrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> icap2FClr{}; 
        namespace Icap2fclrValC{
        }
        ///Writing a one clears the corresponding bit in INTEN, thus disabling the interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> abortFClr{}; 
        namespace AbortfclrValC{
        }
    }
    namespace Nonecntcon{    ///<Count Control read address
        using Addr = Register::Address<0x400b805c,0x1ffc0000,0,unsigned>;
        ///Counter 0 rising edge mode, channel 0.
        enum class Tc0mci0reVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI0 does not affect counter 0.
            rising=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a rising edge on MCI0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tc0mci0reVal> tc0mci0Re{}; 
        namespace Tc0mci0reValC{
            constexpr Register::FieldValue<decltype(tc0mci0Re),Tc0mci0reVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr Register::FieldValue<decltype(tc0mci0Re),Tc0mci0reVal::rising> rising{};
        }
        ///Counter 0 falling edge mode, channel 0.
        enum class Tc0mci0feVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI0 does not affect counter 0.
            falling=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a falling edge on MCI0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Tc0mci0feVal> tc0mci0Fe{}; 
        namespace Tc0mci0feValC{
            constexpr Register::FieldValue<decltype(tc0mci0Fe),Tc0mci0feVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr Register::FieldValue<decltype(tc0mci0Fe),Tc0mci0feVal::falling> falling{};
        }
        ///Counter 0 rising edge mode, channel 1.
        enum class Tc0mci1reVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI1 does not affect counter 0.
            rising=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a rising edge on MCI1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Tc0mci1reVal> tc0mci1Re{}; 
        namespace Tc0mci1reValC{
            constexpr Register::FieldValue<decltype(tc0mci1Re),Tc0mci1reVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr Register::FieldValue<decltype(tc0mci1Re),Tc0mci1reVal::rising> rising{};
        }
        ///Counter 0 falling edge mode, channel 1.
        enum class Tc0mci1feVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI1 does not affect counter 0.
            falling=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a falling edge on MCI1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Tc0mci1feVal> tc0mci1Fe{}; 
        namespace Tc0mci1feValC{
            constexpr Register::FieldValue<decltype(tc0mci1Fe),Tc0mci1feVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr Register::FieldValue<decltype(tc0mci1Fe),Tc0mci1feVal::falling> falling{};
        }
        ///Counter 0 rising edge mode, channel 2.
        enum class Tc0mci2reVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI0 does not affect counter 0.
            rising=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a rising edge on MCI2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Tc0mci2reVal> tc0mci2Re{}; 
        namespace Tc0mci2reValC{
            constexpr Register::FieldValue<decltype(tc0mci2Re),Tc0mci2reVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr Register::FieldValue<decltype(tc0mci2Re),Tc0mci2reVal::rising> rising{};
        }
        ///Counter 0 falling edge mode, channel 2.
        enum class Tc0mci2feVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI0 does not affect counter 0.
            fallling=0x00000001,     ///<If MODE0 is 1, counter 0 advances on a falling edge on MCI2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Tc0mci2feVal> tc0mci2Fe{}; 
        namespace Tc0mci2feValC{
            constexpr Register::FieldValue<decltype(tc0mci2Fe),Tc0mci2feVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr Register::FieldValue<decltype(tc0mci2Fe),Tc0mci2feVal::fallling> fallling{};
        }
        ///Counter 1 rising edge mode, channel 0.
        enum class Tc1mci0reVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI0 does not affect counter 1.
            rising=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a rising edge on MCI0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Tc1mci0reVal> tc1mci0Re{}; 
        namespace Tc1mci0reValC{
            constexpr Register::FieldValue<decltype(tc1mci0Re),Tc1mci0reVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr Register::FieldValue<decltype(tc1mci0Re),Tc1mci0reVal::rising> rising{};
        }
        ///Counter 1 falling edge mode, channel 0.
        enum class Tc1mci0feVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI0 does not affect counter 1.
            falling=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a falling edge on MCI0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Tc1mci0feVal> tc1mci0Fe{}; 
        namespace Tc1mci0feValC{
            constexpr Register::FieldValue<decltype(tc1mci0Fe),Tc1mci0feVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr Register::FieldValue<decltype(tc1mci0Fe),Tc1mci0feVal::falling> falling{};
        }
        ///Counter 1 rising edge mode, channel 1.
        enum class Tc1mci1reVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI1 does not affect counter 1.
            rising=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a rising edge on MCI1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Tc1mci1reVal> tc1mci1Re{}; 
        namespace Tc1mci1reValC{
            constexpr Register::FieldValue<decltype(tc1mci1Re),Tc1mci1reVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr Register::FieldValue<decltype(tc1mci1Re),Tc1mci1reVal::rising> rising{};
        }
        ///Counter 1 falling edge mode, channel 1.
        enum class Tc1mci1feVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI0 does not affect counter 1.
            falling=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a falling edge on MCI1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Tc1mci1feVal> tc1mci1Fe{}; 
        namespace Tc1mci1feValC{
            constexpr Register::FieldValue<decltype(tc1mci1Fe),Tc1mci1feVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr Register::FieldValue<decltype(tc1mci1Fe),Tc1mci1feVal::falling> falling{};
        }
        ///Counter 1 rising edge mode, channel 2.
        enum class Tc1mci2reVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI2 does not affect counter 1.
            rising=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a rising edge on MCI2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Tc1mci2reVal> tc1mci2Re{}; 
        namespace Tc1mci2reValC{
            constexpr Register::FieldValue<decltype(tc1mci2Re),Tc1mci2reVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr Register::FieldValue<decltype(tc1mci2Re),Tc1mci2reVal::rising> rising{};
        }
        ///Counter 1 falling edge mode, channel 2.
        enum class Tc1mci2feVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI2 does not affect counter 1.
            falling=0x00000001,     ///<If MODE1 is 1, counter 1 advances on a falling edge on MCI2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Tc1mci2feVal> tc1mci2Fe{}; 
        namespace Tc1mci2feValC{
            constexpr Register::FieldValue<decltype(tc1mci2Fe),Tc1mci2feVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr Register::FieldValue<decltype(tc1mci2Fe),Tc1mci2feVal::falling> falling{};
        }
        ///Counter 2 rising edge mode, channel 0.
        enum class Tc2mci0reVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI0 does not affect counter 2.
            rising=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a rising edge on MCI0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Tc2mci0reVal> tc2mci0Re{}; 
        namespace Tc2mci0reValC{
            constexpr Register::FieldValue<decltype(tc2mci0Re),Tc2mci0reVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr Register::FieldValue<decltype(tc2mci0Re),Tc2mci0reVal::rising> rising{};
        }
        ///Counter 2 falling edge mode, channel 0.
        enum class Tc2mci0feVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI0 does not affect counter 2.
            falling=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a falling edge on MCI0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Tc2mci0feVal> tc2mci0Fe{}; 
        namespace Tc2mci0feValC{
            constexpr Register::FieldValue<decltype(tc2mci0Fe),Tc2mci0feVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr Register::FieldValue<decltype(tc2mci0Fe),Tc2mci0feVal::falling> falling{};
        }
        ///Counter 2 rising edge mode, channel 1.
        enum class Tc2mci1reVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI1 does not affect counter 2.
            rising=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a rising edge on MCI1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Tc2mci1reVal> tc2mci1Re{}; 
        namespace Tc2mci1reValC{
            constexpr Register::FieldValue<decltype(tc2mci1Re),Tc2mci1reVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr Register::FieldValue<decltype(tc2mci1Re),Tc2mci1reVal::rising> rising{};
        }
        ///Counter 2 falling edge mode, channel 1.
        enum class Tc2mci1feVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI1 does not affect counter 2.
            falling=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a falling edge on MCI1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Tc2mci1feVal> tc2mci1Fe{}; 
        namespace Tc2mci1feValC{
            constexpr Register::FieldValue<decltype(tc2mci1Fe),Tc2mci1feVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr Register::FieldValue<decltype(tc2mci1Fe),Tc2mci1feVal::falling> falling{};
        }
        ///Counter 2 rising edge mode, channel 2.
        enum class Tc2mci2reVal {
            aRisingEdgeOnMci=0x00000000,     ///<A rising edge on MCI2 does not affect counter 2.
            risiing=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a rising edge on MCI2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tc2mci2reVal> tc2mci2Re{}; 
        namespace Tc2mci2reValC{
            constexpr Register::FieldValue<decltype(tc2mci2Re),Tc2mci2reVal::aRisingEdgeOnMci> aRisingEdgeOnMci{};
            constexpr Register::FieldValue<decltype(tc2mci2Re),Tc2mci2reVal::risiing> risiing{};
        }
        ///Counter 2 falling edge mode, channel 2.
        enum class Tc2mci2feVal {
            aFallingEdgeOnMc=0x00000000,     ///<A falling edge on MCI2 does not affect counter 2.
            falling=0x00000001,     ///<If MODE2 is 1, counter 2 advances on a falling edge on MCI2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Tc2mci2feVal> tc2mci2Fe{}; 
        namespace Tc2mci2feValC{
            constexpr Register::FieldValue<decltype(tc2mci2Fe),Tc2mci2feVal::aFallingEdgeOnMc> aFallingEdgeOnMc{};
            constexpr Register::FieldValue<decltype(tc2mci2Fe),Tc2mci2feVal::falling> falling{};
        }
        ///Channel 0 counter/timer mode.
        enum class Cntr0Val {
            channel0IsInTime=0x00000000,     ///<Channel 0 is in timer mode.
            channel0IsInCoun=0x00000001,     ///<Channel 0 is in counter mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Cntr0Val> cntr0{}; 
        namespace Cntr0ValC{
            constexpr Register::FieldValue<decltype(cntr0),Cntr0Val::channel0IsInTime> channel0IsInTime{};
            constexpr Register::FieldValue<decltype(cntr0),Cntr0Val::channel0IsInCoun> channel0IsInCoun{};
        }
        ///Channel 1 counter/timer mode.
        enum class Cntr1Val {
            channel1IsInTime=0x00000000,     ///<Channel 1 is in timer mode.
            channel1IsInCoun=0x00000001,     ///<Channel 1 is in counter mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Cntr1Val> cntr1{}; 
        namespace Cntr1ValC{
            constexpr Register::FieldValue<decltype(cntr1),Cntr1Val::channel1IsInTime> channel1IsInTime{};
            constexpr Register::FieldValue<decltype(cntr1),Cntr1Val::channel1IsInCoun> channel1IsInCoun{};
        }
        ///Channel 2 counter/timer mode.
        enum class Cntr2Val {
            channel2IsInTime=0x00000000,     ///<Channel 2 is in timer mode.
            channel2IsInCoun=0x00000001,     ///<Channel 2 is in counter mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Cntr2Val> cntr2{}; 
        namespace Cntr2ValC{
            constexpr Register::FieldValue<decltype(cntr2),Cntr2Val::channel2IsInTime> channel2IsInTime{};
            constexpr Register::FieldValue<decltype(cntr2),Cntr2Val::channel2IsInCoun> channel2IsInCoun{};
        }
    }
    namespace NonecntconSet{    ///<Count Control set address
        using Addr = Register::Address<0x400b8060,0x1ffc0000,0,unsigned>;
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tc0mci0ReSet{}; 
        namespace Tc0mci0resetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tc0mci0FeSet{}; 
        namespace Tc0mci0fesetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tc0mci1ReSet{}; 
        namespace Tc0mci1resetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tc0mci1FeSet{}; 
        namespace Tc0mci1fesetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tc0mci2ReSet{}; 
        namespace Tc0mci2resetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc0mci2FeSet{}; 
        namespace Tc0mci2fesetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc1mci0ReSet{}; 
        namespace Tc1mci0resetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tc1mci0FeSet{}; 
        namespace Tc1mci0fesetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tc1mci1ReSet{}; 
        namespace Tc1mci1resetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tc1mci1FeSet{}; 
        namespace Tc1mci1fesetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tc1mci2ReSet{}; 
        namespace Tc1mci2resetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tc1mci2FeSet{}; 
        namespace Tc1mci2fesetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tc2mci0ReSet{}; 
        namespace Tc2mci0resetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tc2mci0FeSet{}; 
        namespace Tc2mci0fesetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc2mci1ReSet{}; 
        namespace Tc2mci1resetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tc2mci1FeSet{}; 
        namespace Tc2mci1fesetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tc2mci2ReSet{}; 
        namespace Tc2mci2resetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tc2mci2FeSet{}; 
        namespace Tc2mci2fesetValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cntr0Set{}; 
        namespace Cntr0setValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cntr1Set{}; 
        namespace Cntr1setValC{
        }
        ///Writing a one sets the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cntr2Set{}; 
        namespace Cntr2setValC{
        }
    }
    namespace NonecntconClr{    ///<Count Control clear address
        using Addr = Register::Address<0x400b8064,0x1ffc0000,0,unsigned>;
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tc0mci0ReClr{}; 
        namespace Tc0mci0reclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tc0mci0FeClr{}; 
        namespace Tc0mci0feclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tc0mci1ReClr{}; 
        namespace Tc0mci1reclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tc0mci1FeClr{}; 
        namespace Tc0mci1feclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tc0mci2Re{}; 
        namespace Tc0mci2reValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tc0mci2FeClr{}; 
        namespace Tc0mci2feclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tc1mci0ReClr{}; 
        namespace Tc1mci0reclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tc1mci0FeClr{}; 
        namespace Tc1mci0feclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tc1mci1ReClr{}; 
        namespace Tc1mci1reclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tc1mci1FeClr{}; 
        namespace Tc1mci1feclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tc1mci2ReClr{}; 
        namespace Tc1mci2reclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tc1mci2FeClr{}; 
        namespace Tc1mci2feclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tc2mci0ReClr{}; 
        namespace Tc2mci0reclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tc2mci0FeClr{}; 
        namespace Tc2mci0feclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tc2mci1ReClr{}; 
        namespace Tc2mci1reclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tc2mci1FeClr{}; 
        namespace Tc2mci1feclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tc2mci2ReClr{}; 
        namespace Tc2mci2reclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tc2mci2FeClr{}; 
        namespace Tc2mci2feclrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> cntr0Clr{}; 
        namespace Cntr0clrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cntr1Clr{}; 
        namespace Cntr1clrValC{
        }
        ///Writing a one clears the corresponding bit in the CNTCON register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cntr2Clr{}; 
        namespace Cntr2clrValC{
        }
    }
    namespace NonecapClr{    ///<Capture clear address
        using Addr = Register::Address<0x400b8074,0xfffffff8,0,unsigned>;
        ///Writing a 1 to this bit clears the CAP0 register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> capClr0{}; 
        namespace Capclr0ValC{
        }
        ///Writing a 1 to this bit clears the CAP1 register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> capClr1{}; 
        namespace Capclr1ValC{
        }
        ///Writing a 1 to this bit clears the CAP2 register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capClr2{}; 
        namespace Capclr2ValC{
        }
    }
}
