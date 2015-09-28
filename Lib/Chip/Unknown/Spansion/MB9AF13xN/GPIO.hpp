#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepfr0{
        using Addr = Register::Address<0x40033000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Nonepfr1{
        using Addr = Register::Address<0x40033004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Nonepfr2{
        using Addr = Register::Address<0x40033008,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Nonepfr3{
        using Addr = Register::Address<0x4003300c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Nonepfr4{
        using Addr = Register::Address<0x40033010,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Nonepfr5{
        using Addr = Register::Address<0x40033014,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Nonepfr6{
        using Addr = Register::Address<0x40033018,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Nonepfr8{
        using Addr = Register::Address<0x40033020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Nonepfre{
        using Addr = Register::Address<0x40033038,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Nonepcr0{
        using Addr = Register::Address<0x40033100,0xffffffff>;
    }
    namespace Nonepcr1{
        using Addr = Register::Address<0x40033104,0xffffffff>;
    }
    namespace Nonepcr2{
        using Addr = Register::Address<0x40033108,0xffffffff>;
    }
    namespace Nonepcr3{
        using Addr = Register::Address<0x4003310c,0xffffffff>;
    }
    namespace Nonepcr4{
        using Addr = Register::Address<0x40033110,0xffffffff>;
    }
    namespace Nonepcr5{
        using Addr = Register::Address<0x40033114,0xffffffff>;
    }
    namespace Nonepcr6{
        using Addr = Register::Address<0x40033118,0xffffffff>;
    }
    namespace Nonepcre{
        using Addr = Register::Address<0x40033138,0xffffffff>;
    }
    namespace Noneddr0{
        using Addr = Register::Address<0x40033200,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Noneddr1{
        using Addr = Register::Address<0x40033204,0xffffffff>;
    }
    namespace Noneddr2{
        using Addr = Register::Address<0x40033208,0xffffffff>;
    }
    namespace Noneddr3{
        using Addr = Register::Address<0x4003320c,0xffffffff>;
    }
    namespace Noneddr4{
        using Addr = Register::Address<0x40033210,0xffffffff>;
    }
    namespace Noneddr5{
        using Addr = Register::Address<0x40033214,0xffffffff>;
    }
    namespace Noneddr6{
        using Addr = Register::Address<0x40033218,0xffffffff>;
    }
    namespace Noneddr8{
        using Addr = Register::Address<0x40033220,0xffffffff>;
    }
    namespace Noneddre{
        using Addr = Register::Address<0x40033238,0xffffffff>;
    }
    namespace Nonepdir0{
        using Addr = Register::Address<0x40033300,0xffffffff>;
    }
    namespace Nonepdir1{
        using Addr = Register::Address<0x40033304,0xffffffff>;
    }
    namespace Nonepdir2{
        using Addr = Register::Address<0x40033308,0xffffffff>;
    }
    namespace Nonepdir3{
        using Addr = Register::Address<0x4003330c,0xffffffff>;
    }
    namespace Nonepdir4{
        using Addr = Register::Address<0x40033310,0xffffffff>;
    }
    namespace Nonepdir5{
        using Addr = Register::Address<0x40033314,0xffffffff>;
    }
    namespace Nonepdir6{
        using Addr = Register::Address<0x40033318,0xffffffff>;
    }
    namespace Nonepdir8{
        using Addr = Register::Address<0x40033320,0xffffffff>;
    }
    namespace Nonepdire{
        using Addr = Register::Address<0x40033338,0xffffffff>;
    }
    namespace Nonepdor0{
        using Addr = Register::Address<0x40033400,0xffffffff>;
    }
    namespace Nonepdor1{
        using Addr = Register::Address<0x40033404,0xffffffff>;
    }
    namespace Nonepdor2{
        using Addr = Register::Address<0x40033408,0xffffffff>;
    }
    namespace Nonepdor3{
        using Addr = Register::Address<0x4003340c,0xffffffff>;
    }
    namespace Nonepdor4{
        using Addr = Register::Address<0x40033410,0xffffffff>;
    }
    namespace Nonepdor5{
        using Addr = Register::Address<0x40033414,0xffffffff>;
    }
    namespace Nonepdor6{
        using Addr = Register::Address<0x40033418,0xffffffff>;
    }
    namespace Nonepdor8{
        using Addr = Register::Address<0x40033420,0xffffffff>;
    }
    namespace Nonepdore{
        using Addr = Register::Address<0x40033438,0xffffffff>;
    }
    namespace Noneade{
        using Addr = Register::Address<0x40033500,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AN0; 
    }
    namespace Nonespsr{
        using Addr = Register::Address<0x40033580,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MAINXC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUBXC; 
    }
    namespace Noneepfr00{
        using Addr = Register::Address<0x40033600,0xfffcff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> JTAGEN1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> JTAGEN0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SUBOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RTCCOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CROUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NMIS; 
    }
    namespace Noneepfr01{
        using Addr = Register::Address<0x40033604,0x0000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> IC03S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> IC02S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23)> IC01S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> IC00S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> FRCK0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DTTI0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DTTI0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> RTO05E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RTO04E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> RTO03E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RTO02E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RTO01E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RTO00E; 
    }
    namespace Noneepfr04{
        using Addr = Register::Address<0x40033610,0xc0c3c083>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TIOB3S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> TIOA3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIOA3S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIOB2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TIOA2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TIOB1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> TIOA1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TIOA1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TIOB0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TIOA0E; 
    }
    namespace Noneepfr05{
        using Addr = Register::Address<0x40033614,0xc0c3c0c3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TIOB7S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> TIOA7E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIOA7S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIOB6S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TIOA6E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TIOB5S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> TIOA5E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TIOA5S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TIOB4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TIOA4E; 
    }
    namespace Noneepfr06{
        using Addr = Register::Address<0x40033618,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> EINT15S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> EINT14S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> EINT13S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> EINT12S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> EINT11S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> EINT10S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EINT09S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> EINT08S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> EINT07S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> EINT06S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EINT05S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EINT04S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> EINT03S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EINT02S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EINT01S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> EINT00S; 
    }
    namespace Noneepfr07{
        using Addr = Register::Address<0x4003361c,0xf000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> SCK3B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SOT3B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> SIN3S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SCK2B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> SOT2B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SIN2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> SCK1B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SOT1B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SIN1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SCK0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SOT0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SIN0S; 
    }
    namespace Noneepfr08{
        using Addr = Register::Address<0x40033620,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> SCK7B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SOT7B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> SIN7S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SCK6B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> SOT6B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SIN6S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> SCK5B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SOT5B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SIN5S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SCK4B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SOT4B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SIN4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CTS4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RTS4E; 
    }
    namespace Noneepfr09{
        using Addr = Register::Address<0x40033624,0xffff0fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> ADTRG0S; 
    }
    namespace Noneepfr14{
        using Addr = Register::Address<0x40033638,0x3fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CEC1B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CEC0B; 
    }
    namespace Nonepzr0{
        using Addr = Register::Address<0x40033700,0xffffe7ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PB; 
    }
    namespace Nonepzr6{
        using Addr = Register::Address<0x40033718,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0; 
    }
    namespace Nonepzr8{
        using Addr = Register::Address<0x40033720,0xfffffff9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P1; 
    }
}
