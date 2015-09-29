#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//REAL-TIME CLOCK
    namespace Nonewtcr1{    ///<Control Register 1
        using Addr = Register::Address<0x4003b000,0x0000e082,0,unsigned>;
        ///Year/month/date/hour/minute/second/day of the week counter value read completion interrupt enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> intcrie{}; 
        ///Time rewrite error interrupt enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> interie{}; 
        ///Alarm interrupt enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> intalie{}; 
        ///Timer interrupt enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> inttmie{}; 
        ///1-hour interrupt enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> inthie{}; 
        ///1-minute interrupt enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> intmie{}; 
        ///1-second interrupt enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> intsie{}; 
        ///0.5-second interrupt enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> intssie{}; 
        ///Year/month/date/hour/minute/second/day of the week counter value read completion interrupt flag bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> intcri{}; 
        ///Time rewrite error interrupt flag bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> interi{}; 
        ///Alarm interrupt flag bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> intali{}; 
        ///Timer interrupt flag bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inttmi{}; 
        ///1-hour interrupt flag bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> inthi{}; 
        ///1-minute interrupt flag bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> intmi{}; 
        ///1-second interrupt flag bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> intsi{}; 
        ///0.5-second interrupt flag bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> intssi{}; 
        ///Alarm year register enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> yen{}; 
        ///Alarm month register enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> moen{}; 
        ///Alarm date register enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> den{}; 
        ///Alarm hour register enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hen{}; 
        ///Alarm minute register enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mien{}; 
        ///Busy bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> busy{}; 
        ///Sub second generation/1-second generation counter reset bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scrst{}; 
        ///1-second clock output stop bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> scst{}; 
        ///RTC reset bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srst{}; 
        ///RTC count block operation bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> run{}; 
        ///Start bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> st{}; 
    }
    namespace Nonewtcr2{    ///<Control Register 2
        using Addr = Register::Address<0x4003b004,0xfffff8fe,0,unsigned>;
        ///Timer counter operation bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tmrun{}; 
        ///Timer counter control bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tmen{}; 
        ///Timer counter start bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tmst{}; 
        ///Year/month/date/hour/minute/second/day of the week counter value read control bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cread{}; 
    }
    namespace Nonewtbr{    ///<Counter Cycle Setting Register
        using Addr = Register::Address<0x4003b008,0xff000000,0,unsigned>;
        ///Bit23 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> br23{}; 
        ///Bit22 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> br22{}; 
        ///Bit21 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> br21{}; 
        ///Bit20 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> br20{}; 
        ///Bit19 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> br19{}; 
        ///Bit18 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> br18{}; 
        ///Bit17 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> br17{}; 
        ///Bit16 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> br16{}; 
        ///Bit15 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> br15{}; 
        ///Bit14 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> br14{}; 
        ///Bit13 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> br13{}; 
        ///Bit12 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> br12{}; 
        ///Bit11 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> br11{}; 
        ///Bit10 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> br10{}; 
        ///Bit9 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> br9{}; 
        ///Bit8 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> br8{}; 
        ///Bit7 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        ///Bit6 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        ///Bit5 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        ///Bit4 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        ///Bit3 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        ///Bit2 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        ///Bit1 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        ///Bit0 of WTBR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
    }
    namespace Nonewtdr{    ///<Date Register
        using Addr = Register::Address<0x4003b00f,0xffffffc0,0,unsigned char>;
        ///the second digit of the date
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> td{}; 
        ///the first digit of the date
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> d{}; 
    }
    namespace Nonewthr{    ///<Hour register
        using Addr = Register::Address<0x4003b00e,0xffffffc0,0,unsigned char>;
        ///the second digit of the hour
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> th{}; 
        ///the first digit of the hour
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> h{}; 
    }
    namespace Nonewtmir{    ///<Minute Register
        using Addr = Register::Address<0x4003b00d,0xffffff80,0,unsigned char>;
        ///the second digit of the minute
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tmi{}; 
        ///the first digit of the minute
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace Nonewtsr{    ///<Second Register
        using Addr = Register::Address<0x4003b00c,0xffffff80,0,unsigned char>;
        ///the second digit of the second
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        ///the first digit of the second
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> s{}; 
    }
    namespace Nonewtyr{    ///<Year Register
        using Addr = Register::Address<0x4003b012,0xffffff00,0,unsigned char>;
        ///the second digit of the year
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ty{}; 
        ///the first digit of the year
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> y{}; 
    }
    namespace Nonewtmor{    ///<Month Register
        using Addr = Register::Address<0x4003b011,0xffffffe0,0,unsigned char>;
        ///the second digit in the month
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmo0{}; 
        ///the first digit of the month
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mo{}; 
    }
    namespace Nonewtdw{    ///<Day of the Week Register
        using Addr = Register::Address<0x4003b010,0xfffffff8,0,unsigned char>;
        ///Day of the week
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dw{}; 
    }
    namespace Nonealdr{    ///<Alarm Date Register
        using Addr = Register::Address<0x4003b017,0xffffffc0,0,unsigned char>;
        ///the second digit of the alarm-set date
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tad{}; 
        ///the first digit of the alarm-set date
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ad{}; 
    }
    namespace Nonealhr{    ///<Alarm Hour Register
        using Addr = Register::Address<0x4003b016,0xffffffc0,0,unsigned char>;
        ///the second digit of the alarm-set hour
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tah{}; 
        ///the first digit of the alarm-set hour
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ah{}; 
    }
    namespace Nonealmir{    ///<Alarm Minute Register
        using Addr = Register::Address<0x4003b015,0xffffff80,0,unsigned char>;
        ///the second digit of the alarm-set minute
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tami{}; 
        ///the first digit of the alarm-set minute
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ami{}; 
    }
    namespace Nonealyr{    ///<Alarm Years Register
        using Addr = Register::Address<0x4003b01a,0xffffff00,0,unsigned char>;
        ///the second digit of the alarm-set year
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tay{}; 
        ///the first digit of the alarm-set year
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ay{}; 
    }
    namespace Nonealmor{    ///<Alarm Month Register
        using Addr = Register::Address<0x4003b019,0xffffffe0,0,unsigned char>;
        ///the second digit of the alarm-set month
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tamo0{}; 
        ///the first digit of the alarm-set month
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> amo{}; 
    }
    namespace Nonewttr{    ///<Timer Setting Register
        using Addr = Register::Address<0x4003b01c,0xfffc0000,0,unsigned>;
        ///Bit17 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tm17{}; 
        ///Bit16 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tm16{}; 
        ///Bit15 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tm15{}; 
        ///Bit14 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tm14{}; 
        ///Bit13 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tm13{}; 
        ///Bit12 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tm12{}; 
        ///Bit11 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tm11{}; 
        ///Bit10 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tm10{}; 
        ///Bit9 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tm9{}; 
        ///Bit8 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tm8{}; 
        ///Bit7 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tm7{}; 
        ///Bit6 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tm6{}; 
        ///Bit5 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tm5{}; 
        ///Bit4 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tm4{}; 
        ///Bit3 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tm3{}; 
        ///Bit2 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tm2{}; 
        ///Bit1 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tm1{}; 
        ///Bit0 of WTTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tm0{}; 
    }
    namespace Nonewtclks{    ///<Clock Selection Register
        using Addr = Register::Address<0x4003b020,0xfffffffe,0,unsigned char>;
        ///Input clock selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtclks{}; 
    }
    namespace Nonewtclkm{    ///<Selection Clock Status Register
        using Addr = Register::Address<0x4003b021,0xfffffffc,0,unsigned char>;
        ///Clock selection status bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wtclkm{}; 
    }
    namespace Nonewtcal{    ///<Frequency Correction Value Setting Register
        using Addr = Register::Address<0x4003b024,0xfffffc00,0,unsigned>;
        ///Frequency correction value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> wtcal{}; 
    }
    namespace Nonewtcalen{    ///<Frequency Correction Enable Register
        using Addr = Register::Address<0x4003b026,0xfffffffe,0,unsigned char>;
        ///Frequency correction enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcalen{}; 
    }
    namespace Nonewtdiv{    ///<Divider Ratio Setting Register
        using Addr = Register::Address<0x4003b028,0xfffffff0,0,unsigned char>;
        ///Divider ratio
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wtdiv{}; 
    }
    namespace Nonewtdiven{    ///<Divider Output Enable Register
        using Addr = Register::Address<0x4003b029,0xfffffffc,0,unsigned char>;
        ///Divider status bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wtdivrdy{}; 
        ///Divider enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtdiven{}; 
    }
    namespace Nonewtcalprd{    ///<Frequency Correction Cycle Setting Register
        using Addr = Register::Address<0x4003b02c,0xffffffc0,0,unsigned char>;
        ///frequency correction value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> wtcalprd{}; 
    }
    namespace Nonewtcosel{    ///<RTCCO Output Selection Register
        using Addr = Register::Address<0x4003b030,0xfffffffe,0,unsigned char>;
        ///RTCCO output selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcosel{}; 
    }
}
