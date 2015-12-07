#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//REAL-TIME CLOCK
    namespace Nonewtcr1{    ///<Control Register 1
        using Addr = Register::Address<0x4003b000,0x0000e082,0,unsigned>;
        ///Year/month/date/hour/minute/second/day of the week counter value read completion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> intcrie{}; 
        namespace IntcrieValC{
        }
        ///Time rewrite error interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> interie{}; 
        namespace InterieValC{
        }
        ///Alarm interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> intalie{}; 
        namespace IntalieValC{
        }
        ///Timer interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> inttmie{}; 
        namespace InttmieValC{
        }
        ///1-hour interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> inthie{}; 
        namespace InthieValC{
        }
        ///1-minute interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> intmie{}; 
        namespace IntmieValC{
        }
        ///1-second interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> intsie{}; 
        namespace IntsieValC{
        }
        ///0.5-second interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> intssie{}; 
        namespace IntssieValC{
        }
        ///Year/month/date/hour/minute/second/day of the week counter value read completion interrupt flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> intcri{}; 
        namespace IntcriValC{
        }
        ///Time rewrite error interrupt flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> interi{}; 
        namespace InteriValC{
        }
        ///Alarm interrupt flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> intali{}; 
        namespace IntaliValC{
        }
        ///Timer interrupt flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inttmi{}; 
        namespace InttmiValC{
        }
        ///1-hour interrupt flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> inthi{}; 
        namespace InthiValC{
        }
        ///1-minute interrupt flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> intmi{}; 
        namespace IntmiValC{
        }
        ///1-second interrupt flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> intsi{}; 
        namespace IntsiValC{
        }
        ///0.5-second interrupt flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> intssi{}; 
        namespace IntssiValC{
        }
        ///Alarm year register enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> yen{}; 
        namespace YenValC{
        }
        ///Alarm month register enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> moen{}; 
        namespace MoenValC{
        }
        ///Alarm date register enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> den{}; 
        namespace DenValC{
        }
        ///Alarm hour register enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hen{}; 
        namespace HenValC{
        }
        ///Alarm minute register enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mien{}; 
        namespace MienValC{
        }
        ///Busy bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///Sub second generation/1-second generation counter reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scrst{}; 
        namespace ScrstValC{
        }
        ///1-second clock output stop bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> scst{}; 
        namespace ScstValC{
        }
        ///RTC reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srst{}; 
        namespace SrstValC{
        }
        ///RTC count block operation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> run{}; 
        namespace RunValC{
        }
        ///Start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
    }
    namespace Nonewtcr2{    ///<Control Register 2
        using Addr = Register::Address<0x4003b004,0xfffff8fe,0,unsigned>;
        ///Timer counter operation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tmrun{}; 
        namespace TmrunValC{
        }
        ///Timer counter control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tmen{}; 
        namespace TmenValC{
        }
        ///Timer counter start bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tmst{}; 
        namespace TmstValC{
        }
        ///Year/month/date/hour/minute/second/day of the week counter value read control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cread{}; 
        namespace CreadValC{
        }
    }
    namespace Nonewtbr{    ///<Counter Cycle Setting Register
        using Addr = Register::Address<0x4003b008,0xff000000,0,unsigned>;
        ///Bit23 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> br23{}; 
        namespace Br23ValC{
        }
        ///Bit22 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> br22{}; 
        namespace Br22ValC{
        }
        ///Bit21 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> br21{}; 
        namespace Br21ValC{
        }
        ///Bit20 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> br20{}; 
        namespace Br20ValC{
        }
        ///Bit19 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> br19{}; 
        namespace Br19ValC{
        }
        ///Bit18 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> br18{}; 
        namespace Br18ValC{
        }
        ///Bit17 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> br17{}; 
        namespace Br17ValC{
        }
        ///Bit16 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> br16{}; 
        namespace Br16ValC{
        }
        ///Bit15 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> br15{}; 
        namespace Br15ValC{
        }
        ///Bit14 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> br14{}; 
        namespace Br14ValC{
        }
        ///Bit13 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> br13{}; 
        namespace Br13ValC{
        }
        ///Bit12 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> br12{}; 
        namespace Br12ValC{
        }
        ///Bit11 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> br11{}; 
        namespace Br11ValC{
        }
        ///Bit10 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> br10{}; 
        namespace Br10ValC{
        }
        ///Bit9 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> br9{}; 
        namespace Br9ValC{
        }
        ///Bit8 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> br8{}; 
        namespace Br8ValC{
        }
        ///Bit7 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        namespace Br7ValC{
        }
        ///Bit6 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        namespace Br6ValC{
        }
        ///Bit5 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        namespace Br5ValC{
        }
        ///Bit4 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        namespace Br4ValC{
        }
        ///Bit3 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        namespace Br3ValC{
        }
        ///Bit2 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        namespace Br2ValC{
        }
        ///Bit1 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        namespace Br1ValC{
        }
        ///Bit0 of WTBR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
        namespace Br0ValC{
        }
    }
    namespace Nonewtdr{    ///<Date Register
        using Addr = Register::Address<0x4003b00f,0xffffffc0,0,unsigned char>;
        ///the second digit of the date
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> td{}; 
        namespace TdValC{
        }
        ///the first digit of the date
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace Nonewthr{    ///<Hour register
        using Addr = Register::Address<0x4003b00e,0xffffffc0,0,unsigned char>;
        ///the second digit of the hour
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> th{}; 
        namespace ThValC{
        }
        ///the first digit of the hour
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> h{}; 
        namespace HValC{
        }
    }
    namespace Nonewtmir{    ///<Minute Register
        using Addr = Register::Address<0x4003b00d,0xffffff80,0,unsigned char>;
        ///the second digit of the minute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tmi{}; 
        namespace TmiValC{
        }
        ///the first digit of the minute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Nonewtsr{    ///<Second Register
        using Addr = Register::Address<0x4003b00c,0xffffff80,0,unsigned char>;
        ///the second digit of the second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        namespace TsValC{
        }
        ///the first digit of the second
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> s{}; 
        namespace SValC{
        }
    }
    namespace Nonewtyr{    ///<Year Register
        using Addr = Register::Address<0x4003b012,0xffffff00,0,unsigned char>;
        ///the second digit of the year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ty{}; 
        namespace TyValC{
        }
        ///the first digit of the year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> y{}; 
        namespace YValC{
        }
    }
    namespace Nonewtmor{    ///<Month Register
        using Addr = Register::Address<0x4003b011,0xffffffe0,0,unsigned char>;
        ///the second digit in the month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmo0{}; 
        namespace Tmo0ValC{
        }
        ///the first digit of the month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mo{}; 
        namespace MoValC{
        }
    }
    namespace Nonewtdw{    ///<Day of the Week Register
        using Addr = Register::Address<0x4003b010,0xfffffff8,0,unsigned char>;
        ///Day of the week
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dw{}; 
        namespace DwValC{
        }
    }
    namespace Nonealdr{    ///<Alarm Date Register
        using Addr = Register::Address<0x4003b017,0xffffffc0,0,unsigned char>;
        ///the second digit of the alarm-set date
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tad{}; 
        namespace TadValC{
        }
        ///the first digit of the alarm-set date
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ad{}; 
        namespace AdValC{
        }
    }
    namespace Nonealhr{    ///<Alarm Hour Register
        using Addr = Register::Address<0x4003b016,0xffffffc0,0,unsigned char>;
        ///the second digit of the alarm-set hour
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tah{}; 
        namespace TahValC{
        }
        ///the first digit of the alarm-set hour
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ah{}; 
        namespace AhValC{
        }
    }
    namespace Nonealmir{    ///<Alarm Minute Register
        using Addr = Register::Address<0x4003b015,0xffffff80,0,unsigned char>;
        ///the second digit of the alarm-set minute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tami{}; 
        namespace TamiValC{
        }
        ///the first digit of the alarm-set minute
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ami{}; 
        namespace AmiValC{
        }
    }
    namespace Nonealyr{    ///<Alarm Years Register
        using Addr = Register::Address<0x4003b01a,0xffffff00,0,unsigned char>;
        ///the second digit of the alarm-set year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tay{}; 
        namespace TayValC{
        }
        ///the first digit of the alarm-set year
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ay{}; 
        namespace AyValC{
        }
    }
    namespace Nonealmor{    ///<Alarm Month Register
        using Addr = Register::Address<0x4003b019,0xffffffe0,0,unsigned char>;
        ///the second digit of the alarm-set month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tamo0{}; 
        namespace Tamo0ValC{
        }
        ///the first digit of the alarm-set month
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> amo{}; 
        namespace AmoValC{
        }
    }
    namespace Nonewttr{    ///<Timer Setting Register
        using Addr = Register::Address<0x4003b01c,0xfffc0000,0,unsigned>;
        ///Bit17 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tm17{}; 
        namespace Tm17ValC{
        }
        ///Bit16 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tm16{}; 
        namespace Tm16ValC{
        }
        ///Bit15 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tm15{}; 
        namespace Tm15ValC{
        }
        ///Bit14 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tm14{}; 
        namespace Tm14ValC{
        }
        ///Bit13 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tm13{}; 
        namespace Tm13ValC{
        }
        ///Bit12 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tm12{}; 
        namespace Tm12ValC{
        }
        ///Bit11 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tm11{}; 
        namespace Tm11ValC{
        }
        ///Bit10 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tm10{}; 
        namespace Tm10ValC{
        }
        ///Bit9 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tm9{}; 
        namespace Tm9ValC{
        }
        ///Bit8 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tm8{}; 
        namespace Tm8ValC{
        }
        ///Bit7 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tm7{}; 
        namespace Tm7ValC{
        }
        ///Bit6 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tm6{}; 
        namespace Tm6ValC{
        }
        ///Bit5 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tm5{}; 
        namespace Tm5ValC{
        }
        ///Bit4 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tm4{}; 
        namespace Tm4ValC{
        }
        ///Bit3 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tm3{}; 
        namespace Tm3ValC{
        }
        ///Bit2 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tm2{}; 
        namespace Tm2ValC{
        }
        ///Bit1 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tm1{}; 
        namespace Tm1ValC{
        }
        ///Bit0 of WTTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tm0{}; 
        namespace Tm0ValC{
        }
    }
    namespace Nonewtclks{    ///<Clock Selection Register
        using Addr = Register::Address<0x4003b020,0xfffffffe,0,unsigned char>;
        ///Input clock selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtclks{}; 
        namespace WtclksValC{
        }
    }
    namespace Nonewtclkm{    ///<Selection Clock Status Register
        using Addr = Register::Address<0x4003b021,0xfffffffc,0,unsigned char>;
        ///Clock selection status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wtclkm{}; 
        namespace WtclkmValC{
        }
    }
    namespace Nonewtcal{    ///<Frequency Correction Value Setting Register
        using Addr = Register::Address<0x4003b024,0xffffff80,0,unsigned char>;
        ///Frequency correction value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> wtcal{}; 
        namespace WtcalValC{
        }
    }
    namespace Nonewtcalen{    ///<Frequency Correction Enable Register
        using Addr = Register::Address<0x4003b025,0xfffffffe,0,unsigned char>;
        ///Frequency correction enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcalen{}; 
        namespace WtcalenValC{
        }
    }
    namespace Nonewtdiv{    ///<Divider Ratio Setting Register
        using Addr = Register::Address<0x4003b028,0xfffffff0,0,unsigned char>;
        ///Divider ratio
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wtdiv{}; 
        namespace WtdivValC{
        }
    }
    namespace Nonewtdiven{    ///<Divider Output Enable Register
        using Addr = Register::Address<0x4003b029,0xfffffffc,0,unsigned char>;
        ///Divider status bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wtdivrdy{}; 
        namespace WtdivrdyValC{
        }
        ///Divider enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtdiven{}; 
        namespace WtdivenValC{
        }
    }
}
