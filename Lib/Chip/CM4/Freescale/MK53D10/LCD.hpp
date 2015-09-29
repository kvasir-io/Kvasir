#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Segment Liquid Crystal Display
    namespace LcdGcr{    ///<LCD General Control Register
        using Addr = Register::Address<0x400be000,0x700c0c00,0,unsigned>;
        ///LCD duty select
        enum class dutyVal {
            v000=0x00000000,     ///<Use 1 BP (1/1 duty cycle).
            v001=0x00000001,     ///<Use 2 BP (1/2 duty cycle).
            v010=0x00000002,     ///<Use 3 BP (1/3 duty cycle).
            v011=0x00000003,     ///<Use 4 BP (1/4 duty cycle). (Default)
            v100=0x00000004,     ///<Use 5 BP (1/5 duty cycle).
            v101=0x00000005,     ///<Use 6 BP (1/6 duty cycle).
            v110=0x00000006,     ///<Use 7 BP (1/7 duty cycle).
            v111=0x00000007,     ///<Use 8 BP (1/8 duty cycle).
        };
        namespace dutyValC{
            constexpr MPL::Value<dutyVal,dutyVal::v000> v000{};
            constexpr MPL::Value<dutyVal,dutyVal::v001> v001{};
            constexpr MPL::Value<dutyVal,dutyVal::v010> v010{};
            constexpr MPL::Value<dutyVal,dutyVal::v011> v011{};
            constexpr MPL::Value<dutyVal,dutyVal::v100> v100{};
            constexpr MPL::Value<dutyVal,dutyVal::v101> v101{};
            constexpr MPL::Value<dutyVal,dutyVal::v110> v110{};
            constexpr MPL::Value<dutyVal,dutyVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,dutyVal> duty{}; 
        ///LCD Clock Prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> lclk{}; 
        ///LCD Clock Source Select
        enum class sourceVal {
            v0=0x00000000,     ///<Selects the default clock as the LCD clock source.
            v1=0x00000001,     ///<Selects the alternate clock as the LCD clock source.
        };
        namespace sourceValC{
            constexpr MPL::Value<sourceVal,sourceVal::v0> v0{};
            constexpr MPL::Value<sourceVal,sourceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sourceVal> source{}; 
        ///LCD Driver Enable
        enum class lcdenVal {
            v0=0x00000000,     ///<All front plane and back plane pins are disabled. The LCD controller system is also disabled, and all LCD waveform generation clocks are stopped. V LL3 is connected to V DD internally.
            v1=0x00000001,     ///<LCD controller driver system is enabled, and front plane and back plane waveforms are generated. All LCD pins, LCD_Pn, enabled using the LCD Pin Enable register, output an LCD driver waveform. The back plane pins output an LCD driver back plane waveform based on the settings of DUTY[2:0]. Charge pump or resistor bias is enabled.
        };
        namespace lcdenValC{
            constexpr MPL::Value<lcdenVal,lcdenVal::v0> v0{};
            constexpr MPL::Value<lcdenVal,lcdenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,lcdenVal> lcden{}; 
        ///LCD Stop
        enum class lcdstpVal {
            v0=0x00000000,     ///<Allows the LCD driver, charge pump, resistor bias network, and voltage regulator to continue running during Stop mode.
            v1=0x00000001,     ///<Disables the LCD driver, charge pump, resistor bias network, and voltage regulator when MCU enters Stop mode.
        };
        namespace lcdstpValC{
            constexpr MPL::Value<lcdstpVal,lcdstpVal::v0> v0{};
            constexpr MPL::Value<lcdstpVal,lcdstpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,lcdstpVal> lcdstp{}; 
        ///LCD Wait
        enum class lcdwaitVal {
            v0=0x00000000,     ///<Allows the LCD driver, charge pump, resistor bias network, and voltage regulator to continue running during Wait mode.
            v1=0x00000001,     ///<Disables the LCD driver, charge pump, resistor bias network, and voltage regulator when MCU enters Wait mode.
        };
        namespace lcdwaitValC{
            constexpr MPL::Value<lcdwaitVal,lcdwaitVal::v0> v0{};
            constexpr MPL::Value<lcdwaitVal,lcdwaitVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,lcdwaitVal> lcdwait{}; 
        ///LCD AlternateClock Divider
        enum class altdivVal {
            v0=0x00000000,     ///<Divide factor = 1 (No divide)
            v1=0x00000001,     ///<Divide factor = 8
        };
        namespace altdivValC{
            constexpr MPL::Value<altdivVal,altdivVal::v0> v0{};
            constexpr MPL::Value<altdivVal,altdivVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,altdivVal> altdiv{}; 
        ///LCD Fault Detection Complete Interrupt Enable
        enum class fdcienVal {
            v0=0x00000000,     ///<No interrupt request is generated by this event.
            v1=0x00000001,     ///<When a fault is detected and FDCF bit is set, this event causes an interrupt request.
        };
        namespace fdcienValC{
            constexpr MPL::Value<fdcienVal,fdcienVal::v0> v0{};
            constexpr MPL::Value<fdcienVal,fdcienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,fdcienVal> fdcien{}; 
        ///LCD Frame Frequency Interrupt Enable
        enum class lcdienVal {
            v0=0x00000000,     ///<No interrupt request is generated by this event.
            v1=0x00000001,     ///<When LCDIF bit is set, this event causes an interrupt request.
        };
        namespace lcdienValC{
            constexpr MPL::Value<lcdienVal,lcdienVal::v0> v0{};
            constexpr MPL::Value<lcdienVal,lcdienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lcdienVal> lcdien{}; 
        ///Voltage Supply Control
        enum class vsupplyVal {
            v00=0x00000000,     ///<Drive V LL2 internally from V DD .
            v01=0x00000001,     ///<Drive V LL3 internally from V DD .
            v11=0x00000003,     ///<Drive V LL3 externally from V DD or drive V LL1 internally from V IREG .
        };
        namespace vsupplyValC{
            constexpr MPL::Value<vsupplyVal,vsupplyVal::v00> v00{};
            constexpr MPL::Value<vsupplyVal,vsupplyVal::v01> v01{};
            constexpr MPL::Value<vsupplyVal,vsupplyVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,vsupplyVal> vsupply{}; 
        ///Load Adjust
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> ladj{}; 
        ///High Reference Select
        enum class hrefselVal {
            v0=0x00000000,     ///<Divide input, V IREG = 1.0 V for 3 V glass.
            v1=0x00000001,     ///<Do not divide the input, V IREG = 1.67 V for 5 V glass.
        };
        namespace hrefselValC{
            constexpr MPL::Value<hrefselVal,hrefselVal::v0> v0{};
            constexpr MPL::Value<hrefselVal,hrefselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,hrefselVal> hrefsel{}; 
        ///Charge Pump or Resistor Bias Select
        enum class cpselVal {
            v0=0x00000000,     ///<LCD charge pump is disabled. Resistor network selected. (The internal 1/3-bias is forced.)
            v1=0x00000001,     ///<LCD charge pump is selected. Resistor network disabled. (The internal 1/3-bias is forced.)
        };
        namespace cpselValC{
            constexpr MPL::Value<cpselVal,cpselVal::v0> v0{};
            constexpr MPL::Value<cpselVal,cpselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,cpselVal> cpsel{}; 
        ///Regulated Voltage Trim
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> rvtrim{}; 
        ///Regulated Voltage Enable
        enum class rvenVal {
            v0=0x00000000,     ///<Regulated voltage disabled.
            v1=0x00000001,     ///<Regulated voltage enabled.
        };
        namespace rvenValC{
            constexpr MPL::Value<rvenVal,rvenVal::v0> v0{};
            constexpr MPL::Value<rvenVal,rvenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,rvenVal> rven{}; 
    }
    namespace LcdAr{    ///<LCD Auxiliary Register
        using Addr = Register::Address<0x400be004,0xffff7f10,0,unsigned>;
        ///Blink-rate configuration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> brate{}; 
        ///Blink mode
        enum class bmodeVal {
            v0=0x00000000,     ///<Display blank during the blink period.
            v1=0x00000001,     ///<Display alternate display during blink period (Ignored if duty is 5 or greater).
        };
        namespace bmodeValC{
            constexpr MPL::Value<bmodeVal,bmodeVal::v0> v0{};
            constexpr MPL::Value<bmodeVal,bmodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bmodeVal> bmode{}; 
        ///Blank display mode
        enum class blankVal {
            v0=0x00000000,     ///<Normal or alternate display mode.
            v1=0x00000001,     ///<Blank display mode.
        };
        namespace blankValC{
            constexpr MPL::Value<blankVal,blankVal::v0> v0{};
            constexpr MPL::Value<blankVal,blankVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,blankVal> blank{}; 
        ///Alternate display mode
        enum class altVal {
            v0=0x00000000,     ///<Normal display mode.
            v1=0x00000001,     ///<Alternate display mode.
        };
        namespace altValC{
            constexpr MPL::Value<altVal,altVal::v0> v0{};
            constexpr MPL::Value<altVal,altVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,altVal> alt{}; 
        ///Blink command
        enum class blinkVal {
            v0=0x00000000,     ///<Disables blinking.
            v1=0x00000001,     ///<Starts blinking at blinking frequency specified by LCD blink rate calculation.
        };
        namespace blinkValC{
            constexpr MPL::Value<blinkVal,blinkVal::v0> v0{};
            constexpr MPL::Value<blinkVal,blinkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,blinkVal> blink{}; 
        ///LCD Frame Frequency Interrupt flag
        enum class lcdifVal {
            v0=0x00000000,     ///<Frame frequency interrupt condition has not occurred.
            v1=0x00000001,     ///<Start of SLCD frame has occurred.
        };
        namespace lcdifValC{
            constexpr MPL::Value<lcdifVal,lcdifVal::v0> v0{};
            constexpr MPL::Value<lcdifVal,lcdifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,lcdifVal> lcdif{}; 
    }
    namespace LcdFdcr{    ///<LCD Fault Detect Control Register
        using Addr = Register::Address<0x400be008,0xffff8100,0,unsigned>;
        ///Fault Detect Pin ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> fdpinid{}; 
        ///Fault Detect Back Plane Enable
        enum class fdbpenVal {
            v0=0x00000000,     ///<Type of the selected pin under fault detect test is front plane.
            v1=0x00000001,     ///<Type of the selected pin under fault detect test is back plane.
        };
        namespace fdbpenValC{
            constexpr MPL::Value<fdbpenVal,fdbpenVal::v0> v0{};
            constexpr MPL::Value<fdbpenVal,fdbpenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,fdbpenVal> fdbpen{}; 
        ///Fault Detect Enable
        enum class fdenVal {
            v0=0x00000000,     ///<Disable fault detection.
            v1=0x00000001,     ///<Enable fault detection.
        };
        namespace fdenValC{
            constexpr MPL::Value<fdenVal,fdenVal::v0> v0{};
            constexpr MPL::Value<fdenVal,fdenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,fdenVal> fden{}; 
        ///Fault Detect Sample Window Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> fdsww{}; 
        ///Fault Detect Clock Prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> fdprs{}; 
    }
    namespace LcdFdsr{    ///<LCD Fault Detect Status Register
        using Addr = Register::Address<0x400be00c,0xffff7f00,0,unsigned>;
        ///Fault Detect Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> fdcnt{}; 
        ///Fault Detection Complete Flag
        enum class fdcfVal {
            v0=0x00000000,     ///<Fault detection is not completed.
            v1=0x00000001,     ///<Fault detection is completed.
        };
        namespace fdcfValC{
            constexpr MPL::Value<fdcfVal,fdcfVal::v0> v0{};
            constexpr MPL::Value<fdcfVal,fdcfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,fdcfVal> fdcf{}; 
    }
    namespace LcdPenl{    ///<LCD Pin Enable register
        using Addr = Register::Address<0x400be010,0x00000000,0,unsigned>;
        ///LCD Pin Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pen{}; 
    }
    namespace LcdPenh{    ///<LCD Pin Enable register
        using Addr = Register::Address<0x400be014,0x00000000,0,unsigned>;
        ///LCD Pin Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pen{}; 
    }
    namespace LcdBpenl{    ///<LCD Back Plane Enable register
        using Addr = Register::Address<0x400be018,0x00000000,0,unsigned>;
        ///Back Plane Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bpen{}; 
    }
    namespace LcdBpenh{    ///<LCD Back Plane Enable register
        using Addr = Register::Address<0x400be01c,0x00000000,0,unsigned>;
        ///Back Plane Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bpen{}; 
    }
    namespace LcdWf3to0{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be020,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf0{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf1{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf2{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf3{}; 
    }
    namespace LcdWf0{    ///<LCD Waveform Register 0.
        using Addr = Register::Address<0x400be020,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd0ValC{
            constexpr MPL::Value<bpalcd0Val,bpalcd0Val::v0> v0{};
            constexpr MPL::Value<bpalcd0Val,bpalcd0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd0Val> bpalcd0{}; 
        ///no description available
        enum class bpblcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd0ValC{
            constexpr MPL::Value<bpblcd0Val,bpblcd0Val::v0> v0{};
            constexpr MPL::Value<bpblcd0Val,bpblcd0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd0Val> bpblcd0{}; 
        ///no description available
        enum class bpclcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd0ValC{
            constexpr MPL::Value<bpclcd0Val,bpclcd0Val::v0> v0{};
            constexpr MPL::Value<bpclcd0Val,bpclcd0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd0Val> bpclcd0{}; 
        ///no description available
        enum class bpdlcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd0ValC{
            constexpr MPL::Value<bpdlcd0Val,bpdlcd0Val::v0> v0{};
            constexpr MPL::Value<bpdlcd0Val,bpdlcd0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd0Val> bpdlcd0{}; 
        ///no description available
        enum class bpelcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd0ValC{
            constexpr MPL::Value<bpelcd0Val,bpelcd0Val::v0> v0{};
            constexpr MPL::Value<bpelcd0Val,bpelcd0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd0Val> bpelcd0{}; 
        ///no description available
        enum class bpflcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd0ValC{
            constexpr MPL::Value<bpflcd0Val,bpflcd0Val::v0> v0{};
            constexpr MPL::Value<bpflcd0Val,bpflcd0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd0Val> bpflcd0{}; 
        ///no description available
        enum class bpglcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd0ValC{
            constexpr MPL::Value<bpglcd0Val,bpglcd0Val::v0> v0{};
            constexpr MPL::Value<bpglcd0Val,bpglcd0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd0Val> bpglcd0{}; 
        ///no description available
        enum class bphlcd0Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd0ValC{
            constexpr MPL::Value<bphlcd0Val,bphlcd0Val::v0> v0{};
            constexpr MPL::Value<bphlcd0Val,bphlcd0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd0Val> bphlcd0{}; 
    }
    namespace LcdWf1{    ///<LCD Waveform Register 1.
        using Addr = Register::Address<0x400be021,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd1ValC{
            constexpr MPL::Value<bpalcd1Val,bpalcd1Val::v0> v0{};
            constexpr MPL::Value<bpalcd1Val,bpalcd1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd1Val> bpalcd1{}; 
        ///no description available
        enum class bpblcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd1ValC{
            constexpr MPL::Value<bpblcd1Val,bpblcd1Val::v0> v0{};
            constexpr MPL::Value<bpblcd1Val,bpblcd1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd1Val> bpblcd1{}; 
        ///no description available
        enum class bpclcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd1ValC{
            constexpr MPL::Value<bpclcd1Val,bpclcd1Val::v0> v0{};
            constexpr MPL::Value<bpclcd1Val,bpclcd1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd1Val> bpclcd1{}; 
        ///no description available
        enum class bpdlcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd1ValC{
            constexpr MPL::Value<bpdlcd1Val,bpdlcd1Val::v0> v0{};
            constexpr MPL::Value<bpdlcd1Val,bpdlcd1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd1Val> bpdlcd1{}; 
        ///no description available
        enum class bpelcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd1ValC{
            constexpr MPL::Value<bpelcd1Val,bpelcd1Val::v0> v0{};
            constexpr MPL::Value<bpelcd1Val,bpelcd1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd1Val> bpelcd1{}; 
        ///no description available
        enum class bpflcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd1ValC{
            constexpr MPL::Value<bpflcd1Val,bpflcd1Val::v0> v0{};
            constexpr MPL::Value<bpflcd1Val,bpflcd1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd1Val> bpflcd1{}; 
        ///no description available
        enum class bpglcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd1ValC{
            constexpr MPL::Value<bpglcd1Val,bpglcd1Val::v0> v0{};
            constexpr MPL::Value<bpglcd1Val,bpglcd1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd1Val> bpglcd1{}; 
        ///no description available
        enum class bphlcd1Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd1ValC{
            constexpr MPL::Value<bphlcd1Val,bphlcd1Val::v0> v0{};
            constexpr MPL::Value<bphlcd1Val,bphlcd1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd1Val> bphlcd1{}; 
    }
    namespace LcdWf2{    ///<LCD Waveform Register 2.
        using Addr = Register::Address<0x400be022,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd2ValC{
            constexpr MPL::Value<bpalcd2Val,bpalcd2Val::v0> v0{};
            constexpr MPL::Value<bpalcd2Val,bpalcd2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd2Val> bpalcd2{}; 
        ///no description available
        enum class bpblcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd2ValC{
            constexpr MPL::Value<bpblcd2Val,bpblcd2Val::v0> v0{};
            constexpr MPL::Value<bpblcd2Val,bpblcd2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd2Val> bpblcd2{}; 
        ///no description available
        enum class bpclcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd2ValC{
            constexpr MPL::Value<bpclcd2Val,bpclcd2Val::v0> v0{};
            constexpr MPL::Value<bpclcd2Val,bpclcd2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd2Val> bpclcd2{}; 
        ///no description available
        enum class bpdlcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd2ValC{
            constexpr MPL::Value<bpdlcd2Val,bpdlcd2Val::v0> v0{};
            constexpr MPL::Value<bpdlcd2Val,bpdlcd2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd2Val> bpdlcd2{}; 
        ///no description available
        enum class bpelcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd2ValC{
            constexpr MPL::Value<bpelcd2Val,bpelcd2Val::v0> v0{};
            constexpr MPL::Value<bpelcd2Val,bpelcd2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd2Val> bpelcd2{}; 
        ///no description available
        enum class bpflcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd2ValC{
            constexpr MPL::Value<bpflcd2Val,bpflcd2Val::v0> v0{};
            constexpr MPL::Value<bpflcd2Val,bpflcd2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd2Val> bpflcd2{}; 
        ///no description available
        enum class bpglcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd2ValC{
            constexpr MPL::Value<bpglcd2Val,bpglcd2Val::v0> v0{};
            constexpr MPL::Value<bpglcd2Val,bpglcd2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd2Val> bpglcd2{}; 
        ///no description available
        enum class bphlcd2Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd2ValC{
            constexpr MPL::Value<bphlcd2Val,bphlcd2Val::v0> v0{};
            constexpr MPL::Value<bphlcd2Val,bphlcd2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd2Val> bphlcd2{}; 
    }
    namespace LcdWf3{    ///<LCD Waveform Register 3.
        using Addr = Register::Address<0x400be023,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd3ValC{
            constexpr MPL::Value<bpalcd3Val,bpalcd3Val::v0> v0{};
            constexpr MPL::Value<bpalcd3Val,bpalcd3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd3Val> bpalcd3{}; 
        ///no description available
        enum class bpblcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd3ValC{
            constexpr MPL::Value<bpblcd3Val,bpblcd3Val::v0> v0{};
            constexpr MPL::Value<bpblcd3Val,bpblcd3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd3Val> bpblcd3{}; 
        ///no description available
        enum class bpclcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd3ValC{
            constexpr MPL::Value<bpclcd3Val,bpclcd3Val::v0> v0{};
            constexpr MPL::Value<bpclcd3Val,bpclcd3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd3Val> bpclcd3{}; 
        ///no description available
        enum class bpdlcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd3ValC{
            constexpr MPL::Value<bpdlcd3Val,bpdlcd3Val::v0> v0{};
            constexpr MPL::Value<bpdlcd3Val,bpdlcd3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd3Val> bpdlcd3{}; 
        ///no description available
        enum class bpelcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd3ValC{
            constexpr MPL::Value<bpelcd3Val,bpelcd3Val::v0> v0{};
            constexpr MPL::Value<bpelcd3Val,bpelcd3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd3Val> bpelcd3{}; 
        ///no description available
        enum class bpflcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd3ValC{
            constexpr MPL::Value<bpflcd3Val,bpflcd3Val::v0> v0{};
            constexpr MPL::Value<bpflcd3Val,bpflcd3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd3Val> bpflcd3{}; 
        ///no description available
        enum class bpglcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd3ValC{
            constexpr MPL::Value<bpglcd3Val,bpglcd3Val::v0> v0{};
            constexpr MPL::Value<bpglcd3Val,bpglcd3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd3Val> bpglcd3{}; 
        ///no description available
        enum class bphlcd3Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd3ValC{
            constexpr MPL::Value<bphlcd3Val,bphlcd3Val::v0> v0{};
            constexpr MPL::Value<bphlcd3Val,bphlcd3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd3Val> bphlcd3{}; 
    }
    namespace LcdWf7to4{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be024,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf4{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf5{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf6{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf7{}; 
    }
    namespace LcdWf4{    ///<LCD Waveform Register 4.
        using Addr = Register::Address<0x400be024,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd4ValC{
            constexpr MPL::Value<bpalcd4Val,bpalcd4Val::v0> v0{};
            constexpr MPL::Value<bpalcd4Val,bpalcd4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd4Val> bpalcd4{}; 
        ///no description available
        enum class bpblcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd4ValC{
            constexpr MPL::Value<bpblcd4Val,bpblcd4Val::v0> v0{};
            constexpr MPL::Value<bpblcd4Val,bpblcd4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd4Val> bpblcd4{}; 
        ///no description available
        enum class bpclcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd4ValC{
            constexpr MPL::Value<bpclcd4Val,bpclcd4Val::v0> v0{};
            constexpr MPL::Value<bpclcd4Val,bpclcd4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd4Val> bpclcd4{}; 
        ///no description available
        enum class bpdlcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd4ValC{
            constexpr MPL::Value<bpdlcd4Val,bpdlcd4Val::v0> v0{};
            constexpr MPL::Value<bpdlcd4Val,bpdlcd4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd4Val> bpdlcd4{}; 
        ///no description available
        enum class bpelcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd4ValC{
            constexpr MPL::Value<bpelcd4Val,bpelcd4Val::v0> v0{};
            constexpr MPL::Value<bpelcd4Val,bpelcd4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd4Val> bpelcd4{}; 
        ///no description available
        enum class bpflcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd4ValC{
            constexpr MPL::Value<bpflcd4Val,bpflcd4Val::v0> v0{};
            constexpr MPL::Value<bpflcd4Val,bpflcd4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd4Val> bpflcd4{}; 
        ///no description available
        enum class bpglcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd4ValC{
            constexpr MPL::Value<bpglcd4Val,bpglcd4Val::v0> v0{};
            constexpr MPL::Value<bpglcd4Val,bpglcd4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd4Val> bpglcd4{}; 
        ///no description available
        enum class bphlcd4Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd4ValC{
            constexpr MPL::Value<bphlcd4Val,bphlcd4Val::v0> v0{};
            constexpr MPL::Value<bphlcd4Val,bphlcd4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd4Val> bphlcd4{}; 
    }
    namespace LcdWf5{    ///<LCD Waveform Register 5.
        using Addr = Register::Address<0x400be025,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd5ValC{
            constexpr MPL::Value<bpalcd5Val,bpalcd5Val::v0> v0{};
            constexpr MPL::Value<bpalcd5Val,bpalcd5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd5Val> bpalcd5{}; 
        ///no description available
        enum class bpblcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd5ValC{
            constexpr MPL::Value<bpblcd5Val,bpblcd5Val::v0> v0{};
            constexpr MPL::Value<bpblcd5Val,bpblcd5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd5Val> bpblcd5{}; 
        ///no description available
        enum class bpclcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd5ValC{
            constexpr MPL::Value<bpclcd5Val,bpclcd5Val::v0> v0{};
            constexpr MPL::Value<bpclcd5Val,bpclcd5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd5Val> bpclcd5{}; 
        ///no description available
        enum class bpdlcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd5ValC{
            constexpr MPL::Value<bpdlcd5Val,bpdlcd5Val::v0> v0{};
            constexpr MPL::Value<bpdlcd5Val,bpdlcd5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd5Val> bpdlcd5{}; 
        ///no description available
        enum class bpelcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd5ValC{
            constexpr MPL::Value<bpelcd5Val,bpelcd5Val::v0> v0{};
            constexpr MPL::Value<bpelcd5Val,bpelcd5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd5Val> bpelcd5{}; 
        ///no description available
        enum class bpflcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd5ValC{
            constexpr MPL::Value<bpflcd5Val,bpflcd5Val::v0> v0{};
            constexpr MPL::Value<bpflcd5Val,bpflcd5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd5Val> bpflcd5{}; 
        ///no description available
        enum class bpglcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd5ValC{
            constexpr MPL::Value<bpglcd5Val,bpglcd5Val::v0> v0{};
            constexpr MPL::Value<bpglcd5Val,bpglcd5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd5Val> bpglcd5{}; 
        ///no description available
        enum class bphlcd5Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd5ValC{
            constexpr MPL::Value<bphlcd5Val,bphlcd5Val::v0> v0{};
            constexpr MPL::Value<bphlcd5Val,bphlcd5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd5Val> bphlcd5{}; 
    }
    namespace LcdWf6{    ///<LCD Waveform Register 6.
        using Addr = Register::Address<0x400be026,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd6ValC{
            constexpr MPL::Value<bpalcd6Val,bpalcd6Val::v0> v0{};
            constexpr MPL::Value<bpalcd6Val,bpalcd6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd6Val> bpalcd6{}; 
        ///no description available
        enum class bpblcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd6ValC{
            constexpr MPL::Value<bpblcd6Val,bpblcd6Val::v0> v0{};
            constexpr MPL::Value<bpblcd6Val,bpblcd6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd6Val> bpblcd6{}; 
        ///no description available
        enum class bpclcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd6ValC{
            constexpr MPL::Value<bpclcd6Val,bpclcd6Val::v0> v0{};
            constexpr MPL::Value<bpclcd6Val,bpclcd6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd6Val> bpclcd6{}; 
        ///no description available
        enum class bpdlcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd6ValC{
            constexpr MPL::Value<bpdlcd6Val,bpdlcd6Val::v0> v0{};
            constexpr MPL::Value<bpdlcd6Val,bpdlcd6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd6Val> bpdlcd6{}; 
        ///no description available
        enum class bpelcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd6ValC{
            constexpr MPL::Value<bpelcd6Val,bpelcd6Val::v0> v0{};
            constexpr MPL::Value<bpelcd6Val,bpelcd6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd6Val> bpelcd6{}; 
        ///no description available
        enum class bpflcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd6ValC{
            constexpr MPL::Value<bpflcd6Val,bpflcd6Val::v0> v0{};
            constexpr MPL::Value<bpflcd6Val,bpflcd6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd6Val> bpflcd6{}; 
        ///no description available
        enum class bpglcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd6ValC{
            constexpr MPL::Value<bpglcd6Val,bpglcd6Val::v0> v0{};
            constexpr MPL::Value<bpglcd6Val,bpglcd6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd6Val> bpglcd6{}; 
        ///no description available
        enum class bphlcd6Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd6ValC{
            constexpr MPL::Value<bphlcd6Val,bphlcd6Val::v0> v0{};
            constexpr MPL::Value<bphlcd6Val,bphlcd6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd6Val> bphlcd6{}; 
    }
    namespace LcdWf7{    ///<LCD Waveform Register 7.
        using Addr = Register::Address<0x400be027,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd7ValC{
            constexpr MPL::Value<bpalcd7Val,bpalcd7Val::v0> v0{};
            constexpr MPL::Value<bpalcd7Val,bpalcd7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd7Val> bpalcd7{}; 
        ///no description available
        enum class bpblcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd7ValC{
            constexpr MPL::Value<bpblcd7Val,bpblcd7Val::v0> v0{};
            constexpr MPL::Value<bpblcd7Val,bpblcd7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd7Val> bpblcd7{}; 
        ///no description available
        enum class bpclcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd7ValC{
            constexpr MPL::Value<bpclcd7Val,bpclcd7Val::v0> v0{};
            constexpr MPL::Value<bpclcd7Val,bpclcd7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd7Val> bpclcd7{}; 
        ///no description available
        enum class bpdlcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd7ValC{
            constexpr MPL::Value<bpdlcd7Val,bpdlcd7Val::v0> v0{};
            constexpr MPL::Value<bpdlcd7Val,bpdlcd7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd7Val> bpdlcd7{}; 
        ///no description available
        enum class bpelcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd7ValC{
            constexpr MPL::Value<bpelcd7Val,bpelcd7Val::v0> v0{};
            constexpr MPL::Value<bpelcd7Val,bpelcd7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd7Val> bpelcd7{}; 
        ///no description available
        enum class bpflcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd7ValC{
            constexpr MPL::Value<bpflcd7Val,bpflcd7Val::v0> v0{};
            constexpr MPL::Value<bpflcd7Val,bpflcd7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd7Val> bpflcd7{}; 
        ///no description available
        enum class bpglcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd7ValC{
            constexpr MPL::Value<bpglcd7Val,bpglcd7Val::v0> v0{};
            constexpr MPL::Value<bpglcd7Val,bpglcd7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd7Val> bpglcd7{}; 
        ///no description available
        enum class bphlcd7Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd7ValC{
            constexpr MPL::Value<bphlcd7Val,bphlcd7Val::v0> v0{};
            constexpr MPL::Value<bphlcd7Val,bphlcd7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd7Val> bphlcd7{}; 
    }
    namespace LcdWf11to8{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be028,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf8{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf9{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf10{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf11{}; 
    }
    namespace LcdWf8{    ///<LCD Waveform Register 8.
        using Addr = Register::Address<0x400be028,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd8ValC{
            constexpr MPL::Value<bpalcd8Val,bpalcd8Val::v0> v0{};
            constexpr MPL::Value<bpalcd8Val,bpalcd8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd8Val> bpalcd8{}; 
        ///no description available
        enum class bpblcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd8ValC{
            constexpr MPL::Value<bpblcd8Val,bpblcd8Val::v0> v0{};
            constexpr MPL::Value<bpblcd8Val,bpblcd8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd8Val> bpblcd8{}; 
        ///no description available
        enum class bpclcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd8ValC{
            constexpr MPL::Value<bpclcd8Val,bpclcd8Val::v0> v0{};
            constexpr MPL::Value<bpclcd8Val,bpclcd8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd8Val> bpclcd8{}; 
        ///no description available
        enum class bpdlcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd8ValC{
            constexpr MPL::Value<bpdlcd8Val,bpdlcd8Val::v0> v0{};
            constexpr MPL::Value<bpdlcd8Val,bpdlcd8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd8Val> bpdlcd8{}; 
        ///no description available
        enum class bpelcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd8ValC{
            constexpr MPL::Value<bpelcd8Val,bpelcd8Val::v0> v0{};
            constexpr MPL::Value<bpelcd8Val,bpelcd8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd8Val> bpelcd8{}; 
        ///no description available
        enum class bpflcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd8ValC{
            constexpr MPL::Value<bpflcd8Val,bpflcd8Val::v0> v0{};
            constexpr MPL::Value<bpflcd8Val,bpflcd8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd8Val> bpflcd8{}; 
        ///no description available
        enum class bpglcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd8ValC{
            constexpr MPL::Value<bpglcd8Val,bpglcd8Val::v0> v0{};
            constexpr MPL::Value<bpglcd8Val,bpglcd8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd8Val> bpglcd8{}; 
        ///no description available
        enum class bphlcd8Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd8ValC{
            constexpr MPL::Value<bphlcd8Val,bphlcd8Val::v0> v0{};
            constexpr MPL::Value<bphlcd8Val,bphlcd8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd8Val> bphlcd8{}; 
    }
    namespace LcdWf9{    ///<LCD Waveform Register 9.
        using Addr = Register::Address<0x400be029,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd9ValC{
            constexpr MPL::Value<bpalcd9Val,bpalcd9Val::v0> v0{};
            constexpr MPL::Value<bpalcd9Val,bpalcd9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd9Val> bpalcd9{}; 
        ///no description available
        enum class bpblcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd9ValC{
            constexpr MPL::Value<bpblcd9Val,bpblcd9Val::v0> v0{};
            constexpr MPL::Value<bpblcd9Val,bpblcd9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd9Val> bpblcd9{}; 
        ///no description available
        enum class bpclcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd9ValC{
            constexpr MPL::Value<bpclcd9Val,bpclcd9Val::v0> v0{};
            constexpr MPL::Value<bpclcd9Val,bpclcd9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd9Val> bpclcd9{}; 
        ///no description available
        enum class bpdlcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd9ValC{
            constexpr MPL::Value<bpdlcd9Val,bpdlcd9Val::v0> v0{};
            constexpr MPL::Value<bpdlcd9Val,bpdlcd9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd9Val> bpdlcd9{}; 
        ///no description available
        enum class bpelcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd9ValC{
            constexpr MPL::Value<bpelcd9Val,bpelcd9Val::v0> v0{};
            constexpr MPL::Value<bpelcd9Val,bpelcd9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd9Val> bpelcd9{}; 
        ///no description available
        enum class bpflcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd9ValC{
            constexpr MPL::Value<bpflcd9Val,bpflcd9Val::v0> v0{};
            constexpr MPL::Value<bpflcd9Val,bpflcd9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd9Val> bpflcd9{}; 
        ///no description available
        enum class bpglcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd9ValC{
            constexpr MPL::Value<bpglcd9Val,bpglcd9Val::v0> v0{};
            constexpr MPL::Value<bpglcd9Val,bpglcd9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd9Val> bpglcd9{}; 
        ///no description available
        enum class bphlcd9Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd9ValC{
            constexpr MPL::Value<bphlcd9Val,bphlcd9Val::v0> v0{};
            constexpr MPL::Value<bphlcd9Val,bphlcd9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd9Val> bphlcd9{}; 
    }
    namespace LcdWf10{    ///<LCD Waveform Register 10.
        using Addr = Register::Address<0x400be02a,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd10ValC{
            constexpr MPL::Value<bpalcd10Val,bpalcd10Val::v0> v0{};
            constexpr MPL::Value<bpalcd10Val,bpalcd10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd10Val> bpalcd10{}; 
        ///no description available
        enum class bpblcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd10ValC{
            constexpr MPL::Value<bpblcd10Val,bpblcd10Val::v0> v0{};
            constexpr MPL::Value<bpblcd10Val,bpblcd10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd10Val> bpblcd10{}; 
        ///no description available
        enum class bpclcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd10ValC{
            constexpr MPL::Value<bpclcd10Val,bpclcd10Val::v0> v0{};
            constexpr MPL::Value<bpclcd10Val,bpclcd10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd10Val> bpclcd10{}; 
        ///no description available
        enum class bpdlcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd10ValC{
            constexpr MPL::Value<bpdlcd10Val,bpdlcd10Val::v0> v0{};
            constexpr MPL::Value<bpdlcd10Val,bpdlcd10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd10Val> bpdlcd10{}; 
        ///no description available
        enum class bpelcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd10ValC{
            constexpr MPL::Value<bpelcd10Val,bpelcd10Val::v0> v0{};
            constexpr MPL::Value<bpelcd10Val,bpelcd10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd10Val> bpelcd10{}; 
        ///no description available
        enum class bpflcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd10ValC{
            constexpr MPL::Value<bpflcd10Val,bpflcd10Val::v0> v0{};
            constexpr MPL::Value<bpflcd10Val,bpflcd10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd10Val> bpflcd10{}; 
        ///no description available
        enum class bpglcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd10ValC{
            constexpr MPL::Value<bpglcd10Val,bpglcd10Val::v0> v0{};
            constexpr MPL::Value<bpglcd10Val,bpglcd10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd10Val> bpglcd10{}; 
        ///no description available
        enum class bphlcd10Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd10ValC{
            constexpr MPL::Value<bphlcd10Val,bphlcd10Val::v0> v0{};
            constexpr MPL::Value<bphlcd10Val,bphlcd10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd10Val> bphlcd10{}; 
    }
    namespace LcdWf11{    ///<LCD Waveform Register 11.
        using Addr = Register::Address<0x400be02b,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd11ValC{
            constexpr MPL::Value<bpalcd11Val,bpalcd11Val::v0> v0{};
            constexpr MPL::Value<bpalcd11Val,bpalcd11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd11Val> bpalcd11{}; 
        ///no description available
        enum class bpblcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd11ValC{
            constexpr MPL::Value<bpblcd11Val,bpblcd11Val::v0> v0{};
            constexpr MPL::Value<bpblcd11Val,bpblcd11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd11Val> bpblcd11{}; 
        ///no description available
        enum class bpclcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd11ValC{
            constexpr MPL::Value<bpclcd11Val,bpclcd11Val::v0> v0{};
            constexpr MPL::Value<bpclcd11Val,bpclcd11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd11Val> bpclcd11{}; 
        ///no description available
        enum class bpdlcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd11ValC{
            constexpr MPL::Value<bpdlcd11Val,bpdlcd11Val::v0> v0{};
            constexpr MPL::Value<bpdlcd11Val,bpdlcd11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd11Val> bpdlcd11{}; 
        ///no description available
        enum class bpelcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd11ValC{
            constexpr MPL::Value<bpelcd11Val,bpelcd11Val::v0> v0{};
            constexpr MPL::Value<bpelcd11Val,bpelcd11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd11Val> bpelcd11{}; 
        ///no description available
        enum class bpflcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd11ValC{
            constexpr MPL::Value<bpflcd11Val,bpflcd11Val::v0> v0{};
            constexpr MPL::Value<bpflcd11Val,bpflcd11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd11Val> bpflcd11{}; 
        ///no description available
        enum class bpglcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd11ValC{
            constexpr MPL::Value<bpglcd11Val,bpglcd11Val::v0> v0{};
            constexpr MPL::Value<bpglcd11Val,bpglcd11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd11Val> bpglcd11{}; 
        ///no description available
        enum class bphlcd11Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd11ValC{
            constexpr MPL::Value<bphlcd11Val,bphlcd11Val::v0> v0{};
            constexpr MPL::Value<bphlcd11Val,bphlcd11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd11Val> bphlcd11{}; 
    }
    namespace LcdWf15to12{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be02c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf12{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf13{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf14{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf15{}; 
    }
    namespace LcdWf12{    ///<LCD Waveform Register 12.
        using Addr = Register::Address<0x400be02c,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd12ValC{
            constexpr MPL::Value<bpalcd12Val,bpalcd12Val::v0> v0{};
            constexpr MPL::Value<bpalcd12Val,bpalcd12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd12Val> bpalcd12{}; 
        ///no description available
        enum class bpblcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd12ValC{
            constexpr MPL::Value<bpblcd12Val,bpblcd12Val::v0> v0{};
            constexpr MPL::Value<bpblcd12Val,bpblcd12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd12Val> bpblcd12{}; 
        ///no description available
        enum class bpclcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd12ValC{
            constexpr MPL::Value<bpclcd12Val,bpclcd12Val::v0> v0{};
            constexpr MPL::Value<bpclcd12Val,bpclcd12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd12Val> bpclcd12{}; 
        ///no description available
        enum class bpdlcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd12ValC{
            constexpr MPL::Value<bpdlcd12Val,bpdlcd12Val::v0> v0{};
            constexpr MPL::Value<bpdlcd12Val,bpdlcd12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd12Val> bpdlcd12{}; 
        ///no description available
        enum class bpelcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd12ValC{
            constexpr MPL::Value<bpelcd12Val,bpelcd12Val::v0> v0{};
            constexpr MPL::Value<bpelcd12Val,bpelcd12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd12Val> bpelcd12{}; 
        ///no description available
        enum class bpflcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd12ValC{
            constexpr MPL::Value<bpflcd12Val,bpflcd12Val::v0> v0{};
            constexpr MPL::Value<bpflcd12Val,bpflcd12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd12Val> bpflcd12{}; 
        ///no description available
        enum class bpglcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd12ValC{
            constexpr MPL::Value<bpglcd12Val,bpglcd12Val::v0> v0{};
            constexpr MPL::Value<bpglcd12Val,bpglcd12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd12Val> bpglcd12{}; 
        ///no description available
        enum class bphlcd12Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd12ValC{
            constexpr MPL::Value<bphlcd12Val,bphlcd12Val::v0> v0{};
            constexpr MPL::Value<bphlcd12Val,bphlcd12Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd12Val> bphlcd12{}; 
    }
    namespace LcdWf13{    ///<LCD Waveform Register 13.
        using Addr = Register::Address<0x400be02d,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd13ValC{
            constexpr MPL::Value<bpalcd13Val,bpalcd13Val::v0> v0{};
            constexpr MPL::Value<bpalcd13Val,bpalcd13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd13Val> bpalcd13{}; 
        ///no description available
        enum class bpblcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd13ValC{
            constexpr MPL::Value<bpblcd13Val,bpblcd13Val::v0> v0{};
            constexpr MPL::Value<bpblcd13Val,bpblcd13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd13Val> bpblcd13{}; 
        ///no description available
        enum class bpclcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd13ValC{
            constexpr MPL::Value<bpclcd13Val,bpclcd13Val::v0> v0{};
            constexpr MPL::Value<bpclcd13Val,bpclcd13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd13Val> bpclcd13{}; 
        ///no description available
        enum class bpdlcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd13ValC{
            constexpr MPL::Value<bpdlcd13Val,bpdlcd13Val::v0> v0{};
            constexpr MPL::Value<bpdlcd13Val,bpdlcd13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd13Val> bpdlcd13{}; 
        ///no description available
        enum class bpelcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd13ValC{
            constexpr MPL::Value<bpelcd13Val,bpelcd13Val::v0> v0{};
            constexpr MPL::Value<bpelcd13Val,bpelcd13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd13Val> bpelcd13{}; 
        ///no description available
        enum class bpflcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd13ValC{
            constexpr MPL::Value<bpflcd13Val,bpflcd13Val::v0> v0{};
            constexpr MPL::Value<bpflcd13Val,bpflcd13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd13Val> bpflcd13{}; 
        ///no description available
        enum class bpglcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd13ValC{
            constexpr MPL::Value<bpglcd13Val,bpglcd13Val::v0> v0{};
            constexpr MPL::Value<bpglcd13Val,bpglcd13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd13Val> bpglcd13{}; 
        ///no description available
        enum class bphlcd13Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd13ValC{
            constexpr MPL::Value<bphlcd13Val,bphlcd13Val::v0> v0{};
            constexpr MPL::Value<bphlcd13Val,bphlcd13Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd13Val> bphlcd13{}; 
    }
    namespace LcdWf14{    ///<LCD Waveform Register 14.
        using Addr = Register::Address<0x400be02e,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd14ValC{
            constexpr MPL::Value<bpalcd14Val,bpalcd14Val::v0> v0{};
            constexpr MPL::Value<bpalcd14Val,bpalcd14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd14Val> bpalcd14{}; 
        ///no description available
        enum class bpblcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd14ValC{
            constexpr MPL::Value<bpblcd14Val,bpblcd14Val::v0> v0{};
            constexpr MPL::Value<bpblcd14Val,bpblcd14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd14Val> bpblcd14{}; 
        ///no description available
        enum class bpclcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd14ValC{
            constexpr MPL::Value<bpclcd14Val,bpclcd14Val::v0> v0{};
            constexpr MPL::Value<bpclcd14Val,bpclcd14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd14Val> bpclcd14{}; 
        ///no description available
        enum class bpdlcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd14ValC{
            constexpr MPL::Value<bpdlcd14Val,bpdlcd14Val::v0> v0{};
            constexpr MPL::Value<bpdlcd14Val,bpdlcd14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd14Val> bpdlcd14{}; 
        ///no description available
        enum class bpelcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd14ValC{
            constexpr MPL::Value<bpelcd14Val,bpelcd14Val::v0> v0{};
            constexpr MPL::Value<bpelcd14Val,bpelcd14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd14Val> bpelcd14{}; 
        ///no description available
        enum class bpflcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd14ValC{
            constexpr MPL::Value<bpflcd14Val,bpflcd14Val::v0> v0{};
            constexpr MPL::Value<bpflcd14Val,bpflcd14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd14Val> bpflcd14{}; 
        ///no description available
        enum class bpglcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd14ValC{
            constexpr MPL::Value<bpglcd14Val,bpglcd14Val::v0> v0{};
            constexpr MPL::Value<bpglcd14Val,bpglcd14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd14Val> bpglcd14{}; 
        ///no description available
        enum class bphlcd14Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd14ValC{
            constexpr MPL::Value<bphlcd14Val,bphlcd14Val::v0> v0{};
            constexpr MPL::Value<bphlcd14Val,bphlcd14Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd14Val> bphlcd14{}; 
    }
    namespace LcdWf15{    ///<LCD Waveform Register 15.
        using Addr = Register::Address<0x400be02f,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd15ValC{
            constexpr MPL::Value<bpalcd15Val,bpalcd15Val::v0> v0{};
            constexpr MPL::Value<bpalcd15Val,bpalcd15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd15Val> bpalcd15{}; 
        ///no description available
        enum class bpblcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd15ValC{
            constexpr MPL::Value<bpblcd15Val,bpblcd15Val::v0> v0{};
            constexpr MPL::Value<bpblcd15Val,bpblcd15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd15Val> bpblcd15{}; 
        ///no description available
        enum class bpclcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd15ValC{
            constexpr MPL::Value<bpclcd15Val,bpclcd15Val::v0> v0{};
            constexpr MPL::Value<bpclcd15Val,bpclcd15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd15Val> bpclcd15{}; 
        ///no description available
        enum class bpdlcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd15ValC{
            constexpr MPL::Value<bpdlcd15Val,bpdlcd15Val::v0> v0{};
            constexpr MPL::Value<bpdlcd15Val,bpdlcd15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd15Val> bpdlcd15{}; 
        ///no description available
        enum class bpelcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd15ValC{
            constexpr MPL::Value<bpelcd15Val,bpelcd15Val::v0> v0{};
            constexpr MPL::Value<bpelcd15Val,bpelcd15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd15Val> bpelcd15{}; 
        ///no description available
        enum class bpflcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd15ValC{
            constexpr MPL::Value<bpflcd15Val,bpflcd15Val::v0> v0{};
            constexpr MPL::Value<bpflcd15Val,bpflcd15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd15Val> bpflcd15{}; 
        ///no description available
        enum class bpglcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd15ValC{
            constexpr MPL::Value<bpglcd15Val,bpglcd15Val::v0> v0{};
            constexpr MPL::Value<bpglcd15Val,bpglcd15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd15Val> bpglcd15{}; 
        ///no description available
        enum class bphlcd15Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd15ValC{
            constexpr MPL::Value<bphlcd15Val,bphlcd15Val::v0> v0{};
            constexpr MPL::Value<bphlcd15Val,bphlcd15Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd15Val> bphlcd15{}; 
    }
    namespace LcdWf19to16{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be030,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf16{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf17{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf18{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf19{}; 
    }
    namespace LcdWf16{    ///<LCD Waveform Register 16.
        using Addr = Register::Address<0x400be030,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd16ValC{
            constexpr MPL::Value<bpalcd16Val,bpalcd16Val::v0> v0{};
            constexpr MPL::Value<bpalcd16Val,bpalcd16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd16Val> bpalcd16{}; 
        ///no description available
        enum class bpblcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd16ValC{
            constexpr MPL::Value<bpblcd16Val,bpblcd16Val::v0> v0{};
            constexpr MPL::Value<bpblcd16Val,bpblcd16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd16Val> bpblcd16{}; 
        ///no description available
        enum class bpclcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd16ValC{
            constexpr MPL::Value<bpclcd16Val,bpclcd16Val::v0> v0{};
            constexpr MPL::Value<bpclcd16Val,bpclcd16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd16Val> bpclcd16{}; 
        ///no description available
        enum class bpdlcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd16ValC{
            constexpr MPL::Value<bpdlcd16Val,bpdlcd16Val::v0> v0{};
            constexpr MPL::Value<bpdlcd16Val,bpdlcd16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd16Val> bpdlcd16{}; 
        ///no description available
        enum class bpelcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd16ValC{
            constexpr MPL::Value<bpelcd16Val,bpelcd16Val::v0> v0{};
            constexpr MPL::Value<bpelcd16Val,bpelcd16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd16Val> bpelcd16{}; 
        ///no description available
        enum class bpflcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd16ValC{
            constexpr MPL::Value<bpflcd16Val,bpflcd16Val::v0> v0{};
            constexpr MPL::Value<bpflcd16Val,bpflcd16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd16Val> bpflcd16{}; 
        ///no description available
        enum class bpglcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd16ValC{
            constexpr MPL::Value<bpglcd16Val,bpglcd16Val::v0> v0{};
            constexpr MPL::Value<bpglcd16Val,bpglcd16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd16Val> bpglcd16{}; 
        ///no description available
        enum class bphlcd16Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd16ValC{
            constexpr MPL::Value<bphlcd16Val,bphlcd16Val::v0> v0{};
            constexpr MPL::Value<bphlcd16Val,bphlcd16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd16Val> bphlcd16{}; 
    }
    namespace LcdWf17{    ///<LCD Waveform Register 17.
        using Addr = Register::Address<0x400be031,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd17ValC{
            constexpr MPL::Value<bpalcd17Val,bpalcd17Val::v0> v0{};
            constexpr MPL::Value<bpalcd17Val,bpalcd17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd17Val> bpalcd17{}; 
        ///no description available
        enum class bpblcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd17ValC{
            constexpr MPL::Value<bpblcd17Val,bpblcd17Val::v0> v0{};
            constexpr MPL::Value<bpblcd17Val,bpblcd17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd17Val> bpblcd17{}; 
        ///no description available
        enum class bpclcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd17ValC{
            constexpr MPL::Value<bpclcd17Val,bpclcd17Val::v0> v0{};
            constexpr MPL::Value<bpclcd17Val,bpclcd17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd17Val> bpclcd17{}; 
        ///no description available
        enum class bpdlcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd17ValC{
            constexpr MPL::Value<bpdlcd17Val,bpdlcd17Val::v0> v0{};
            constexpr MPL::Value<bpdlcd17Val,bpdlcd17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd17Val> bpdlcd17{}; 
        ///no description available
        enum class bpelcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd17ValC{
            constexpr MPL::Value<bpelcd17Val,bpelcd17Val::v0> v0{};
            constexpr MPL::Value<bpelcd17Val,bpelcd17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd17Val> bpelcd17{}; 
        ///no description available
        enum class bpflcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd17ValC{
            constexpr MPL::Value<bpflcd17Val,bpflcd17Val::v0> v0{};
            constexpr MPL::Value<bpflcd17Val,bpflcd17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd17Val> bpflcd17{}; 
        ///no description available
        enum class bpglcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd17ValC{
            constexpr MPL::Value<bpglcd17Val,bpglcd17Val::v0> v0{};
            constexpr MPL::Value<bpglcd17Val,bpglcd17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd17Val> bpglcd17{}; 
        ///no description available
        enum class bphlcd17Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd17ValC{
            constexpr MPL::Value<bphlcd17Val,bphlcd17Val::v0> v0{};
            constexpr MPL::Value<bphlcd17Val,bphlcd17Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd17Val> bphlcd17{}; 
    }
    namespace LcdWf18{    ///<LCD Waveform Register 18.
        using Addr = Register::Address<0x400be032,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd18ValC{
            constexpr MPL::Value<bpalcd18Val,bpalcd18Val::v0> v0{};
            constexpr MPL::Value<bpalcd18Val,bpalcd18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd18Val> bpalcd18{}; 
        ///no description available
        enum class bpblcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd18ValC{
            constexpr MPL::Value<bpblcd18Val,bpblcd18Val::v0> v0{};
            constexpr MPL::Value<bpblcd18Val,bpblcd18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd18Val> bpblcd18{}; 
        ///no description available
        enum class bpclcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd18ValC{
            constexpr MPL::Value<bpclcd18Val,bpclcd18Val::v0> v0{};
            constexpr MPL::Value<bpclcd18Val,bpclcd18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd18Val> bpclcd18{}; 
        ///no description available
        enum class bpdlcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd18ValC{
            constexpr MPL::Value<bpdlcd18Val,bpdlcd18Val::v0> v0{};
            constexpr MPL::Value<bpdlcd18Val,bpdlcd18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd18Val> bpdlcd18{}; 
        ///no description available
        enum class bpelcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd18ValC{
            constexpr MPL::Value<bpelcd18Val,bpelcd18Val::v0> v0{};
            constexpr MPL::Value<bpelcd18Val,bpelcd18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd18Val> bpelcd18{}; 
        ///no description available
        enum class bpflcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd18ValC{
            constexpr MPL::Value<bpflcd18Val,bpflcd18Val::v0> v0{};
            constexpr MPL::Value<bpflcd18Val,bpflcd18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd18Val> bpflcd18{}; 
        ///no description available
        enum class bpglcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd18ValC{
            constexpr MPL::Value<bpglcd18Val,bpglcd18Val::v0> v0{};
            constexpr MPL::Value<bpglcd18Val,bpglcd18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd18Val> bpglcd18{}; 
        ///no description available
        enum class bphlcd18Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd18ValC{
            constexpr MPL::Value<bphlcd18Val,bphlcd18Val::v0> v0{};
            constexpr MPL::Value<bphlcd18Val,bphlcd18Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd18Val> bphlcd18{}; 
    }
    namespace LcdWf19{    ///<LCD Waveform Register 19.
        using Addr = Register::Address<0x400be033,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd19ValC{
            constexpr MPL::Value<bpalcd19Val,bpalcd19Val::v0> v0{};
            constexpr MPL::Value<bpalcd19Val,bpalcd19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd19Val> bpalcd19{}; 
        ///no description available
        enum class bpblcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd19ValC{
            constexpr MPL::Value<bpblcd19Val,bpblcd19Val::v0> v0{};
            constexpr MPL::Value<bpblcd19Val,bpblcd19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd19Val> bpblcd19{}; 
        ///no description available
        enum class bpclcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd19ValC{
            constexpr MPL::Value<bpclcd19Val,bpclcd19Val::v0> v0{};
            constexpr MPL::Value<bpclcd19Val,bpclcd19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd19Val> bpclcd19{}; 
        ///no description available
        enum class bpdlcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd19ValC{
            constexpr MPL::Value<bpdlcd19Val,bpdlcd19Val::v0> v0{};
            constexpr MPL::Value<bpdlcd19Val,bpdlcd19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd19Val> bpdlcd19{}; 
        ///no description available
        enum class bpelcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd19ValC{
            constexpr MPL::Value<bpelcd19Val,bpelcd19Val::v0> v0{};
            constexpr MPL::Value<bpelcd19Val,bpelcd19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd19Val> bpelcd19{}; 
        ///no description available
        enum class bpflcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd19ValC{
            constexpr MPL::Value<bpflcd19Val,bpflcd19Val::v0> v0{};
            constexpr MPL::Value<bpflcd19Val,bpflcd19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd19Val> bpflcd19{}; 
        ///no description available
        enum class bpglcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd19ValC{
            constexpr MPL::Value<bpglcd19Val,bpglcd19Val::v0> v0{};
            constexpr MPL::Value<bpglcd19Val,bpglcd19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd19Val> bpglcd19{}; 
        ///no description available
        enum class bphlcd19Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd19ValC{
            constexpr MPL::Value<bphlcd19Val,bphlcd19Val::v0> v0{};
            constexpr MPL::Value<bphlcd19Val,bphlcd19Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd19Val> bphlcd19{}; 
    }
    namespace LcdWf23to20{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be034,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf20{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf21{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf22{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf23{}; 
    }
    namespace LcdWf20{    ///<LCD Waveform Register 20.
        using Addr = Register::Address<0x400be034,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd20ValC{
            constexpr MPL::Value<bpalcd20Val,bpalcd20Val::v0> v0{};
            constexpr MPL::Value<bpalcd20Val,bpalcd20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd20Val> bpalcd20{}; 
        ///no description available
        enum class bpblcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd20ValC{
            constexpr MPL::Value<bpblcd20Val,bpblcd20Val::v0> v0{};
            constexpr MPL::Value<bpblcd20Val,bpblcd20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd20Val> bpblcd20{}; 
        ///no description available
        enum class bpclcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd20ValC{
            constexpr MPL::Value<bpclcd20Val,bpclcd20Val::v0> v0{};
            constexpr MPL::Value<bpclcd20Val,bpclcd20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd20Val> bpclcd20{}; 
        ///no description available
        enum class bpdlcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd20ValC{
            constexpr MPL::Value<bpdlcd20Val,bpdlcd20Val::v0> v0{};
            constexpr MPL::Value<bpdlcd20Val,bpdlcd20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd20Val> bpdlcd20{}; 
        ///no description available
        enum class bpelcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd20ValC{
            constexpr MPL::Value<bpelcd20Val,bpelcd20Val::v0> v0{};
            constexpr MPL::Value<bpelcd20Val,bpelcd20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd20Val> bpelcd20{}; 
        ///no description available
        enum class bpflcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd20ValC{
            constexpr MPL::Value<bpflcd20Val,bpflcd20Val::v0> v0{};
            constexpr MPL::Value<bpflcd20Val,bpflcd20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd20Val> bpflcd20{}; 
        ///no description available
        enum class bpglcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd20ValC{
            constexpr MPL::Value<bpglcd20Val,bpglcd20Val::v0> v0{};
            constexpr MPL::Value<bpglcd20Val,bpglcd20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd20Val> bpglcd20{}; 
        ///no description available
        enum class bphlcd20Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd20ValC{
            constexpr MPL::Value<bphlcd20Val,bphlcd20Val::v0> v0{};
            constexpr MPL::Value<bphlcd20Val,bphlcd20Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd20Val> bphlcd20{}; 
    }
    namespace LcdWf21{    ///<LCD Waveform Register 21.
        using Addr = Register::Address<0x400be035,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd21ValC{
            constexpr MPL::Value<bpalcd21Val,bpalcd21Val::v0> v0{};
            constexpr MPL::Value<bpalcd21Val,bpalcd21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd21Val> bpalcd21{}; 
        ///no description available
        enum class bpblcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd21ValC{
            constexpr MPL::Value<bpblcd21Val,bpblcd21Val::v0> v0{};
            constexpr MPL::Value<bpblcd21Val,bpblcd21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd21Val> bpblcd21{}; 
        ///no description available
        enum class bpclcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd21ValC{
            constexpr MPL::Value<bpclcd21Val,bpclcd21Val::v0> v0{};
            constexpr MPL::Value<bpclcd21Val,bpclcd21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd21Val> bpclcd21{}; 
        ///no description available
        enum class bpdlcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd21ValC{
            constexpr MPL::Value<bpdlcd21Val,bpdlcd21Val::v0> v0{};
            constexpr MPL::Value<bpdlcd21Val,bpdlcd21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd21Val> bpdlcd21{}; 
        ///no description available
        enum class bpelcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd21ValC{
            constexpr MPL::Value<bpelcd21Val,bpelcd21Val::v0> v0{};
            constexpr MPL::Value<bpelcd21Val,bpelcd21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd21Val> bpelcd21{}; 
        ///no description available
        enum class bpflcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd21ValC{
            constexpr MPL::Value<bpflcd21Val,bpflcd21Val::v0> v0{};
            constexpr MPL::Value<bpflcd21Val,bpflcd21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd21Val> bpflcd21{}; 
        ///no description available
        enum class bpglcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd21ValC{
            constexpr MPL::Value<bpglcd21Val,bpglcd21Val::v0> v0{};
            constexpr MPL::Value<bpglcd21Val,bpglcd21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd21Val> bpglcd21{}; 
        ///no description available
        enum class bphlcd21Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd21ValC{
            constexpr MPL::Value<bphlcd21Val,bphlcd21Val::v0> v0{};
            constexpr MPL::Value<bphlcd21Val,bphlcd21Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd21Val> bphlcd21{}; 
    }
    namespace LcdWf22{    ///<LCD Waveform Register 22.
        using Addr = Register::Address<0x400be036,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd22ValC{
            constexpr MPL::Value<bpalcd22Val,bpalcd22Val::v0> v0{};
            constexpr MPL::Value<bpalcd22Val,bpalcd22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd22Val> bpalcd22{}; 
        ///no description available
        enum class bpblcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd22ValC{
            constexpr MPL::Value<bpblcd22Val,bpblcd22Val::v0> v0{};
            constexpr MPL::Value<bpblcd22Val,bpblcd22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd22Val> bpblcd22{}; 
        ///no description available
        enum class bpclcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd22ValC{
            constexpr MPL::Value<bpclcd22Val,bpclcd22Val::v0> v0{};
            constexpr MPL::Value<bpclcd22Val,bpclcd22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd22Val> bpclcd22{}; 
        ///no description available
        enum class bpdlcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd22ValC{
            constexpr MPL::Value<bpdlcd22Val,bpdlcd22Val::v0> v0{};
            constexpr MPL::Value<bpdlcd22Val,bpdlcd22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd22Val> bpdlcd22{}; 
        ///no description available
        enum class bpelcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd22ValC{
            constexpr MPL::Value<bpelcd22Val,bpelcd22Val::v0> v0{};
            constexpr MPL::Value<bpelcd22Val,bpelcd22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd22Val> bpelcd22{}; 
        ///no description available
        enum class bpflcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd22ValC{
            constexpr MPL::Value<bpflcd22Val,bpflcd22Val::v0> v0{};
            constexpr MPL::Value<bpflcd22Val,bpflcd22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd22Val> bpflcd22{}; 
        ///no description available
        enum class bpglcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd22ValC{
            constexpr MPL::Value<bpglcd22Val,bpglcd22Val::v0> v0{};
            constexpr MPL::Value<bpglcd22Val,bpglcd22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd22Val> bpglcd22{}; 
        ///no description available
        enum class bphlcd22Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd22ValC{
            constexpr MPL::Value<bphlcd22Val,bphlcd22Val::v0> v0{};
            constexpr MPL::Value<bphlcd22Val,bphlcd22Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd22Val> bphlcd22{}; 
    }
    namespace LcdWf23{    ///<LCD Waveform Register 23.
        using Addr = Register::Address<0x400be037,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd23ValC{
            constexpr MPL::Value<bpalcd23Val,bpalcd23Val::v0> v0{};
            constexpr MPL::Value<bpalcd23Val,bpalcd23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd23Val> bpalcd23{}; 
        ///no description available
        enum class bpblcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd23ValC{
            constexpr MPL::Value<bpblcd23Val,bpblcd23Val::v0> v0{};
            constexpr MPL::Value<bpblcd23Val,bpblcd23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd23Val> bpblcd23{}; 
        ///no description available
        enum class bpclcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd23ValC{
            constexpr MPL::Value<bpclcd23Val,bpclcd23Val::v0> v0{};
            constexpr MPL::Value<bpclcd23Val,bpclcd23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd23Val> bpclcd23{}; 
        ///no description available
        enum class bpdlcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd23ValC{
            constexpr MPL::Value<bpdlcd23Val,bpdlcd23Val::v0> v0{};
            constexpr MPL::Value<bpdlcd23Val,bpdlcd23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd23Val> bpdlcd23{}; 
        ///no description available
        enum class bpelcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd23ValC{
            constexpr MPL::Value<bpelcd23Val,bpelcd23Val::v0> v0{};
            constexpr MPL::Value<bpelcd23Val,bpelcd23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd23Val> bpelcd23{}; 
        ///no description available
        enum class bpflcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd23ValC{
            constexpr MPL::Value<bpflcd23Val,bpflcd23Val::v0> v0{};
            constexpr MPL::Value<bpflcd23Val,bpflcd23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd23Val> bpflcd23{}; 
        ///no description available
        enum class bpglcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd23ValC{
            constexpr MPL::Value<bpglcd23Val,bpglcd23Val::v0> v0{};
            constexpr MPL::Value<bpglcd23Val,bpglcd23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd23Val> bpglcd23{}; 
        ///no description available
        enum class bphlcd23Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd23ValC{
            constexpr MPL::Value<bphlcd23Val,bphlcd23Val::v0> v0{};
            constexpr MPL::Value<bphlcd23Val,bphlcd23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd23Val> bphlcd23{}; 
    }
    namespace LcdWf27to24{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be038,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf24{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf25{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf26{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf27{}; 
    }
    namespace LcdWf24{    ///<LCD Waveform Register 24.
        using Addr = Register::Address<0x400be038,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd24ValC{
            constexpr MPL::Value<bpalcd24Val,bpalcd24Val::v0> v0{};
            constexpr MPL::Value<bpalcd24Val,bpalcd24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd24Val> bpalcd24{}; 
        ///no description available
        enum class bpblcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd24ValC{
            constexpr MPL::Value<bpblcd24Val,bpblcd24Val::v0> v0{};
            constexpr MPL::Value<bpblcd24Val,bpblcd24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd24Val> bpblcd24{}; 
        ///no description available
        enum class bpclcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd24ValC{
            constexpr MPL::Value<bpclcd24Val,bpclcd24Val::v0> v0{};
            constexpr MPL::Value<bpclcd24Val,bpclcd24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd24Val> bpclcd24{}; 
        ///no description available
        enum class bpdlcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd24ValC{
            constexpr MPL::Value<bpdlcd24Val,bpdlcd24Val::v0> v0{};
            constexpr MPL::Value<bpdlcd24Val,bpdlcd24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd24Val> bpdlcd24{}; 
        ///no description available
        enum class bpelcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd24ValC{
            constexpr MPL::Value<bpelcd24Val,bpelcd24Val::v0> v0{};
            constexpr MPL::Value<bpelcd24Val,bpelcd24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd24Val> bpelcd24{}; 
        ///no description available
        enum class bpflcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd24ValC{
            constexpr MPL::Value<bpflcd24Val,bpflcd24Val::v0> v0{};
            constexpr MPL::Value<bpflcd24Val,bpflcd24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd24Val> bpflcd24{}; 
        ///no description available
        enum class bpglcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd24ValC{
            constexpr MPL::Value<bpglcd24Val,bpglcd24Val::v0> v0{};
            constexpr MPL::Value<bpglcd24Val,bpglcd24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd24Val> bpglcd24{}; 
        ///no description available
        enum class bphlcd24Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd24ValC{
            constexpr MPL::Value<bphlcd24Val,bphlcd24Val::v0> v0{};
            constexpr MPL::Value<bphlcd24Val,bphlcd24Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd24Val> bphlcd24{}; 
    }
    namespace LcdWf25{    ///<LCD Waveform Register 25.
        using Addr = Register::Address<0x400be039,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd25ValC{
            constexpr MPL::Value<bpalcd25Val,bpalcd25Val::v0> v0{};
            constexpr MPL::Value<bpalcd25Val,bpalcd25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd25Val> bpalcd25{}; 
        ///no description available
        enum class bpblcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd25ValC{
            constexpr MPL::Value<bpblcd25Val,bpblcd25Val::v0> v0{};
            constexpr MPL::Value<bpblcd25Val,bpblcd25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd25Val> bpblcd25{}; 
        ///no description available
        enum class bpclcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd25ValC{
            constexpr MPL::Value<bpclcd25Val,bpclcd25Val::v0> v0{};
            constexpr MPL::Value<bpclcd25Val,bpclcd25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd25Val> bpclcd25{}; 
        ///no description available
        enum class bpdlcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd25ValC{
            constexpr MPL::Value<bpdlcd25Val,bpdlcd25Val::v0> v0{};
            constexpr MPL::Value<bpdlcd25Val,bpdlcd25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd25Val> bpdlcd25{}; 
        ///no description available
        enum class bpelcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd25ValC{
            constexpr MPL::Value<bpelcd25Val,bpelcd25Val::v0> v0{};
            constexpr MPL::Value<bpelcd25Val,bpelcd25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd25Val> bpelcd25{}; 
        ///no description available
        enum class bpflcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd25ValC{
            constexpr MPL::Value<bpflcd25Val,bpflcd25Val::v0> v0{};
            constexpr MPL::Value<bpflcd25Val,bpflcd25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd25Val> bpflcd25{}; 
        ///no description available
        enum class bpglcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd25ValC{
            constexpr MPL::Value<bpglcd25Val,bpglcd25Val::v0> v0{};
            constexpr MPL::Value<bpglcd25Val,bpglcd25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd25Val> bpglcd25{}; 
        ///no description available
        enum class bphlcd25Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd25ValC{
            constexpr MPL::Value<bphlcd25Val,bphlcd25Val::v0> v0{};
            constexpr MPL::Value<bphlcd25Val,bphlcd25Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd25Val> bphlcd25{}; 
    }
    namespace LcdWf26{    ///<LCD Waveform Register 26.
        using Addr = Register::Address<0x400be03a,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd26ValC{
            constexpr MPL::Value<bpalcd26Val,bpalcd26Val::v0> v0{};
            constexpr MPL::Value<bpalcd26Val,bpalcd26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd26Val> bpalcd26{}; 
        ///no description available
        enum class bpblcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd26ValC{
            constexpr MPL::Value<bpblcd26Val,bpblcd26Val::v0> v0{};
            constexpr MPL::Value<bpblcd26Val,bpblcd26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd26Val> bpblcd26{}; 
        ///no description available
        enum class bpclcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd26ValC{
            constexpr MPL::Value<bpclcd26Val,bpclcd26Val::v0> v0{};
            constexpr MPL::Value<bpclcd26Val,bpclcd26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd26Val> bpclcd26{}; 
        ///no description available
        enum class bpdlcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd26ValC{
            constexpr MPL::Value<bpdlcd26Val,bpdlcd26Val::v0> v0{};
            constexpr MPL::Value<bpdlcd26Val,bpdlcd26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd26Val> bpdlcd26{}; 
        ///no description available
        enum class bpelcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd26ValC{
            constexpr MPL::Value<bpelcd26Val,bpelcd26Val::v0> v0{};
            constexpr MPL::Value<bpelcd26Val,bpelcd26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd26Val> bpelcd26{}; 
        ///no description available
        enum class bpflcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd26ValC{
            constexpr MPL::Value<bpflcd26Val,bpflcd26Val::v0> v0{};
            constexpr MPL::Value<bpflcd26Val,bpflcd26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd26Val> bpflcd26{}; 
        ///no description available
        enum class bpglcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd26ValC{
            constexpr MPL::Value<bpglcd26Val,bpglcd26Val::v0> v0{};
            constexpr MPL::Value<bpglcd26Val,bpglcd26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd26Val> bpglcd26{}; 
        ///no description available
        enum class bphlcd26Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd26ValC{
            constexpr MPL::Value<bphlcd26Val,bphlcd26Val::v0> v0{};
            constexpr MPL::Value<bphlcd26Val,bphlcd26Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd26Val> bphlcd26{}; 
    }
    namespace LcdWf27{    ///<LCD Waveform Register 27.
        using Addr = Register::Address<0x400be03b,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd27ValC{
            constexpr MPL::Value<bpalcd27Val,bpalcd27Val::v0> v0{};
            constexpr MPL::Value<bpalcd27Val,bpalcd27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd27Val> bpalcd27{}; 
        ///no description available
        enum class bpblcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd27ValC{
            constexpr MPL::Value<bpblcd27Val,bpblcd27Val::v0> v0{};
            constexpr MPL::Value<bpblcd27Val,bpblcd27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd27Val> bpblcd27{}; 
        ///no description available
        enum class bpclcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd27ValC{
            constexpr MPL::Value<bpclcd27Val,bpclcd27Val::v0> v0{};
            constexpr MPL::Value<bpclcd27Val,bpclcd27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd27Val> bpclcd27{}; 
        ///no description available
        enum class bpdlcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd27ValC{
            constexpr MPL::Value<bpdlcd27Val,bpdlcd27Val::v0> v0{};
            constexpr MPL::Value<bpdlcd27Val,bpdlcd27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd27Val> bpdlcd27{}; 
        ///no description available
        enum class bpelcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd27ValC{
            constexpr MPL::Value<bpelcd27Val,bpelcd27Val::v0> v0{};
            constexpr MPL::Value<bpelcd27Val,bpelcd27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd27Val> bpelcd27{}; 
        ///no description available
        enum class bpflcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd27ValC{
            constexpr MPL::Value<bpflcd27Val,bpflcd27Val::v0> v0{};
            constexpr MPL::Value<bpflcd27Val,bpflcd27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd27Val> bpflcd27{}; 
        ///no description available
        enum class bpglcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd27ValC{
            constexpr MPL::Value<bpglcd27Val,bpglcd27Val::v0> v0{};
            constexpr MPL::Value<bpglcd27Val,bpglcd27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd27Val> bpglcd27{}; 
        ///no description available
        enum class bphlcd27Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd27ValC{
            constexpr MPL::Value<bphlcd27Val,bphlcd27Val::v0> v0{};
            constexpr MPL::Value<bphlcd27Val,bphlcd27Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd27Val> bphlcd27{}; 
    }
    namespace LcdWf31to28{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be03c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf28{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf29{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf30{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf31{}; 
    }
    namespace LcdWf28{    ///<LCD Waveform Register 28.
        using Addr = Register::Address<0x400be03c,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd28ValC{
            constexpr MPL::Value<bpalcd28Val,bpalcd28Val::v0> v0{};
            constexpr MPL::Value<bpalcd28Val,bpalcd28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd28Val> bpalcd28{}; 
        ///no description available
        enum class bpblcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd28ValC{
            constexpr MPL::Value<bpblcd28Val,bpblcd28Val::v0> v0{};
            constexpr MPL::Value<bpblcd28Val,bpblcd28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd28Val> bpblcd28{}; 
        ///no description available
        enum class bpclcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd28ValC{
            constexpr MPL::Value<bpclcd28Val,bpclcd28Val::v0> v0{};
            constexpr MPL::Value<bpclcd28Val,bpclcd28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd28Val> bpclcd28{}; 
        ///no description available
        enum class bpdlcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd28ValC{
            constexpr MPL::Value<bpdlcd28Val,bpdlcd28Val::v0> v0{};
            constexpr MPL::Value<bpdlcd28Val,bpdlcd28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd28Val> bpdlcd28{}; 
        ///no description available
        enum class bpelcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd28ValC{
            constexpr MPL::Value<bpelcd28Val,bpelcd28Val::v0> v0{};
            constexpr MPL::Value<bpelcd28Val,bpelcd28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd28Val> bpelcd28{}; 
        ///no description available
        enum class bpflcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd28ValC{
            constexpr MPL::Value<bpflcd28Val,bpflcd28Val::v0> v0{};
            constexpr MPL::Value<bpflcd28Val,bpflcd28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd28Val> bpflcd28{}; 
        ///no description available
        enum class bpglcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd28ValC{
            constexpr MPL::Value<bpglcd28Val,bpglcd28Val::v0> v0{};
            constexpr MPL::Value<bpglcd28Val,bpglcd28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd28Val> bpglcd28{}; 
        ///no description available
        enum class bphlcd28Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd28ValC{
            constexpr MPL::Value<bphlcd28Val,bphlcd28Val::v0> v0{};
            constexpr MPL::Value<bphlcd28Val,bphlcd28Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd28Val> bphlcd28{}; 
    }
    namespace LcdWf29{    ///<LCD Waveform Register 29.
        using Addr = Register::Address<0x400be03d,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd29ValC{
            constexpr MPL::Value<bpalcd29Val,bpalcd29Val::v0> v0{};
            constexpr MPL::Value<bpalcd29Val,bpalcd29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd29Val> bpalcd29{}; 
        ///no description available
        enum class bpblcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd29ValC{
            constexpr MPL::Value<bpblcd29Val,bpblcd29Val::v0> v0{};
            constexpr MPL::Value<bpblcd29Val,bpblcd29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd29Val> bpblcd29{}; 
        ///no description available
        enum class bpclcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd29ValC{
            constexpr MPL::Value<bpclcd29Val,bpclcd29Val::v0> v0{};
            constexpr MPL::Value<bpclcd29Val,bpclcd29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd29Val> bpclcd29{}; 
        ///no description available
        enum class bpdlcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd29ValC{
            constexpr MPL::Value<bpdlcd29Val,bpdlcd29Val::v0> v0{};
            constexpr MPL::Value<bpdlcd29Val,bpdlcd29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd29Val> bpdlcd29{}; 
        ///no description available
        enum class bpelcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd29ValC{
            constexpr MPL::Value<bpelcd29Val,bpelcd29Val::v0> v0{};
            constexpr MPL::Value<bpelcd29Val,bpelcd29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd29Val> bpelcd29{}; 
        ///no description available
        enum class bpflcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd29ValC{
            constexpr MPL::Value<bpflcd29Val,bpflcd29Val::v0> v0{};
            constexpr MPL::Value<bpflcd29Val,bpflcd29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd29Val> bpflcd29{}; 
        ///no description available
        enum class bpglcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd29ValC{
            constexpr MPL::Value<bpglcd29Val,bpglcd29Val::v0> v0{};
            constexpr MPL::Value<bpglcd29Val,bpglcd29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd29Val> bpglcd29{}; 
        ///no description available
        enum class bphlcd29Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd29ValC{
            constexpr MPL::Value<bphlcd29Val,bphlcd29Val::v0> v0{};
            constexpr MPL::Value<bphlcd29Val,bphlcd29Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd29Val> bphlcd29{}; 
    }
    namespace LcdWf30{    ///<LCD Waveform Register 30.
        using Addr = Register::Address<0x400be03e,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd30ValC{
            constexpr MPL::Value<bpalcd30Val,bpalcd30Val::v0> v0{};
            constexpr MPL::Value<bpalcd30Val,bpalcd30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd30Val> bpalcd30{}; 
        ///no description available
        enum class bpblcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd30ValC{
            constexpr MPL::Value<bpblcd30Val,bpblcd30Val::v0> v0{};
            constexpr MPL::Value<bpblcd30Val,bpblcd30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd30Val> bpblcd30{}; 
        ///no description available
        enum class bpclcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd30ValC{
            constexpr MPL::Value<bpclcd30Val,bpclcd30Val::v0> v0{};
            constexpr MPL::Value<bpclcd30Val,bpclcd30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd30Val> bpclcd30{}; 
        ///no description available
        enum class bpdlcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd30ValC{
            constexpr MPL::Value<bpdlcd30Val,bpdlcd30Val::v0> v0{};
            constexpr MPL::Value<bpdlcd30Val,bpdlcd30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd30Val> bpdlcd30{}; 
        ///no description available
        enum class bpelcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd30ValC{
            constexpr MPL::Value<bpelcd30Val,bpelcd30Val::v0> v0{};
            constexpr MPL::Value<bpelcd30Val,bpelcd30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd30Val> bpelcd30{}; 
        ///no description available
        enum class bpflcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd30ValC{
            constexpr MPL::Value<bpflcd30Val,bpflcd30Val::v0> v0{};
            constexpr MPL::Value<bpflcd30Val,bpflcd30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd30Val> bpflcd30{}; 
        ///no description available
        enum class bpglcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd30ValC{
            constexpr MPL::Value<bpglcd30Val,bpglcd30Val::v0> v0{};
            constexpr MPL::Value<bpglcd30Val,bpglcd30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd30Val> bpglcd30{}; 
        ///no description available
        enum class bphlcd30Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd30ValC{
            constexpr MPL::Value<bphlcd30Val,bphlcd30Val::v0> v0{};
            constexpr MPL::Value<bphlcd30Val,bphlcd30Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd30Val> bphlcd30{}; 
    }
    namespace LcdWf31{    ///<LCD Waveform Register 31.
        using Addr = Register::Address<0x400be03f,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd31ValC{
            constexpr MPL::Value<bpalcd31Val,bpalcd31Val::v0> v0{};
            constexpr MPL::Value<bpalcd31Val,bpalcd31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd31Val> bpalcd31{}; 
        ///no description available
        enum class bpblcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd31ValC{
            constexpr MPL::Value<bpblcd31Val,bpblcd31Val::v0> v0{};
            constexpr MPL::Value<bpblcd31Val,bpblcd31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd31Val> bpblcd31{}; 
        ///no description available
        enum class bpclcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd31ValC{
            constexpr MPL::Value<bpclcd31Val,bpclcd31Val::v0> v0{};
            constexpr MPL::Value<bpclcd31Val,bpclcd31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd31Val> bpclcd31{}; 
        ///no description available
        enum class bpdlcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd31ValC{
            constexpr MPL::Value<bpdlcd31Val,bpdlcd31Val::v0> v0{};
            constexpr MPL::Value<bpdlcd31Val,bpdlcd31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd31Val> bpdlcd31{}; 
        ///no description available
        enum class bpelcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd31ValC{
            constexpr MPL::Value<bpelcd31Val,bpelcd31Val::v0> v0{};
            constexpr MPL::Value<bpelcd31Val,bpelcd31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd31Val> bpelcd31{}; 
        ///no description available
        enum class bpflcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd31ValC{
            constexpr MPL::Value<bpflcd31Val,bpflcd31Val::v0> v0{};
            constexpr MPL::Value<bpflcd31Val,bpflcd31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd31Val> bpflcd31{}; 
        ///no description available
        enum class bpglcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd31ValC{
            constexpr MPL::Value<bpglcd31Val,bpglcd31Val::v0> v0{};
            constexpr MPL::Value<bpglcd31Val,bpglcd31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd31Val> bpglcd31{}; 
        ///no description available
        enum class bphlcd31Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd31ValC{
            constexpr MPL::Value<bphlcd31Val,bphlcd31Val::v0> v0{};
            constexpr MPL::Value<bphlcd31Val,bphlcd31Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd31Val> bphlcd31{}; 
    }
    namespace LcdWf35to32{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be040,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf32{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf33{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf34{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf35{}; 
    }
    namespace LcdWf32{    ///<LCD Waveform Register 32.
        using Addr = Register::Address<0x400be040,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd32ValC{
            constexpr MPL::Value<bpalcd32Val,bpalcd32Val::v0> v0{};
            constexpr MPL::Value<bpalcd32Val,bpalcd32Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd32Val> bpalcd32{}; 
        ///no description available
        enum class bpblcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd32ValC{
            constexpr MPL::Value<bpblcd32Val,bpblcd32Val::v0> v0{};
            constexpr MPL::Value<bpblcd32Val,bpblcd32Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd32Val> bpblcd32{}; 
        ///no description available
        enum class bpclcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd32ValC{
            constexpr MPL::Value<bpclcd32Val,bpclcd32Val::v0> v0{};
            constexpr MPL::Value<bpclcd32Val,bpclcd32Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd32Val> bpclcd32{}; 
        ///no description available
        enum class bpdlcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd32ValC{
            constexpr MPL::Value<bpdlcd32Val,bpdlcd32Val::v0> v0{};
            constexpr MPL::Value<bpdlcd32Val,bpdlcd32Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd32Val> bpdlcd32{}; 
        ///no description available
        enum class bpelcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd32ValC{
            constexpr MPL::Value<bpelcd32Val,bpelcd32Val::v0> v0{};
            constexpr MPL::Value<bpelcd32Val,bpelcd32Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd32Val> bpelcd32{}; 
        ///no description available
        enum class bpflcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd32ValC{
            constexpr MPL::Value<bpflcd32Val,bpflcd32Val::v0> v0{};
            constexpr MPL::Value<bpflcd32Val,bpflcd32Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd32Val> bpflcd32{}; 
        ///no description available
        enum class bpglcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd32ValC{
            constexpr MPL::Value<bpglcd32Val,bpglcd32Val::v0> v0{};
            constexpr MPL::Value<bpglcd32Val,bpglcd32Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd32Val> bpglcd32{}; 
        ///no description available
        enum class bphlcd32Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd32ValC{
            constexpr MPL::Value<bphlcd32Val,bphlcd32Val::v0> v0{};
            constexpr MPL::Value<bphlcd32Val,bphlcd32Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd32Val> bphlcd32{}; 
    }
    namespace LcdWf33{    ///<LCD Waveform Register 33.
        using Addr = Register::Address<0x400be041,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd33ValC{
            constexpr MPL::Value<bpalcd33Val,bpalcd33Val::v0> v0{};
            constexpr MPL::Value<bpalcd33Val,bpalcd33Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd33Val> bpalcd33{}; 
        ///no description available
        enum class bpblcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd33ValC{
            constexpr MPL::Value<bpblcd33Val,bpblcd33Val::v0> v0{};
            constexpr MPL::Value<bpblcd33Val,bpblcd33Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd33Val> bpblcd33{}; 
        ///no description available
        enum class bpclcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd33ValC{
            constexpr MPL::Value<bpclcd33Val,bpclcd33Val::v0> v0{};
            constexpr MPL::Value<bpclcd33Val,bpclcd33Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd33Val> bpclcd33{}; 
        ///no description available
        enum class bpdlcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd33ValC{
            constexpr MPL::Value<bpdlcd33Val,bpdlcd33Val::v0> v0{};
            constexpr MPL::Value<bpdlcd33Val,bpdlcd33Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd33Val> bpdlcd33{}; 
        ///no description available
        enum class bpelcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd33ValC{
            constexpr MPL::Value<bpelcd33Val,bpelcd33Val::v0> v0{};
            constexpr MPL::Value<bpelcd33Val,bpelcd33Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd33Val> bpelcd33{}; 
        ///no description available
        enum class bpflcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd33ValC{
            constexpr MPL::Value<bpflcd33Val,bpflcd33Val::v0> v0{};
            constexpr MPL::Value<bpflcd33Val,bpflcd33Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd33Val> bpflcd33{}; 
        ///no description available
        enum class bpglcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd33ValC{
            constexpr MPL::Value<bpglcd33Val,bpglcd33Val::v0> v0{};
            constexpr MPL::Value<bpglcd33Val,bpglcd33Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd33Val> bpglcd33{}; 
        ///no description available
        enum class bphlcd33Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd33ValC{
            constexpr MPL::Value<bphlcd33Val,bphlcd33Val::v0> v0{};
            constexpr MPL::Value<bphlcd33Val,bphlcd33Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd33Val> bphlcd33{}; 
    }
    namespace LcdWf34{    ///<LCD Waveform Register 34.
        using Addr = Register::Address<0x400be042,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd34ValC{
            constexpr MPL::Value<bpalcd34Val,bpalcd34Val::v0> v0{};
            constexpr MPL::Value<bpalcd34Val,bpalcd34Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd34Val> bpalcd34{}; 
        ///no description available
        enum class bpblcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd34ValC{
            constexpr MPL::Value<bpblcd34Val,bpblcd34Val::v0> v0{};
            constexpr MPL::Value<bpblcd34Val,bpblcd34Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd34Val> bpblcd34{}; 
        ///no description available
        enum class bpclcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd34ValC{
            constexpr MPL::Value<bpclcd34Val,bpclcd34Val::v0> v0{};
            constexpr MPL::Value<bpclcd34Val,bpclcd34Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd34Val> bpclcd34{}; 
        ///no description available
        enum class bpdlcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd34ValC{
            constexpr MPL::Value<bpdlcd34Val,bpdlcd34Val::v0> v0{};
            constexpr MPL::Value<bpdlcd34Val,bpdlcd34Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd34Val> bpdlcd34{}; 
        ///no description available
        enum class bpelcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd34ValC{
            constexpr MPL::Value<bpelcd34Val,bpelcd34Val::v0> v0{};
            constexpr MPL::Value<bpelcd34Val,bpelcd34Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd34Val> bpelcd34{}; 
        ///no description available
        enum class bpflcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd34ValC{
            constexpr MPL::Value<bpflcd34Val,bpflcd34Val::v0> v0{};
            constexpr MPL::Value<bpflcd34Val,bpflcd34Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd34Val> bpflcd34{}; 
        ///no description available
        enum class bpglcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd34ValC{
            constexpr MPL::Value<bpglcd34Val,bpglcd34Val::v0> v0{};
            constexpr MPL::Value<bpglcd34Val,bpglcd34Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd34Val> bpglcd34{}; 
        ///no description available
        enum class bphlcd34Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd34ValC{
            constexpr MPL::Value<bphlcd34Val,bphlcd34Val::v0> v0{};
            constexpr MPL::Value<bphlcd34Val,bphlcd34Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd34Val> bphlcd34{}; 
    }
    namespace LcdWf35{    ///<LCD Waveform Register 35.
        using Addr = Register::Address<0x400be043,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd35ValC{
            constexpr MPL::Value<bpalcd35Val,bpalcd35Val::v0> v0{};
            constexpr MPL::Value<bpalcd35Val,bpalcd35Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd35Val> bpalcd35{}; 
        ///no description available
        enum class bpblcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd35ValC{
            constexpr MPL::Value<bpblcd35Val,bpblcd35Val::v0> v0{};
            constexpr MPL::Value<bpblcd35Val,bpblcd35Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd35Val> bpblcd35{}; 
        ///no description available
        enum class bpclcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd35ValC{
            constexpr MPL::Value<bpclcd35Val,bpclcd35Val::v0> v0{};
            constexpr MPL::Value<bpclcd35Val,bpclcd35Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd35Val> bpclcd35{}; 
        ///no description available
        enum class bpdlcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd35ValC{
            constexpr MPL::Value<bpdlcd35Val,bpdlcd35Val::v0> v0{};
            constexpr MPL::Value<bpdlcd35Val,bpdlcd35Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd35Val> bpdlcd35{}; 
        ///no description available
        enum class bpelcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd35ValC{
            constexpr MPL::Value<bpelcd35Val,bpelcd35Val::v0> v0{};
            constexpr MPL::Value<bpelcd35Val,bpelcd35Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd35Val> bpelcd35{}; 
        ///no description available
        enum class bpflcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd35ValC{
            constexpr MPL::Value<bpflcd35Val,bpflcd35Val::v0> v0{};
            constexpr MPL::Value<bpflcd35Val,bpflcd35Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd35Val> bpflcd35{}; 
        ///no description available
        enum class bpglcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd35ValC{
            constexpr MPL::Value<bpglcd35Val,bpglcd35Val::v0> v0{};
            constexpr MPL::Value<bpglcd35Val,bpglcd35Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd35Val> bpglcd35{}; 
        ///no description available
        enum class bphlcd35Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd35ValC{
            constexpr MPL::Value<bphlcd35Val,bphlcd35Val::v0> v0{};
            constexpr MPL::Value<bphlcd35Val,bphlcd35Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd35Val> bphlcd35{}; 
    }
    namespace LcdWf39to36{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be044,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf36{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf37{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf38{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf39{}; 
    }
    namespace LcdWf36{    ///<LCD Waveform Register 36.
        using Addr = Register::Address<0x400be044,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd36ValC{
            constexpr MPL::Value<bpalcd36Val,bpalcd36Val::v0> v0{};
            constexpr MPL::Value<bpalcd36Val,bpalcd36Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd36Val> bpalcd36{}; 
        ///no description available
        enum class bpblcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd36ValC{
            constexpr MPL::Value<bpblcd36Val,bpblcd36Val::v0> v0{};
            constexpr MPL::Value<bpblcd36Val,bpblcd36Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd36Val> bpblcd36{}; 
        ///no description available
        enum class bpclcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd36ValC{
            constexpr MPL::Value<bpclcd36Val,bpclcd36Val::v0> v0{};
            constexpr MPL::Value<bpclcd36Val,bpclcd36Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd36Val> bpclcd36{}; 
        ///no description available
        enum class bpdlcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd36ValC{
            constexpr MPL::Value<bpdlcd36Val,bpdlcd36Val::v0> v0{};
            constexpr MPL::Value<bpdlcd36Val,bpdlcd36Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd36Val> bpdlcd36{}; 
        ///no description available
        enum class bpelcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd36ValC{
            constexpr MPL::Value<bpelcd36Val,bpelcd36Val::v0> v0{};
            constexpr MPL::Value<bpelcd36Val,bpelcd36Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd36Val> bpelcd36{}; 
        ///no description available
        enum class bpflcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd36ValC{
            constexpr MPL::Value<bpflcd36Val,bpflcd36Val::v0> v0{};
            constexpr MPL::Value<bpflcd36Val,bpflcd36Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd36Val> bpflcd36{}; 
        ///no description available
        enum class bpglcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd36ValC{
            constexpr MPL::Value<bpglcd36Val,bpglcd36Val::v0> v0{};
            constexpr MPL::Value<bpglcd36Val,bpglcd36Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd36Val> bpglcd36{}; 
        ///no description available
        enum class bphlcd36Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd36ValC{
            constexpr MPL::Value<bphlcd36Val,bphlcd36Val::v0> v0{};
            constexpr MPL::Value<bphlcd36Val,bphlcd36Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd36Val> bphlcd36{}; 
    }
    namespace LcdWf37{    ///<LCD Waveform Register 37.
        using Addr = Register::Address<0x400be045,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd37ValC{
            constexpr MPL::Value<bpalcd37Val,bpalcd37Val::v0> v0{};
            constexpr MPL::Value<bpalcd37Val,bpalcd37Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd37Val> bpalcd37{}; 
        ///no description available
        enum class bpblcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd37ValC{
            constexpr MPL::Value<bpblcd37Val,bpblcd37Val::v0> v0{};
            constexpr MPL::Value<bpblcd37Val,bpblcd37Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd37Val> bpblcd37{}; 
        ///no description available
        enum class bpclcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd37ValC{
            constexpr MPL::Value<bpclcd37Val,bpclcd37Val::v0> v0{};
            constexpr MPL::Value<bpclcd37Val,bpclcd37Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd37Val> bpclcd37{}; 
        ///no description available
        enum class bpdlcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd37ValC{
            constexpr MPL::Value<bpdlcd37Val,bpdlcd37Val::v0> v0{};
            constexpr MPL::Value<bpdlcd37Val,bpdlcd37Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd37Val> bpdlcd37{}; 
        ///no description available
        enum class bpelcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd37ValC{
            constexpr MPL::Value<bpelcd37Val,bpelcd37Val::v0> v0{};
            constexpr MPL::Value<bpelcd37Val,bpelcd37Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd37Val> bpelcd37{}; 
        ///no description available
        enum class bpflcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd37ValC{
            constexpr MPL::Value<bpflcd37Val,bpflcd37Val::v0> v0{};
            constexpr MPL::Value<bpflcd37Val,bpflcd37Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd37Val> bpflcd37{}; 
        ///no description available
        enum class bpglcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd37ValC{
            constexpr MPL::Value<bpglcd37Val,bpglcd37Val::v0> v0{};
            constexpr MPL::Value<bpglcd37Val,bpglcd37Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd37Val> bpglcd37{}; 
        ///no description available
        enum class bphlcd37Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd37ValC{
            constexpr MPL::Value<bphlcd37Val,bphlcd37Val::v0> v0{};
            constexpr MPL::Value<bphlcd37Val,bphlcd37Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd37Val> bphlcd37{}; 
    }
    namespace LcdWf38{    ///<LCD Waveform Register 38.
        using Addr = Register::Address<0x400be046,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd38ValC{
            constexpr MPL::Value<bpalcd38Val,bpalcd38Val::v0> v0{};
            constexpr MPL::Value<bpalcd38Val,bpalcd38Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd38Val> bpalcd38{}; 
        ///no description available
        enum class bpblcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd38ValC{
            constexpr MPL::Value<bpblcd38Val,bpblcd38Val::v0> v0{};
            constexpr MPL::Value<bpblcd38Val,bpblcd38Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd38Val> bpblcd38{}; 
        ///no description available
        enum class bpclcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd38ValC{
            constexpr MPL::Value<bpclcd38Val,bpclcd38Val::v0> v0{};
            constexpr MPL::Value<bpclcd38Val,bpclcd38Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd38Val> bpclcd38{}; 
        ///no description available
        enum class bpdlcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd38ValC{
            constexpr MPL::Value<bpdlcd38Val,bpdlcd38Val::v0> v0{};
            constexpr MPL::Value<bpdlcd38Val,bpdlcd38Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd38Val> bpdlcd38{}; 
        ///no description available
        enum class bpelcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd38ValC{
            constexpr MPL::Value<bpelcd38Val,bpelcd38Val::v0> v0{};
            constexpr MPL::Value<bpelcd38Val,bpelcd38Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd38Val> bpelcd38{}; 
        ///no description available
        enum class bpflcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd38ValC{
            constexpr MPL::Value<bpflcd38Val,bpflcd38Val::v0> v0{};
            constexpr MPL::Value<bpflcd38Val,bpflcd38Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd38Val> bpflcd38{}; 
        ///no description available
        enum class bpglcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd38ValC{
            constexpr MPL::Value<bpglcd38Val,bpglcd38Val::v0> v0{};
            constexpr MPL::Value<bpglcd38Val,bpglcd38Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd38Val> bpglcd38{}; 
        ///no description available
        enum class bphlcd38Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd38ValC{
            constexpr MPL::Value<bphlcd38Val,bphlcd38Val::v0> v0{};
            constexpr MPL::Value<bphlcd38Val,bphlcd38Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd38Val> bphlcd38{}; 
    }
    namespace LcdWf39{    ///<LCD Waveform Register 39.
        using Addr = Register::Address<0x400be047,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd39ValC{
            constexpr MPL::Value<bpalcd39Val,bpalcd39Val::v0> v0{};
            constexpr MPL::Value<bpalcd39Val,bpalcd39Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd39Val> bpalcd39{}; 
        ///no description available
        enum class bpblcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd39ValC{
            constexpr MPL::Value<bpblcd39Val,bpblcd39Val::v0> v0{};
            constexpr MPL::Value<bpblcd39Val,bpblcd39Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd39Val> bpblcd39{}; 
        ///no description available
        enum class bpclcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd39ValC{
            constexpr MPL::Value<bpclcd39Val,bpclcd39Val::v0> v0{};
            constexpr MPL::Value<bpclcd39Val,bpclcd39Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd39Val> bpclcd39{}; 
        ///no description available
        enum class bpdlcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd39ValC{
            constexpr MPL::Value<bpdlcd39Val,bpdlcd39Val::v0> v0{};
            constexpr MPL::Value<bpdlcd39Val,bpdlcd39Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd39Val> bpdlcd39{}; 
        ///no description available
        enum class bpelcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd39ValC{
            constexpr MPL::Value<bpelcd39Val,bpelcd39Val::v0> v0{};
            constexpr MPL::Value<bpelcd39Val,bpelcd39Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd39Val> bpelcd39{}; 
        ///no description available
        enum class bpflcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd39ValC{
            constexpr MPL::Value<bpflcd39Val,bpflcd39Val::v0> v0{};
            constexpr MPL::Value<bpflcd39Val,bpflcd39Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd39Val> bpflcd39{}; 
        ///no description available
        enum class bpglcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd39ValC{
            constexpr MPL::Value<bpglcd39Val,bpglcd39Val::v0> v0{};
            constexpr MPL::Value<bpglcd39Val,bpglcd39Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd39Val> bpglcd39{}; 
        ///no description available
        enum class bphlcd39Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd39ValC{
            constexpr MPL::Value<bphlcd39Val,bphlcd39Val::v0> v0{};
            constexpr MPL::Value<bphlcd39Val,bphlcd39Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd39Val> bphlcd39{}; 
    }
    namespace LcdWf43to40{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be048,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf40{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf41{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf42{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf43{}; 
    }
    namespace LcdWf40{    ///<LCD Waveform Register 40.
        using Addr = Register::Address<0x400be048,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd40ValC{
            constexpr MPL::Value<bpalcd40Val,bpalcd40Val::v0> v0{};
            constexpr MPL::Value<bpalcd40Val,bpalcd40Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd40Val> bpalcd40{}; 
        ///no description available
        enum class bpblcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd40ValC{
            constexpr MPL::Value<bpblcd40Val,bpblcd40Val::v0> v0{};
            constexpr MPL::Value<bpblcd40Val,bpblcd40Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd40Val> bpblcd40{}; 
        ///no description available
        enum class bpclcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd40ValC{
            constexpr MPL::Value<bpclcd40Val,bpclcd40Val::v0> v0{};
            constexpr MPL::Value<bpclcd40Val,bpclcd40Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd40Val> bpclcd40{}; 
        ///no description available
        enum class bpdlcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd40ValC{
            constexpr MPL::Value<bpdlcd40Val,bpdlcd40Val::v0> v0{};
            constexpr MPL::Value<bpdlcd40Val,bpdlcd40Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd40Val> bpdlcd40{}; 
        ///no description available
        enum class bpelcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd40ValC{
            constexpr MPL::Value<bpelcd40Val,bpelcd40Val::v0> v0{};
            constexpr MPL::Value<bpelcd40Val,bpelcd40Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd40Val> bpelcd40{}; 
        ///no description available
        enum class bpflcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd40ValC{
            constexpr MPL::Value<bpflcd40Val,bpflcd40Val::v0> v0{};
            constexpr MPL::Value<bpflcd40Val,bpflcd40Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd40Val> bpflcd40{}; 
        ///no description available
        enum class bpglcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd40ValC{
            constexpr MPL::Value<bpglcd40Val,bpglcd40Val::v0> v0{};
            constexpr MPL::Value<bpglcd40Val,bpglcd40Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd40Val> bpglcd40{}; 
        ///no description available
        enum class bphlcd40Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd40ValC{
            constexpr MPL::Value<bphlcd40Val,bphlcd40Val::v0> v0{};
            constexpr MPL::Value<bphlcd40Val,bphlcd40Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd40Val> bphlcd40{}; 
    }
    namespace LcdWf41{    ///<LCD Waveform Register 41.
        using Addr = Register::Address<0x400be049,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd41ValC{
            constexpr MPL::Value<bpalcd41Val,bpalcd41Val::v0> v0{};
            constexpr MPL::Value<bpalcd41Val,bpalcd41Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd41Val> bpalcd41{}; 
        ///no description available
        enum class bpblcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd41ValC{
            constexpr MPL::Value<bpblcd41Val,bpblcd41Val::v0> v0{};
            constexpr MPL::Value<bpblcd41Val,bpblcd41Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd41Val> bpblcd41{}; 
        ///no description available
        enum class bpclcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd41ValC{
            constexpr MPL::Value<bpclcd41Val,bpclcd41Val::v0> v0{};
            constexpr MPL::Value<bpclcd41Val,bpclcd41Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd41Val> bpclcd41{}; 
        ///no description available
        enum class bpdlcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd41ValC{
            constexpr MPL::Value<bpdlcd41Val,bpdlcd41Val::v0> v0{};
            constexpr MPL::Value<bpdlcd41Val,bpdlcd41Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd41Val> bpdlcd41{}; 
        ///no description available
        enum class bpelcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd41ValC{
            constexpr MPL::Value<bpelcd41Val,bpelcd41Val::v0> v0{};
            constexpr MPL::Value<bpelcd41Val,bpelcd41Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd41Val> bpelcd41{}; 
        ///no description available
        enum class bpflcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd41ValC{
            constexpr MPL::Value<bpflcd41Val,bpflcd41Val::v0> v0{};
            constexpr MPL::Value<bpflcd41Val,bpflcd41Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd41Val> bpflcd41{}; 
        ///no description available
        enum class bpglcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd41ValC{
            constexpr MPL::Value<bpglcd41Val,bpglcd41Val::v0> v0{};
            constexpr MPL::Value<bpglcd41Val,bpglcd41Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd41Val> bpglcd41{}; 
        ///no description available
        enum class bphlcd41Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd41ValC{
            constexpr MPL::Value<bphlcd41Val,bphlcd41Val::v0> v0{};
            constexpr MPL::Value<bphlcd41Val,bphlcd41Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd41Val> bphlcd41{}; 
    }
    namespace LcdWf42{    ///<LCD Waveform Register 42.
        using Addr = Register::Address<0x400be04a,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd42ValC{
            constexpr MPL::Value<bpalcd42Val,bpalcd42Val::v0> v0{};
            constexpr MPL::Value<bpalcd42Val,bpalcd42Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd42Val> bpalcd42{}; 
        ///no description available
        enum class bpblcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd42ValC{
            constexpr MPL::Value<bpblcd42Val,bpblcd42Val::v0> v0{};
            constexpr MPL::Value<bpblcd42Val,bpblcd42Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd42Val> bpblcd42{}; 
        ///no description available
        enum class bpclcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd42ValC{
            constexpr MPL::Value<bpclcd42Val,bpclcd42Val::v0> v0{};
            constexpr MPL::Value<bpclcd42Val,bpclcd42Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd42Val> bpclcd42{}; 
        ///no description available
        enum class bpdlcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd42ValC{
            constexpr MPL::Value<bpdlcd42Val,bpdlcd42Val::v0> v0{};
            constexpr MPL::Value<bpdlcd42Val,bpdlcd42Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd42Val> bpdlcd42{}; 
        ///no description available
        enum class bpelcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd42ValC{
            constexpr MPL::Value<bpelcd42Val,bpelcd42Val::v0> v0{};
            constexpr MPL::Value<bpelcd42Val,bpelcd42Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd42Val> bpelcd42{}; 
        ///no description available
        enum class bpflcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd42ValC{
            constexpr MPL::Value<bpflcd42Val,bpflcd42Val::v0> v0{};
            constexpr MPL::Value<bpflcd42Val,bpflcd42Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd42Val> bpflcd42{}; 
        ///no description available
        enum class bpglcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd42ValC{
            constexpr MPL::Value<bpglcd42Val,bpglcd42Val::v0> v0{};
            constexpr MPL::Value<bpglcd42Val,bpglcd42Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd42Val> bpglcd42{}; 
        ///no description available
        enum class bphlcd42Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd42ValC{
            constexpr MPL::Value<bphlcd42Val,bphlcd42Val::v0> v0{};
            constexpr MPL::Value<bphlcd42Val,bphlcd42Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd42Val> bphlcd42{}; 
    }
    namespace LcdWf43{    ///<LCD Waveform Register 43.
        using Addr = Register::Address<0x400be04b,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd43ValC{
            constexpr MPL::Value<bpalcd43Val,bpalcd43Val::v0> v0{};
            constexpr MPL::Value<bpalcd43Val,bpalcd43Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd43Val> bpalcd43{}; 
        ///no description available
        enum class bpblcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd43ValC{
            constexpr MPL::Value<bpblcd43Val,bpblcd43Val::v0> v0{};
            constexpr MPL::Value<bpblcd43Val,bpblcd43Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd43Val> bpblcd43{}; 
        ///no description available
        enum class bpclcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd43ValC{
            constexpr MPL::Value<bpclcd43Val,bpclcd43Val::v0> v0{};
            constexpr MPL::Value<bpclcd43Val,bpclcd43Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd43Val> bpclcd43{}; 
        ///no description available
        enum class bpdlcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd43ValC{
            constexpr MPL::Value<bpdlcd43Val,bpdlcd43Val::v0> v0{};
            constexpr MPL::Value<bpdlcd43Val,bpdlcd43Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd43Val> bpdlcd43{}; 
        ///no description available
        enum class bpelcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd43ValC{
            constexpr MPL::Value<bpelcd43Val,bpelcd43Val::v0> v0{};
            constexpr MPL::Value<bpelcd43Val,bpelcd43Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd43Val> bpelcd43{}; 
        ///no description available
        enum class bpflcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd43ValC{
            constexpr MPL::Value<bpflcd43Val,bpflcd43Val::v0> v0{};
            constexpr MPL::Value<bpflcd43Val,bpflcd43Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd43Val> bpflcd43{}; 
        ///no description available
        enum class bpglcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd43ValC{
            constexpr MPL::Value<bpglcd43Val,bpglcd43Val::v0> v0{};
            constexpr MPL::Value<bpglcd43Val,bpglcd43Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd43Val> bpglcd43{}; 
        ///no description available
        enum class bphlcd43Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd43ValC{
            constexpr MPL::Value<bphlcd43Val,bphlcd43Val::v0> v0{};
            constexpr MPL::Value<bphlcd43Val,bphlcd43Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd43Val> bphlcd43{}; 
    }
    namespace LcdWf47to44{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be04c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf44{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf45{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf46{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf47{}; 
    }
    namespace LcdWf44{    ///<LCD Waveform Register 44.
        using Addr = Register::Address<0x400be04c,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd44ValC{
            constexpr MPL::Value<bpalcd44Val,bpalcd44Val::v0> v0{};
            constexpr MPL::Value<bpalcd44Val,bpalcd44Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd44Val> bpalcd44{}; 
        ///no description available
        enum class bpblcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd44ValC{
            constexpr MPL::Value<bpblcd44Val,bpblcd44Val::v0> v0{};
            constexpr MPL::Value<bpblcd44Val,bpblcd44Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd44Val> bpblcd44{}; 
        ///no description available
        enum class bpclcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd44ValC{
            constexpr MPL::Value<bpclcd44Val,bpclcd44Val::v0> v0{};
            constexpr MPL::Value<bpclcd44Val,bpclcd44Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd44Val> bpclcd44{}; 
        ///no description available
        enum class bpdlcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd44ValC{
            constexpr MPL::Value<bpdlcd44Val,bpdlcd44Val::v0> v0{};
            constexpr MPL::Value<bpdlcd44Val,bpdlcd44Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd44Val> bpdlcd44{}; 
        ///no description available
        enum class bpelcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd44ValC{
            constexpr MPL::Value<bpelcd44Val,bpelcd44Val::v0> v0{};
            constexpr MPL::Value<bpelcd44Val,bpelcd44Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd44Val> bpelcd44{}; 
        ///no description available
        enum class bpflcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd44ValC{
            constexpr MPL::Value<bpflcd44Val,bpflcd44Val::v0> v0{};
            constexpr MPL::Value<bpflcd44Val,bpflcd44Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd44Val> bpflcd44{}; 
        ///no description available
        enum class bpglcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd44ValC{
            constexpr MPL::Value<bpglcd44Val,bpglcd44Val::v0> v0{};
            constexpr MPL::Value<bpglcd44Val,bpglcd44Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd44Val> bpglcd44{}; 
        ///no description available
        enum class bphlcd44Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd44ValC{
            constexpr MPL::Value<bphlcd44Val,bphlcd44Val::v0> v0{};
            constexpr MPL::Value<bphlcd44Val,bphlcd44Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd44Val> bphlcd44{}; 
    }
    namespace LcdWf45{    ///<LCD Waveform Register 45.
        using Addr = Register::Address<0x400be04d,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd45ValC{
            constexpr MPL::Value<bpalcd45Val,bpalcd45Val::v0> v0{};
            constexpr MPL::Value<bpalcd45Val,bpalcd45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd45Val> bpalcd45{}; 
        ///no description available
        enum class bpblcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd45ValC{
            constexpr MPL::Value<bpblcd45Val,bpblcd45Val::v0> v0{};
            constexpr MPL::Value<bpblcd45Val,bpblcd45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd45Val> bpblcd45{}; 
        ///no description available
        enum class bpclcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd45ValC{
            constexpr MPL::Value<bpclcd45Val,bpclcd45Val::v0> v0{};
            constexpr MPL::Value<bpclcd45Val,bpclcd45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd45Val> bpclcd45{}; 
        ///no description available
        enum class bpdlcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd45ValC{
            constexpr MPL::Value<bpdlcd45Val,bpdlcd45Val::v0> v0{};
            constexpr MPL::Value<bpdlcd45Val,bpdlcd45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd45Val> bpdlcd45{}; 
        ///no description available
        enum class bpelcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd45ValC{
            constexpr MPL::Value<bpelcd45Val,bpelcd45Val::v0> v0{};
            constexpr MPL::Value<bpelcd45Val,bpelcd45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd45Val> bpelcd45{}; 
        ///no description available
        enum class bpflcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd45ValC{
            constexpr MPL::Value<bpflcd45Val,bpflcd45Val::v0> v0{};
            constexpr MPL::Value<bpflcd45Val,bpflcd45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd45Val> bpflcd45{}; 
        ///no description available
        enum class bpglcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd45ValC{
            constexpr MPL::Value<bpglcd45Val,bpglcd45Val::v0> v0{};
            constexpr MPL::Value<bpglcd45Val,bpglcd45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd45Val> bpglcd45{}; 
        ///no description available
        enum class bphlcd45Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd45ValC{
            constexpr MPL::Value<bphlcd45Val,bphlcd45Val::v0> v0{};
            constexpr MPL::Value<bphlcd45Val,bphlcd45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd45Val> bphlcd45{}; 
    }
    namespace LcdWf46{    ///<LCD Waveform Register 46.
        using Addr = Register::Address<0x400be04e,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd46ValC{
            constexpr MPL::Value<bpalcd46Val,bpalcd46Val::v0> v0{};
            constexpr MPL::Value<bpalcd46Val,bpalcd46Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd46Val> bpalcd46{}; 
        ///no description available
        enum class bpblcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd46ValC{
            constexpr MPL::Value<bpblcd46Val,bpblcd46Val::v0> v0{};
            constexpr MPL::Value<bpblcd46Val,bpblcd46Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd46Val> bpblcd46{}; 
        ///no description available
        enum class bpclcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd46ValC{
            constexpr MPL::Value<bpclcd46Val,bpclcd46Val::v0> v0{};
            constexpr MPL::Value<bpclcd46Val,bpclcd46Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd46Val> bpclcd46{}; 
        ///no description available
        enum class bpdlcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd46ValC{
            constexpr MPL::Value<bpdlcd46Val,bpdlcd46Val::v0> v0{};
            constexpr MPL::Value<bpdlcd46Val,bpdlcd46Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd46Val> bpdlcd46{}; 
        ///no description available
        enum class bpelcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd46ValC{
            constexpr MPL::Value<bpelcd46Val,bpelcd46Val::v0> v0{};
            constexpr MPL::Value<bpelcd46Val,bpelcd46Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd46Val> bpelcd46{}; 
        ///no description available
        enum class bpflcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd46ValC{
            constexpr MPL::Value<bpflcd46Val,bpflcd46Val::v0> v0{};
            constexpr MPL::Value<bpflcd46Val,bpflcd46Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd46Val> bpflcd46{}; 
        ///no description available
        enum class bpglcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd46ValC{
            constexpr MPL::Value<bpglcd46Val,bpglcd46Val::v0> v0{};
            constexpr MPL::Value<bpglcd46Val,bpglcd46Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd46Val> bpglcd46{}; 
        ///no description available
        enum class bphlcd46Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd46ValC{
            constexpr MPL::Value<bphlcd46Val,bphlcd46Val::v0> v0{};
            constexpr MPL::Value<bphlcd46Val,bphlcd46Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd46Val> bphlcd46{}; 
    }
    namespace LcdWf47{    ///<LCD Waveform Register 47.
        using Addr = Register::Address<0x400be04f,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd47ValC{
            constexpr MPL::Value<bpalcd47Val,bpalcd47Val::v0> v0{};
            constexpr MPL::Value<bpalcd47Val,bpalcd47Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd47Val> bpalcd47{}; 
        ///no description available
        enum class bpblcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd47ValC{
            constexpr MPL::Value<bpblcd47Val,bpblcd47Val::v0> v0{};
            constexpr MPL::Value<bpblcd47Val,bpblcd47Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd47Val> bpblcd47{}; 
        ///no description available
        enum class bpclcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd47ValC{
            constexpr MPL::Value<bpclcd47Val,bpclcd47Val::v0> v0{};
            constexpr MPL::Value<bpclcd47Val,bpclcd47Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd47Val> bpclcd47{}; 
        ///no description available
        enum class bpdlcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd47ValC{
            constexpr MPL::Value<bpdlcd47Val,bpdlcd47Val::v0> v0{};
            constexpr MPL::Value<bpdlcd47Val,bpdlcd47Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd47Val> bpdlcd47{}; 
        ///no description available
        enum class bpelcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd47ValC{
            constexpr MPL::Value<bpelcd47Val,bpelcd47Val::v0> v0{};
            constexpr MPL::Value<bpelcd47Val,bpelcd47Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd47Val> bpelcd47{}; 
        ///no description available
        enum class bpflcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd47ValC{
            constexpr MPL::Value<bpflcd47Val,bpflcd47Val::v0> v0{};
            constexpr MPL::Value<bpflcd47Val,bpflcd47Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd47Val> bpflcd47{}; 
        ///no description available
        enum class bpglcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd47ValC{
            constexpr MPL::Value<bpglcd47Val,bpglcd47Val::v0> v0{};
            constexpr MPL::Value<bpglcd47Val,bpglcd47Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd47Val> bpglcd47{}; 
        ///no description available
        enum class bphlcd47Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd47ValC{
            constexpr MPL::Value<bphlcd47Val,bphlcd47Val::v0> v0{};
            constexpr MPL::Value<bphlcd47Val,bphlcd47Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd47Val> bphlcd47{}; 
    }
    namespace LcdWf51to48{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be050,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf48{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf49{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf50{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf51{}; 
    }
    namespace LcdWf48{    ///<LCD Waveform Register 48.
        using Addr = Register::Address<0x400be050,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd48ValC{
            constexpr MPL::Value<bpalcd48Val,bpalcd48Val::v0> v0{};
            constexpr MPL::Value<bpalcd48Val,bpalcd48Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd48Val> bpalcd48{}; 
        ///no description available
        enum class bpblcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd48ValC{
            constexpr MPL::Value<bpblcd48Val,bpblcd48Val::v0> v0{};
            constexpr MPL::Value<bpblcd48Val,bpblcd48Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd48Val> bpblcd48{}; 
        ///no description available
        enum class bpclcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd48ValC{
            constexpr MPL::Value<bpclcd48Val,bpclcd48Val::v0> v0{};
            constexpr MPL::Value<bpclcd48Val,bpclcd48Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd48Val> bpclcd48{}; 
        ///no description available
        enum class bpdlcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd48ValC{
            constexpr MPL::Value<bpdlcd48Val,bpdlcd48Val::v0> v0{};
            constexpr MPL::Value<bpdlcd48Val,bpdlcd48Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd48Val> bpdlcd48{}; 
        ///no description available
        enum class bpelcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd48ValC{
            constexpr MPL::Value<bpelcd48Val,bpelcd48Val::v0> v0{};
            constexpr MPL::Value<bpelcd48Val,bpelcd48Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd48Val> bpelcd48{}; 
        ///no description available
        enum class bpflcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd48ValC{
            constexpr MPL::Value<bpflcd48Val,bpflcd48Val::v0> v0{};
            constexpr MPL::Value<bpflcd48Val,bpflcd48Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd48Val> bpflcd48{}; 
        ///no description available
        enum class bpglcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd48ValC{
            constexpr MPL::Value<bpglcd48Val,bpglcd48Val::v0> v0{};
            constexpr MPL::Value<bpglcd48Val,bpglcd48Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd48Val> bpglcd48{}; 
        ///no description available
        enum class bphlcd48Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd48ValC{
            constexpr MPL::Value<bphlcd48Val,bphlcd48Val::v0> v0{};
            constexpr MPL::Value<bphlcd48Val,bphlcd48Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd48Val> bphlcd48{}; 
    }
    namespace LcdWf49{    ///<LCD Waveform Register 49.
        using Addr = Register::Address<0x400be051,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd49ValC{
            constexpr MPL::Value<bpalcd49Val,bpalcd49Val::v0> v0{};
            constexpr MPL::Value<bpalcd49Val,bpalcd49Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd49Val> bpalcd49{}; 
        ///no description available
        enum class bpblcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd49ValC{
            constexpr MPL::Value<bpblcd49Val,bpblcd49Val::v0> v0{};
            constexpr MPL::Value<bpblcd49Val,bpblcd49Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd49Val> bpblcd49{}; 
        ///no description available
        enum class bpclcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd49ValC{
            constexpr MPL::Value<bpclcd49Val,bpclcd49Val::v0> v0{};
            constexpr MPL::Value<bpclcd49Val,bpclcd49Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd49Val> bpclcd49{}; 
        ///no description available
        enum class bpdlcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd49ValC{
            constexpr MPL::Value<bpdlcd49Val,bpdlcd49Val::v0> v0{};
            constexpr MPL::Value<bpdlcd49Val,bpdlcd49Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd49Val> bpdlcd49{}; 
        ///no description available
        enum class bpelcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd49ValC{
            constexpr MPL::Value<bpelcd49Val,bpelcd49Val::v0> v0{};
            constexpr MPL::Value<bpelcd49Val,bpelcd49Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd49Val> bpelcd49{}; 
        ///no description available
        enum class bpflcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd49ValC{
            constexpr MPL::Value<bpflcd49Val,bpflcd49Val::v0> v0{};
            constexpr MPL::Value<bpflcd49Val,bpflcd49Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd49Val> bpflcd49{}; 
        ///no description available
        enum class bpglcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd49ValC{
            constexpr MPL::Value<bpglcd49Val,bpglcd49Val::v0> v0{};
            constexpr MPL::Value<bpglcd49Val,bpglcd49Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd49Val> bpglcd49{}; 
        ///no description available
        enum class bphlcd49Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd49ValC{
            constexpr MPL::Value<bphlcd49Val,bphlcd49Val::v0> v0{};
            constexpr MPL::Value<bphlcd49Val,bphlcd49Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd49Val> bphlcd49{}; 
    }
    namespace LcdWf50{    ///<LCD Waveform Register 50.
        using Addr = Register::Address<0x400be052,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd50ValC{
            constexpr MPL::Value<bpalcd50Val,bpalcd50Val::v0> v0{};
            constexpr MPL::Value<bpalcd50Val,bpalcd50Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd50Val> bpalcd50{}; 
        ///no description available
        enum class bpblcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd50ValC{
            constexpr MPL::Value<bpblcd50Val,bpblcd50Val::v0> v0{};
            constexpr MPL::Value<bpblcd50Val,bpblcd50Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd50Val> bpblcd50{}; 
        ///no description available
        enum class bpclcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd50ValC{
            constexpr MPL::Value<bpclcd50Val,bpclcd50Val::v0> v0{};
            constexpr MPL::Value<bpclcd50Val,bpclcd50Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd50Val> bpclcd50{}; 
        ///no description available
        enum class bpdlcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd50ValC{
            constexpr MPL::Value<bpdlcd50Val,bpdlcd50Val::v0> v0{};
            constexpr MPL::Value<bpdlcd50Val,bpdlcd50Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd50Val> bpdlcd50{}; 
        ///no description available
        enum class bpelcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd50ValC{
            constexpr MPL::Value<bpelcd50Val,bpelcd50Val::v0> v0{};
            constexpr MPL::Value<bpelcd50Val,bpelcd50Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd50Val> bpelcd50{}; 
        ///no description available
        enum class bpflcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd50ValC{
            constexpr MPL::Value<bpflcd50Val,bpflcd50Val::v0> v0{};
            constexpr MPL::Value<bpflcd50Val,bpflcd50Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd50Val> bpflcd50{}; 
        ///no description available
        enum class bpglcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd50ValC{
            constexpr MPL::Value<bpglcd50Val,bpglcd50Val::v0> v0{};
            constexpr MPL::Value<bpglcd50Val,bpglcd50Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd50Val> bpglcd50{}; 
        ///no description available
        enum class bphlcd50Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd50ValC{
            constexpr MPL::Value<bphlcd50Val,bphlcd50Val::v0> v0{};
            constexpr MPL::Value<bphlcd50Val,bphlcd50Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd50Val> bphlcd50{}; 
    }
    namespace LcdWf51{    ///<LCD Waveform Register 51.
        using Addr = Register::Address<0x400be053,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd51ValC{
            constexpr MPL::Value<bpalcd51Val,bpalcd51Val::v0> v0{};
            constexpr MPL::Value<bpalcd51Val,bpalcd51Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd51Val> bpalcd51{}; 
        ///no description available
        enum class bpblcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd51ValC{
            constexpr MPL::Value<bpblcd51Val,bpblcd51Val::v0> v0{};
            constexpr MPL::Value<bpblcd51Val,bpblcd51Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd51Val> bpblcd51{}; 
        ///no description available
        enum class bpclcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd51ValC{
            constexpr MPL::Value<bpclcd51Val,bpclcd51Val::v0> v0{};
            constexpr MPL::Value<bpclcd51Val,bpclcd51Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd51Val> bpclcd51{}; 
        ///no description available
        enum class bpdlcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd51ValC{
            constexpr MPL::Value<bpdlcd51Val,bpdlcd51Val::v0> v0{};
            constexpr MPL::Value<bpdlcd51Val,bpdlcd51Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd51Val> bpdlcd51{}; 
        ///no description available
        enum class bpelcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd51ValC{
            constexpr MPL::Value<bpelcd51Val,bpelcd51Val::v0> v0{};
            constexpr MPL::Value<bpelcd51Val,bpelcd51Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd51Val> bpelcd51{}; 
        ///no description available
        enum class bpflcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd51ValC{
            constexpr MPL::Value<bpflcd51Val,bpflcd51Val::v0> v0{};
            constexpr MPL::Value<bpflcd51Val,bpflcd51Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd51Val> bpflcd51{}; 
        ///no description available
        enum class bpglcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd51ValC{
            constexpr MPL::Value<bpglcd51Val,bpglcd51Val::v0> v0{};
            constexpr MPL::Value<bpglcd51Val,bpglcd51Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd51Val> bpglcd51{}; 
        ///no description available
        enum class bphlcd51Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd51ValC{
            constexpr MPL::Value<bphlcd51Val,bphlcd51Val::v0> v0{};
            constexpr MPL::Value<bphlcd51Val,bphlcd51Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd51Val> bphlcd51{}; 
    }
    namespace LcdWf55to52{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be054,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf52{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf53{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf54{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf55{}; 
    }
    namespace LcdWf52{    ///<LCD Waveform Register 52.
        using Addr = Register::Address<0x400be054,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd52ValC{
            constexpr MPL::Value<bpalcd52Val,bpalcd52Val::v0> v0{};
            constexpr MPL::Value<bpalcd52Val,bpalcd52Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd52Val> bpalcd52{}; 
        ///no description available
        enum class bpblcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd52ValC{
            constexpr MPL::Value<bpblcd52Val,bpblcd52Val::v0> v0{};
            constexpr MPL::Value<bpblcd52Val,bpblcd52Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd52Val> bpblcd52{}; 
        ///no description available
        enum class bpclcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd52ValC{
            constexpr MPL::Value<bpclcd52Val,bpclcd52Val::v0> v0{};
            constexpr MPL::Value<bpclcd52Val,bpclcd52Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd52Val> bpclcd52{}; 
        ///no description available
        enum class bpdlcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd52ValC{
            constexpr MPL::Value<bpdlcd52Val,bpdlcd52Val::v0> v0{};
            constexpr MPL::Value<bpdlcd52Val,bpdlcd52Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd52Val> bpdlcd52{}; 
        ///no description available
        enum class bpelcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd52ValC{
            constexpr MPL::Value<bpelcd52Val,bpelcd52Val::v0> v0{};
            constexpr MPL::Value<bpelcd52Val,bpelcd52Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd52Val> bpelcd52{}; 
        ///no description available
        enum class bpflcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd52ValC{
            constexpr MPL::Value<bpflcd52Val,bpflcd52Val::v0> v0{};
            constexpr MPL::Value<bpflcd52Val,bpflcd52Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd52Val> bpflcd52{}; 
        ///no description available
        enum class bpglcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd52ValC{
            constexpr MPL::Value<bpglcd52Val,bpglcd52Val::v0> v0{};
            constexpr MPL::Value<bpglcd52Val,bpglcd52Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd52Val> bpglcd52{}; 
        ///no description available
        enum class bphlcd52Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd52ValC{
            constexpr MPL::Value<bphlcd52Val,bphlcd52Val::v0> v0{};
            constexpr MPL::Value<bphlcd52Val,bphlcd52Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd52Val> bphlcd52{}; 
    }
    namespace LcdWf53{    ///<LCD Waveform Register 53.
        using Addr = Register::Address<0x400be055,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd53ValC{
            constexpr MPL::Value<bpalcd53Val,bpalcd53Val::v0> v0{};
            constexpr MPL::Value<bpalcd53Val,bpalcd53Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd53Val> bpalcd53{}; 
        ///no description available
        enum class bpblcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd53ValC{
            constexpr MPL::Value<bpblcd53Val,bpblcd53Val::v0> v0{};
            constexpr MPL::Value<bpblcd53Val,bpblcd53Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd53Val> bpblcd53{}; 
        ///no description available
        enum class bpclcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd53ValC{
            constexpr MPL::Value<bpclcd53Val,bpclcd53Val::v0> v0{};
            constexpr MPL::Value<bpclcd53Val,bpclcd53Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd53Val> bpclcd53{}; 
        ///no description available
        enum class bpdlcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd53ValC{
            constexpr MPL::Value<bpdlcd53Val,bpdlcd53Val::v0> v0{};
            constexpr MPL::Value<bpdlcd53Val,bpdlcd53Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd53Val> bpdlcd53{}; 
        ///no description available
        enum class bpelcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd53ValC{
            constexpr MPL::Value<bpelcd53Val,bpelcd53Val::v0> v0{};
            constexpr MPL::Value<bpelcd53Val,bpelcd53Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd53Val> bpelcd53{}; 
        ///no description available
        enum class bpflcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd53ValC{
            constexpr MPL::Value<bpflcd53Val,bpflcd53Val::v0> v0{};
            constexpr MPL::Value<bpflcd53Val,bpflcd53Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd53Val> bpflcd53{}; 
        ///no description available
        enum class bpglcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd53ValC{
            constexpr MPL::Value<bpglcd53Val,bpglcd53Val::v0> v0{};
            constexpr MPL::Value<bpglcd53Val,bpglcd53Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd53Val> bpglcd53{}; 
        ///no description available
        enum class bphlcd53Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd53ValC{
            constexpr MPL::Value<bphlcd53Val,bphlcd53Val::v0> v0{};
            constexpr MPL::Value<bphlcd53Val,bphlcd53Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd53Val> bphlcd53{}; 
    }
    namespace LcdWf54{    ///<LCD Waveform Register 54.
        using Addr = Register::Address<0x400be056,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd54ValC{
            constexpr MPL::Value<bpalcd54Val,bpalcd54Val::v0> v0{};
            constexpr MPL::Value<bpalcd54Val,bpalcd54Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd54Val> bpalcd54{}; 
        ///no description available
        enum class bpblcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd54ValC{
            constexpr MPL::Value<bpblcd54Val,bpblcd54Val::v0> v0{};
            constexpr MPL::Value<bpblcd54Val,bpblcd54Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd54Val> bpblcd54{}; 
        ///no description available
        enum class bpclcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd54ValC{
            constexpr MPL::Value<bpclcd54Val,bpclcd54Val::v0> v0{};
            constexpr MPL::Value<bpclcd54Val,bpclcd54Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd54Val> bpclcd54{}; 
        ///no description available
        enum class bpdlcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd54ValC{
            constexpr MPL::Value<bpdlcd54Val,bpdlcd54Val::v0> v0{};
            constexpr MPL::Value<bpdlcd54Val,bpdlcd54Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd54Val> bpdlcd54{}; 
        ///no description available
        enum class bpelcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd54ValC{
            constexpr MPL::Value<bpelcd54Val,bpelcd54Val::v0> v0{};
            constexpr MPL::Value<bpelcd54Val,bpelcd54Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd54Val> bpelcd54{}; 
        ///no description available
        enum class bpflcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd54ValC{
            constexpr MPL::Value<bpflcd54Val,bpflcd54Val::v0> v0{};
            constexpr MPL::Value<bpflcd54Val,bpflcd54Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd54Val> bpflcd54{}; 
        ///no description available
        enum class bpglcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd54ValC{
            constexpr MPL::Value<bpglcd54Val,bpglcd54Val::v0> v0{};
            constexpr MPL::Value<bpglcd54Val,bpglcd54Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd54Val> bpglcd54{}; 
        ///no description available
        enum class bphlcd54Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd54ValC{
            constexpr MPL::Value<bphlcd54Val,bphlcd54Val::v0> v0{};
            constexpr MPL::Value<bphlcd54Val,bphlcd54Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd54Val> bphlcd54{}; 
    }
    namespace LcdWf55{    ///<LCD Waveform Register 55.
        using Addr = Register::Address<0x400be057,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd55ValC{
            constexpr MPL::Value<bpalcd55Val,bpalcd55Val::v0> v0{};
            constexpr MPL::Value<bpalcd55Val,bpalcd55Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd55Val> bpalcd55{}; 
        ///no description available
        enum class bpblcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd55ValC{
            constexpr MPL::Value<bpblcd55Val,bpblcd55Val::v0> v0{};
            constexpr MPL::Value<bpblcd55Val,bpblcd55Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd55Val> bpblcd55{}; 
        ///no description available
        enum class bpclcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd55ValC{
            constexpr MPL::Value<bpclcd55Val,bpclcd55Val::v0> v0{};
            constexpr MPL::Value<bpclcd55Val,bpclcd55Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd55Val> bpclcd55{}; 
        ///no description available
        enum class bpdlcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd55ValC{
            constexpr MPL::Value<bpdlcd55Val,bpdlcd55Val::v0> v0{};
            constexpr MPL::Value<bpdlcd55Val,bpdlcd55Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd55Val> bpdlcd55{}; 
        ///no description available
        enum class bpelcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd55ValC{
            constexpr MPL::Value<bpelcd55Val,bpelcd55Val::v0> v0{};
            constexpr MPL::Value<bpelcd55Val,bpelcd55Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd55Val> bpelcd55{}; 
        ///no description available
        enum class bpflcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd55ValC{
            constexpr MPL::Value<bpflcd55Val,bpflcd55Val::v0> v0{};
            constexpr MPL::Value<bpflcd55Val,bpflcd55Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd55Val> bpflcd55{}; 
        ///no description available
        enum class bpglcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd55ValC{
            constexpr MPL::Value<bpglcd55Val,bpglcd55Val::v0> v0{};
            constexpr MPL::Value<bpglcd55Val,bpglcd55Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd55Val> bpglcd55{}; 
        ///no description available
        enum class bphlcd55Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd55ValC{
            constexpr MPL::Value<bphlcd55Val,bphlcd55Val::v0> v0{};
            constexpr MPL::Value<bphlcd55Val,bphlcd55Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd55Val> bphlcd55{}; 
    }
    namespace LcdWf59to56{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be058,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf56{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf57{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf58{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf59{}; 
    }
    namespace LcdWf56{    ///<LCD Waveform Register 56.
        using Addr = Register::Address<0x400be058,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd56ValC{
            constexpr MPL::Value<bpalcd56Val,bpalcd56Val::v0> v0{};
            constexpr MPL::Value<bpalcd56Val,bpalcd56Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd56Val> bpalcd56{}; 
        ///no description available
        enum class bpblcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd56ValC{
            constexpr MPL::Value<bpblcd56Val,bpblcd56Val::v0> v0{};
            constexpr MPL::Value<bpblcd56Val,bpblcd56Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd56Val> bpblcd56{}; 
        ///no description available
        enum class bpclcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd56ValC{
            constexpr MPL::Value<bpclcd56Val,bpclcd56Val::v0> v0{};
            constexpr MPL::Value<bpclcd56Val,bpclcd56Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd56Val> bpclcd56{}; 
        ///no description available
        enum class bpdlcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd56ValC{
            constexpr MPL::Value<bpdlcd56Val,bpdlcd56Val::v0> v0{};
            constexpr MPL::Value<bpdlcd56Val,bpdlcd56Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd56Val> bpdlcd56{}; 
        ///no description available
        enum class bpelcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd56ValC{
            constexpr MPL::Value<bpelcd56Val,bpelcd56Val::v0> v0{};
            constexpr MPL::Value<bpelcd56Val,bpelcd56Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd56Val> bpelcd56{}; 
        ///no description available
        enum class bpflcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd56ValC{
            constexpr MPL::Value<bpflcd56Val,bpflcd56Val::v0> v0{};
            constexpr MPL::Value<bpflcd56Val,bpflcd56Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd56Val> bpflcd56{}; 
        ///no description available
        enum class bpglcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd56ValC{
            constexpr MPL::Value<bpglcd56Val,bpglcd56Val::v0> v0{};
            constexpr MPL::Value<bpglcd56Val,bpglcd56Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd56Val> bpglcd56{}; 
        ///no description available
        enum class bphlcd56Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd56ValC{
            constexpr MPL::Value<bphlcd56Val,bphlcd56Val::v0> v0{};
            constexpr MPL::Value<bphlcd56Val,bphlcd56Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd56Val> bphlcd56{}; 
    }
    namespace LcdWf57{    ///<LCD Waveform Register 57.
        using Addr = Register::Address<0x400be059,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd57ValC{
            constexpr MPL::Value<bpalcd57Val,bpalcd57Val::v0> v0{};
            constexpr MPL::Value<bpalcd57Val,bpalcd57Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd57Val> bpalcd57{}; 
        ///no description available
        enum class bpblcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd57ValC{
            constexpr MPL::Value<bpblcd57Val,bpblcd57Val::v0> v0{};
            constexpr MPL::Value<bpblcd57Val,bpblcd57Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd57Val> bpblcd57{}; 
        ///no description available
        enum class bpclcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd57ValC{
            constexpr MPL::Value<bpclcd57Val,bpclcd57Val::v0> v0{};
            constexpr MPL::Value<bpclcd57Val,bpclcd57Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd57Val> bpclcd57{}; 
        ///no description available
        enum class bpdlcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd57ValC{
            constexpr MPL::Value<bpdlcd57Val,bpdlcd57Val::v0> v0{};
            constexpr MPL::Value<bpdlcd57Val,bpdlcd57Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd57Val> bpdlcd57{}; 
        ///no description available
        enum class bpelcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd57ValC{
            constexpr MPL::Value<bpelcd57Val,bpelcd57Val::v0> v0{};
            constexpr MPL::Value<bpelcd57Val,bpelcd57Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd57Val> bpelcd57{}; 
        ///no description available
        enum class bpflcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd57ValC{
            constexpr MPL::Value<bpflcd57Val,bpflcd57Val::v0> v0{};
            constexpr MPL::Value<bpflcd57Val,bpflcd57Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd57Val> bpflcd57{}; 
        ///no description available
        enum class bpglcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd57ValC{
            constexpr MPL::Value<bpglcd57Val,bpglcd57Val::v0> v0{};
            constexpr MPL::Value<bpglcd57Val,bpglcd57Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd57Val> bpglcd57{}; 
        ///no description available
        enum class bphlcd57Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd57ValC{
            constexpr MPL::Value<bphlcd57Val,bphlcd57Val::v0> v0{};
            constexpr MPL::Value<bphlcd57Val,bphlcd57Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd57Val> bphlcd57{}; 
    }
    namespace LcdWf58{    ///<LCD Waveform Register 58.
        using Addr = Register::Address<0x400be05a,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd58ValC{
            constexpr MPL::Value<bpalcd58Val,bpalcd58Val::v0> v0{};
            constexpr MPL::Value<bpalcd58Val,bpalcd58Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd58Val> bpalcd58{}; 
        ///no description available
        enum class bpblcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd58ValC{
            constexpr MPL::Value<bpblcd58Val,bpblcd58Val::v0> v0{};
            constexpr MPL::Value<bpblcd58Val,bpblcd58Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd58Val> bpblcd58{}; 
        ///no description available
        enum class bpclcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd58ValC{
            constexpr MPL::Value<bpclcd58Val,bpclcd58Val::v0> v0{};
            constexpr MPL::Value<bpclcd58Val,bpclcd58Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd58Val> bpclcd58{}; 
        ///no description available
        enum class bpdlcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd58ValC{
            constexpr MPL::Value<bpdlcd58Val,bpdlcd58Val::v0> v0{};
            constexpr MPL::Value<bpdlcd58Val,bpdlcd58Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd58Val> bpdlcd58{}; 
        ///no description available
        enum class bpelcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd58ValC{
            constexpr MPL::Value<bpelcd58Val,bpelcd58Val::v0> v0{};
            constexpr MPL::Value<bpelcd58Val,bpelcd58Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd58Val> bpelcd58{}; 
        ///no description available
        enum class bpflcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd58ValC{
            constexpr MPL::Value<bpflcd58Val,bpflcd58Val::v0> v0{};
            constexpr MPL::Value<bpflcd58Val,bpflcd58Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd58Val> bpflcd58{}; 
        ///no description available
        enum class bpglcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd58ValC{
            constexpr MPL::Value<bpglcd58Val,bpglcd58Val::v0> v0{};
            constexpr MPL::Value<bpglcd58Val,bpglcd58Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd58Val> bpglcd58{}; 
        ///no description available
        enum class bphlcd58Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd58ValC{
            constexpr MPL::Value<bphlcd58Val,bphlcd58Val::v0> v0{};
            constexpr MPL::Value<bphlcd58Val,bphlcd58Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd58Val> bphlcd58{}; 
    }
    namespace LcdWf59{    ///<LCD Waveform Register 59.
        using Addr = Register::Address<0x400be05b,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd59ValC{
            constexpr MPL::Value<bpalcd59Val,bpalcd59Val::v0> v0{};
            constexpr MPL::Value<bpalcd59Val,bpalcd59Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd59Val> bpalcd59{}; 
        ///no description available
        enum class bpblcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd59ValC{
            constexpr MPL::Value<bpblcd59Val,bpblcd59Val::v0> v0{};
            constexpr MPL::Value<bpblcd59Val,bpblcd59Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd59Val> bpblcd59{}; 
        ///no description available
        enum class bpclcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd59ValC{
            constexpr MPL::Value<bpclcd59Val,bpclcd59Val::v0> v0{};
            constexpr MPL::Value<bpclcd59Val,bpclcd59Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd59Val> bpclcd59{}; 
        ///no description available
        enum class bpdlcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd59ValC{
            constexpr MPL::Value<bpdlcd59Val,bpdlcd59Val::v0> v0{};
            constexpr MPL::Value<bpdlcd59Val,bpdlcd59Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd59Val> bpdlcd59{}; 
        ///no description available
        enum class bpelcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd59ValC{
            constexpr MPL::Value<bpelcd59Val,bpelcd59Val::v0> v0{};
            constexpr MPL::Value<bpelcd59Val,bpelcd59Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd59Val> bpelcd59{}; 
        ///no description available
        enum class bpflcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd59ValC{
            constexpr MPL::Value<bpflcd59Val,bpflcd59Val::v0> v0{};
            constexpr MPL::Value<bpflcd59Val,bpflcd59Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd59Val> bpflcd59{}; 
        ///no description available
        enum class bpglcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd59ValC{
            constexpr MPL::Value<bpglcd59Val,bpglcd59Val::v0> v0{};
            constexpr MPL::Value<bpglcd59Val,bpglcd59Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd59Val> bpglcd59{}; 
        ///no description available
        enum class bphlcd59Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd59ValC{
            constexpr MPL::Value<bphlcd59Val,bphlcd59Val::v0> v0{};
            constexpr MPL::Value<bphlcd59Val,bphlcd59Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd59Val> bphlcd59{}; 
    }
    namespace LcdWf63to60{    ///<LCD Waveform register
        using Addr = Register::Address<0x400be05c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wf60{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wf61{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wf62{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> wf63{}; 
    }
    namespace LcdWf60{    ///<LCD Waveform Register 60.
        using Addr = Register::Address<0x400be05c,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd60ValC{
            constexpr MPL::Value<bpalcd60Val,bpalcd60Val::v0> v0{};
            constexpr MPL::Value<bpalcd60Val,bpalcd60Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd60Val> bpalcd60{}; 
        ///no description available
        enum class bpblcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd60ValC{
            constexpr MPL::Value<bpblcd60Val,bpblcd60Val::v0> v0{};
            constexpr MPL::Value<bpblcd60Val,bpblcd60Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd60Val> bpblcd60{}; 
        ///no description available
        enum class bpclcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd60ValC{
            constexpr MPL::Value<bpclcd60Val,bpclcd60Val::v0> v0{};
            constexpr MPL::Value<bpclcd60Val,bpclcd60Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd60Val> bpclcd60{}; 
        ///no description available
        enum class bpdlcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd60ValC{
            constexpr MPL::Value<bpdlcd60Val,bpdlcd60Val::v0> v0{};
            constexpr MPL::Value<bpdlcd60Val,bpdlcd60Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd60Val> bpdlcd60{}; 
        ///no description available
        enum class bpelcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd60ValC{
            constexpr MPL::Value<bpelcd60Val,bpelcd60Val::v0> v0{};
            constexpr MPL::Value<bpelcd60Val,bpelcd60Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd60Val> bpelcd60{}; 
        ///no description available
        enum class bpflcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd60ValC{
            constexpr MPL::Value<bpflcd60Val,bpflcd60Val::v0> v0{};
            constexpr MPL::Value<bpflcd60Val,bpflcd60Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd60Val> bpflcd60{}; 
        ///no description available
        enum class bpglcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd60ValC{
            constexpr MPL::Value<bpglcd60Val,bpglcd60Val::v0> v0{};
            constexpr MPL::Value<bpglcd60Val,bpglcd60Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd60Val> bpglcd60{}; 
        ///no description available
        enum class bphlcd60Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd60ValC{
            constexpr MPL::Value<bphlcd60Val,bphlcd60Val::v0> v0{};
            constexpr MPL::Value<bphlcd60Val,bphlcd60Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd60Val> bphlcd60{}; 
    }
    namespace LcdWf61{    ///<LCD Waveform Register 61.
        using Addr = Register::Address<0x400be05d,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd61ValC{
            constexpr MPL::Value<bpalcd61Val,bpalcd61Val::v0> v0{};
            constexpr MPL::Value<bpalcd61Val,bpalcd61Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd61Val> bpalcd61{}; 
        ///no description available
        enum class bpblcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd61ValC{
            constexpr MPL::Value<bpblcd61Val,bpblcd61Val::v0> v0{};
            constexpr MPL::Value<bpblcd61Val,bpblcd61Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd61Val> bpblcd61{}; 
        ///no description available
        enum class bpclcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd61ValC{
            constexpr MPL::Value<bpclcd61Val,bpclcd61Val::v0> v0{};
            constexpr MPL::Value<bpclcd61Val,bpclcd61Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd61Val> bpclcd61{}; 
        ///no description available
        enum class bpdlcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd61ValC{
            constexpr MPL::Value<bpdlcd61Val,bpdlcd61Val::v0> v0{};
            constexpr MPL::Value<bpdlcd61Val,bpdlcd61Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd61Val> bpdlcd61{}; 
        ///no description available
        enum class bpelcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd61ValC{
            constexpr MPL::Value<bpelcd61Val,bpelcd61Val::v0> v0{};
            constexpr MPL::Value<bpelcd61Val,bpelcd61Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd61Val> bpelcd61{}; 
        ///no description available
        enum class bpflcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd61ValC{
            constexpr MPL::Value<bpflcd61Val,bpflcd61Val::v0> v0{};
            constexpr MPL::Value<bpflcd61Val,bpflcd61Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd61Val> bpflcd61{}; 
        ///no description available
        enum class bpglcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd61ValC{
            constexpr MPL::Value<bpglcd61Val,bpglcd61Val::v0> v0{};
            constexpr MPL::Value<bpglcd61Val,bpglcd61Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd61Val> bpglcd61{}; 
        ///no description available
        enum class bphlcd61Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd61ValC{
            constexpr MPL::Value<bphlcd61Val,bphlcd61Val::v0> v0{};
            constexpr MPL::Value<bphlcd61Val,bphlcd61Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd61Val> bphlcd61{}; 
    }
    namespace LcdWf62{    ///<LCD Waveform Register 62.
        using Addr = Register::Address<0x400be05e,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd62ValC{
            constexpr MPL::Value<bpalcd62Val,bpalcd62Val::v0> v0{};
            constexpr MPL::Value<bpalcd62Val,bpalcd62Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd62Val> bpalcd62{}; 
        ///no description available
        enum class bpblcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd62ValC{
            constexpr MPL::Value<bpblcd62Val,bpblcd62Val::v0> v0{};
            constexpr MPL::Value<bpblcd62Val,bpblcd62Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd62Val> bpblcd62{}; 
        ///no description available
        enum class bpclcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd62ValC{
            constexpr MPL::Value<bpclcd62Val,bpclcd62Val::v0> v0{};
            constexpr MPL::Value<bpclcd62Val,bpclcd62Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd62Val> bpclcd62{}; 
        ///no description available
        enum class bpdlcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd62ValC{
            constexpr MPL::Value<bpdlcd62Val,bpdlcd62Val::v0> v0{};
            constexpr MPL::Value<bpdlcd62Val,bpdlcd62Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd62Val> bpdlcd62{}; 
        ///no description available
        enum class bpelcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd62ValC{
            constexpr MPL::Value<bpelcd62Val,bpelcd62Val::v0> v0{};
            constexpr MPL::Value<bpelcd62Val,bpelcd62Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd62Val> bpelcd62{}; 
        ///no description available
        enum class bpflcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd62ValC{
            constexpr MPL::Value<bpflcd62Val,bpflcd62Val::v0> v0{};
            constexpr MPL::Value<bpflcd62Val,bpflcd62Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd62Val> bpflcd62{}; 
        ///no description available
        enum class bpglcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd62ValC{
            constexpr MPL::Value<bpglcd62Val,bpglcd62Val::v0> v0{};
            constexpr MPL::Value<bpglcd62Val,bpglcd62Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd62Val> bpglcd62{}; 
        ///no description available
        enum class bphlcd62Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd62ValC{
            constexpr MPL::Value<bphlcd62Val,bphlcd62Val::v0> v0{};
            constexpr MPL::Value<bphlcd62Val,bphlcd62Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd62Val> bphlcd62{}; 
    }
    namespace LcdWf63{    ///<LCD Waveform Register 63.
        using Addr = Register::Address<0x400be05f,0xffffff00,0,unsigned char>;
        ///no description available
        enum class bpalcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase A
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase A
        };
        namespace bpalcd63ValC{
            constexpr MPL::Value<bpalcd63Val,bpalcd63Val::v0> v0{};
            constexpr MPL::Value<bpalcd63Val,bpalcd63Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bpalcd63Val> bpalcd63{}; 
        ///no description available
        enum class bpblcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase B
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase B
        };
        namespace bpblcd63ValC{
            constexpr MPL::Value<bpblcd63Val,bpblcd63Val::v0> v0{};
            constexpr MPL::Value<bpblcd63Val,bpblcd63Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bpblcd63Val> bpblcd63{}; 
        ///no description available
        enum class bpclcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase C
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase C
        };
        namespace bpclcd63ValC{
            constexpr MPL::Value<bpclcd63Val,bpclcd63Val::v0> v0{};
            constexpr MPL::Value<bpclcd63Val,bpclcd63Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bpclcd63Val> bpclcd63{}; 
        ///no description available
        enum class bpdlcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase D
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase D
        };
        namespace bpdlcd63ValC{
            constexpr MPL::Value<bpdlcd63Val,bpdlcd63Val::v0> v0{};
            constexpr MPL::Value<bpdlcd63Val,bpdlcd63Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bpdlcd63Val> bpdlcd63{}; 
        ///no description available
        enum class bpelcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase E
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase E
        };
        namespace bpelcd63ValC{
            constexpr MPL::Value<bpelcd63Val,bpelcd63Val::v0> v0{};
            constexpr MPL::Value<bpelcd63Val,bpelcd63Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bpelcd63Val> bpelcd63{}; 
        ///no description available
        enum class bpflcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase F
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase F
        };
        namespace bpflcd63ValC{
            constexpr MPL::Value<bpflcd63Val,bpflcd63Val::v0> v0{};
            constexpr MPL::Value<bpflcd63Val,bpflcd63Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bpflcd63Val> bpflcd63{}; 
        ///no description available
        enum class bpglcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase G
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase G
        };
        namespace bpglcd63ValC{
            constexpr MPL::Value<bpglcd63Val,bpglcd63Val::v0> v0{};
            constexpr MPL::Value<bpglcd63Val,bpglcd63Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bpglcd63Val> bpglcd63{}; 
        ///no description available
        enum class bphlcd63Val {
            v0=0x00000000,     ///<LCD segment off or LCD backplane inactive for phase H
            v1=0x00000001,     ///<LCD segment on or LCD backplane active for phase H
        };
        namespace bphlcd63ValC{
            constexpr MPL::Value<bphlcd63Val,bphlcd63Val::v0> v0{};
            constexpr MPL::Value<bphlcd63Val,bphlcd63Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,bphlcd63Val> bphlcd63{}; 
    }
}
