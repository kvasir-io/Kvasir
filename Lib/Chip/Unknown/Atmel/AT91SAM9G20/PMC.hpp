#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Management Controller
    namespace NonepmcScer{    ///<System Clock Enable Register
        using Addr = Register::Address<0xfffffc00,0xfffffc3f,0,unsigned>;
        ///USB Host Port Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uhp{}; 
        ///USB Device Port Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udp{}; 
        ///Programmable Clock 0 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pck1{}; 
    }
    namespace NonepmcScdr{    ///<System Clock Disable Register
        using Addr = Register::Address<0xfffffc04,0xfffffc3e,0,unsigned>;
        ///Processor Clock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pck{}; 
        ///USB Host Port Clock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> uhp{}; 
        ///USB Device Port Clock Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> udp{}; 
        ///Programmable Clock 0 Output Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pck0{}; 
        ///Programmable Clock 1 Output Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pck1{}; 
    }
    namespace NonepmcScsr{    ///<System Clock Status Register
        using Addr = Register::Address<0xfffffc08,0xfffffc3e,0,unsigned>;
        ///Processor Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pck{}; 
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
    namespace NoneckgrMor{    ///<Main Oscillator Register
        using Addr = Register::Address<0xfffffc20,0xffff00fc,0,unsigned>;
        ///Main Oscillator Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscen{}; 
        ///Oscillator Bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oscbypass{}; 
        ///Main Oscillator Start-up Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> oscount{}; 
    }
    namespace NoneckgrMcfr{    ///<Main Clock Frequency Register
        using Addr = Register::Address<0xfffffc24,0xfffe0000,0,unsigned>;
        ///Main Clock Frequency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mainf{}; 
        ///Main Clock Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> mainrdy{}; 
    }
    namespace NoneckgrPllar{    ///<PLL A Register
        using Addr = Register::Address<0xfffffc28,0xdf000000,0,unsigned>;
        ///Divider A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> diva{}; 
        ///PLL A Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pllacount{}; 
        ///PLL A Clock Frequency Range
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> outa{}; 
        ///PLL A Multiplier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> mula{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stuckto1{}; 
    }
    namespace NoneckgrPllbr{    ///<PLL B Register
        using Addr = Register::Address<0xfffffc2c,0xcfc00000,0,unsigned>;
        ///Divider B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> divb{}; 
        ///PLL B Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> pllbcount{}; 
        ///PLL B Clock Frequency Range
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> outb{}; 
        ///PLL B Multiplier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> mulb{}; 
        ///Divider for USB Clock.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> usbdiv{}; 
    }
    namespace NonepmcMckr{    ///<Master Clock Register
        using Addr = Register::Address<0xfffffc30,0xffffece0,0,unsigned>;
        ///Master/Processor Clock Source Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> css{}; 
        ///Master/Processor Clock Prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> pres{}; 
        ///Master Clock Division
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> mdiv{}; 
        ///Processor Clock Division
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pdiv{}; 
    }
    namespace NonepmcPck0{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0xfffffc40,0xffffffe0,0,unsigned>;
        ///Master Clock Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> css{}; 
        ///Programmable Clock Prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> pres{}; 
    }
    namespace NonepmcPck1{    ///<Programmable Clock 0 Register
        using Addr = Register::Address<0xfffffc44,0xffffffe0,0,unsigned>;
        ///Master Clock Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> css{}; 
        ///Programmable Clock Prescaler
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> pres{}; 
    }
    namespace NonepmcIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffffc60,0xfffffcf0,0,unsigned>;
        ///Main Oscillator Status Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscs{}; 
        ///PLL A Lock Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///PLL B Lock Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lockb{}; 
        ///Master Clock Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///Programmable Clock Ready 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
    }
    namespace NonepmcIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffffc64,0xfffffcf0,0,unsigned>;
        ///Main Oscillator Status Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscs{}; 
        ///PLL A Lock Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///PLL B Lock Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lockb{}; 
        ///Master Clock Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///Programmable Clock Ready 0 Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready 1 Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
    }
    namespace NonepmcSr{    ///<Status Register
        using Addr = Register::Address<0xfffffc68,0xfffffc70,0,unsigned>;
        ///Main Oscillator Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscs{}; 
        ///PLL A Lock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///PLL B Lock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lockb{}; 
        ///Master Clock Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///Slow Clock Oscillator Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> oscSel{}; 
        ///Programmable Clock Ready Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
    }
    namespace NonepmcImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffffc6c,0xfffffcf0,0,unsigned>;
        ///Main Oscillator Status Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> moscs{}; 
        ///PLL A Lock Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> locka{}; 
        ///PLL B Lock Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lockb{}; 
        ///Master Clock Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mckrdy{}; 
        ///Programmable Clock Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pckrdy0{}; 
        ///Programmable Clock Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pckrdy1{}; 
    }
    namespace NonepmcPllicpr{    ///<PLL Charge Pump Current Register
        using Addr = Register::Address<0xfffffc80,0xfffefffe,0,unsigned>;
        ///Charge Pump Current
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icplla{}; 
        ///Charge Pump Current
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> icpllb{}; 
    }
}
