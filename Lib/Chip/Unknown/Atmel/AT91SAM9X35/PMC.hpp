#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Management Controller
    namespace NonepmcScer{    ///<System Clock Enable Register
        using Addr = Register::Address<0xfffffc00,0xfffffc23,0,unsigned>;
        ///DDR Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ddrck{}; 
        ///LCD Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lcdck{}; 
        ///SMD Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> smdck{}; 
        ///USB Host OHCI Clocks Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uhp{}; 
        ///USB Device Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udp{}; 
        ///Programmable Clock 0 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pck1{}; 
    }
    namespace NonepmcScdr{    ///<System Clock Disable Register
        using Addr = Register::Address<0xfffffc04,0xfffffc22,0,unsigned>;
        ///Processor Clock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pck{}; 
        ///DDR Clock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ddrck{}; 
        ///LCD Clock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lcdck{}; 
        ///SMD Clock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> smdck{}; 
        ///USB Host OHCI Clock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uhp{}; 
        ///USB Device Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udp{}; 
        ///Programmable Clock 0 Output Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pck1{}; 
    }
    namespace NonepmcScsr{    ///<System Clock Status Register
        using Addr = Register::Address<0xfffffc08,0xfffffc22,0,unsigned>;
        ///Processor Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pck{}; 
        ///DDR Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ddrck{}; 
        ///LCD Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lcdck{}; 
        ///SMD Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> smdck{}; 
        ///USB Host Port Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uhp{}; 
        ///USB Device Port Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udp{}; 
        ///Programmable Clock 0 Output Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pck1{}; 
    }
    namespace NonepmcPcer{    ///<Peripheral Clock Enable Register
        using Addr = Register::Address<0xfffffc10,0x00000003,0,unsigned>;
        ///Peripheral Clock 2 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Peripheral Clock 3 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Peripheral Clock 4 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Peripheral Clock 5 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Peripheral Clock 6 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Peripheral Clock 7 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Peripheral Clock 8 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Peripheral Clock 9 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Peripheral Clock 10 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Peripheral Clock 11 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Peripheral Clock 12 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Peripheral Clock 13 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Peripheral Clock 14 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Peripheral Clock 15 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Peripheral Clock 16 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Peripheral Clock 17 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Peripheral Clock 18 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Peripheral Clock 19 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Peripheral Clock 20 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Peripheral Clock 21 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Peripheral Clock 22 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Peripheral Clock 23 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Peripheral Clock 24 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Peripheral Clock 25 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Peripheral Clock 26 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Peripheral Clock 27 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Peripheral Clock 28 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Peripheral Clock 29 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Peripheral Clock 30 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Peripheral Clock 31 Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace NonepmcPcdr{    ///<Peripheral Clock Disable Register
        using Addr = Register::Address<0xfffffc14,0x00000003,0,unsigned>;
        ///Peripheral Clock 2 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Peripheral Clock 3 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Peripheral Clock 4 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Peripheral Clock 5 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Peripheral Clock 6 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Peripheral Clock 7 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Peripheral Clock 8 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Peripheral Clock 9 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Peripheral Clock 10 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Peripheral Clock 11 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Peripheral Clock 12 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Peripheral Clock 13 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Peripheral Clock 14 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Peripheral Clock 15 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Peripheral Clock 16 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Peripheral Clock 17 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Peripheral Clock 18 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Peripheral Clock 19 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Peripheral Clock 20 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Peripheral Clock 21 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Peripheral Clock 22 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Peripheral Clock 23 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Peripheral Clock 24 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Peripheral Clock 25 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Peripheral Clock 26 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Peripheral Clock 27 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Peripheral Clock 28 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Peripheral Clock 29 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Peripheral Clock 30 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Peripheral Clock 31 Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace NonepmcPcsr{    ///<Peripheral Clock Status Register
        using Addr = Register::Address<0xfffffc18,0x00000003,0,unsigned>;
        ///Peripheral Clock 2 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pid2{}; 
        ///Peripheral Clock 3 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pid3{}; 
        ///Peripheral Clock 4 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pid4{}; 
        ///Peripheral Clock 5 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pid5{}; 
        ///Peripheral Clock 6 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pid6{}; 
        ///Peripheral Clock 7 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pid7{}; 
        ///Peripheral Clock 8 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pid8{}; 
        ///Peripheral Clock 9 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pid9{}; 
        ///Peripheral Clock 10 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pid10{}; 
        ///Peripheral Clock 11 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pid11{}; 
        ///Peripheral Clock 12 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pid12{}; 
        ///Peripheral Clock 13 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pid13{}; 
        ///Peripheral Clock 14 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pid14{}; 
        ///Peripheral Clock 15 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pid15{}; 
        ///Peripheral Clock 16 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pid16{}; 
        ///Peripheral Clock 17 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pid17{}; 
        ///Peripheral Clock 18 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pid18{}; 
        ///Peripheral Clock 19 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pid19{}; 
        ///Peripheral Clock 20 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pid20{}; 
        ///Peripheral Clock 21 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pid21{}; 
        ///Peripheral Clock 22 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pid22{}; 
        ///Peripheral Clock 23 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pid23{}; 
        ///Peripheral Clock 24 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pid24{}; 
        ///Peripheral Clock 25 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pid25{}; 
        ///Peripheral Clock 26 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pid26{}; 
        ///Peripheral Clock 27 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pid27{}; 
        ///Peripheral Clock 28 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pid28{}; 
        ///Peripheral Clock 29 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> pid29{}; 
        ///Peripheral Clock 30 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pid30{}; 
        ///Peripheral Clock 31 Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pid31{}; 
    }
    namespace NoneckgrUckr{    ///<UTMI Clock Register
        using Addr = Register::Address<0xfffffc1c,0x0e0effff,0,unsigned>;
        ///UTMI PLL Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> upllen{}; 
        ///UTMI PLL Start-up Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> upllcount{}; 
        ///UTMI BIAS Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> biasen{}; 
        ///UTMI BIAS Start-up Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> biascount{}; 
    }
    namespace NoneckgrMor{    ///<Main Oscillator Register
        using Addr = Register::Address<0xfffffc20,0xfc0000f4,0,unsigned>;
        ///Main Crystal Oscillator Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxten{}; 
        ///Main Crystal Oscillator Bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> moscxtby{}; 
        ///Main On-Chip RC Oscillator Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> moscrcen{}; 
        ///Main Crystal Oscillator Start-up Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> moscxtst{}; 
        ///Password
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> key{}; 
        ///Main Oscillator Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> moscsel{}; 
        ///Clock Failure Detector Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cfden{}; 
    }
    namespace NoneckgrMcfr{    ///<Main Clock Frequency Register
        using Addr = Register::Address<0xfffffc24,0xfffe0000,0,unsigned>;
        ///Main Clock Frequency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mainf{}; 
        ///Main Clock Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mainfrdy{}; 
    }
    namespace NoneckgrPllar{    ///<PLLA Register
        using Addr = Register::Address<0xfffffc28,0xd8000000,0,unsigned>;
        ///Divider A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> diva{}; 
        ///PLLA Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pllacount{}; 
        ///PLLA Clock Frequency Range
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> outa{}; 
        ///PLLA Multiplier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> mula{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stuckto1{}; 
    }
    namespace NonepmcMckr{    ///<Master Clock Register
        using Addr = Register::Address<0xfffffc30,0xffffec8c,0,unsigned>;
        ///Master/Processor Clock Source Selection
        enum class cssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLACK/PLLADIV2 is selected
            upllClk=0x00000003,     ///<UPLL Clock is selected
        };
        namespace cssValC{
            constexpr MPL::Value<cssVal,cssVal::slowClk> slowClk{};
            constexpr MPL::Value<cssVal,cssVal::mainClk> mainClk{};
            constexpr MPL::Value<cssVal,cssVal::pllaClk> pllaClk{};
            constexpr MPL::Value<cssVal,cssVal::upllClk> upllClk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,cssVal> css{}; 
        ///Master/Processor Clock Prescaler
        enum class presVal {
            clock=0x00000000,     ///<Selected clock
            clockDiv2=0x00000001,     ///<Selected clock divided by 2
            clockDiv4=0x00000002,     ///<Selected clock divided by 4
            clockDiv8=0x00000003,     ///<Selected clock divided by 8
            clockDiv16=0x00000004,     ///<Selected clock divided by 16
            clockDiv32=0x00000005,     ///<Selected clock divided by 32
            clockDiv64=0x00000006,     ///<Selected clock divided by 64
            clockDiv3=0x00000007,     ///<Selected clock divided by 3
        };
        namespace presValC{
            constexpr MPL::Value<presVal,presVal::clock> clock{};
            constexpr MPL::Value<presVal,presVal::clockDiv2> clockDiv2{};
            constexpr MPL::Value<presVal,presVal::clockDiv4> clockDiv4{};
            constexpr MPL::Value<presVal,presVal::clockDiv8> clockDiv8{};
            constexpr MPL::Value<presVal,presVal::clockDiv16> clockDiv16{};
            constexpr MPL::Value<presVal,presVal::clockDiv32> clockDiv32{};
            constexpr MPL::Value<presVal,presVal::clockDiv64> clockDiv64{};
            constexpr MPL::Value<presVal,presVal::clockDiv3> clockDiv3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,presVal> pres{}; 
        ///Master Clock Division
        enum class mdivVal {
            eqPck=0x00000000,     ///<Master Clock is Prescaler Output Clock divided by 1.Warning: DDRCK is not available.
            pckDiv2=0x00000001,     ///<Master Clock is Prescaler Output Clock divided by 2.DDRCK is equal to MCK.
            pckDiv4=0x00000002,     ///<Master Clock is Prescaler Output Clock divided by 4.DDRCK is equal to MCK.
            pckDiv3=0x00000003,     ///<Master Clock is Prescaler Output Clock divided by 3.DDRCK is equal to MCK.
        };
        namespace mdivValC{
            constexpr MPL::Value<mdivVal,mdivVal::eqPck> eqPck{};
            constexpr MPL::Value<mdivVal,mdivVal::pckDiv2> pckDiv2{};
            constexpr MPL::Value<mdivVal,mdivVal::pckDiv4> pckDiv4{};
            constexpr MPL::Value<mdivVal,mdivVal::pckDiv3> pckDiv3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,mdivVal> mdiv{}; 
        ///PLLA divisor by 2
        enum class plladiv2Val {
            notDiv2=0x00000000,     ///<PLLA clock frequency is divided by 1.
            div2=0x00000001,     ///<PLLA clock frequency is divided by 2.
        };
        namespace plladiv2ValC{
            constexpr MPL::Value<plladiv2Val,plladiv2Val::notDiv2> notDiv2{};
            constexpr MPL::Value<plladiv2Val,plladiv2Val::div2> div2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,plladiv2Val> plladiv2{}; 
    }
    namespace NonepmcUsb{    ///<USB Clock Register
        using Addr = Register::Address<0xfffffc38,0xfffff0fe,0,unsigned>;
        ///USB OHCI Input Clock Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbs{}; 
        ///Divider for USB OHCI Clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> usbdiv{}; 
    }
    namespace NonepmcSmd{    ///<Soft Modem Clock Register
        using Addr = Register::Address<0xfffffc3c,0xffffe0fe,0,unsigned>;
        ///SMD input clock selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> smds{}; 
        ///Divider for SMD Clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> smddiv{}; 
    }
    namespace NonepmcPck0{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0xfffffc40,0xffffff88,0,unsigned>;
        ///Master Clock Source Selection
        enum class cssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLACK/PLLADIV2 is selected
            upllClk=0x00000003,     ///<UPLL Clock is selected
            mckClk=0x00000004,     ///<Master Clock is selected
        };
        namespace cssValC{
            constexpr MPL::Value<cssVal,cssVal::slowClk> slowClk{};
            constexpr MPL::Value<cssVal,cssVal::mainClk> mainClk{};
            constexpr MPL::Value<cssVal,cssVal::pllaClk> pllaClk{};
            constexpr MPL::Value<cssVal,cssVal::upllClk> upllClk{};
            constexpr MPL::Value<cssVal,cssVal::mckClk> mckClk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,cssVal> css{}; 
        ///Programmable Clock Prescaler
        enum class presVal {
            clock=0x00000000,     ///<Selected clock
            clockDiv2=0x00000001,     ///<Selected clock divided by 2
            clockDiv4=0x00000002,     ///<Selected clock divided by 4
            clockDiv8=0x00000003,     ///<Selected clock divided by 8
            clockDiv16=0x00000004,     ///<Selected clock divided by 16
            clockDiv32=0x00000005,     ///<Selected clock divided by 32
            clockDiv64=0x00000006,     ///<Selected clock divided by 64
        };
        namespace presValC{
            constexpr MPL::Value<presVal,presVal::clock> clock{};
            constexpr MPL::Value<presVal,presVal::clockDiv2> clockDiv2{};
            constexpr MPL::Value<presVal,presVal::clockDiv4> clockDiv4{};
            constexpr MPL::Value<presVal,presVal::clockDiv8> clockDiv8{};
            constexpr MPL::Value<presVal,presVal::clockDiv16> clockDiv16{};
            constexpr MPL::Value<presVal,presVal::clockDiv32> clockDiv32{};
            constexpr MPL::Value<presVal,presVal::clockDiv64> clockDiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,presVal> pres{}; 
    }
    namespace NonepmcPck1{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0xfffffc44,0xffffff88,0,unsigned>;
        ///Master Clock Source Selection
        enum class cssVal {
            slowClk=0x00000000,     ///<Slow Clock is selected
            mainClk=0x00000001,     ///<Main Clock is selected
            pllaClk=0x00000002,     ///<PLLACK/PLLADIV2 is selected
            upllClk=0x00000003,     ///<UPLL Clock is selected
            mckClk=0x00000004,     ///<Master Clock is selected
        };
        namespace cssValC{
            constexpr MPL::Value<cssVal,cssVal::slowClk> slowClk{};
            constexpr MPL::Value<cssVal,cssVal::mainClk> mainClk{};
            constexpr MPL::Value<cssVal,cssVal::pllaClk> pllaClk{};
            constexpr MPL::Value<cssVal,cssVal::upllClk> upllClk{};
            constexpr MPL::Value<cssVal,cssVal::mckClk> mckClk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,cssVal> css{}; 
        ///Programmable Clock Prescaler
        enum class presVal {
            clock=0x00000000,     ///<Selected clock
            clockDiv2=0x00000001,     ///<Selected clock divided by 2
            clockDiv4=0x00000002,     ///<Selected clock divided by 4
            clockDiv8=0x00000003,     ///<Selected clock divided by 8
            clockDiv16=0x00000004,     ///<Selected clock divided by 16
            clockDiv32=0x00000005,     ///<Selected clock divided by 32
            clockDiv64=0x00000006,     ///<Selected clock divided by 64
        };
        namespace presValC{
            constexpr MPL::Value<presVal,presVal::clock> clock{};
            constexpr MPL::Value<presVal,presVal::clockDiv2> clockDiv2{};
            constexpr MPL::Value<presVal,presVal::clockDiv4> clockDiv4{};
            constexpr MPL::Value<presVal,presVal::clockDiv8> clockDiv8{};
            constexpr MPL::Value<presVal,presVal::clockDiv16> clockDiv16{};
            constexpr MPL::Value<presVal,presVal::clockDiv32> clockDiv32{};
            constexpr MPL::Value<presVal,presVal::clockDiv64> clockDiv64{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,presVal> pres{}; 
    }
    namespace NonepmcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffffc60,0xfff8fcb4,0,unsigned>;
        ///Main Crystal Oscillator Status Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxts{}; 
        ///PLLA Lock Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///Master Clock Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///UTMI PLL Lock Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> locku{}; 
        ///Programmable Clock Ready 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
        ///Main Oscillator Selection Status Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> moscsels{}; 
        ///Main On-Chip RC Status Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfdev{}; 
    }
    namespace NonepmcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffffc64,0xfff8fcb4,0,unsigned>;
        ///Main Crystal Oscillator Status Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxts{}; 
        ///PLLA Lock Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///Master Clock Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///UTMI PLL Lock Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> locku{}; 
        ///Programmable Clock Ready 0 Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
        ///Main Oscillator Selection Status Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> moscsels{}; 
        ///Main On-Chip RC Status Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfdev{}; 
    }
    namespace NonepmcSr{    ///<Status Register
        using Addr = Register::Address<0xfffffc68,0xffe0fc34,0,unsigned>;
        ///Main XTAL Oscillator Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxts{}; 
        ///PLLA Lock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///Master Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///UPLL Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> locku{}; 
        ///Slow Clock Oscillator Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oscsels{}; 
        ///Programmable Clock Ready Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
        ///Main Oscillator Selection Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> moscsels{}; 
        ///Main On-Chip RC Oscillator Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfdev{}; 
        ///Clock Failure Detector Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cfds{}; 
        ///Clock Failure Detector Fault Output Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fos{}; 
    }
    namespace NonepmcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffffc6c,0xfff8fcf4,0,unsigned>;
        ///Main Crystal Oscillator Status Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscxts{}; 
        ///PLLA Lock Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///Master Clock Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///Programmable Clock Ready 0 Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
        ///Main Oscillator Selection Status Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> moscsels{}; 
        ///Main On-Chip RC Status Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> moscrcs{}; 
        ///Clock Failure Detector Event Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cfdev{}; 
    }
    namespace NonepmcPllicpr{    ///<PLL Charge Pump Current Register
        using Addr = Register::Address<0xfffffc80,0xfffffffe,0,unsigned>;
        ///Charge Pump Current
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icplla{}; 
    }
    namespace NonepmcWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xfffffce4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace NonepmcWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xfffffce8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
    namespace NonepmcPcr{    ///<Peripheral Control Register
        using Addr = Register::Address<0xfffffd0c,0xeffcefc0,0,unsigned>;
        ///Peripheral ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pid{}; 
        ///Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cmd{}; 
        ///Divisor Value
        enum class divVal {
            periphDivMck=0x00000000,     ///<Peripheral clock is MCK
            periphDiv2Mck=0x00000001,     ///<Peripheral clock is MCK/2
            periphDiv4Mck=0x00000002,     ///<Peripheral clock is MCK/4
            periphDiv8Mck=0x00000003,     ///<Peripheral clock is MCK/8
        };
        namespace divValC{
            constexpr MPL::Value<divVal,divVal::periphDivMck> periphDivMck{};
            constexpr MPL::Value<divVal,divVal::periphDiv2Mck> periphDiv2Mck{};
            constexpr MPL::Value<divVal,divVal::periphDiv4Mck> periphDiv4Mck{};
            constexpr MPL::Value<divVal,divVal::periphDiv8Mck> periphDiv8Mck{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,divVal> div{}; 
        ///Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> en{}; 
    }
}
