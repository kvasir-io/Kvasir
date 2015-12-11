#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Management Controller
    namespace NonepmcScer{    ///<System Clock Enable Register
        using Addr = Register::Address<0x400e0400,0xfffff87f,0,unsigned>;
        ///USB Device Port Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udp{}; 
        ///Programmable Clock 0 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pck1{}; 
        ///Programmable Clock 2 Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pck2{}; 
    }
    namespace NonepmcScdr{    ///<System Clock Disable Register
        using Addr = Register::Address<0x400e0404,0xfffff87f,0,unsigned>;
        ///USB Device Port Clock Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udp{}; 
        ///Programmable Clock 0 Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pck1{}; 
        ///Programmable Clock 2 Output Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pck2{}; 
    }
    namespace NonepmcScsr{    ///<System Clock Status Register
        using Addr = Register::Address<0x400e0408,0xfffff87f,0,unsigned>;
        ///USB Device Port Clock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udp{}; 
        ///Programmable Clock 0 Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pck1{}; 
        ///Programmable Clock 2 Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pck2{}; 
    }
    namespace NonepmcPcer0{    ///<Peripheral Clock Enable Register 0
        using Addr = Register::Address<0x400e0410,0x00020003,0,unsigned>;
        ///Peripheral Clock 2 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Peripheral Clock 3 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Peripheral Clock 4 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Peripheral Clock 5 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Peripheral Clock 6 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Peripheral Clock 7 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Peripheral Clock 8 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Peripheral Clock 9 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Peripheral Clock 10 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Peripheral Clock 11 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Peripheral Clock 12 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Peripheral Clock 13 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Peripheral Clock 14 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Peripheral Clock 15 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Peripheral Clock 16 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Peripheral Clock 18 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Peripheral Clock 19 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Peripheral Clock 20 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Peripheral Clock 21 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Peripheral Clock 22 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Peripheral Clock 23 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Peripheral Clock 24 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Peripheral Clock 25 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Peripheral Clock 26 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Peripheral Clock 27 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Peripheral Clock 28 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Peripheral Clock 29 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Peripheral Clock 30 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Peripheral Clock 31 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace NonepmcPcdr0{    ///<Peripheral Clock Disable Register 0
        using Addr = Register::Address<0x400e0414,0x00020003,0,unsigned>;
        ///Peripheral Clock 2 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Peripheral Clock 3 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Peripheral Clock 4 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Peripheral Clock 5 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Peripheral Clock 6 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Peripheral Clock 7 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Peripheral Clock 8 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Peripheral Clock 9 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Peripheral Clock 10 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Peripheral Clock 11 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Peripheral Clock 12 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Peripheral Clock 13 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Peripheral Clock 14 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Peripheral Clock 15 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Peripheral Clock 16 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Peripheral Clock 18 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Peripheral Clock 19 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Peripheral Clock 20 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Peripheral Clock 21 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Peripheral Clock 22 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Peripheral Clock 23 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Peripheral Clock 24 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Peripheral Clock 25 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Peripheral Clock 26 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Peripheral Clock 27 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Peripheral Clock 28 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Peripheral Clock 29 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Peripheral Clock 30 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Peripheral Clock 31 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace NonepmcPcsr0{    ///<Peripheral Clock Status Register 0
        using Addr = Register::Address<0x400e0418,0x00020003,0,unsigned>;
        ///Peripheral Clock 2 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Peripheral Clock 3 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Peripheral Clock 4 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Peripheral Clock 5 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Peripheral Clock 6 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Peripheral Clock 7 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Peripheral Clock 8 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Peripheral Clock 9 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Peripheral Clock 10 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Peripheral Clock 11 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Peripheral Clock 12 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Peripheral Clock 13 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Peripheral Clock 14 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Peripheral Clock 15 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Peripheral Clock 16 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Peripheral Clock 18 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Peripheral Clock 19 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Peripheral Clock 20 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Peripheral Clock 21 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Peripheral Clock 22 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Peripheral Clock 23 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Peripheral Clock 24 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Peripheral Clock 25 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Peripheral Clock 26 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Peripheral Clock 27 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Peripheral Clock 28 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Peripheral Clock 29 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Peripheral Clock 30 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Peripheral Clock 31 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace NoneckgrMor{    ///<Main Oscillator Register
        using Addr = Register::Address<0x400e0420,0xfc000084,0,unsigned>;
        ///Main Crystal Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxten{}; 
        ///Main Crystal Oscillator Bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> moscxtby{}; 
        ///Main On-Chip RC Oscillator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> moscrcen{}; 
        ///Main On-Chip RC Oscillator Frequency Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> moscrcf{}; 
        ///Main Crystal Oscillator Start-up Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> moscxtst{}; 
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> key{}; 
        ///Main Oscillator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> moscsel{}; 
        ///Clock Failure Detector Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cfden{}; 
    }
    namespace NoneckgrMcfr{    ///<Main Clock Frequency Register
        using Addr = Register::Address<0x400e0424,0xffee0000,0,unsigned>;
        ///Main Clock Frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mainf{}; 
        ///Main Clock Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mainfrdy{}; 
        ///RC Oscillator Frequency Measure (write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rcmeas{}; 
    }
    namespace NoneckgrPllar{    ///<PLLA Register
        using Addr = Register::Address<0x400e0428,0xd800c000,0,unsigned>;
        ///Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> diva{}; 
        ///PLLA Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pllacount{}; 
        ///PLLA Multiplier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> mula{}; 
        ///Must Be Set to 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> one{}; 
    }
    namespace NoneckgrPllbr{    ///<PLLB Register
        using Addr = Register::Address<0x400e042c,0xf800c000,0,unsigned>;
        ///Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> divb{}; 
        ///PLLB Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pllbcount{}; 
        ///PLLB Multiplier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> mulb{}; 
    }
    namespace NonepmcMckr{    ///<Master Clock Register
        using Addr = Register::Address<0x400e0430,0xffffcf8c,0,unsigned>;
        ///Master Clock Source Selection
        enum class CssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLA Clock is selected
            pllbClk=0x00000003,     ///<PLLBClock is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CssVal> css{}; 
        namespace CssValC{
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::slowClk> slowClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mainClk> mainClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllaClk> pllaClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllbClk> pllbClk{};
        }
        }
        ///Processor Clock Prescaler
        enum class PresVal {
            clk1=0x00000000,     ///<Selected clock
            clk2=0x00000001,     ///<Selected clock divided by 2
            clk4=0x00000002,     ///<Selected clock divided by 4
            clk8=0x00000003,     ///<Selected clock divided by 8
            clk16=0x00000004,     ///<Selected clock divided by 16
            clk32=0x00000005,     ///<Selected clock divided by 32
            clk64=0x00000006,     ///<Selected clock divided by 64
            clk3=0x00000007,     ///<Selected clock divided by 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PresVal> pres{}; 
        namespace PresValC{
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk1> clk1{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk2> clk2{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk4> clk4{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk8> clk8{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk16> clk16{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk32> clk32{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk64> clk64{};
            constexpr Register::FieldValue<decltype(pres)::Type,PresVal::clk3> clk3{};
        }
        }
        ///PLLA Divisor by 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> plladiv2{}; 
        ///PLLB Divisor by 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pllbdiv2{}; 
    }
    namespace NonepmcUsb{    ///<USB Clock Register
        using Addr = Register::Address<0x400e0438,0xfffff0fe,0,unsigned>;
        ///USB Input Clock Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbs{}; 
        ///Divider for USB Clock.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> usbdiv{}; 
    }
    namespace NonepmcPck0{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0x400e0440,0xffffff88,0,unsigned>;
        ///Master Clock Source Selection
        enum class CssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLA Clock is selected
            pllbClk=0x00000003,     ///<PLLB Clock is selected
            mck=0x00000004,     ///<Master Clock is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,CssVal> css{}; 
        namespace CssValC{
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::slowClk> slowClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mainClk> mainClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllaClk> pllaClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllbClk> pllbClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mck> mck{};
        }
        }
        ///Programmable Clock Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pres{}; 
    }
    namespace NonepmcPck1{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0x400e0444,0xffffff88,0,unsigned>;
        ///Master Clock Source Selection
        enum class CssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLA Clock is selected
            pllbClk=0x00000003,     ///<PLLB Clock is selected
            mck=0x00000004,     ///<Master Clock is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,CssVal> css{}; 
        namespace CssValC{
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::slowClk> slowClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mainClk> mainClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllaClk> pllaClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllbClk> pllbClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mck> mck{};
        }
        }
        ///Programmable Clock Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pres{}; 
    }
    namespace NonepmcPck2{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0x400e0448,0xffffff88,0,unsigned>;
        ///Master Clock Source Selection
        enum class CssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLA Clock is selected
            pllbClk=0x00000003,     ///<PLLB Clock is selected
            mck=0x00000004,     ///<Master Clock is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,CssVal> css{}; 
        namespace CssValC{
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::slowClk> slowClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mainClk> mainClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllaClk> pllaClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::pllbClk> pllbClk{};
            constexpr Register::FieldValue<decltype(css)::Type,CssVal::mck> mck{};
        }
        }
        ///Programmable Clock Prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pres{}; 
    }
    namespace NonepmcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400e0460,0xfff8f8f0,0,unsigned>;
        ///Main Crystal Oscillator Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxts{}; 
        ///PLLA Lock Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///PLLB Lock Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lockb{}; 
        ///Master Clock Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///Programmable Clock Ready 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
        ///Programmable Clock Ready 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pckrdy2{}; 
        ///Main Oscillator Selection Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> moscsels{}; 
        ///Main On-Chip RC Status Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfdev{}; 
    }
    namespace NonepmcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x400e0464,0xfff8f8f0,0,unsigned>;
        ///Main Crystal Oscillator Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxts{}; 
        ///PLLA Lock Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///PLLB Lock Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lockb{}; 
        ///Master Clock Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///Programmable Clock Ready 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
        ///Programmable Clock Ready 2 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pckrdy2{}; 
        ///Main Oscillator Selection Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> moscsels{}; 
        ///Main On-Chip RC Status Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfdev{}; 
    }
    namespace NonepmcSr{    ///<Status Register
        using Addr = Register::Address<0x400e0468,0xffe0f870,0,unsigned>;
        ///Main XTAL Oscillator Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxts{}; 
        ///PLLA Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///PLLB Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lockb{}; 
        ///Master Clock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///Slow Clock Oscillator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oscsels{}; 
        ///Programmable Clock Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
        ///Programmable Clock Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pckrdy2{}; 
        ///Main Oscillator Selection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> moscsels{}; 
        ///Main On-Chip RC Oscillator Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfdev{}; 
        ///Clock Failure Detector Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cfds{}; 
        ///Clock Failure Detector Fault Output Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fos{}; 
    }
    namespace NonepmcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400e046c,0xfff8f8f0,0,unsigned>;
        ///Main Crystal Oscillator Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxts{}; 
        ///PLLA Lock Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///PLLB Lock Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lockb{}; 
        ///Master Clock Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///Programmable Clock Ready 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
        ///Programmable Clock Ready 2 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pckrdy2{}; 
        ///Main Oscillator Selection Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> moscsels{}; 
        ///Main On-Chip RC Status Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfdev{}; 
    }
    namespace NonepmcFsmr{    ///<Fast Startup Mode Register
        using Addr = Register::Address<0x400e0470,0xffe80000,0,unsigned>;
        ///Fast Startup Input Enable 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fstt0{}; 
        ///Fast Startup Input Enable 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fstt1{}; 
        ///Fast Startup Input Enable 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fstt2{}; 
        ///Fast Startup Input Enable 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fstt3{}; 
        ///Fast Startup Input Enable 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fstt4{}; 
        ///Fast Startup Input Enable 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fstt5{}; 
        ///Fast Startup Input Enable 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fstt6{}; 
        ///Fast Startup Input Enable 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fstt7{}; 
        ///Fast Startup Input Enable 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fstt8{}; 
        ///Fast Startup Input Enable 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fstt9{}; 
        ///Fast Startup Input Enable 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fstt10{}; 
        ///Fast Startup Input Enable 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fstt11{}; 
        ///Fast Startup Input Enable 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fstt12{}; 
        ///Fast Startup Input Enable 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fstt13{}; 
        ///Fast Startup Input Enable 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fstt14{}; 
        ///Fast Startup Input Enable 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fstt15{}; 
        ///RTT Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rttal{}; 
        ///RTC Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rtcal{}; 
        ///USB Alarm Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> usbal{}; 
        ///Low Power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> lpm{}; 
    }
    namespace NonepmcFspr{    ///<Fast Startup Polarity Register
        using Addr = Register::Address<0x400e0474,0xffff0000,0,unsigned>;
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fstp0{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fstp1{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fstp2{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fstp3{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fstp4{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fstp5{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fstp6{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fstp7{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fstp8{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fstp9{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fstp10{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fstp11{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fstp12{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fstp13{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fstp14{}; 
        ///Fast Startup Input Polarityx
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fstp15{}; 
    }
    namespace NonepmcFocr{    ///<Fault Output Clear Register
        using Addr = Register::Address<0x400e0478,0xfffffffe,0,unsigned>;
        ///Fault Output Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> foclr{}; 
    }
    namespace NonepmcWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400e04e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace NonepmcWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x400e04e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
    namespace NonepmcPcer1{    ///<Peripheral Clock Enable Register 1
        using Addr = Register::Address<0x400e0500,0xfffffff8,0,unsigned>;
        ///Peripheral Clock 32 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pid32{}; 
        ///Peripheral Clock 33 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pid33{}; 
        ///Peripheral Clock 34 Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid34{}; 
    }
    namespace NonepmcPcdr1{    ///<Peripheral Clock Disable Register 1
        using Addr = Register::Address<0x400e0504,0xfffffff8,0,unsigned>;
        ///Peripheral Clock 32 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pid32{}; 
        ///Peripheral Clock 33 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pid33{}; 
        ///Peripheral Clock 34 Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid34{}; 
    }
    namespace NonepmcPcsr1{    ///<Peripheral Clock Status Register 1
        using Addr = Register::Address<0x400e0508,0xfffffff8,0,unsigned>;
        ///Peripheral Clock 32 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pid32{}; 
        ///Peripheral Clock 33 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pid33{}; 
        ///Peripheral Clock 34 Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid34{}; 
    }
    namespace NonepmcOcr{    ///<Oscillator Calibration Register
        using Addr = Register::Address<0x400e0510,0xff000000,0,unsigned>;
        ///RC Oscillator Calibration bits for 4 Mhz
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> cal4{}; 
        ///Selection of RC Oscillator Calibration bits for 4 Mhz
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sel4{}; 
        ///RC Oscillator Calibration bits for 8 Mhz
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> cal8{}; 
        ///Selection of RC Oscillator Calibration bits for 8 Mhz
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sel8{}; 
        ///RC Oscillator Calibration bits for 12 Mhz
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> cal12{}; 
        ///Selection of RC Oscillator Calibration bits for 12 Mhz
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> sel12{}; 
    }
}
