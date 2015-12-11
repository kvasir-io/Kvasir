#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Segment Liquid Crystal Display
    namespace LcdGcr{    ///<LCD General Control Register
        using Addr = Register::Address<0x400be000,0x700c0c00,0,unsigned>;
        ///LCD duty select
        enum class DutyVal {
            v000=0x00000000,     ///<Use 1 BP (1/1 duty cycle).
            v001=0x00000001,     ///<Use 2 BP (1/2 duty cycle).
            v010=0x00000002,     ///<Use 3 BP (1/3 duty cycle).
            v011=0x00000003,     ///<Use 4 BP (1/4 duty cycle). (Default)
            v100=0x00000004,     ///<Use 5 BP (1/5 duty cycle).
            v101=0x00000005,     ///<Use 6 BP (1/6 duty cycle).
            v110=0x00000006,     ///<Use 7 BP (1/7 duty cycle).
            v111=0x00000007,     ///<Use 8 BP (1/8 duty cycle).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,DutyVal> duty{}; 
        namespace DutyValC{
            constexpr Register::FieldValue<decltype(duty)::Type,DutyVal::v000> v000{};
            constexpr Register::FieldValue<decltype(duty)::Type,DutyVal::v001> v001{};
            constexpr Register::FieldValue<decltype(duty)::Type,DutyVal::v010> v010{};
            constexpr Register::FieldValue<decltype(duty)::Type,DutyVal::v011> v011{};
            constexpr Register::FieldValue<decltype(duty)::Type,DutyVal::v100> v100{};
            constexpr Register::FieldValue<decltype(duty)::Type,DutyVal::v101> v101{};
            constexpr Register::FieldValue<decltype(duty)::Type,DutyVal::v110> v110{};
            constexpr Register::FieldValue<decltype(duty)::Type,DutyVal::v111> v111{};
        }
        }
        ///LCD Clock Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> lclk{}; 
        ///LCD Clock Source Select
        enum class SourceVal {
            v0=0x00000000,     ///<Selects the default clock as the LCD clock source.
            v1=0x00000001,     ///<Selects the alternate clock as the LCD clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SourceVal> source{}; 
        namespace SourceValC{
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(source)::Type,SourceVal::v1> v1{};
        }
        }
        ///LCD Driver Enable
        enum class LcdenVal {
            v0=0x00000000,     ///<All front plane and back plane pins are disabled. The LCD controller system is also disabled, and all LCD waveform generation clocks are stopped. V LL3 is connected to V DD internally.
            v1=0x00000001,     ///<LCD controller driver system is enabled, and front plane and back plane waveforms are generated. All LCD pins, LCD_Pn, enabled using the LCD Pin Enable register, output an LCD driver waveform. The back plane pins output an LCD driver back plane waveform based on the settings of DUTY[2:0]. Charge pump or resistor bias is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,LcdenVal> lcden{}; 
        namespace LcdenValC{
            constexpr Register::FieldValue<decltype(lcden)::Type,LcdenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lcden)::Type,LcdenVal::v1> v1{};
        }
        }
        ///LCD Stop
        enum class LcdstpVal {
            v0=0x00000000,     ///<Allows the LCD driver, charge pump, resistor bias network, and voltage regulator to continue running during Stop mode.
            v1=0x00000001,     ///<Disables the LCD driver, charge pump, resistor bias network, and voltage regulator when MCU enters Stop mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,LcdstpVal> lcdstp{}; 
        namespace LcdstpValC{
            constexpr Register::FieldValue<decltype(lcdstp)::Type,LcdstpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lcdstp)::Type,LcdstpVal::v1> v1{};
        }
        }
        ///LCD Wait
        enum class LcdwaitVal {
            v0=0x00000000,     ///<Allows the LCD driver, charge pump, resistor bias network, and voltage regulator to continue running during Wait mode.
            v1=0x00000001,     ///<Disables the LCD driver, charge pump, resistor bias network, and voltage regulator when MCU enters Wait mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,LcdwaitVal> lcdwait{}; 
        namespace LcdwaitValC{
            constexpr Register::FieldValue<decltype(lcdwait)::Type,LcdwaitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lcdwait)::Type,LcdwaitVal::v1> v1{};
        }
        }
        ///LCD AlternateClock Divider
        enum class AltdivVal {
            v0=0x00000000,     ///<Divide factor = 1 (No divide)
            v1=0x00000001,     ///<Divide factor = 8
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,AltdivVal> altdiv{}; 
        namespace AltdivValC{
            constexpr Register::FieldValue<decltype(altdiv)::Type,AltdivVal::v0> v0{};
            constexpr Register::FieldValue<decltype(altdiv)::Type,AltdivVal::v1> v1{};
        }
        }
        ///LCD Fault Detection Complete Interrupt Enable
        enum class FdcienVal {
            v0=0x00000000,     ///<No interrupt request is generated by this event.
            v1=0x00000001,     ///<When a fault is detected and FDCF bit is set, this event causes an interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,FdcienVal> fdcien{}; 
        namespace FdcienValC{
            constexpr Register::FieldValue<decltype(fdcien)::Type,FdcienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdcien)::Type,FdcienVal::v1> v1{};
        }
        }
        ///LCD Frame Frequency Interrupt Enable
        enum class LcdienVal {
            v0=0x00000000,     ///<No interrupt request is generated by this event.
            v1=0x00000001,     ///<When LCDIF bit is set, this event causes an interrupt request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LcdienVal> lcdien{}; 
        namespace LcdienValC{
            constexpr Register::FieldValue<decltype(lcdien)::Type,LcdienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lcdien)::Type,LcdienVal::v1> v1{};
        }
        }
        ///Voltage Supply Control
        enum class VsupplyVal {
            v00=0x00000000,     ///<Drive V LL2 internally from V DD .
            v01=0x00000001,     ///<Drive V LL3 internally from V DD .
            v11=0x00000003,     ///<Drive V LL3 externally from V DD or drive V LL1 internally from V IREG .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,VsupplyVal> vsupply{}; 
        namespace VsupplyValC{
            constexpr Register::FieldValue<decltype(vsupply)::Type,VsupplyVal::v00> v00{};
            constexpr Register::FieldValue<decltype(vsupply)::Type,VsupplyVal::v01> v01{};
            constexpr Register::FieldValue<decltype(vsupply)::Type,VsupplyVal::v11> v11{};
        }
        }
        ///Load Adjust
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ladj{}; 
        ///High Reference Select
        enum class HrefselVal {
            v0=0x00000000,     ///<Divide input, V IREG = 1.0 V for 3 V glass.
            v1=0x00000001,     ///<Do not divide the input, V IREG = 1.67 V for 5 V glass.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,HrefselVal> hrefsel{}; 
        namespace HrefselValC{
            constexpr Register::FieldValue<decltype(hrefsel)::Type,HrefselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hrefsel)::Type,HrefselVal::v1> v1{};
        }
        }
        ///Charge Pump or Resistor Bias Select
        enum class CpselVal {
            v0=0x00000000,     ///<LCD charge pump is disabled. Resistor network selected. (The internal 1/3-bias is forced.)
            v1=0x00000001,     ///<LCD charge pump is selected. Resistor network disabled. (The internal 1/3-bias is forced.)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,CpselVal> cpsel{}; 
        namespace CpselValC{
            constexpr Register::FieldValue<decltype(cpsel)::Type,CpselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cpsel)::Type,CpselVal::v1> v1{};
        }
        }
        ///Regulated Voltage Trim
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> rvtrim{}; 
        ///Regulated Voltage Enable
        enum class RvenVal {
            v0=0x00000000,     ///<Regulated voltage disabled.
            v1=0x00000001,     ///<Regulated voltage enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RvenVal> rven{}; 
        namespace RvenValC{
            constexpr Register::FieldValue<decltype(rven)::Type,RvenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rven)::Type,RvenVal::v1> v1{};
        }
        }
    }
    namespace LcdAr{    ///<LCD Auxiliary Register
        using Addr = Register::Address<0x400be004,0xffff7f10,0,unsigned>;
        ///Blink-rate configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> brate{}; 
        ///Blink mode
        enum class BmodeVal {
            v0=0x00000000,     ///<Display blank during the blink period.
            v1=0x00000001,     ///<Display alternate display during blink period (Ignored if duty is 5 or greater).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,BmodeVal> bmode{}; 
        namespace BmodeValC{
            constexpr Register::FieldValue<decltype(bmode)::Type,BmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bmode)::Type,BmodeVal::v1> v1{};
        }
        }
        ///Blank display mode
        enum class BlankVal {
            v0=0x00000000,     ///<Normal or alternate display mode.
            v1=0x00000001,     ///<Blank display mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BlankVal> blank{}; 
        namespace BlankValC{
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::v0> v0{};
            constexpr Register::FieldValue<decltype(blank)::Type,BlankVal::v1> v1{};
        }
        }
        ///Alternate display mode
        enum class AltVal {
            v0=0x00000000,     ///<Normal display mode.
            v1=0x00000001,     ///<Alternate display mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AltVal> alt{}; 
        namespace AltValC{
            constexpr Register::FieldValue<decltype(alt)::Type,AltVal::v0> v0{};
            constexpr Register::FieldValue<decltype(alt)::Type,AltVal::v1> v1{};
        }
        }
        ///Blink command
        enum class BlinkVal {
            v0=0x00000000,     ///<Disables blinking.
            v1=0x00000001,     ///<Starts blinking at blinking frequency specified by LCD blink rate calculation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BlinkVal> blink{}; 
        namespace BlinkValC{
            constexpr Register::FieldValue<decltype(blink)::Type,BlinkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(blink)::Type,BlinkVal::v1> v1{};
        }
        }
        ///LCD Frame Frequency Interrupt flag
        enum class LcdifVal {
            v0=0x00000000,     ///<Frame frequency interrupt condition has not occurred.
            v1=0x00000001,     ///<Start of SLCD frame has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,LcdifVal> lcdif{}; 
        namespace LcdifValC{
            constexpr Register::FieldValue<decltype(lcdif)::Type,LcdifVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lcdif)::Type,LcdifVal::v1> v1{};
        }
        }
    }
    namespace LcdFdcr{    ///<LCD Fault Detect Control Register
        using Addr = Register::Address<0x400be008,0xffff8100,0,unsigned>;
        ///Fault Detect Pin ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> fdpinid{}; 
        ///Fault Detect Back Plane Enable
        enum class FdbpenVal {
            v0=0x00000000,     ///<Type of the selected pin under fault detect test is front plane.
            v1=0x00000001,     ///<Type of the selected pin under fault detect test is back plane.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FdbpenVal> fdbpen{}; 
        namespace FdbpenValC{
            constexpr Register::FieldValue<decltype(fdbpen)::Type,FdbpenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdbpen)::Type,FdbpenVal::v1> v1{};
        }
        }
        ///Fault Detect Enable
        enum class FdenVal {
            v0=0x00000000,     ///<Disable fault detection.
            v1=0x00000001,     ///<Enable fault detection.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FdenVal> fden{}; 
        namespace FdenValC{
            constexpr Register::FieldValue<decltype(fden)::Type,FdenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fden)::Type,FdenVal::v1> v1{};
        }
        }
        ///Fault Detect Sample Window Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> fdsww{}; 
        ///Fault Detect Clock Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> fdprs{}; 
    }
    namespace LcdFdsr{    ///<LCD Fault Detect Status Register
        using Addr = Register::Address<0x400be00c,0xffff7f00,0,unsigned>;
        ///Fault Detect Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fdcnt{}; 
        ///Fault Detection Complete Flag
        enum class FdcfVal {
            v0=0x00000000,     ///<Fault detection is not completed.
            v1=0x00000001,     ///<Fault detection is completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,FdcfVal> fdcf{}; 
        namespace FdcfValC{
            constexpr Register::FieldValue<decltype(fdcf)::Type,FdcfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fdcf)::Type,FdcfVal::v1> v1{};
        }
        }
    }
    namespace LcdPenl{    ///<LCD Pin Enable register
        using Addr = Register::Address<0x400be010,0x00000000,0,unsigned>;
        ///LCD Pin Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pen{}; 
    }
    namespace LcdPenh{    ///<LCD Pin Enable register
        using Addr = Register::Address<0x400be014,0x00000000,0,unsigned>;
        ///LCD Pin Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pen{}; 
    }
    namespace LcdBpenl{    ///<LCD Back Plane Enable register
        using Addr = Register::Address<0x400be018,0x00000000,0,unsigned>;
        ///Back Plane Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bpen{}; 
    }
    namespace LcdBpenh{    ///<LCD Back Plane Enable register
        using Addr = Register::Address<0x400be01c,0x00000000,0,unsigned>;
        ///Back Plane Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bpen{}; 
    }
    namespace LcdWf3to0{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be020,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf0{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf1{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf2{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf3{}; 
    }
    namespace LcdWf0{    ///<LCD Waveform Register 0.
        using Addr = Register::Address<0x400be020,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd0Val> bpalcd0{}; 
        namespace Bpalcd0ValC{
            constexpr Register::FieldValue<decltype(bpalcd0)::Type,Bpalcd0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd0)::Type,Bpalcd0Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd0Val> bpblcd0{}; 
        namespace Bpblcd0ValC{
            constexpr Register::FieldValue<decltype(bpblcd0)::Type,Bpblcd0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd0)::Type,Bpblcd0Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd0Val> bpclcd0{}; 
        namespace Bpclcd0ValC{
            constexpr Register::FieldValue<decltype(bpclcd0)::Type,Bpclcd0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd0)::Type,Bpclcd0Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd0Val> bpdlcd0{}; 
        namespace Bpdlcd0ValC{
            constexpr Register::FieldValue<decltype(bpdlcd0)::Type,Bpdlcd0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd0)::Type,Bpdlcd0Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd0Val> bpelcd0{}; 
        namespace Bpelcd0ValC{
            constexpr Register::FieldValue<decltype(bpelcd0)::Type,Bpelcd0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd0)::Type,Bpelcd0Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd0Val> bpflcd0{}; 
        namespace Bpflcd0ValC{
            constexpr Register::FieldValue<decltype(bpflcd0)::Type,Bpflcd0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd0)::Type,Bpflcd0Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd0Val> bpglcd0{}; 
        namespace Bpglcd0ValC{
            constexpr Register::FieldValue<decltype(bpglcd0)::Type,Bpglcd0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd0)::Type,Bpglcd0Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd0Val> bphlcd0{}; 
        namespace Bphlcd0ValC{
            constexpr Register::FieldValue<decltype(bphlcd0)::Type,Bphlcd0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd0)::Type,Bphlcd0Val::v1> v1{};
        }
        }
    }
    namespace LcdWf1{    ///<LCD Waveform Register 1.
        using Addr = Register::Address<0x400be021,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd1Val> bpalcd1{}; 
        namespace Bpalcd1ValC{
            constexpr Register::FieldValue<decltype(bpalcd1)::Type,Bpalcd1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd1)::Type,Bpalcd1Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd1Val> bpblcd1{}; 
        namespace Bpblcd1ValC{
            constexpr Register::FieldValue<decltype(bpblcd1)::Type,Bpblcd1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd1)::Type,Bpblcd1Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd1Val> bpclcd1{}; 
        namespace Bpclcd1ValC{
            constexpr Register::FieldValue<decltype(bpclcd1)::Type,Bpclcd1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd1)::Type,Bpclcd1Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd1Val> bpdlcd1{}; 
        namespace Bpdlcd1ValC{
            constexpr Register::FieldValue<decltype(bpdlcd1)::Type,Bpdlcd1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd1)::Type,Bpdlcd1Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd1Val> bpelcd1{}; 
        namespace Bpelcd1ValC{
            constexpr Register::FieldValue<decltype(bpelcd1)::Type,Bpelcd1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd1)::Type,Bpelcd1Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd1Val> bpflcd1{}; 
        namespace Bpflcd1ValC{
            constexpr Register::FieldValue<decltype(bpflcd1)::Type,Bpflcd1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd1)::Type,Bpflcd1Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd1Val> bpglcd1{}; 
        namespace Bpglcd1ValC{
            constexpr Register::FieldValue<decltype(bpglcd1)::Type,Bpglcd1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd1)::Type,Bpglcd1Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd1Val> bphlcd1{}; 
        namespace Bphlcd1ValC{
            constexpr Register::FieldValue<decltype(bphlcd1)::Type,Bphlcd1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd1)::Type,Bphlcd1Val::v1> v1{};
        }
        }
    }
    namespace LcdWf2{    ///<LCD Waveform Register 2.
        using Addr = Register::Address<0x400be022,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd2Val> bpalcd2{}; 
        namespace Bpalcd2ValC{
            constexpr Register::FieldValue<decltype(bpalcd2)::Type,Bpalcd2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd2)::Type,Bpalcd2Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd2Val> bpblcd2{}; 
        namespace Bpblcd2ValC{
            constexpr Register::FieldValue<decltype(bpblcd2)::Type,Bpblcd2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd2)::Type,Bpblcd2Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd2Val> bpclcd2{}; 
        namespace Bpclcd2ValC{
            constexpr Register::FieldValue<decltype(bpclcd2)::Type,Bpclcd2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd2)::Type,Bpclcd2Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd2Val> bpdlcd2{}; 
        namespace Bpdlcd2ValC{
            constexpr Register::FieldValue<decltype(bpdlcd2)::Type,Bpdlcd2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd2)::Type,Bpdlcd2Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd2Val> bpelcd2{}; 
        namespace Bpelcd2ValC{
            constexpr Register::FieldValue<decltype(bpelcd2)::Type,Bpelcd2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd2)::Type,Bpelcd2Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd2Val> bpflcd2{}; 
        namespace Bpflcd2ValC{
            constexpr Register::FieldValue<decltype(bpflcd2)::Type,Bpflcd2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd2)::Type,Bpflcd2Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd2Val> bpglcd2{}; 
        namespace Bpglcd2ValC{
            constexpr Register::FieldValue<decltype(bpglcd2)::Type,Bpglcd2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd2)::Type,Bpglcd2Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd2Val> bphlcd2{}; 
        namespace Bphlcd2ValC{
            constexpr Register::FieldValue<decltype(bphlcd2)::Type,Bphlcd2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd2)::Type,Bphlcd2Val::v1> v1{};
        }
        }
    }
    namespace LcdWf3{    ///<LCD Waveform Register 3.
        using Addr = Register::Address<0x400be023,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd3Val> bpalcd3{}; 
        namespace Bpalcd3ValC{
            constexpr Register::FieldValue<decltype(bpalcd3)::Type,Bpalcd3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd3)::Type,Bpalcd3Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd3Val> bpblcd3{}; 
        namespace Bpblcd3ValC{
            constexpr Register::FieldValue<decltype(bpblcd3)::Type,Bpblcd3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd3)::Type,Bpblcd3Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd3Val> bpclcd3{}; 
        namespace Bpclcd3ValC{
            constexpr Register::FieldValue<decltype(bpclcd3)::Type,Bpclcd3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd3)::Type,Bpclcd3Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd3Val> bpdlcd3{}; 
        namespace Bpdlcd3ValC{
            constexpr Register::FieldValue<decltype(bpdlcd3)::Type,Bpdlcd3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd3)::Type,Bpdlcd3Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd3Val> bpelcd3{}; 
        namespace Bpelcd3ValC{
            constexpr Register::FieldValue<decltype(bpelcd3)::Type,Bpelcd3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd3)::Type,Bpelcd3Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd3Val> bpflcd3{}; 
        namespace Bpflcd3ValC{
            constexpr Register::FieldValue<decltype(bpflcd3)::Type,Bpflcd3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd3)::Type,Bpflcd3Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd3Val> bpglcd3{}; 
        namespace Bpglcd3ValC{
            constexpr Register::FieldValue<decltype(bpglcd3)::Type,Bpglcd3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd3)::Type,Bpglcd3Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd3Val> bphlcd3{}; 
        namespace Bphlcd3ValC{
            constexpr Register::FieldValue<decltype(bphlcd3)::Type,Bphlcd3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd3)::Type,Bphlcd3Val::v1> v1{};
        }
        }
    }
    namespace LcdWf7to4{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be024,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf4{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf5{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf6{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf7{}; 
    }
    namespace LcdWf4{    ///<LCD Waveform Register 4.
        using Addr = Register::Address<0x400be024,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd4Val> bpalcd4{}; 
        namespace Bpalcd4ValC{
            constexpr Register::FieldValue<decltype(bpalcd4)::Type,Bpalcd4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd4)::Type,Bpalcd4Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd4Val> bpblcd4{}; 
        namespace Bpblcd4ValC{
            constexpr Register::FieldValue<decltype(bpblcd4)::Type,Bpblcd4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd4)::Type,Bpblcd4Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd4Val> bpclcd4{}; 
        namespace Bpclcd4ValC{
            constexpr Register::FieldValue<decltype(bpclcd4)::Type,Bpclcd4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd4)::Type,Bpclcd4Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd4Val> bpdlcd4{}; 
        namespace Bpdlcd4ValC{
            constexpr Register::FieldValue<decltype(bpdlcd4)::Type,Bpdlcd4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd4)::Type,Bpdlcd4Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd4Val> bpelcd4{}; 
        namespace Bpelcd4ValC{
            constexpr Register::FieldValue<decltype(bpelcd4)::Type,Bpelcd4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd4)::Type,Bpelcd4Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd4Val> bpflcd4{}; 
        namespace Bpflcd4ValC{
            constexpr Register::FieldValue<decltype(bpflcd4)::Type,Bpflcd4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd4)::Type,Bpflcd4Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd4Val> bpglcd4{}; 
        namespace Bpglcd4ValC{
            constexpr Register::FieldValue<decltype(bpglcd4)::Type,Bpglcd4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd4)::Type,Bpglcd4Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd4Val> bphlcd4{}; 
        namespace Bphlcd4ValC{
            constexpr Register::FieldValue<decltype(bphlcd4)::Type,Bphlcd4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd4)::Type,Bphlcd4Val::v1> v1{};
        }
        }
    }
    namespace LcdWf5{    ///<LCD Waveform Register 5.
        using Addr = Register::Address<0x400be025,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd5Val> bpalcd5{}; 
        namespace Bpalcd5ValC{
            constexpr Register::FieldValue<decltype(bpalcd5)::Type,Bpalcd5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd5)::Type,Bpalcd5Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd5Val> bpblcd5{}; 
        namespace Bpblcd5ValC{
            constexpr Register::FieldValue<decltype(bpblcd5)::Type,Bpblcd5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd5)::Type,Bpblcd5Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd5Val> bpclcd5{}; 
        namespace Bpclcd5ValC{
            constexpr Register::FieldValue<decltype(bpclcd5)::Type,Bpclcd5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd5)::Type,Bpclcd5Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd5Val> bpdlcd5{}; 
        namespace Bpdlcd5ValC{
            constexpr Register::FieldValue<decltype(bpdlcd5)::Type,Bpdlcd5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd5)::Type,Bpdlcd5Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd5Val> bpelcd5{}; 
        namespace Bpelcd5ValC{
            constexpr Register::FieldValue<decltype(bpelcd5)::Type,Bpelcd5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd5)::Type,Bpelcd5Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd5Val> bpflcd5{}; 
        namespace Bpflcd5ValC{
            constexpr Register::FieldValue<decltype(bpflcd5)::Type,Bpflcd5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd5)::Type,Bpflcd5Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd5Val> bpglcd5{}; 
        namespace Bpglcd5ValC{
            constexpr Register::FieldValue<decltype(bpglcd5)::Type,Bpglcd5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd5)::Type,Bpglcd5Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd5Val> bphlcd5{}; 
        namespace Bphlcd5ValC{
            constexpr Register::FieldValue<decltype(bphlcd5)::Type,Bphlcd5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd5)::Type,Bphlcd5Val::v1> v1{};
        }
        }
    }
    namespace LcdWf6{    ///<LCD Waveform Register 6.
        using Addr = Register::Address<0x400be026,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd6Val> bpalcd6{}; 
        namespace Bpalcd6ValC{
            constexpr Register::FieldValue<decltype(bpalcd6)::Type,Bpalcd6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd6)::Type,Bpalcd6Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd6Val> bpblcd6{}; 
        namespace Bpblcd6ValC{
            constexpr Register::FieldValue<decltype(bpblcd6)::Type,Bpblcd6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd6)::Type,Bpblcd6Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd6Val> bpclcd6{}; 
        namespace Bpclcd6ValC{
            constexpr Register::FieldValue<decltype(bpclcd6)::Type,Bpclcd6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd6)::Type,Bpclcd6Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd6Val> bpdlcd6{}; 
        namespace Bpdlcd6ValC{
            constexpr Register::FieldValue<decltype(bpdlcd6)::Type,Bpdlcd6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd6)::Type,Bpdlcd6Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd6Val> bpelcd6{}; 
        namespace Bpelcd6ValC{
            constexpr Register::FieldValue<decltype(bpelcd6)::Type,Bpelcd6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd6)::Type,Bpelcd6Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd6Val> bpflcd6{}; 
        namespace Bpflcd6ValC{
            constexpr Register::FieldValue<decltype(bpflcd6)::Type,Bpflcd6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd6)::Type,Bpflcd6Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd6Val> bpglcd6{}; 
        namespace Bpglcd6ValC{
            constexpr Register::FieldValue<decltype(bpglcd6)::Type,Bpglcd6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd6)::Type,Bpglcd6Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd6Val> bphlcd6{}; 
        namespace Bphlcd6ValC{
            constexpr Register::FieldValue<decltype(bphlcd6)::Type,Bphlcd6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd6)::Type,Bphlcd6Val::v1> v1{};
        }
        }
    }
    namespace LcdWf7{    ///<LCD Waveform Register 7.
        using Addr = Register::Address<0x400be027,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd7Val> bpalcd7{}; 
        namespace Bpalcd7ValC{
            constexpr Register::FieldValue<decltype(bpalcd7)::Type,Bpalcd7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd7)::Type,Bpalcd7Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd7Val> bpblcd7{}; 
        namespace Bpblcd7ValC{
            constexpr Register::FieldValue<decltype(bpblcd7)::Type,Bpblcd7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd7)::Type,Bpblcd7Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd7Val> bpclcd7{}; 
        namespace Bpclcd7ValC{
            constexpr Register::FieldValue<decltype(bpclcd7)::Type,Bpclcd7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd7)::Type,Bpclcd7Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd7Val> bpdlcd7{}; 
        namespace Bpdlcd7ValC{
            constexpr Register::FieldValue<decltype(bpdlcd7)::Type,Bpdlcd7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd7)::Type,Bpdlcd7Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd7Val> bpelcd7{}; 
        namespace Bpelcd7ValC{
            constexpr Register::FieldValue<decltype(bpelcd7)::Type,Bpelcd7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd7)::Type,Bpelcd7Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd7Val> bpflcd7{}; 
        namespace Bpflcd7ValC{
            constexpr Register::FieldValue<decltype(bpflcd7)::Type,Bpflcd7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd7)::Type,Bpflcd7Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd7Val> bpglcd7{}; 
        namespace Bpglcd7ValC{
            constexpr Register::FieldValue<decltype(bpglcd7)::Type,Bpglcd7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd7)::Type,Bpglcd7Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd7Val> bphlcd7{}; 
        namespace Bphlcd7ValC{
            constexpr Register::FieldValue<decltype(bphlcd7)::Type,Bphlcd7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd7)::Type,Bphlcd7Val::v1> v1{};
        }
        }
    }
    namespace LcdWf11to8{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be028,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf8{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf9{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf10{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf11{}; 
    }
    namespace LcdWf8{    ///<LCD Waveform Register 8.
        using Addr = Register::Address<0x400be028,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd8Val> bpalcd8{}; 
        namespace Bpalcd8ValC{
            constexpr Register::FieldValue<decltype(bpalcd8)::Type,Bpalcd8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd8)::Type,Bpalcd8Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd8Val> bpblcd8{}; 
        namespace Bpblcd8ValC{
            constexpr Register::FieldValue<decltype(bpblcd8)::Type,Bpblcd8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd8)::Type,Bpblcd8Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd8Val> bpclcd8{}; 
        namespace Bpclcd8ValC{
            constexpr Register::FieldValue<decltype(bpclcd8)::Type,Bpclcd8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd8)::Type,Bpclcd8Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd8Val> bpdlcd8{}; 
        namespace Bpdlcd8ValC{
            constexpr Register::FieldValue<decltype(bpdlcd8)::Type,Bpdlcd8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd8)::Type,Bpdlcd8Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd8Val> bpelcd8{}; 
        namespace Bpelcd8ValC{
            constexpr Register::FieldValue<decltype(bpelcd8)::Type,Bpelcd8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd8)::Type,Bpelcd8Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd8Val> bpflcd8{}; 
        namespace Bpflcd8ValC{
            constexpr Register::FieldValue<decltype(bpflcd8)::Type,Bpflcd8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd8)::Type,Bpflcd8Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd8Val> bpglcd8{}; 
        namespace Bpglcd8ValC{
            constexpr Register::FieldValue<decltype(bpglcd8)::Type,Bpglcd8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd8)::Type,Bpglcd8Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd8Val> bphlcd8{}; 
        namespace Bphlcd8ValC{
            constexpr Register::FieldValue<decltype(bphlcd8)::Type,Bphlcd8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd8)::Type,Bphlcd8Val::v1> v1{};
        }
        }
    }
    namespace LcdWf9{    ///<LCD Waveform Register 9.
        using Addr = Register::Address<0x400be029,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd9Val> bpalcd9{}; 
        namespace Bpalcd9ValC{
            constexpr Register::FieldValue<decltype(bpalcd9)::Type,Bpalcd9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd9)::Type,Bpalcd9Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd9Val> bpblcd9{}; 
        namespace Bpblcd9ValC{
            constexpr Register::FieldValue<decltype(bpblcd9)::Type,Bpblcd9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd9)::Type,Bpblcd9Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd9Val> bpclcd9{}; 
        namespace Bpclcd9ValC{
            constexpr Register::FieldValue<decltype(bpclcd9)::Type,Bpclcd9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd9)::Type,Bpclcd9Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd9Val> bpdlcd9{}; 
        namespace Bpdlcd9ValC{
            constexpr Register::FieldValue<decltype(bpdlcd9)::Type,Bpdlcd9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd9)::Type,Bpdlcd9Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd9Val> bpelcd9{}; 
        namespace Bpelcd9ValC{
            constexpr Register::FieldValue<decltype(bpelcd9)::Type,Bpelcd9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd9)::Type,Bpelcd9Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd9Val> bpflcd9{}; 
        namespace Bpflcd9ValC{
            constexpr Register::FieldValue<decltype(bpflcd9)::Type,Bpflcd9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd9)::Type,Bpflcd9Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd9Val> bpglcd9{}; 
        namespace Bpglcd9ValC{
            constexpr Register::FieldValue<decltype(bpglcd9)::Type,Bpglcd9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd9)::Type,Bpglcd9Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd9Val> bphlcd9{}; 
        namespace Bphlcd9ValC{
            constexpr Register::FieldValue<decltype(bphlcd9)::Type,Bphlcd9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd9)::Type,Bphlcd9Val::v1> v1{};
        }
        }
    }
    namespace LcdWf10{    ///<LCD Waveform Register 10.
        using Addr = Register::Address<0x400be02a,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd10Val> bpalcd10{}; 
        namespace Bpalcd10ValC{
            constexpr Register::FieldValue<decltype(bpalcd10)::Type,Bpalcd10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd10)::Type,Bpalcd10Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd10Val> bpblcd10{}; 
        namespace Bpblcd10ValC{
            constexpr Register::FieldValue<decltype(bpblcd10)::Type,Bpblcd10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd10)::Type,Bpblcd10Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd10Val> bpclcd10{}; 
        namespace Bpclcd10ValC{
            constexpr Register::FieldValue<decltype(bpclcd10)::Type,Bpclcd10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd10)::Type,Bpclcd10Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd10Val> bpdlcd10{}; 
        namespace Bpdlcd10ValC{
            constexpr Register::FieldValue<decltype(bpdlcd10)::Type,Bpdlcd10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd10)::Type,Bpdlcd10Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd10Val> bpelcd10{}; 
        namespace Bpelcd10ValC{
            constexpr Register::FieldValue<decltype(bpelcd10)::Type,Bpelcd10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd10)::Type,Bpelcd10Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd10Val> bpflcd10{}; 
        namespace Bpflcd10ValC{
            constexpr Register::FieldValue<decltype(bpflcd10)::Type,Bpflcd10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd10)::Type,Bpflcd10Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd10Val> bpglcd10{}; 
        namespace Bpglcd10ValC{
            constexpr Register::FieldValue<decltype(bpglcd10)::Type,Bpglcd10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd10)::Type,Bpglcd10Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd10Val> bphlcd10{}; 
        namespace Bphlcd10ValC{
            constexpr Register::FieldValue<decltype(bphlcd10)::Type,Bphlcd10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd10)::Type,Bphlcd10Val::v1> v1{};
        }
        }
    }
    namespace LcdWf11{    ///<LCD Waveform Register 11.
        using Addr = Register::Address<0x400be02b,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd11Val> bpalcd11{}; 
        namespace Bpalcd11ValC{
            constexpr Register::FieldValue<decltype(bpalcd11)::Type,Bpalcd11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd11)::Type,Bpalcd11Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd11Val> bpblcd11{}; 
        namespace Bpblcd11ValC{
            constexpr Register::FieldValue<decltype(bpblcd11)::Type,Bpblcd11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd11)::Type,Bpblcd11Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd11Val> bpclcd11{}; 
        namespace Bpclcd11ValC{
            constexpr Register::FieldValue<decltype(bpclcd11)::Type,Bpclcd11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd11)::Type,Bpclcd11Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd11Val> bpdlcd11{}; 
        namespace Bpdlcd11ValC{
            constexpr Register::FieldValue<decltype(bpdlcd11)::Type,Bpdlcd11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd11)::Type,Bpdlcd11Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd11Val> bpelcd11{}; 
        namespace Bpelcd11ValC{
            constexpr Register::FieldValue<decltype(bpelcd11)::Type,Bpelcd11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd11)::Type,Bpelcd11Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd11Val> bpflcd11{}; 
        namespace Bpflcd11ValC{
            constexpr Register::FieldValue<decltype(bpflcd11)::Type,Bpflcd11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd11)::Type,Bpflcd11Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd11Val> bpglcd11{}; 
        namespace Bpglcd11ValC{
            constexpr Register::FieldValue<decltype(bpglcd11)::Type,Bpglcd11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd11)::Type,Bpglcd11Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd11Val> bphlcd11{}; 
        namespace Bphlcd11ValC{
            constexpr Register::FieldValue<decltype(bphlcd11)::Type,Bphlcd11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd11)::Type,Bphlcd11Val::v1> v1{};
        }
        }
    }
    namespace LcdWf15to12{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be02c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf12{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf13{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf14{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf15{}; 
    }
    namespace LcdWf12{    ///<LCD Waveform Register 12.
        using Addr = Register::Address<0x400be02c,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd12Val> bpalcd12{}; 
        namespace Bpalcd12ValC{
            constexpr Register::FieldValue<decltype(bpalcd12)::Type,Bpalcd12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd12)::Type,Bpalcd12Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd12Val> bpblcd12{}; 
        namespace Bpblcd12ValC{
            constexpr Register::FieldValue<decltype(bpblcd12)::Type,Bpblcd12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd12)::Type,Bpblcd12Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd12Val> bpclcd12{}; 
        namespace Bpclcd12ValC{
            constexpr Register::FieldValue<decltype(bpclcd12)::Type,Bpclcd12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd12)::Type,Bpclcd12Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd12Val> bpdlcd12{}; 
        namespace Bpdlcd12ValC{
            constexpr Register::FieldValue<decltype(bpdlcd12)::Type,Bpdlcd12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd12)::Type,Bpdlcd12Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd12Val> bpelcd12{}; 
        namespace Bpelcd12ValC{
            constexpr Register::FieldValue<decltype(bpelcd12)::Type,Bpelcd12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd12)::Type,Bpelcd12Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd12Val> bpflcd12{}; 
        namespace Bpflcd12ValC{
            constexpr Register::FieldValue<decltype(bpflcd12)::Type,Bpflcd12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd12)::Type,Bpflcd12Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd12Val> bpglcd12{}; 
        namespace Bpglcd12ValC{
            constexpr Register::FieldValue<decltype(bpglcd12)::Type,Bpglcd12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd12)::Type,Bpglcd12Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd12Val> bphlcd12{}; 
        namespace Bphlcd12ValC{
            constexpr Register::FieldValue<decltype(bphlcd12)::Type,Bphlcd12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd12)::Type,Bphlcd12Val::v1> v1{};
        }
        }
    }
    namespace LcdWf13{    ///<LCD Waveform Register 13.
        using Addr = Register::Address<0x400be02d,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd13Val> bpalcd13{}; 
        namespace Bpalcd13ValC{
            constexpr Register::FieldValue<decltype(bpalcd13)::Type,Bpalcd13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd13)::Type,Bpalcd13Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd13Val> bpblcd13{}; 
        namespace Bpblcd13ValC{
            constexpr Register::FieldValue<decltype(bpblcd13)::Type,Bpblcd13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd13)::Type,Bpblcd13Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd13Val> bpclcd13{}; 
        namespace Bpclcd13ValC{
            constexpr Register::FieldValue<decltype(bpclcd13)::Type,Bpclcd13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd13)::Type,Bpclcd13Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd13Val> bpdlcd13{}; 
        namespace Bpdlcd13ValC{
            constexpr Register::FieldValue<decltype(bpdlcd13)::Type,Bpdlcd13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd13)::Type,Bpdlcd13Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd13Val> bpelcd13{}; 
        namespace Bpelcd13ValC{
            constexpr Register::FieldValue<decltype(bpelcd13)::Type,Bpelcd13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd13)::Type,Bpelcd13Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd13Val> bpflcd13{}; 
        namespace Bpflcd13ValC{
            constexpr Register::FieldValue<decltype(bpflcd13)::Type,Bpflcd13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd13)::Type,Bpflcd13Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd13Val> bpglcd13{}; 
        namespace Bpglcd13ValC{
            constexpr Register::FieldValue<decltype(bpglcd13)::Type,Bpglcd13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd13)::Type,Bpglcd13Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd13Val> bphlcd13{}; 
        namespace Bphlcd13ValC{
            constexpr Register::FieldValue<decltype(bphlcd13)::Type,Bphlcd13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd13)::Type,Bphlcd13Val::v1> v1{};
        }
        }
    }
    namespace LcdWf14{    ///<LCD Waveform Register 14.
        using Addr = Register::Address<0x400be02e,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd14Val> bpalcd14{}; 
        namespace Bpalcd14ValC{
            constexpr Register::FieldValue<decltype(bpalcd14)::Type,Bpalcd14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd14)::Type,Bpalcd14Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd14Val> bpblcd14{}; 
        namespace Bpblcd14ValC{
            constexpr Register::FieldValue<decltype(bpblcd14)::Type,Bpblcd14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd14)::Type,Bpblcd14Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd14Val> bpclcd14{}; 
        namespace Bpclcd14ValC{
            constexpr Register::FieldValue<decltype(bpclcd14)::Type,Bpclcd14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd14)::Type,Bpclcd14Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd14Val> bpdlcd14{}; 
        namespace Bpdlcd14ValC{
            constexpr Register::FieldValue<decltype(bpdlcd14)::Type,Bpdlcd14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd14)::Type,Bpdlcd14Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd14Val> bpelcd14{}; 
        namespace Bpelcd14ValC{
            constexpr Register::FieldValue<decltype(bpelcd14)::Type,Bpelcd14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd14)::Type,Bpelcd14Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd14Val> bpflcd14{}; 
        namespace Bpflcd14ValC{
            constexpr Register::FieldValue<decltype(bpflcd14)::Type,Bpflcd14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd14)::Type,Bpflcd14Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd14Val> bpglcd14{}; 
        namespace Bpglcd14ValC{
            constexpr Register::FieldValue<decltype(bpglcd14)::Type,Bpglcd14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd14)::Type,Bpglcd14Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd14Val> bphlcd14{}; 
        namespace Bphlcd14ValC{
            constexpr Register::FieldValue<decltype(bphlcd14)::Type,Bphlcd14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd14)::Type,Bphlcd14Val::v1> v1{};
        }
        }
    }
    namespace LcdWf15{    ///<LCD Waveform Register 15.
        using Addr = Register::Address<0x400be02f,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd15Val> bpalcd15{}; 
        namespace Bpalcd15ValC{
            constexpr Register::FieldValue<decltype(bpalcd15)::Type,Bpalcd15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd15)::Type,Bpalcd15Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd15Val> bpblcd15{}; 
        namespace Bpblcd15ValC{
            constexpr Register::FieldValue<decltype(bpblcd15)::Type,Bpblcd15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd15)::Type,Bpblcd15Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd15Val> bpclcd15{}; 
        namespace Bpclcd15ValC{
            constexpr Register::FieldValue<decltype(bpclcd15)::Type,Bpclcd15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd15)::Type,Bpclcd15Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd15Val> bpdlcd15{}; 
        namespace Bpdlcd15ValC{
            constexpr Register::FieldValue<decltype(bpdlcd15)::Type,Bpdlcd15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd15)::Type,Bpdlcd15Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd15Val> bpelcd15{}; 
        namespace Bpelcd15ValC{
            constexpr Register::FieldValue<decltype(bpelcd15)::Type,Bpelcd15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd15)::Type,Bpelcd15Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd15Val> bpflcd15{}; 
        namespace Bpflcd15ValC{
            constexpr Register::FieldValue<decltype(bpflcd15)::Type,Bpflcd15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd15)::Type,Bpflcd15Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd15Val> bpglcd15{}; 
        namespace Bpglcd15ValC{
            constexpr Register::FieldValue<decltype(bpglcd15)::Type,Bpglcd15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd15)::Type,Bpglcd15Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd15Val> bphlcd15{}; 
        namespace Bphlcd15ValC{
            constexpr Register::FieldValue<decltype(bphlcd15)::Type,Bphlcd15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd15)::Type,Bphlcd15Val::v1> v1{};
        }
        }
    }
    namespace LcdWf19to16{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be030,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf16{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf17{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf18{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf19{}; 
    }
    namespace LcdWf16{    ///<LCD Waveform Register 16.
        using Addr = Register::Address<0x400be030,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd16Val> bpalcd16{}; 
        namespace Bpalcd16ValC{
            constexpr Register::FieldValue<decltype(bpalcd16)::Type,Bpalcd16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd16)::Type,Bpalcd16Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd16Val> bpblcd16{}; 
        namespace Bpblcd16ValC{
            constexpr Register::FieldValue<decltype(bpblcd16)::Type,Bpblcd16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd16)::Type,Bpblcd16Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd16Val> bpclcd16{}; 
        namespace Bpclcd16ValC{
            constexpr Register::FieldValue<decltype(bpclcd16)::Type,Bpclcd16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd16)::Type,Bpclcd16Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd16Val> bpdlcd16{}; 
        namespace Bpdlcd16ValC{
            constexpr Register::FieldValue<decltype(bpdlcd16)::Type,Bpdlcd16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd16)::Type,Bpdlcd16Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd16Val> bpelcd16{}; 
        namespace Bpelcd16ValC{
            constexpr Register::FieldValue<decltype(bpelcd16)::Type,Bpelcd16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd16)::Type,Bpelcd16Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd16Val> bpflcd16{}; 
        namespace Bpflcd16ValC{
            constexpr Register::FieldValue<decltype(bpflcd16)::Type,Bpflcd16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd16)::Type,Bpflcd16Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd16Val> bpglcd16{}; 
        namespace Bpglcd16ValC{
            constexpr Register::FieldValue<decltype(bpglcd16)::Type,Bpglcd16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd16)::Type,Bpglcd16Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd16Val> bphlcd16{}; 
        namespace Bphlcd16ValC{
            constexpr Register::FieldValue<decltype(bphlcd16)::Type,Bphlcd16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd16)::Type,Bphlcd16Val::v1> v1{};
        }
        }
    }
    namespace LcdWf17{    ///<LCD Waveform Register 17.
        using Addr = Register::Address<0x400be031,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd17Val> bpalcd17{}; 
        namespace Bpalcd17ValC{
            constexpr Register::FieldValue<decltype(bpalcd17)::Type,Bpalcd17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd17)::Type,Bpalcd17Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd17Val> bpblcd17{}; 
        namespace Bpblcd17ValC{
            constexpr Register::FieldValue<decltype(bpblcd17)::Type,Bpblcd17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd17)::Type,Bpblcd17Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd17Val> bpclcd17{}; 
        namespace Bpclcd17ValC{
            constexpr Register::FieldValue<decltype(bpclcd17)::Type,Bpclcd17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd17)::Type,Bpclcd17Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd17Val> bpdlcd17{}; 
        namespace Bpdlcd17ValC{
            constexpr Register::FieldValue<decltype(bpdlcd17)::Type,Bpdlcd17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd17)::Type,Bpdlcd17Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd17Val> bpelcd17{}; 
        namespace Bpelcd17ValC{
            constexpr Register::FieldValue<decltype(bpelcd17)::Type,Bpelcd17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd17)::Type,Bpelcd17Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd17Val> bpflcd17{}; 
        namespace Bpflcd17ValC{
            constexpr Register::FieldValue<decltype(bpflcd17)::Type,Bpflcd17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd17)::Type,Bpflcd17Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd17Val> bpglcd17{}; 
        namespace Bpglcd17ValC{
            constexpr Register::FieldValue<decltype(bpglcd17)::Type,Bpglcd17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd17)::Type,Bpglcd17Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd17Val> bphlcd17{}; 
        namespace Bphlcd17ValC{
            constexpr Register::FieldValue<decltype(bphlcd17)::Type,Bphlcd17Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd17)::Type,Bphlcd17Val::v1> v1{};
        }
        }
    }
    namespace LcdWf18{    ///<LCD Waveform Register 18.
        using Addr = Register::Address<0x400be032,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd18Val> bpalcd18{}; 
        namespace Bpalcd18ValC{
            constexpr Register::FieldValue<decltype(bpalcd18)::Type,Bpalcd18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd18)::Type,Bpalcd18Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd18Val> bpblcd18{}; 
        namespace Bpblcd18ValC{
            constexpr Register::FieldValue<decltype(bpblcd18)::Type,Bpblcd18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd18)::Type,Bpblcd18Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd18Val> bpclcd18{}; 
        namespace Bpclcd18ValC{
            constexpr Register::FieldValue<decltype(bpclcd18)::Type,Bpclcd18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd18)::Type,Bpclcd18Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd18Val> bpdlcd18{}; 
        namespace Bpdlcd18ValC{
            constexpr Register::FieldValue<decltype(bpdlcd18)::Type,Bpdlcd18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd18)::Type,Bpdlcd18Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd18Val> bpelcd18{}; 
        namespace Bpelcd18ValC{
            constexpr Register::FieldValue<decltype(bpelcd18)::Type,Bpelcd18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd18)::Type,Bpelcd18Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd18Val> bpflcd18{}; 
        namespace Bpflcd18ValC{
            constexpr Register::FieldValue<decltype(bpflcd18)::Type,Bpflcd18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd18)::Type,Bpflcd18Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd18Val> bpglcd18{}; 
        namespace Bpglcd18ValC{
            constexpr Register::FieldValue<decltype(bpglcd18)::Type,Bpglcd18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd18)::Type,Bpglcd18Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd18Val> bphlcd18{}; 
        namespace Bphlcd18ValC{
            constexpr Register::FieldValue<decltype(bphlcd18)::Type,Bphlcd18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd18)::Type,Bphlcd18Val::v1> v1{};
        }
        }
    }
    namespace LcdWf19{    ///<LCD Waveform Register 19.
        using Addr = Register::Address<0x400be033,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd19Val> bpalcd19{}; 
        namespace Bpalcd19ValC{
            constexpr Register::FieldValue<decltype(bpalcd19)::Type,Bpalcd19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd19)::Type,Bpalcd19Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd19Val> bpblcd19{}; 
        namespace Bpblcd19ValC{
            constexpr Register::FieldValue<decltype(bpblcd19)::Type,Bpblcd19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd19)::Type,Bpblcd19Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd19Val> bpclcd19{}; 
        namespace Bpclcd19ValC{
            constexpr Register::FieldValue<decltype(bpclcd19)::Type,Bpclcd19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd19)::Type,Bpclcd19Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd19Val> bpdlcd19{}; 
        namespace Bpdlcd19ValC{
            constexpr Register::FieldValue<decltype(bpdlcd19)::Type,Bpdlcd19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd19)::Type,Bpdlcd19Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd19Val> bpelcd19{}; 
        namespace Bpelcd19ValC{
            constexpr Register::FieldValue<decltype(bpelcd19)::Type,Bpelcd19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd19)::Type,Bpelcd19Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd19Val> bpflcd19{}; 
        namespace Bpflcd19ValC{
            constexpr Register::FieldValue<decltype(bpflcd19)::Type,Bpflcd19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd19)::Type,Bpflcd19Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd19Val> bpglcd19{}; 
        namespace Bpglcd19ValC{
            constexpr Register::FieldValue<decltype(bpglcd19)::Type,Bpglcd19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd19)::Type,Bpglcd19Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd19Val> bphlcd19{}; 
        namespace Bphlcd19ValC{
            constexpr Register::FieldValue<decltype(bphlcd19)::Type,Bphlcd19Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd19)::Type,Bphlcd19Val::v1> v1{};
        }
        }
    }
    namespace LcdWf23to20{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be034,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf20{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf21{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf22{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf23{}; 
    }
    namespace LcdWf20{    ///<LCD Waveform Register 20.
        using Addr = Register::Address<0x400be034,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd20Val> bpalcd20{}; 
        namespace Bpalcd20ValC{
            constexpr Register::FieldValue<decltype(bpalcd20)::Type,Bpalcd20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd20)::Type,Bpalcd20Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd20Val> bpblcd20{}; 
        namespace Bpblcd20ValC{
            constexpr Register::FieldValue<decltype(bpblcd20)::Type,Bpblcd20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd20)::Type,Bpblcd20Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd20Val> bpclcd20{}; 
        namespace Bpclcd20ValC{
            constexpr Register::FieldValue<decltype(bpclcd20)::Type,Bpclcd20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd20)::Type,Bpclcd20Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd20Val> bpdlcd20{}; 
        namespace Bpdlcd20ValC{
            constexpr Register::FieldValue<decltype(bpdlcd20)::Type,Bpdlcd20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd20)::Type,Bpdlcd20Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd20Val> bpelcd20{}; 
        namespace Bpelcd20ValC{
            constexpr Register::FieldValue<decltype(bpelcd20)::Type,Bpelcd20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd20)::Type,Bpelcd20Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd20Val> bpflcd20{}; 
        namespace Bpflcd20ValC{
            constexpr Register::FieldValue<decltype(bpflcd20)::Type,Bpflcd20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd20)::Type,Bpflcd20Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd20Val> bpglcd20{}; 
        namespace Bpglcd20ValC{
            constexpr Register::FieldValue<decltype(bpglcd20)::Type,Bpglcd20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd20)::Type,Bpglcd20Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd20Val> bphlcd20{}; 
        namespace Bphlcd20ValC{
            constexpr Register::FieldValue<decltype(bphlcd20)::Type,Bphlcd20Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd20)::Type,Bphlcd20Val::v1> v1{};
        }
        }
    }
    namespace LcdWf21{    ///<LCD Waveform Register 21.
        using Addr = Register::Address<0x400be035,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd21Val> bpalcd21{}; 
        namespace Bpalcd21ValC{
            constexpr Register::FieldValue<decltype(bpalcd21)::Type,Bpalcd21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd21)::Type,Bpalcd21Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd21Val> bpblcd21{}; 
        namespace Bpblcd21ValC{
            constexpr Register::FieldValue<decltype(bpblcd21)::Type,Bpblcd21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd21)::Type,Bpblcd21Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd21Val> bpclcd21{}; 
        namespace Bpclcd21ValC{
            constexpr Register::FieldValue<decltype(bpclcd21)::Type,Bpclcd21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd21)::Type,Bpclcd21Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd21Val> bpdlcd21{}; 
        namespace Bpdlcd21ValC{
            constexpr Register::FieldValue<decltype(bpdlcd21)::Type,Bpdlcd21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd21)::Type,Bpdlcd21Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd21Val> bpelcd21{}; 
        namespace Bpelcd21ValC{
            constexpr Register::FieldValue<decltype(bpelcd21)::Type,Bpelcd21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd21)::Type,Bpelcd21Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd21Val> bpflcd21{}; 
        namespace Bpflcd21ValC{
            constexpr Register::FieldValue<decltype(bpflcd21)::Type,Bpflcd21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd21)::Type,Bpflcd21Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd21Val> bpglcd21{}; 
        namespace Bpglcd21ValC{
            constexpr Register::FieldValue<decltype(bpglcd21)::Type,Bpglcd21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd21)::Type,Bpglcd21Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd21Val> bphlcd21{}; 
        namespace Bphlcd21ValC{
            constexpr Register::FieldValue<decltype(bphlcd21)::Type,Bphlcd21Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd21)::Type,Bphlcd21Val::v1> v1{};
        }
        }
    }
    namespace LcdWf22{    ///<LCD Waveform Register 22.
        using Addr = Register::Address<0x400be036,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd22Val> bpalcd22{}; 
        namespace Bpalcd22ValC{
            constexpr Register::FieldValue<decltype(bpalcd22)::Type,Bpalcd22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd22)::Type,Bpalcd22Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd22Val> bpblcd22{}; 
        namespace Bpblcd22ValC{
            constexpr Register::FieldValue<decltype(bpblcd22)::Type,Bpblcd22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd22)::Type,Bpblcd22Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd22Val> bpclcd22{}; 
        namespace Bpclcd22ValC{
            constexpr Register::FieldValue<decltype(bpclcd22)::Type,Bpclcd22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd22)::Type,Bpclcd22Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd22Val> bpdlcd22{}; 
        namespace Bpdlcd22ValC{
            constexpr Register::FieldValue<decltype(bpdlcd22)::Type,Bpdlcd22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd22)::Type,Bpdlcd22Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd22Val> bpelcd22{}; 
        namespace Bpelcd22ValC{
            constexpr Register::FieldValue<decltype(bpelcd22)::Type,Bpelcd22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd22)::Type,Bpelcd22Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd22Val> bpflcd22{}; 
        namespace Bpflcd22ValC{
            constexpr Register::FieldValue<decltype(bpflcd22)::Type,Bpflcd22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd22)::Type,Bpflcd22Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd22Val> bpglcd22{}; 
        namespace Bpglcd22ValC{
            constexpr Register::FieldValue<decltype(bpglcd22)::Type,Bpglcd22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd22)::Type,Bpglcd22Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd22Val> bphlcd22{}; 
        namespace Bphlcd22ValC{
            constexpr Register::FieldValue<decltype(bphlcd22)::Type,Bphlcd22Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd22)::Type,Bphlcd22Val::v1> v1{};
        }
        }
    }
    namespace LcdWf23{    ///<LCD Waveform Register 23.
        using Addr = Register::Address<0x400be037,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd23Val> bpalcd23{}; 
        namespace Bpalcd23ValC{
            constexpr Register::FieldValue<decltype(bpalcd23)::Type,Bpalcd23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd23)::Type,Bpalcd23Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd23Val> bpblcd23{}; 
        namespace Bpblcd23ValC{
            constexpr Register::FieldValue<decltype(bpblcd23)::Type,Bpblcd23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd23)::Type,Bpblcd23Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd23Val> bpclcd23{}; 
        namespace Bpclcd23ValC{
            constexpr Register::FieldValue<decltype(bpclcd23)::Type,Bpclcd23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd23)::Type,Bpclcd23Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd23Val> bpdlcd23{}; 
        namespace Bpdlcd23ValC{
            constexpr Register::FieldValue<decltype(bpdlcd23)::Type,Bpdlcd23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd23)::Type,Bpdlcd23Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd23Val> bpelcd23{}; 
        namespace Bpelcd23ValC{
            constexpr Register::FieldValue<decltype(bpelcd23)::Type,Bpelcd23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd23)::Type,Bpelcd23Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd23Val> bpflcd23{}; 
        namespace Bpflcd23ValC{
            constexpr Register::FieldValue<decltype(bpflcd23)::Type,Bpflcd23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd23)::Type,Bpflcd23Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd23Val> bpglcd23{}; 
        namespace Bpglcd23ValC{
            constexpr Register::FieldValue<decltype(bpglcd23)::Type,Bpglcd23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd23)::Type,Bpglcd23Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd23Val> bphlcd23{}; 
        namespace Bphlcd23ValC{
            constexpr Register::FieldValue<decltype(bphlcd23)::Type,Bphlcd23Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd23)::Type,Bphlcd23Val::v1> v1{};
        }
        }
    }
    namespace LcdWf27to24{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be038,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf24{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf25{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf26{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf27{}; 
    }
    namespace LcdWf24{    ///<LCD Waveform Register 24.
        using Addr = Register::Address<0x400be038,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd24Val> bpalcd24{}; 
        namespace Bpalcd24ValC{
            constexpr Register::FieldValue<decltype(bpalcd24)::Type,Bpalcd24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd24)::Type,Bpalcd24Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd24Val> bpblcd24{}; 
        namespace Bpblcd24ValC{
            constexpr Register::FieldValue<decltype(bpblcd24)::Type,Bpblcd24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd24)::Type,Bpblcd24Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd24Val> bpclcd24{}; 
        namespace Bpclcd24ValC{
            constexpr Register::FieldValue<decltype(bpclcd24)::Type,Bpclcd24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd24)::Type,Bpclcd24Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd24Val> bpdlcd24{}; 
        namespace Bpdlcd24ValC{
            constexpr Register::FieldValue<decltype(bpdlcd24)::Type,Bpdlcd24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd24)::Type,Bpdlcd24Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd24Val> bpelcd24{}; 
        namespace Bpelcd24ValC{
            constexpr Register::FieldValue<decltype(bpelcd24)::Type,Bpelcd24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd24)::Type,Bpelcd24Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd24Val> bpflcd24{}; 
        namespace Bpflcd24ValC{
            constexpr Register::FieldValue<decltype(bpflcd24)::Type,Bpflcd24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd24)::Type,Bpflcd24Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd24Val> bpglcd24{}; 
        namespace Bpglcd24ValC{
            constexpr Register::FieldValue<decltype(bpglcd24)::Type,Bpglcd24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd24)::Type,Bpglcd24Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd24Val> bphlcd24{}; 
        namespace Bphlcd24ValC{
            constexpr Register::FieldValue<decltype(bphlcd24)::Type,Bphlcd24Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd24)::Type,Bphlcd24Val::v1> v1{};
        }
        }
    }
    namespace LcdWf25{    ///<LCD Waveform Register 25.
        using Addr = Register::Address<0x400be039,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd25Val> bpalcd25{}; 
        namespace Bpalcd25ValC{
            constexpr Register::FieldValue<decltype(bpalcd25)::Type,Bpalcd25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd25)::Type,Bpalcd25Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd25Val> bpblcd25{}; 
        namespace Bpblcd25ValC{
            constexpr Register::FieldValue<decltype(bpblcd25)::Type,Bpblcd25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd25)::Type,Bpblcd25Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd25Val> bpclcd25{}; 
        namespace Bpclcd25ValC{
            constexpr Register::FieldValue<decltype(bpclcd25)::Type,Bpclcd25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd25)::Type,Bpclcd25Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd25Val> bpdlcd25{}; 
        namespace Bpdlcd25ValC{
            constexpr Register::FieldValue<decltype(bpdlcd25)::Type,Bpdlcd25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd25)::Type,Bpdlcd25Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd25Val> bpelcd25{}; 
        namespace Bpelcd25ValC{
            constexpr Register::FieldValue<decltype(bpelcd25)::Type,Bpelcd25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd25)::Type,Bpelcd25Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd25Val> bpflcd25{}; 
        namespace Bpflcd25ValC{
            constexpr Register::FieldValue<decltype(bpflcd25)::Type,Bpflcd25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd25)::Type,Bpflcd25Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd25Val> bpglcd25{}; 
        namespace Bpglcd25ValC{
            constexpr Register::FieldValue<decltype(bpglcd25)::Type,Bpglcd25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd25)::Type,Bpglcd25Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd25Val> bphlcd25{}; 
        namespace Bphlcd25ValC{
            constexpr Register::FieldValue<decltype(bphlcd25)::Type,Bphlcd25Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd25)::Type,Bphlcd25Val::v1> v1{};
        }
        }
    }
    namespace LcdWf26{    ///<LCD Waveform Register 26.
        using Addr = Register::Address<0x400be03a,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd26Val> bpalcd26{}; 
        namespace Bpalcd26ValC{
            constexpr Register::FieldValue<decltype(bpalcd26)::Type,Bpalcd26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd26)::Type,Bpalcd26Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd26Val> bpblcd26{}; 
        namespace Bpblcd26ValC{
            constexpr Register::FieldValue<decltype(bpblcd26)::Type,Bpblcd26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd26)::Type,Bpblcd26Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd26Val> bpclcd26{}; 
        namespace Bpclcd26ValC{
            constexpr Register::FieldValue<decltype(bpclcd26)::Type,Bpclcd26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd26)::Type,Bpclcd26Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd26Val> bpdlcd26{}; 
        namespace Bpdlcd26ValC{
            constexpr Register::FieldValue<decltype(bpdlcd26)::Type,Bpdlcd26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd26)::Type,Bpdlcd26Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd26Val> bpelcd26{}; 
        namespace Bpelcd26ValC{
            constexpr Register::FieldValue<decltype(bpelcd26)::Type,Bpelcd26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd26)::Type,Bpelcd26Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd26Val> bpflcd26{}; 
        namespace Bpflcd26ValC{
            constexpr Register::FieldValue<decltype(bpflcd26)::Type,Bpflcd26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd26)::Type,Bpflcd26Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd26Val> bpglcd26{}; 
        namespace Bpglcd26ValC{
            constexpr Register::FieldValue<decltype(bpglcd26)::Type,Bpglcd26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd26)::Type,Bpglcd26Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd26Val> bphlcd26{}; 
        namespace Bphlcd26ValC{
            constexpr Register::FieldValue<decltype(bphlcd26)::Type,Bphlcd26Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd26)::Type,Bphlcd26Val::v1> v1{};
        }
        }
    }
    namespace LcdWf27{    ///<LCD Waveform Register 27.
        using Addr = Register::Address<0x400be03b,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd27Val> bpalcd27{}; 
        namespace Bpalcd27ValC{
            constexpr Register::FieldValue<decltype(bpalcd27)::Type,Bpalcd27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd27)::Type,Bpalcd27Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd27Val> bpblcd27{}; 
        namespace Bpblcd27ValC{
            constexpr Register::FieldValue<decltype(bpblcd27)::Type,Bpblcd27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd27)::Type,Bpblcd27Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd27Val> bpclcd27{}; 
        namespace Bpclcd27ValC{
            constexpr Register::FieldValue<decltype(bpclcd27)::Type,Bpclcd27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd27)::Type,Bpclcd27Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd27Val> bpdlcd27{}; 
        namespace Bpdlcd27ValC{
            constexpr Register::FieldValue<decltype(bpdlcd27)::Type,Bpdlcd27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd27)::Type,Bpdlcd27Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd27Val> bpelcd27{}; 
        namespace Bpelcd27ValC{
            constexpr Register::FieldValue<decltype(bpelcd27)::Type,Bpelcd27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd27)::Type,Bpelcd27Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd27Val> bpflcd27{}; 
        namespace Bpflcd27ValC{
            constexpr Register::FieldValue<decltype(bpflcd27)::Type,Bpflcd27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd27)::Type,Bpflcd27Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd27Val> bpglcd27{}; 
        namespace Bpglcd27ValC{
            constexpr Register::FieldValue<decltype(bpglcd27)::Type,Bpglcd27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd27)::Type,Bpglcd27Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd27Val> bphlcd27{}; 
        namespace Bphlcd27ValC{
            constexpr Register::FieldValue<decltype(bphlcd27)::Type,Bphlcd27Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd27)::Type,Bphlcd27Val::v1> v1{};
        }
        }
    }
    namespace LcdWf31to28{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be03c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf28{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf29{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf30{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf31{}; 
    }
    namespace LcdWf28{    ///<LCD Waveform Register 28.
        using Addr = Register::Address<0x400be03c,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd28Val> bpalcd28{}; 
        namespace Bpalcd28ValC{
            constexpr Register::FieldValue<decltype(bpalcd28)::Type,Bpalcd28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd28)::Type,Bpalcd28Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd28Val> bpblcd28{}; 
        namespace Bpblcd28ValC{
            constexpr Register::FieldValue<decltype(bpblcd28)::Type,Bpblcd28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd28)::Type,Bpblcd28Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd28Val> bpclcd28{}; 
        namespace Bpclcd28ValC{
            constexpr Register::FieldValue<decltype(bpclcd28)::Type,Bpclcd28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd28)::Type,Bpclcd28Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd28Val> bpdlcd28{}; 
        namespace Bpdlcd28ValC{
            constexpr Register::FieldValue<decltype(bpdlcd28)::Type,Bpdlcd28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd28)::Type,Bpdlcd28Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd28Val> bpelcd28{}; 
        namespace Bpelcd28ValC{
            constexpr Register::FieldValue<decltype(bpelcd28)::Type,Bpelcd28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd28)::Type,Bpelcd28Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd28Val> bpflcd28{}; 
        namespace Bpflcd28ValC{
            constexpr Register::FieldValue<decltype(bpflcd28)::Type,Bpflcd28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd28)::Type,Bpflcd28Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd28Val> bpglcd28{}; 
        namespace Bpglcd28ValC{
            constexpr Register::FieldValue<decltype(bpglcd28)::Type,Bpglcd28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd28)::Type,Bpglcd28Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd28Val> bphlcd28{}; 
        namespace Bphlcd28ValC{
            constexpr Register::FieldValue<decltype(bphlcd28)::Type,Bphlcd28Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd28)::Type,Bphlcd28Val::v1> v1{};
        }
        }
    }
    namespace LcdWf29{    ///<LCD Waveform Register 29.
        using Addr = Register::Address<0x400be03d,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd29Val> bpalcd29{}; 
        namespace Bpalcd29ValC{
            constexpr Register::FieldValue<decltype(bpalcd29)::Type,Bpalcd29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd29)::Type,Bpalcd29Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd29Val> bpblcd29{}; 
        namespace Bpblcd29ValC{
            constexpr Register::FieldValue<decltype(bpblcd29)::Type,Bpblcd29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd29)::Type,Bpblcd29Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd29Val> bpclcd29{}; 
        namespace Bpclcd29ValC{
            constexpr Register::FieldValue<decltype(bpclcd29)::Type,Bpclcd29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd29)::Type,Bpclcd29Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd29Val> bpdlcd29{}; 
        namespace Bpdlcd29ValC{
            constexpr Register::FieldValue<decltype(bpdlcd29)::Type,Bpdlcd29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd29)::Type,Bpdlcd29Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd29Val> bpelcd29{}; 
        namespace Bpelcd29ValC{
            constexpr Register::FieldValue<decltype(bpelcd29)::Type,Bpelcd29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd29)::Type,Bpelcd29Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd29Val> bpflcd29{}; 
        namespace Bpflcd29ValC{
            constexpr Register::FieldValue<decltype(bpflcd29)::Type,Bpflcd29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd29)::Type,Bpflcd29Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd29Val> bpglcd29{}; 
        namespace Bpglcd29ValC{
            constexpr Register::FieldValue<decltype(bpglcd29)::Type,Bpglcd29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd29)::Type,Bpglcd29Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd29Val> bphlcd29{}; 
        namespace Bphlcd29ValC{
            constexpr Register::FieldValue<decltype(bphlcd29)::Type,Bphlcd29Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd29)::Type,Bphlcd29Val::v1> v1{};
        }
        }
    }
    namespace LcdWf30{    ///<LCD Waveform Register 30.
        using Addr = Register::Address<0x400be03e,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd30Val> bpalcd30{}; 
        namespace Bpalcd30ValC{
            constexpr Register::FieldValue<decltype(bpalcd30)::Type,Bpalcd30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd30)::Type,Bpalcd30Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd30Val> bpblcd30{}; 
        namespace Bpblcd30ValC{
            constexpr Register::FieldValue<decltype(bpblcd30)::Type,Bpblcd30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd30)::Type,Bpblcd30Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd30Val> bpclcd30{}; 
        namespace Bpclcd30ValC{
            constexpr Register::FieldValue<decltype(bpclcd30)::Type,Bpclcd30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd30)::Type,Bpclcd30Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd30Val> bpdlcd30{}; 
        namespace Bpdlcd30ValC{
            constexpr Register::FieldValue<decltype(bpdlcd30)::Type,Bpdlcd30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd30)::Type,Bpdlcd30Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd30Val> bpelcd30{}; 
        namespace Bpelcd30ValC{
            constexpr Register::FieldValue<decltype(bpelcd30)::Type,Bpelcd30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd30)::Type,Bpelcd30Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd30Val> bpflcd30{}; 
        namespace Bpflcd30ValC{
            constexpr Register::FieldValue<decltype(bpflcd30)::Type,Bpflcd30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd30)::Type,Bpflcd30Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd30Val> bpglcd30{}; 
        namespace Bpglcd30ValC{
            constexpr Register::FieldValue<decltype(bpglcd30)::Type,Bpglcd30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd30)::Type,Bpglcd30Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd30Val> bphlcd30{}; 
        namespace Bphlcd30ValC{
            constexpr Register::FieldValue<decltype(bphlcd30)::Type,Bphlcd30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd30)::Type,Bphlcd30Val::v1> v1{};
        }
        }
    }
    namespace LcdWf31{    ///<LCD Waveform Register 31.
        using Addr = Register::Address<0x400be03f,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd31Val> bpalcd31{}; 
        namespace Bpalcd31ValC{
            constexpr Register::FieldValue<decltype(bpalcd31)::Type,Bpalcd31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd31)::Type,Bpalcd31Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd31Val> bpblcd31{}; 
        namespace Bpblcd31ValC{
            constexpr Register::FieldValue<decltype(bpblcd31)::Type,Bpblcd31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd31)::Type,Bpblcd31Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd31Val> bpclcd31{}; 
        namespace Bpclcd31ValC{
            constexpr Register::FieldValue<decltype(bpclcd31)::Type,Bpclcd31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd31)::Type,Bpclcd31Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd31Val> bpdlcd31{}; 
        namespace Bpdlcd31ValC{
            constexpr Register::FieldValue<decltype(bpdlcd31)::Type,Bpdlcd31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd31)::Type,Bpdlcd31Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd31Val> bpelcd31{}; 
        namespace Bpelcd31ValC{
            constexpr Register::FieldValue<decltype(bpelcd31)::Type,Bpelcd31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd31)::Type,Bpelcd31Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd31Val> bpflcd31{}; 
        namespace Bpflcd31ValC{
            constexpr Register::FieldValue<decltype(bpflcd31)::Type,Bpflcd31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd31)::Type,Bpflcd31Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd31Val> bpglcd31{}; 
        namespace Bpglcd31ValC{
            constexpr Register::FieldValue<decltype(bpglcd31)::Type,Bpglcd31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd31)::Type,Bpglcd31Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd31Val> bphlcd31{}; 
        namespace Bphlcd31ValC{
            constexpr Register::FieldValue<decltype(bphlcd31)::Type,Bphlcd31Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd31)::Type,Bphlcd31Val::v1> v1{};
        }
        }
    }
    namespace LcdWf35to32{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be040,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf32{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf33{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf34{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf35{}; 
    }
    namespace LcdWf32{    ///<LCD Waveform Register 32.
        using Addr = Register::Address<0x400be040,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd32Val> bpalcd32{}; 
        namespace Bpalcd32ValC{
            constexpr Register::FieldValue<decltype(bpalcd32)::Type,Bpalcd32Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd32)::Type,Bpalcd32Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd32Val> bpblcd32{}; 
        namespace Bpblcd32ValC{
            constexpr Register::FieldValue<decltype(bpblcd32)::Type,Bpblcd32Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd32)::Type,Bpblcd32Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd32Val> bpclcd32{}; 
        namespace Bpclcd32ValC{
            constexpr Register::FieldValue<decltype(bpclcd32)::Type,Bpclcd32Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd32)::Type,Bpclcd32Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd32Val> bpdlcd32{}; 
        namespace Bpdlcd32ValC{
            constexpr Register::FieldValue<decltype(bpdlcd32)::Type,Bpdlcd32Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd32)::Type,Bpdlcd32Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd32Val> bpelcd32{}; 
        namespace Bpelcd32ValC{
            constexpr Register::FieldValue<decltype(bpelcd32)::Type,Bpelcd32Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd32)::Type,Bpelcd32Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd32Val> bpflcd32{}; 
        namespace Bpflcd32ValC{
            constexpr Register::FieldValue<decltype(bpflcd32)::Type,Bpflcd32Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd32)::Type,Bpflcd32Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd32Val> bpglcd32{}; 
        namespace Bpglcd32ValC{
            constexpr Register::FieldValue<decltype(bpglcd32)::Type,Bpglcd32Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd32)::Type,Bpglcd32Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd32Val> bphlcd32{}; 
        namespace Bphlcd32ValC{
            constexpr Register::FieldValue<decltype(bphlcd32)::Type,Bphlcd32Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd32)::Type,Bphlcd32Val::v1> v1{};
        }
        }
    }
    namespace LcdWf33{    ///<LCD Waveform Register 33.
        using Addr = Register::Address<0x400be041,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd33Val> bpalcd33{}; 
        namespace Bpalcd33ValC{
            constexpr Register::FieldValue<decltype(bpalcd33)::Type,Bpalcd33Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd33)::Type,Bpalcd33Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd33Val> bpblcd33{}; 
        namespace Bpblcd33ValC{
            constexpr Register::FieldValue<decltype(bpblcd33)::Type,Bpblcd33Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd33)::Type,Bpblcd33Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd33Val> bpclcd33{}; 
        namespace Bpclcd33ValC{
            constexpr Register::FieldValue<decltype(bpclcd33)::Type,Bpclcd33Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd33)::Type,Bpclcd33Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd33Val> bpdlcd33{}; 
        namespace Bpdlcd33ValC{
            constexpr Register::FieldValue<decltype(bpdlcd33)::Type,Bpdlcd33Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd33)::Type,Bpdlcd33Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd33Val> bpelcd33{}; 
        namespace Bpelcd33ValC{
            constexpr Register::FieldValue<decltype(bpelcd33)::Type,Bpelcd33Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd33)::Type,Bpelcd33Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd33Val> bpflcd33{}; 
        namespace Bpflcd33ValC{
            constexpr Register::FieldValue<decltype(bpflcd33)::Type,Bpflcd33Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd33)::Type,Bpflcd33Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd33Val> bpglcd33{}; 
        namespace Bpglcd33ValC{
            constexpr Register::FieldValue<decltype(bpglcd33)::Type,Bpglcd33Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd33)::Type,Bpglcd33Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd33Val> bphlcd33{}; 
        namespace Bphlcd33ValC{
            constexpr Register::FieldValue<decltype(bphlcd33)::Type,Bphlcd33Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd33)::Type,Bphlcd33Val::v1> v1{};
        }
        }
    }
    namespace LcdWf34{    ///<LCD Waveform Register 34.
        using Addr = Register::Address<0x400be042,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd34Val> bpalcd34{}; 
        namespace Bpalcd34ValC{
            constexpr Register::FieldValue<decltype(bpalcd34)::Type,Bpalcd34Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd34)::Type,Bpalcd34Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd34Val> bpblcd34{}; 
        namespace Bpblcd34ValC{
            constexpr Register::FieldValue<decltype(bpblcd34)::Type,Bpblcd34Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd34)::Type,Bpblcd34Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd34Val> bpclcd34{}; 
        namespace Bpclcd34ValC{
            constexpr Register::FieldValue<decltype(bpclcd34)::Type,Bpclcd34Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd34)::Type,Bpclcd34Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd34Val> bpdlcd34{}; 
        namespace Bpdlcd34ValC{
            constexpr Register::FieldValue<decltype(bpdlcd34)::Type,Bpdlcd34Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd34)::Type,Bpdlcd34Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd34Val> bpelcd34{}; 
        namespace Bpelcd34ValC{
            constexpr Register::FieldValue<decltype(bpelcd34)::Type,Bpelcd34Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd34)::Type,Bpelcd34Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd34Val> bpflcd34{}; 
        namespace Bpflcd34ValC{
            constexpr Register::FieldValue<decltype(bpflcd34)::Type,Bpflcd34Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd34)::Type,Bpflcd34Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd34Val> bpglcd34{}; 
        namespace Bpglcd34ValC{
            constexpr Register::FieldValue<decltype(bpglcd34)::Type,Bpglcd34Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd34)::Type,Bpglcd34Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd34Val> bphlcd34{}; 
        namespace Bphlcd34ValC{
            constexpr Register::FieldValue<decltype(bphlcd34)::Type,Bphlcd34Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd34)::Type,Bphlcd34Val::v1> v1{};
        }
        }
    }
    namespace LcdWf35{    ///<LCD Waveform Register 35.
        using Addr = Register::Address<0x400be043,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd35Val> bpalcd35{}; 
        namespace Bpalcd35ValC{
            constexpr Register::FieldValue<decltype(bpalcd35)::Type,Bpalcd35Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd35)::Type,Bpalcd35Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd35Val> bpblcd35{}; 
        namespace Bpblcd35ValC{
            constexpr Register::FieldValue<decltype(bpblcd35)::Type,Bpblcd35Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd35)::Type,Bpblcd35Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd35Val> bpclcd35{}; 
        namespace Bpclcd35ValC{
            constexpr Register::FieldValue<decltype(bpclcd35)::Type,Bpclcd35Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd35)::Type,Bpclcd35Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd35Val> bpdlcd35{}; 
        namespace Bpdlcd35ValC{
            constexpr Register::FieldValue<decltype(bpdlcd35)::Type,Bpdlcd35Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd35)::Type,Bpdlcd35Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd35Val> bpelcd35{}; 
        namespace Bpelcd35ValC{
            constexpr Register::FieldValue<decltype(bpelcd35)::Type,Bpelcd35Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd35)::Type,Bpelcd35Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd35Val> bpflcd35{}; 
        namespace Bpflcd35ValC{
            constexpr Register::FieldValue<decltype(bpflcd35)::Type,Bpflcd35Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd35)::Type,Bpflcd35Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd35Val> bpglcd35{}; 
        namespace Bpglcd35ValC{
            constexpr Register::FieldValue<decltype(bpglcd35)::Type,Bpglcd35Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd35)::Type,Bpglcd35Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd35Val> bphlcd35{}; 
        namespace Bphlcd35ValC{
            constexpr Register::FieldValue<decltype(bphlcd35)::Type,Bphlcd35Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd35)::Type,Bphlcd35Val::v1> v1{};
        }
        }
    }
    namespace LcdWf39to36{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be044,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf36{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf37{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf38{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf39{}; 
    }
    namespace LcdWf36{    ///<LCD Waveform Register 36.
        using Addr = Register::Address<0x400be044,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd36Val> bpalcd36{}; 
        namespace Bpalcd36ValC{
            constexpr Register::FieldValue<decltype(bpalcd36)::Type,Bpalcd36Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd36)::Type,Bpalcd36Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd36Val> bpblcd36{}; 
        namespace Bpblcd36ValC{
            constexpr Register::FieldValue<decltype(bpblcd36)::Type,Bpblcd36Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd36)::Type,Bpblcd36Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd36Val> bpclcd36{}; 
        namespace Bpclcd36ValC{
            constexpr Register::FieldValue<decltype(bpclcd36)::Type,Bpclcd36Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd36)::Type,Bpclcd36Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd36Val> bpdlcd36{}; 
        namespace Bpdlcd36ValC{
            constexpr Register::FieldValue<decltype(bpdlcd36)::Type,Bpdlcd36Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd36)::Type,Bpdlcd36Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd36Val> bpelcd36{}; 
        namespace Bpelcd36ValC{
            constexpr Register::FieldValue<decltype(bpelcd36)::Type,Bpelcd36Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd36)::Type,Bpelcd36Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd36Val> bpflcd36{}; 
        namespace Bpflcd36ValC{
            constexpr Register::FieldValue<decltype(bpflcd36)::Type,Bpflcd36Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd36)::Type,Bpflcd36Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd36Val> bpglcd36{}; 
        namespace Bpglcd36ValC{
            constexpr Register::FieldValue<decltype(bpglcd36)::Type,Bpglcd36Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd36)::Type,Bpglcd36Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd36Val> bphlcd36{}; 
        namespace Bphlcd36ValC{
            constexpr Register::FieldValue<decltype(bphlcd36)::Type,Bphlcd36Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd36)::Type,Bphlcd36Val::v1> v1{};
        }
        }
    }
    namespace LcdWf37{    ///<LCD Waveform Register 37.
        using Addr = Register::Address<0x400be045,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd37Val> bpalcd37{}; 
        namespace Bpalcd37ValC{
            constexpr Register::FieldValue<decltype(bpalcd37)::Type,Bpalcd37Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd37)::Type,Bpalcd37Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd37Val> bpblcd37{}; 
        namespace Bpblcd37ValC{
            constexpr Register::FieldValue<decltype(bpblcd37)::Type,Bpblcd37Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd37)::Type,Bpblcd37Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd37Val> bpclcd37{}; 
        namespace Bpclcd37ValC{
            constexpr Register::FieldValue<decltype(bpclcd37)::Type,Bpclcd37Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd37)::Type,Bpclcd37Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd37Val> bpdlcd37{}; 
        namespace Bpdlcd37ValC{
            constexpr Register::FieldValue<decltype(bpdlcd37)::Type,Bpdlcd37Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd37)::Type,Bpdlcd37Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd37Val> bpelcd37{}; 
        namespace Bpelcd37ValC{
            constexpr Register::FieldValue<decltype(bpelcd37)::Type,Bpelcd37Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd37)::Type,Bpelcd37Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd37Val> bpflcd37{}; 
        namespace Bpflcd37ValC{
            constexpr Register::FieldValue<decltype(bpflcd37)::Type,Bpflcd37Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd37)::Type,Bpflcd37Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd37Val> bpglcd37{}; 
        namespace Bpglcd37ValC{
            constexpr Register::FieldValue<decltype(bpglcd37)::Type,Bpglcd37Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd37)::Type,Bpglcd37Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd37Val> bphlcd37{}; 
        namespace Bphlcd37ValC{
            constexpr Register::FieldValue<decltype(bphlcd37)::Type,Bphlcd37Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd37)::Type,Bphlcd37Val::v1> v1{};
        }
        }
    }
    namespace LcdWf38{    ///<LCD Waveform Register 38.
        using Addr = Register::Address<0x400be046,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd38Val> bpalcd38{}; 
        namespace Bpalcd38ValC{
            constexpr Register::FieldValue<decltype(bpalcd38)::Type,Bpalcd38Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd38)::Type,Bpalcd38Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd38Val> bpblcd38{}; 
        namespace Bpblcd38ValC{
            constexpr Register::FieldValue<decltype(bpblcd38)::Type,Bpblcd38Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd38)::Type,Bpblcd38Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd38Val> bpclcd38{}; 
        namespace Bpclcd38ValC{
            constexpr Register::FieldValue<decltype(bpclcd38)::Type,Bpclcd38Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd38)::Type,Bpclcd38Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd38Val> bpdlcd38{}; 
        namespace Bpdlcd38ValC{
            constexpr Register::FieldValue<decltype(bpdlcd38)::Type,Bpdlcd38Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd38)::Type,Bpdlcd38Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd38Val> bpelcd38{}; 
        namespace Bpelcd38ValC{
            constexpr Register::FieldValue<decltype(bpelcd38)::Type,Bpelcd38Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd38)::Type,Bpelcd38Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd38Val> bpflcd38{}; 
        namespace Bpflcd38ValC{
            constexpr Register::FieldValue<decltype(bpflcd38)::Type,Bpflcd38Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd38)::Type,Bpflcd38Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd38Val> bpglcd38{}; 
        namespace Bpglcd38ValC{
            constexpr Register::FieldValue<decltype(bpglcd38)::Type,Bpglcd38Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd38)::Type,Bpglcd38Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd38Val> bphlcd38{}; 
        namespace Bphlcd38ValC{
            constexpr Register::FieldValue<decltype(bphlcd38)::Type,Bphlcd38Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd38)::Type,Bphlcd38Val::v1> v1{};
        }
        }
    }
    namespace LcdWf39{    ///<LCD Waveform Register 39.
        using Addr = Register::Address<0x400be047,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd39Val> bpalcd39{}; 
        namespace Bpalcd39ValC{
            constexpr Register::FieldValue<decltype(bpalcd39)::Type,Bpalcd39Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd39)::Type,Bpalcd39Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd39Val> bpblcd39{}; 
        namespace Bpblcd39ValC{
            constexpr Register::FieldValue<decltype(bpblcd39)::Type,Bpblcd39Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd39)::Type,Bpblcd39Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd39Val> bpclcd39{}; 
        namespace Bpclcd39ValC{
            constexpr Register::FieldValue<decltype(bpclcd39)::Type,Bpclcd39Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd39)::Type,Bpclcd39Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd39Val> bpdlcd39{}; 
        namespace Bpdlcd39ValC{
            constexpr Register::FieldValue<decltype(bpdlcd39)::Type,Bpdlcd39Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd39)::Type,Bpdlcd39Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd39Val> bpelcd39{}; 
        namespace Bpelcd39ValC{
            constexpr Register::FieldValue<decltype(bpelcd39)::Type,Bpelcd39Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd39)::Type,Bpelcd39Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd39Val> bpflcd39{}; 
        namespace Bpflcd39ValC{
            constexpr Register::FieldValue<decltype(bpflcd39)::Type,Bpflcd39Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd39)::Type,Bpflcd39Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd39Val> bpglcd39{}; 
        namespace Bpglcd39ValC{
            constexpr Register::FieldValue<decltype(bpglcd39)::Type,Bpglcd39Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd39)::Type,Bpglcd39Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd39Val> bphlcd39{}; 
        namespace Bphlcd39ValC{
            constexpr Register::FieldValue<decltype(bphlcd39)::Type,Bphlcd39Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd39)::Type,Bphlcd39Val::v1> v1{};
        }
        }
    }
    namespace LcdWf43to40{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be048,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf40{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf41{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf42{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf43{}; 
    }
    namespace LcdWf40{    ///<LCD Waveform Register 40.
        using Addr = Register::Address<0x400be048,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd40Val> bpalcd40{}; 
        namespace Bpalcd40ValC{
            constexpr Register::FieldValue<decltype(bpalcd40)::Type,Bpalcd40Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd40)::Type,Bpalcd40Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd40Val> bpblcd40{}; 
        namespace Bpblcd40ValC{
            constexpr Register::FieldValue<decltype(bpblcd40)::Type,Bpblcd40Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd40)::Type,Bpblcd40Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd40Val> bpclcd40{}; 
        namespace Bpclcd40ValC{
            constexpr Register::FieldValue<decltype(bpclcd40)::Type,Bpclcd40Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd40)::Type,Bpclcd40Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd40Val> bpdlcd40{}; 
        namespace Bpdlcd40ValC{
            constexpr Register::FieldValue<decltype(bpdlcd40)::Type,Bpdlcd40Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd40)::Type,Bpdlcd40Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd40Val> bpelcd40{}; 
        namespace Bpelcd40ValC{
            constexpr Register::FieldValue<decltype(bpelcd40)::Type,Bpelcd40Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd40)::Type,Bpelcd40Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd40Val> bpflcd40{}; 
        namespace Bpflcd40ValC{
            constexpr Register::FieldValue<decltype(bpflcd40)::Type,Bpflcd40Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd40)::Type,Bpflcd40Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd40Val> bpglcd40{}; 
        namespace Bpglcd40ValC{
            constexpr Register::FieldValue<decltype(bpglcd40)::Type,Bpglcd40Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd40)::Type,Bpglcd40Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd40Val> bphlcd40{}; 
        namespace Bphlcd40ValC{
            constexpr Register::FieldValue<decltype(bphlcd40)::Type,Bphlcd40Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd40)::Type,Bphlcd40Val::v1> v1{};
        }
        }
    }
    namespace LcdWf41{    ///<LCD Waveform Register 41.
        using Addr = Register::Address<0x400be049,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd41Val> bpalcd41{}; 
        namespace Bpalcd41ValC{
            constexpr Register::FieldValue<decltype(bpalcd41)::Type,Bpalcd41Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd41)::Type,Bpalcd41Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd41Val> bpblcd41{}; 
        namespace Bpblcd41ValC{
            constexpr Register::FieldValue<decltype(bpblcd41)::Type,Bpblcd41Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd41)::Type,Bpblcd41Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd41Val> bpclcd41{}; 
        namespace Bpclcd41ValC{
            constexpr Register::FieldValue<decltype(bpclcd41)::Type,Bpclcd41Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd41)::Type,Bpclcd41Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd41Val> bpdlcd41{}; 
        namespace Bpdlcd41ValC{
            constexpr Register::FieldValue<decltype(bpdlcd41)::Type,Bpdlcd41Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd41)::Type,Bpdlcd41Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd41Val> bpelcd41{}; 
        namespace Bpelcd41ValC{
            constexpr Register::FieldValue<decltype(bpelcd41)::Type,Bpelcd41Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd41)::Type,Bpelcd41Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd41Val> bpflcd41{}; 
        namespace Bpflcd41ValC{
            constexpr Register::FieldValue<decltype(bpflcd41)::Type,Bpflcd41Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd41)::Type,Bpflcd41Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd41Val> bpglcd41{}; 
        namespace Bpglcd41ValC{
            constexpr Register::FieldValue<decltype(bpglcd41)::Type,Bpglcd41Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd41)::Type,Bpglcd41Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd41Val> bphlcd41{}; 
        namespace Bphlcd41ValC{
            constexpr Register::FieldValue<decltype(bphlcd41)::Type,Bphlcd41Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd41)::Type,Bphlcd41Val::v1> v1{};
        }
        }
    }
    namespace LcdWf42{    ///<LCD Waveform Register 42.
        using Addr = Register::Address<0x400be04a,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd42Val> bpalcd42{}; 
        namespace Bpalcd42ValC{
            constexpr Register::FieldValue<decltype(bpalcd42)::Type,Bpalcd42Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd42)::Type,Bpalcd42Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd42Val> bpblcd42{}; 
        namespace Bpblcd42ValC{
            constexpr Register::FieldValue<decltype(bpblcd42)::Type,Bpblcd42Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd42)::Type,Bpblcd42Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd42Val> bpclcd42{}; 
        namespace Bpclcd42ValC{
            constexpr Register::FieldValue<decltype(bpclcd42)::Type,Bpclcd42Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd42)::Type,Bpclcd42Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd42Val> bpdlcd42{}; 
        namespace Bpdlcd42ValC{
            constexpr Register::FieldValue<decltype(bpdlcd42)::Type,Bpdlcd42Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd42)::Type,Bpdlcd42Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd42Val> bpelcd42{}; 
        namespace Bpelcd42ValC{
            constexpr Register::FieldValue<decltype(bpelcd42)::Type,Bpelcd42Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd42)::Type,Bpelcd42Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd42Val> bpflcd42{}; 
        namespace Bpflcd42ValC{
            constexpr Register::FieldValue<decltype(bpflcd42)::Type,Bpflcd42Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd42)::Type,Bpflcd42Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd42Val> bpglcd42{}; 
        namespace Bpglcd42ValC{
            constexpr Register::FieldValue<decltype(bpglcd42)::Type,Bpglcd42Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd42)::Type,Bpglcd42Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd42Val> bphlcd42{}; 
        namespace Bphlcd42ValC{
            constexpr Register::FieldValue<decltype(bphlcd42)::Type,Bphlcd42Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd42)::Type,Bphlcd42Val::v1> v1{};
        }
        }
    }
    namespace LcdWf43{    ///<LCD Waveform Register 43.
        using Addr = Register::Address<0x400be04b,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd43Val> bpalcd43{}; 
        namespace Bpalcd43ValC{
            constexpr Register::FieldValue<decltype(bpalcd43)::Type,Bpalcd43Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd43)::Type,Bpalcd43Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd43Val> bpblcd43{}; 
        namespace Bpblcd43ValC{
            constexpr Register::FieldValue<decltype(bpblcd43)::Type,Bpblcd43Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd43)::Type,Bpblcd43Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd43Val> bpclcd43{}; 
        namespace Bpclcd43ValC{
            constexpr Register::FieldValue<decltype(bpclcd43)::Type,Bpclcd43Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd43)::Type,Bpclcd43Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd43Val> bpdlcd43{}; 
        namespace Bpdlcd43ValC{
            constexpr Register::FieldValue<decltype(bpdlcd43)::Type,Bpdlcd43Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd43)::Type,Bpdlcd43Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd43Val> bpelcd43{}; 
        namespace Bpelcd43ValC{
            constexpr Register::FieldValue<decltype(bpelcd43)::Type,Bpelcd43Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd43)::Type,Bpelcd43Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd43Val> bpflcd43{}; 
        namespace Bpflcd43ValC{
            constexpr Register::FieldValue<decltype(bpflcd43)::Type,Bpflcd43Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd43)::Type,Bpflcd43Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd43Val> bpglcd43{}; 
        namespace Bpglcd43ValC{
            constexpr Register::FieldValue<decltype(bpglcd43)::Type,Bpglcd43Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd43)::Type,Bpglcd43Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd43Val> bphlcd43{}; 
        namespace Bphlcd43ValC{
            constexpr Register::FieldValue<decltype(bphlcd43)::Type,Bphlcd43Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd43)::Type,Bphlcd43Val::v1> v1{};
        }
        }
    }
    namespace LcdWf47to44{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be04c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf44{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf45{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf46{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf47{}; 
    }
    namespace LcdWf44{    ///<LCD Waveform Register 44.
        using Addr = Register::Address<0x400be04c,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd44Val> bpalcd44{}; 
        namespace Bpalcd44ValC{
            constexpr Register::FieldValue<decltype(bpalcd44)::Type,Bpalcd44Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd44)::Type,Bpalcd44Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd44Val> bpblcd44{}; 
        namespace Bpblcd44ValC{
            constexpr Register::FieldValue<decltype(bpblcd44)::Type,Bpblcd44Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd44)::Type,Bpblcd44Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd44Val> bpclcd44{}; 
        namespace Bpclcd44ValC{
            constexpr Register::FieldValue<decltype(bpclcd44)::Type,Bpclcd44Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd44)::Type,Bpclcd44Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd44Val> bpdlcd44{}; 
        namespace Bpdlcd44ValC{
            constexpr Register::FieldValue<decltype(bpdlcd44)::Type,Bpdlcd44Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd44)::Type,Bpdlcd44Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd44Val> bpelcd44{}; 
        namespace Bpelcd44ValC{
            constexpr Register::FieldValue<decltype(bpelcd44)::Type,Bpelcd44Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd44)::Type,Bpelcd44Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd44Val> bpflcd44{}; 
        namespace Bpflcd44ValC{
            constexpr Register::FieldValue<decltype(bpflcd44)::Type,Bpflcd44Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd44)::Type,Bpflcd44Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd44Val> bpglcd44{}; 
        namespace Bpglcd44ValC{
            constexpr Register::FieldValue<decltype(bpglcd44)::Type,Bpglcd44Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd44)::Type,Bpglcd44Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd44Val> bphlcd44{}; 
        namespace Bphlcd44ValC{
            constexpr Register::FieldValue<decltype(bphlcd44)::Type,Bphlcd44Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd44)::Type,Bphlcd44Val::v1> v1{};
        }
        }
    }
    namespace LcdWf45{    ///<LCD Waveform Register 45.
        using Addr = Register::Address<0x400be04d,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd45Val> bpalcd45{}; 
        namespace Bpalcd45ValC{
            constexpr Register::FieldValue<decltype(bpalcd45)::Type,Bpalcd45Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd45)::Type,Bpalcd45Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd45Val> bpblcd45{}; 
        namespace Bpblcd45ValC{
            constexpr Register::FieldValue<decltype(bpblcd45)::Type,Bpblcd45Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd45)::Type,Bpblcd45Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd45Val> bpclcd45{}; 
        namespace Bpclcd45ValC{
            constexpr Register::FieldValue<decltype(bpclcd45)::Type,Bpclcd45Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd45)::Type,Bpclcd45Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd45Val> bpdlcd45{}; 
        namespace Bpdlcd45ValC{
            constexpr Register::FieldValue<decltype(bpdlcd45)::Type,Bpdlcd45Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd45)::Type,Bpdlcd45Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd45Val> bpelcd45{}; 
        namespace Bpelcd45ValC{
            constexpr Register::FieldValue<decltype(bpelcd45)::Type,Bpelcd45Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd45)::Type,Bpelcd45Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd45Val> bpflcd45{}; 
        namespace Bpflcd45ValC{
            constexpr Register::FieldValue<decltype(bpflcd45)::Type,Bpflcd45Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd45)::Type,Bpflcd45Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd45Val> bpglcd45{}; 
        namespace Bpglcd45ValC{
            constexpr Register::FieldValue<decltype(bpglcd45)::Type,Bpglcd45Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd45)::Type,Bpglcd45Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd45Val> bphlcd45{}; 
        namespace Bphlcd45ValC{
            constexpr Register::FieldValue<decltype(bphlcd45)::Type,Bphlcd45Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd45)::Type,Bphlcd45Val::v1> v1{};
        }
        }
    }
    namespace LcdWf46{    ///<LCD Waveform Register 46.
        using Addr = Register::Address<0x400be04e,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd46Val> bpalcd46{}; 
        namespace Bpalcd46ValC{
            constexpr Register::FieldValue<decltype(bpalcd46)::Type,Bpalcd46Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd46)::Type,Bpalcd46Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd46Val> bpblcd46{}; 
        namespace Bpblcd46ValC{
            constexpr Register::FieldValue<decltype(bpblcd46)::Type,Bpblcd46Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd46)::Type,Bpblcd46Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd46Val> bpclcd46{}; 
        namespace Bpclcd46ValC{
            constexpr Register::FieldValue<decltype(bpclcd46)::Type,Bpclcd46Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd46)::Type,Bpclcd46Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd46Val> bpdlcd46{}; 
        namespace Bpdlcd46ValC{
            constexpr Register::FieldValue<decltype(bpdlcd46)::Type,Bpdlcd46Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd46)::Type,Bpdlcd46Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd46Val> bpelcd46{}; 
        namespace Bpelcd46ValC{
            constexpr Register::FieldValue<decltype(bpelcd46)::Type,Bpelcd46Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd46)::Type,Bpelcd46Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd46Val> bpflcd46{}; 
        namespace Bpflcd46ValC{
            constexpr Register::FieldValue<decltype(bpflcd46)::Type,Bpflcd46Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd46)::Type,Bpflcd46Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd46Val> bpglcd46{}; 
        namespace Bpglcd46ValC{
            constexpr Register::FieldValue<decltype(bpglcd46)::Type,Bpglcd46Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd46)::Type,Bpglcd46Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd46Val> bphlcd46{}; 
        namespace Bphlcd46ValC{
            constexpr Register::FieldValue<decltype(bphlcd46)::Type,Bphlcd46Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd46)::Type,Bphlcd46Val::v1> v1{};
        }
        }
    }
    namespace LcdWf47{    ///<LCD Waveform Register 47.
        using Addr = Register::Address<0x400be04f,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd47Val> bpalcd47{}; 
        namespace Bpalcd47ValC{
            constexpr Register::FieldValue<decltype(bpalcd47)::Type,Bpalcd47Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd47)::Type,Bpalcd47Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd47Val> bpblcd47{}; 
        namespace Bpblcd47ValC{
            constexpr Register::FieldValue<decltype(bpblcd47)::Type,Bpblcd47Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd47)::Type,Bpblcd47Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd47Val> bpclcd47{}; 
        namespace Bpclcd47ValC{
            constexpr Register::FieldValue<decltype(bpclcd47)::Type,Bpclcd47Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd47)::Type,Bpclcd47Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd47Val> bpdlcd47{}; 
        namespace Bpdlcd47ValC{
            constexpr Register::FieldValue<decltype(bpdlcd47)::Type,Bpdlcd47Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd47)::Type,Bpdlcd47Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd47Val> bpelcd47{}; 
        namespace Bpelcd47ValC{
            constexpr Register::FieldValue<decltype(bpelcd47)::Type,Bpelcd47Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd47)::Type,Bpelcd47Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd47Val> bpflcd47{}; 
        namespace Bpflcd47ValC{
            constexpr Register::FieldValue<decltype(bpflcd47)::Type,Bpflcd47Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd47)::Type,Bpflcd47Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd47Val> bpglcd47{}; 
        namespace Bpglcd47ValC{
            constexpr Register::FieldValue<decltype(bpglcd47)::Type,Bpglcd47Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd47)::Type,Bpglcd47Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd47Val> bphlcd47{}; 
        namespace Bphlcd47ValC{
            constexpr Register::FieldValue<decltype(bphlcd47)::Type,Bphlcd47Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd47)::Type,Bphlcd47Val::v1> v1{};
        }
        }
    }
    namespace LcdWf51to48{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be050,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf48{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf49{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf50{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf51{}; 
    }
    namespace LcdWf48{    ///<LCD Waveform Register 48.
        using Addr = Register::Address<0x400be050,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd48Val> bpalcd48{}; 
        namespace Bpalcd48ValC{
            constexpr Register::FieldValue<decltype(bpalcd48)::Type,Bpalcd48Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd48)::Type,Bpalcd48Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd48Val> bpblcd48{}; 
        namespace Bpblcd48ValC{
            constexpr Register::FieldValue<decltype(bpblcd48)::Type,Bpblcd48Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd48)::Type,Bpblcd48Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd48Val> bpclcd48{}; 
        namespace Bpclcd48ValC{
            constexpr Register::FieldValue<decltype(bpclcd48)::Type,Bpclcd48Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd48)::Type,Bpclcd48Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd48Val> bpdlcd48{}; 
        namespace Bpdlcd48ValC{
            constexpr Register::FieldValue<decltype(bpdlcd48)::Type,Bpdlcd48Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd48)::Type,Bpdlcd48Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd48Val> bpelcd48{}; 
        namespace Bpelcd48ValC{
            constexpr Register::FieldValue<decltype(bpelcd48)::Type,Bpelcd48Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd48)::Type,Bpelcd48Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd48Val> bpflcd48{}; 
        namespace Bpflcd48ValC{
            constexpr Register::FieldValue<decltype(bpflcd48)::Type,Bpflcd48Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd48)::Type,Bpflcd48Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd48Val> bpglcd48{}; 
        namespace Bpglcd48ValC{
            constexpr Register::FieldValue<decltype(bpglcd48)::Type,Bpglcd48Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd48)::Type,Bpglcd48Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd48Val> bphlcd48{}; 
        namespace Bphlcd48ValC{
            constexpr Register::FieldValue<decltype(bphlcd48)::Type,Bphlcd48Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd48)::Type,Bphlcd48Val::v1> v1{};
        }
        }
    }
    namespace LcdWf49{    ///<LCD Waveform Register 49.
        using Addr = Register::Address<0x400be051,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd49Val> bpalcd49{}; 
        namespace Bpalcd49ValC{
            constexpr Register::FieldValue<decltype(bpalcd49)::Type,Bpalcd49Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd49)::Type,Bpalcd49Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd49Val> bpblcd49{}; 
        namespace Bpblcd49ValC{
            constexpr Register::FieldValue<decltype(bpblcd49)::Type,Bpblcd49Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd49)::Type,Bpblcd49Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd49Val> bpclcd49{}; 
        namespace Bpclcd49ValC{
            constexpr Register::FieldValue<decltype(bpclcd49)::Type,Bpclcd49Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd49)::Type,Bpclcd49Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd49Val> bpdlcd49{}; 
        namespace Bpdlcd49ValC{
            constexpr Register::FieldValue<decltype(bpdlcd49)::Type,Bpdlcd49Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd49)::Type,Bpdlcd49Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd49Val> bpelcd49{}; 
        namespace Bpelcd49ValC{
            constexpr Register::FieldValue<decltype(bpelcd49)::Type,Bpelcd49Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd49)::Type,Bpelcd49Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd49Val> bpflcd49{}; 
        namespace Bpflcd49ValC{
            constexpr Register::FieldValue<decltype(bpflcd49)::Type,Bpflcd49Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd49)::Type,Bpflcd49Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd49Val> bpglcd49{}; 
        namespace Bpglcd49ValC{
            constexpr Register::FieldValue<decltype(bpglcd49)::Type,Bpglcd49Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd49)::Type,Bpglcd49Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd49Val> bphlcd49{}; 
        namespace Bphlcd49ValC{
            constexpr Register::FieldValue<decltype(bphlcd49)::Type,Bphlcd49Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd49)::Type,Bphlcd49Val::v1> v1{};
        }
        }
    }
    namespace LcdWf50{    ///<LCD Waveform Register 50.
        using Addr = Register::Address<0x400be052,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd50Val> bpalcd50{}; 
        namespace Bpalcd50ValC{
            constexpr Register::FieldValue<decltype(bpalcd50)::Type,Bpalcd50Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd50)::Type,Bpalcd50Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd50Val> bpblcd50{}; 
        namespace Bpblcd50ValC{
            constexpr Register::FieldValue<decltype(bpblcd50)::Type,Bpblcd50Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd50)::Type,Bpblcd50Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd50Val> bpclcd50{}; 
        namespace Bpclcd50ValC{
            constexpr Register::FieldValue<decltype(bpclcd50)::Type,Bpclcd50Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd50)::Type,Bpclcd50Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd50Val> bpdlcd50{}; 
        namespace Bpdlcd50ValC{
            constexpr Register::FieldValue<decltype(bpdlcd50)::Type,Bpdlcd50Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd50)::Type,Bpdlcd50Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd50Val> bpelcd50{}; 
        namespace Bpelcd50ValC{
            constexpr Register::FieldValue<decltype(bpelcd50)::Type,Bpelcd50Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd50)::Type,Bpelcd50Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd50Val> bpflcd50{}; 
        namespace Bpflcd50ValC{
            constexpr Register::FieldValue<decltype(bpflcd50)::Type,Bpflcd50Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd50)::Type,Bpflcd50Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd50Val> bpglcd50{}; 
        namespace Bpglcd50ValC{
            constexpr Register::FieldValue<decltype(bpglcd50)::Type,Bpglcd50Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd50)::Type,Bpglcd50Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd50Val> bphlcd50{}; 
        namespace Bphlcd50ValC{
            constexpr Register::FieldValue<decltype(bphlcd50)::Type,Bphlcd50Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd50)::Type,Bphlcd50Val::v1> v1{};
        }
        }
    }
    namespace LcdWf51{    ///<LCD Waveform Register 51.
        using Addr = Register::Address<0x400be053,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd51Val> bpalcd51{}; 
        namespace Bpalcd51ValC{
            constexpr Register::FieldValue<decltype(bpalcd51)::Type,Bpalcd51Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd51)::Type,Bpalcd51Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd51Val> bpblcd51{}; 
        namespace Bpblcd51ValC{
            constexpr Register::FieldValue<decltype(bpblcd51)::Type,Bpblcd51Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd51)::Type,Bpblcd51Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd51Val> bpclcd51{}; 
        namespace Bpclcd51ValC{
            constexpr Register::FieldValue<decltype(bpclcd51)::Type,Bpclcd51Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd51)::Type,Bpclcd51Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd51Val> bpdlcd51{}; 
        namespace Bpdlcd51ValC{
            constexpr Register::FieldValue<decltype(bpdlcd51)::Type,Bpdlcd51Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd51)::Type,Bpdlcd51Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd51Val> bpelcd51{}; 
        namespace Bpelcd51ValC{
            constexpr Register::FieldValue<decltype(bpelcd51)::Type,Bpelcd51Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd51)::Type,Bpelcd51Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd51Val> bpflcd51{}; 
        namespace Bpflcd51ValC{
            constexpr Register::FieldValue<decltype(bpflcd51)::Type,Bpflcd51Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd51)::Type,Bpflcd51Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd51Val> bpglcd51{}; 
        namespace Bpglcd51ValC{
            constexpr Register::FieldValue<decltype(bpglcd51)::Type,Bpglcd51Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd51)::Type,Bpglcd51Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd51Val> bphlcd51{}; 
        namespace Bphlcd51ValC{
            constexpr Register::FieldValue<decltype(bphlcd51)::Type,Bphlcd51Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd51)::Type,Bphlcd51Val::v1> v1{};
        }
        }
    }
    namespace LcdWf55to52{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be054,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf52{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf53{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf54{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf55{}; 
    }
    namespace LcdWf52{    ///<LCD Waveform Register 52.
        using Addr = Register::Address<0x400be054,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd52Val> bpalcd52{}; 
        namespace Bpalcd52ValC{
            constexpr Register::FieldValue<decltype(bpalcd52)::Type,Bpalcd52Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd52)::Type,Bpalcd52Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd52Val> bpblcd52{}; 
        namespace Bpblcd52ValC{
            constexpr Register::FieldValue<decltype(bpblcd52)::Type,Bpblcd52Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd52)::Type,Bpblcd52Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd52Val> bpclcd52{}; 
        namespace Bpclcd52ValC{
            constexpr Register::FieldValue<decltype(bpclcd52)::Type,Bpclcd52Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd52)::Type,Bpclcd52Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd52Val> bpdlcd52{}; 
        namespace Bpdlcd52ValC{
            constexpr Register::FieldValue<decltype(bpdlcd52)::Type,Bpdlcd52Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd52)::Type,Bpdlcd52Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd52Val> bpelcd52{}; 
        namespace Bpelcd52ValC{
            constexpr Register::FieldValue<decltype(bpelcd52)::Type,Bpelcd52Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd52)::Type,Bpelcd52Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd52Val> bpflcd52{}; 
        namespace Bpflcd52ValC{
            constexpr Register::FieldValue<decltype(bpflcd52)::Type,Bpflcd52Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd52)::Type,Bpflcd52Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd52Val> bpglcd52{}; 
        namespace Bpglcd52ValC{
            constexpr Register::FieldValue<decltype(bpglcd52)::Type,Bpglcd52Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd52)::Type,Bpglcd52Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd52Val> bphlcd52{}; 
        namespace Bphlcd52ValC{
            constexpr Register::FieldValue<decltype(bphlcd52)::Type,Bphlcd52Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd52)::Type,Bphlcd52Val::v1> v1{};
        }
        }
    }
    namespace LcdWf53{    ///<LCD Waveform Register 53.
        using Addr = Register::Address<0x400be055,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd53Val> bpalcd53{}; 
        namespace Bpalcd53ValC{
            constexpr Register::FieldValue<decltype(bpalcd53)::Type,Bpalcd53Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd53)::Type,Bpalcd53Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd53Val> bpblcd53{}; 
        namespace Bpblcd53ValC{
            constexpr Register::FieldValue<decltype(bpblcd53)::Type,Bpblcd53Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd53)::Type,Bpblcd53Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd53Val> bpclcd53{}; 
        namespace Bpclcd53ValC{
            constexpr Register::FieldValue<decltype(bpclcd53)::Type,Bpclcd53Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd53)::Type,Bpclcd53Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd53Val> bpdlcd53{}; 
        namespace Bpdlcd53ValC{
            constexpr Register::FieldValue<decltype(bpdlcd53)::Type,Bpdlcd53Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd53)::Type,Bpdlcd53Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd53Val> bpelcd53{}; 
        namespace Bpelcd53ValC{
            constexpr Register::FieldValue<decltype(bpelcd53)::Type,Bpelcd53Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd53)::Type,Bpelcd53Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd53Val> bpflcd53{}; 
        namespace Bpflcd53ValC{
            constexpr Register::FieldValue<decltype(bpflcd53)::Type,Bpflcd53Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd53)::Type,Bpflcd53Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd53Val> bpglcd53{}; 
        namespace Bpglcd53ValC{
            constexpr Register::FieldValue<decltype(bpglcd53)::Type,Bpglcd53Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd53)::Type,Bpglcd53Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd53Val> bphlcd53{}; 
        namespace Bphlcd53ValC{
            constexpr Register::FieldValue<decltype(bphlcd53)::Type,Bphlcd53Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd53)::Type,Bphlcd53Val::v1> v1{};
        }
        }
    }
    namespace LcdWf54{    ///<LCD Waveform Register 54.
        using Addr = Register::Address<0x400be056,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd54Val> bpalcd54{}; 
        namespace Bpalcd54ValC{
            constexpr Register::FieldValue<decltype(bpalcd54)::Type,Bpalcd54Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd54)::Type,Bpalcd54Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd54Val> bpblcd54{}; 
        namespace Bpblcd54ValC{
            constexpr Register::FieldValue<decltype(bpblcd54)::Type,Bpblcd54Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd54)::Type,Bpblcd54Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd54Val> bpclcd54{}; 
        namespace Bpclcd54ValC{
            constexpr Register::FieldValue<decltype(bpclcd54)::Type,Bpclcd54Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd54)::Type,Bpclcd54Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd54Val> bpdlcd54{}; 
        namespace Bpdlcd54ValC{
            constexpr Register::FieldValue<decltype(bpdlcd54)::Type,Bpdlcd54Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd54)::Type,Bpdlcd54Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd54Val> bpelcd54{}; 
        namespace Bpelcd54ValC{
            constexpr Register::FieldValue<decltype(bpelcd54)::Type,Bpelcd54Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd54)::Type,Bpelcd54Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd54Val> bpflcd54{}; 
        namespace Bpflcd54ValC{
            constexpr Register::FieldValue<decltype(bpflcd54)::Type,Bpflcd54Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd54)::Type,Bpflcd54Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd54Val> bpglcd54{}; 
        namespace Bpglcd54ValC{
            constexpr Register::FieldValue<decltype(bpglcd54)::Type,Bpglcd54Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd54)::Type,Bpglcd54Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd54Val> bphlcd54{}; 
        namespace Bphlcd54ValC{
            constexpr Register::FieldValue<decltype(bphlcd54)::Type,Bphlcd54Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd54)::Type,Bphlcd54Val::v1> v1{};
        }
        }
    }
    namespace LcdWf55{    ///<LCD Waveform Register 55.
        using Addr = Register::Address<0x400be057,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd55Val> bpalcd55{}; 
        namespace Bpalcd55ValC{
            constexpr Register::FieldValue<decltype(bpalcd55)::Type,Bpalcd55Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd55)::Type,Bpalcd55Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd55Val> bpblcd55{}; 
        namespace Bpblcd55ValC{
            constexpr Register::FieldValue<decltype(bpblcd55)::Type,Bpblcd55Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd55)::Type,Bpblcd55Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd55Val> bpclcd55{}; 
        namespace Bpclcd55ValC{
            constexpr Register::FieldValue<decltype(bpclcd55)::Type,Bpclcd55Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd55)::Type,Bpclcd55Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd55Val> bpdlcd55{}; 
        namespace Bpdlcd55ValC{
            constexpr Register::FieldValue<decltype(bpdlcd55)::Type,Bpdlcd55Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd55)::Type,Bpdlcd55Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd55Val> bpelcd55{}; 
        namespace Bpelcd55ValC{
            constexpr Register::FieldValue<decltype(bpelcd55)::Type,Bpelcd55Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd55)::Type,Bpelcd55Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd55Val> bpflcd55{}; 
        namespace Bpflcd55ValC{
            constexpr Register::FieldValue<decltype(bpflcd55)::Type,Bpflcd55Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd55)::Type,Bpflcd55Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd55Val> bpglcd55{}; 
        namespace Bpglcd55ValC{
            constexpr Register::FieldValue<decltype(bpglcd55)::Type,Bpglcd55Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd55)::Type,Bpglcd55Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd55Val> bphlcd55{}; 
        namespace Bphlcd55ValC{
            constexpr Register::FieldValue<decltype(bphlcd55)::Type,Bphlcd55Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd55)::Type,Bphlcd55Val::v1> v1{};
        }
        }
    }
    namespace LcdWf59to56{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be058,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf56{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf57{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf58{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf59{}; 
    }
    namespace LcdWf56{    ///<LCD Waveform Register 56.
        using Addr = Register::Address<0x400be058,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd56Val> bpalcd56{}; 
        namespace Bpalcd56ValC{
            constexpr Register::FieldValue<decltype(bpalcd56)::Type,Bpalcd56Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd56)::Type,Bpalcd56Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd56Val> bpblcd56{}; 
        namespace Bpblcd56ValC{
            constexpr Register::FieldValue<decltype(bpblcd56)::Type,Bpblcd56Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd56)::Type,Bpblcd56Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd56Val> bpclcd56{}; 
        namespace Bpclcd56ValC{
            constexpr Register::FieldValue<decltype(bpclcd56)::Type,Bpclcd56Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd56)::Type,Bpclcd56Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd56Val> bpdlcd56{}; 
        namespace Bpdlcd56ValC{
            constexpr Register::FieldValue<decltype(bpdlcd56)::Type,Bpdlcd56Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd56)::Type,Bpdlcd56Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd56Val> bpelcd56{}; 
        namespace Bpelcd56ValC{
            constexpr Register::FieldValue<decltype(bpelcd56)::Type,Bpelcd56Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd56)::Type,Bpelcd56Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd56Val> bpflcd56{}; 
        namespace Bpflcd56ValC{
            constexpr Register::FieldValue<decltype(bpflcd56)::Type,Bpflcd56Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd56)::Type,Bpflcd56Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd56Val> bpglcd56{}; 
        namespace Bpglcd56ValC{
            constexpr Register::FieldValue<decltype(bpglcd56)::Type,Bpglcd56Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd56)::Type,Bpglcd56Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd56Val> bphlcd56{}; 
        namespace Bphlcd56ValC{
            constexpr Register::FieldValue<decltype(bphlcd56)::Type,Bphlcd56Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd56)::Type,Bphlcd56Val::v1> v1{};
        }
        }
    }
    namespace LcdWf57{    ///<LCD Waveform Register 57.
        using Addr = Register::Address<0x400be059,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd57Val> bpalcd57{}; 
        namespace Bpalcd57ValC{
            constexpr Register::FieldValue<decltype(bpalcd57)::Type,Bpalcd57Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd57)::Type,Bpalcd57Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd57Val> bpblcd57{}; 
        namespace Bpblcd57ValC{
            constexpr Register::FieldValue<decltype(bpblcd57)::Type,Bpblcd57Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd57)::Type,Bpblcd57Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd57Val> bpclcd57{}; 
        namespace Bpclcd57ValC{
            constexpr Register::FieldValue<decltype(bpclcd57)::Type,Bpclcd57Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd57)::Type,Bpclcd57Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd57Val> bpdlcd57{}; 
        namespace Bpdlcd57ValC{
            constexpr Register::FieldValue<decltype(bpdlcd57)::Type,Bpdlcd57Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd57)::Type,Bpdlcd57Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd57Val> bpelcd57{}; 
        namespace Bpelcd57ValC{
            constexpr Register::FieldValue<decltype(bpelcd57)::Type,Bpelcd57Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd57)::Type,Bpelcd57Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd57Val> bpflcd57{}; 
        namespace Bpflcd57ValC{
            constexpr Register::FieldValue<decltype(bpflcd57)::Type,Bpflcd57Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd57)::Type,Bpflcd57Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd57Val> bpglcd57{}; 
        namespace Bpglcd57ValC{
            constexpr Register::FieldValue<decltype(bpglcd57)::Type,Bpglcd57Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd57)::Type,Bpglcd57Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd57Val> bphlcd57{}; 
        namespace Bphlcd57ValC{
            constexpr Register::FieldValue<decltype(bphlcd57)::Type,Bphlcd57Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd57)::Type,Bphlcd57Val::v1> v1{};
        }
        }
    }
    namespace LcdWf58{    ///<LCD Waveform Register 58.
        using Addr = Register::Address<0x400be05a,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd58Val> bpalcd58{}; 
        namespace Bpalcd58ValC{
            constexpr Register::FieldValue<decltype(bpalcd58)::Type,Bpalcd58Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd58)::Type,Bpalcd58Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd58Val> bpblcd58{}; 
        namespace Bpblcd58ValC{
            constexpr Register::FieldValue<decltype(bpblcd58)::Type,Bpblcd58Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd58)::Type,Bpblcd58Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd58Val> bpclcd58{}; 
        namespace Bpclcd58ValC{
            constexpr Register::FieldValue<decltype(bpclcd58)::Type,Bpclcd58Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd58)::Type,Bpclcd58Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd58Val> bpdlcd58{}; 
        namespace Bpdlcd58ValC{
            constexpr Register::FieldValue<decltype(bpdlcd58)::Type,Bpdlcd58Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd58)::Type,Bpdlcd58Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd58Val> bpelcd58{}; 
        namespace Bpelcd58ValC{
            constexpr Register::FieldValue<decltype(bpelcd58)::Type,Bpelcd58Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd58)::Type,Bpelcd58Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd58Val> bpflcd58{}; 
        namespace Bpflcd58ValC{
            constexpr Register::FieldValue<decltype(bpflcd58)::Type,Bpflcd58Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd58)::Type,Bpflcd58Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd58Val> bpglcd58{}; 
        namespace Bpglcd58ValC{
            constexpr Register::FieldValue<decltype(bpglcd58)::Type,Bpglcd58Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd58)::Type,Bpglcd58Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd58Val> bphlcd58{}; 
        namespace Bphlcd58ValC{
            constexpr Register::FieldValue<decltype(bphlcd58)::Type,Bphlcd58Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd58)::Type,Bphlcd58Val::v1> v1{};
        }
        }
    }
    namespace LcdWf59{    ///<LCD Waveform Register 59.
        using Addr = Register::Address<0x400be05b,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd59Val> bpalcd59{}; 
        namespace Bpalcd59ValC{
            constexpr Register::FieldValue<decltype(bpalcd59)::Type,Bpalcd59Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd59)::Type,Bpalcd59Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd59Val> bpblcd59{}; 
        namespace Bpblcd59ValC{
            constexpr Register::FieldValue<decltype(bpblcd59)::Type,Bpblcd59Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd59)::Type,Bpblcd59Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd59Val> bpclcd59{}; 
        namespace Bpclcd59ValC{
            constexpr Register::FieldValue<decltype(bpclcd59)::Type,Bpclcd59Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd59)::Type,Bpclcd59Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd59Val> bpdlcd59{}; 
        namespace Bpdlcd59ValC{
            constexpr Register::FieldValue<decltype(bpdlcd59)::Type,Bpdlcd59Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd59)::Type,Bpdlcd59Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd59Val> bpelcd59{}; 
        namespace Bpelcd59ValC{
            constexpr Register::FieldValue<decltype(bpelcd59)::Type,Bpelcd59Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd59)::Type,Bpelcd59Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd59Val> bpflcd59{}; 
        namespace Bpflcd59ValC{
            constexpr Register::FieldValue<decltype(bpflcd59)::Type,Bpflcd59Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd59)::Type,Bpflcd59Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd59Val> bpglcd59{}; 
        namespace Bpglcd59ValC{
            constexpr Register::FieldValue<decltype(bpglcd59)::Type,Bpglcd59Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd59)::Type,Bpglcd59Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd59Val> bphlcd59{}; 
        namespace Bphlcd59ValC{
            constexpr Register::FieldValue<decltype(bphlcd59)::Type,Bphlcd59Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd59)::Type,Bphlcd59Val::v1> v1{};
        }
        }
    }
    namespace LcdWf63to60{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be05c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf60{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf61{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf62{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf63{}; 
    }
    namespace LcdWf60{    ///<LCD Waveform Register 60.
        using Addr = Register::Address<0x400be05c,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd60Val> bpalcd60{}; 
        namespace Bpalcd60ValC{
            constexpr Register::FieldValue<decltype(bpalcd60)::Type,Bpalcd60Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd60)::Type,Bpalcd60Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd60Val> bpblcd60{}; 
        namespace Bpblcd60ValC{
            constexpr Register::FieldValue<decltype(bpblcd60)::Type,Bpblcd60Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd60)::Type,Bpblcd60Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd60Val> bpclcd60{}; 
        namespace Bpclcd60ValC{
            constexpr Register::FieldValue<decltype(bpclcd60)::Type,Bpclcd60Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd60)::Type,Bpclcd60Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd60Val> bpdlcd60{}; 
        namespace Bpdlcd60ValC{
            constexpr Register::FieldValue<decltype(bpdlcd60)::Type,Bpdlcd60Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd60)::Type,Bpdlcd60Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd60Val> bpelcd60{}; 
        namespace Bpelcd60ValC{
            constexpr Register::FieldValue<decltype(bpelcd60)::Type,Bpelcd60Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd60)::Type,Bpelcd60Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd60Val> bpflcd60{}; 
        namespace Bpflcd60ValC{
            constexpr Register::FieldValue<decltype(bpflcd60)::Type,Bpflcd60Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd60)::Type,Bpflcd60Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd60Val> bpglcd60{}; 
        namespace Bpglcd60ValC{
            constexpr Register::FieldValue<decltype(bpglcd60)::Type,Bpglcd60Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd60)::Type,Bpglcd60Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd60Val> bphlcd60{}; 
        namespace Bphlcd60ValC{
            constexpr Register::FieldValue<decltype(bphlcd60)::Type,Bphlcd60Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd60)::Type,Bphlcd60Val::v1> v1{};
        }
        }
    }
    namespace LcdWf61{    ///<LCD Waveform Register 61.
        using Addr = Register::Address<0x400be05d,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd61Val> bpalcd61{}; 
        namespace Bpalcd61ValC{
            constexpr Register::FieldValue<decltype(bpalcd61)::Type,Bpalcd61Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd61)::Type,Bpalcd61Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd61Val> bpblcd61{}; 
        namespace Bpblcd61ValC{
            constexpr Register::FieldValue<decltype(bpblcd61)::Type,Bpblcd61Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd61)::Type,Bpblcd61Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd61Val> bpclcd61{}; 
        namespace Bpclcd61ValC{
            constexpr Register::FieldValue<decltype(bpclcd61)::Type,Bpclcd61Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd61)::Type,Bpclcd61Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd61Val> bpdlcd61{}; 
        namespace Bpdlcd61ValC{
            constexpr Register::FieldValue<decltype(bpdlcd61)::Type,Bpdlcd61Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd61)::Type,Bpdlcd61Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd61Val> bpelcd61{}; 
        namespace Bpelcd61ValC{
            constexpr Register::FieldValue<decltype(bpelcd61)::Type,Bpelcd61Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd61)::Type,Bpelcd61Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd61Val> bpflcd61{}; 
        namespace Bpflcd61ValC{
            constexpr Register::FieldValue<decltype(bpflcd61)::Type,Bpflcd61Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd61)::Type,Bpflcd61Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd61Val> bpglcd61{}; 
        namespace Bpglcd61ValC{
            constexpr Register::FieldValue<decltype(bpglcd61)::Type,Bpglcd61Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd61)::Type,Bpglcd61Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd61Val> bphlcd61{}; 
        namespace Bphlcd61ValC{
            constexpr Register::FieldValue<decltype(bphlcd61)::Type,Bphlcd61Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd61)::Type,Bphlcd61Val::v1> v1{};
        }
        }
    }
    namespace LcdWf62{    ///<LCD Waveform Register 62.
        using Addr = Register::Address<0x400be05e,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd62Val> bpalcd62{}; 
        namespace Bpalcd62ValC{
            constexpr Register::FieldValue<decltype(bpalcd62)::Type,Bpalcd62Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd62)::Type,Bpalcd62Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd62Val> bpblcd62{}; 
        namespace Bpblcd62ValC{
            constexpr Register::FieldValue<decltype(bpblcd62)::Type,Bpblcd62Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd62)::Type,Bpblcd62Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd62Val> bpclcd62{}; 
        namespace Bpclcd62ValC{
            constexpr Register::FieldValue<decltype(bpclcd62)::Type,Bpclcd62Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd62)::Type,Bpclcd62Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd62Val> bpdlcd62{}; 
        namespace Bpdlcd62ValC{
            constexpr Register::FieldValue<decltype(bpdlcd62)::Type,Bpdlcd62Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd62)::Type,Bpdlcd62Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd62Val> bpelcd62{}; 
        namespace Bpelcd62ValC{
            constexpr Register::FieldValue<decltype(bpelcd62)::Type,Bpelcd62Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd62)::Type,Bpelcd62Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd62Val> bpflcd62{}; 
        namespace Bpflcd62ValC{
            constexpr Register::FieldValue<decltype(bpflcd62)::Type,Bpflcd62Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd62)::Type,Bpflcd62Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd62Val> bpglcd62{}; 
        namespace Bpglcd62ValC{
            constexpr Register::FieldValue<decltype(bpglcd62)::Type,Bpglcd62Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd62)::Type,Bpglcd62Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd62Val> bphlcd62{}; 
        namespace Bphlcd62ValC{
            constexpr Register::FieldValue<decltype(bphlcd62)::Type,Bphlcd62Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd62)::Type,Bphlcd62Val::v1> v1{};
        }
        }
    }
    namespace LcdWf63{    ///<LCD Waveform Register 63.
        using Addr = Register::Address<0x400be05f,0xffffff00,0,unsigned char>;
        ///no description available
        enum class Bpalcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Bpalcd63Val> bpalcd63{}; 
        namespace Bpalcd63ValC{
            constexpr Register::FieldValue<decltype(bpalcd63)::Type,Bpalcd63Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpalcd63)::Type,Bpalcd63Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpblcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Bpblcd63Val> bpblcd63{}; 
        namespace Bpblcd63ValC{
            constexpr Register::FieldValue<decltype(bpblcd63)::Type,Bpblcd63Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpblcd63)::Type,Bpblcd63Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpclcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Bpclcd63Val> bpclcd63{}; 
        namespace Bpclcd63ValC{
            constexpr Register::FieldValue<decltype(bpclcd63)::Type,Bpclcd63Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpclcd63)::Type,Bpclcd63Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpdlcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Bpdlcd63Val> bpdlcd63{}; 
        namespace Bpdlcd63ValC{
            constexpr Register::FieldValue<decltype(bpdlcd63)::Type,Bpdlcd63Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpdlcd63)::Type,Bpdlcd63Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpelcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Bpelcd63Val> bpelcd63{}; 
        namespace Bpelcd63ValC{
            constexpr Register::FieldValue<decltype(bpelcd63)::Type,Bpelcd63Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpelcd63)::Type,Bpelcd63Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpflcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Bpflcd63Val> bpflcd63{}; 
        namespace Bpflcd63ValC{
            constexpr Register::FieldValue<decltype(bpflcd63)::Type,Bpflcd63Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpflcd63)::Type,Bpflcd63Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bpglcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Bpglcd63Val> bpglcd63{}; 
        namespace Bpglcd63ValC{
            constexpr Register::FieldValue<decltype(bpglcd63)::Type,Bpglcd63Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bpglcd63)::Type,Bpglcd63Val::v1> v1{};
        }
        }
        ///no description available
        enum class Bphlcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Bphlcd63Val> bphlcd63{}; 
        namespace Bphlcd63ValC{
            constexpr Register::FieldValue<decltype(bphlcd63)::Type,Bphlcd63Val::v0> v0{};
            constexpr Register::FieldValue<decltype(bphlcd63)::Type,Bphlcd63Val::v1> v1{};
        }
        }
    }
}
