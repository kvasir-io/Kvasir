#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepfr0{
        using Addr = Register::Address<0x40033000,0xffff7fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P00; 
    }
    namespace Nonepfr1{
        using Addr = Register::Address<0x40033004,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P10; 
    }
    namespace Nonepfr2{
        using Addr = Register::Address<0x40033008,0xfffffff1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P21; 
    }
    namespace Nonepfr3{
        using Addr = Register::Address<0x4003300c,0xffff01ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P3D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P3B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P3A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P39; 
    }
    namespace Nonepfr4{
        using Addr = Register::Address<0x40033010,0xfffff93f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P4A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P46; 
    }
    namespace Nonepfr5{
        using Addr = Register::Address<0x40033014,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P50; 
    }
    namespace Nonepfr6{
        using Addr = Register::Address<0x40033018,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P60; 
    }
    namespace Nonepfr8{
        using Addr = Register::Address<0x40033020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P80; 
    }
    namespace Nonepfre{
        using Addr = Register::Address<0x40033038,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0; 
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
    namespace Nonepcr8{
        using Addr = Register::Address<0x40033120,0xffffffff>;
    }
    namespace Nonepcre{
        using Addr = Register::Address<0x40033138,0xffffffff>;
    }
    namespace Noneddr0{
        using Addr = Register::Address<0x40033200,0xffff7fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P00; 
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
        using Addr = Register::Address<0x40033300,0xffff7fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P00; 
    }
    namespace Nonepdir1{
        using Addr = Register::Address<0x40033304,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P10; 
    }
    namespace Nonepdir2{
        using Addr = Register::Address<0x40033308,0xfffffff1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P21; 
    }
    namespace Nonepdir3{
        using Addr = Register::Address<0x4003330c,0xffff01ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P3D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P3B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P3A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P39; 
    }
    namespace Nonepdir4{
        using Addr = Register::Address<0x40033310,0xfffff93f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P4A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P46; 
    }
    namespace Nonepdir5{
        using Addr = Register::Address<0x40033314,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P50; 
    }
    namespace Nonepdir6{
        using Addr = Register::Address<0x40033318,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P60; 
    }
    namespace Nonepdir8{
        using Addr = Register::Address<0x40033320,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P80; 
    }
    namespace Nonepdire{
        using Addr = Register::Address<0x40033338,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0; 
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
        using Addr = Register::Address<0x40033500,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> AN31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> AN30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> AN29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> AN28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> AN27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> AN26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AN25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> AN24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> AN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> AN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> AN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> AN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> AN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> AN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> AN16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> AN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> AN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> AN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AN09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AN08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AN07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AN06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AN05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AN04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AN03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AN02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AN01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AN00; 
    }
    namespace Nonespsr{
        using Addr = Register::Address<0x40033580,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MAINXC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SUBXC; 
    }
    namespace Noneepfr00{
        using Addr = Register::Address<0x40033600,0xfffeff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> SWDEN; 
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
    namespace Noneepfr02{
        using Addr = Register::Address<0x40033608,0x0000c000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> IC13S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> IC12S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23)> IC11S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> IC10S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> FRCK1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DTTI1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IGTRG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DTTI1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> RTO15E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RTO14E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> RTO13E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RTO12E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RTO11E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RTO10E; 
    }
    namespace Noneepfr03{
        using Addr = Register::Address<0x4003360c,0x0000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> IC23S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> IC22S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23)> IC21S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> IC20S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> FRCK2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DTTI2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DTTI2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> RTO25E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RTO24E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> RTO23E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RTO22E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RTO21E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RTO20E; 
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
        using Addr = Register::Address<0x40033624,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> CTX1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> CRX1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CTX0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> CRX0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20)> ADTRG2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> ADTRG1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> ADTRG0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> QZIN1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> QBIN1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> QAIN1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> QZIN0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> QBIN0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> QAIN0S; 
    }
    namespace Noneepfr12{
        using Addr = Register::Address<0x40033630,0xc0c3c0c3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TIOB11S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> TIOA11E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIOA11S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIOB10S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TIOA10E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TIOB9S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> TIOA9E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TIOA9S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TIOB8S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TIOA8E; 
    }
    namespace Noneepfr13{
        using Addr = Register::Address<0x40033634,0xc0c3c0c3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TIOB15S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> TIOA15E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIOA15S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIOB14S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TIOA14E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TIOB13S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> TIOA13E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TIOA13S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TIOB12S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> TIOA12E; 
    }
    namespace Noneepfr14{
        using Addr = Register::Address<0x40033638,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> QZIN2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> QBIN2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> QAIN2S; 
    }
    namespace Noneepfr15{
        using Addr = Register::Address<0x4003363c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> EINT31S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> EINT30S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> EINT29S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> EINT28S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> EINT27S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> EINT26S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> EINT25S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> EINT24S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> EINT23S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> EINT22S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EINT21S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EINT20S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> EINT19S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EINT18S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EINT17S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> EINT16S; 
    }
    namespace Noneepfr16{
        using Addr = Register::Address<0x40033640,0xf000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> SCK11B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SOT11B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> SIN11S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SCK10B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> SOT10B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SIN10S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> SCK9B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SOT9B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SIN9S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SCK8B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SOT8B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SIN8S; 
    }
    namespace Noneepfr17{
        using Addr = Register::Address<0x40033644,0xf000000f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> SCK15B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> SOT15B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> SIN15S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SCK14B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> SOT14B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SIN14S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> SCK13B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SOT13B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SIN13S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SCK12B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SOT12B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SIN12S; 
    }
    namespace Noneepfr18{
        using Addr = Register::Address<0x40033648,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CECR1B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CECR0B; 
    }
    namespace Noneepfr21{
        using Addr = Register::Address<0x40033654,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> QZIN0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> QBIN0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> QAIN0S; 
    }
    namespace Noneepfr22{
        using Addr = Register::Address<0x40033658,0xffff0f0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> SCS31E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SCS30B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SCS11E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SCS10B; 
    }
    namespace Nonepzr0{
        using Addr = Register::Address<0x40033700,0xffffffff>;
    }
    namespace Nonepzr1{
        using Addr = Register::Address<0x40033704,0xffffffff>;
    }
    namespace Nonepzr2{
        using Addr = Register::Address<0x40033708,0xffffffff>;
    }
    namespace Nonepzr3{
        using Addr = Register::Address<0x4003370c,0xffffffff>;
    }
    namespace Nonepzr4{
        using Addr = Register::Address<0x40033710,0xffffffff>;
    }
    namespace Nonepzr5{
        using Addr = Register::Address<0x40033714,0xffffffff>;
    }
    namespace Nonepzr6{
        using Addr = Register::Address<0x40033718,0xffffffff>;
    }
    namespace Nonepzr8{
        using Addr = Register::Address<0x40033720,0xffffffff>;
    }
    namespace Nonepzre{
        using Addr = Register::Address<0x40033738,0xffffffff>;
    }
    namespace Nonefpoer0{
        using Addr = Register::Address<0x40033900,0xffff7fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P00; 
    }
    namespace Nonefpoer1{
        using Addr = Register::Address<0x40033904,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P10; 
    }
    namespace Nonefpoer2{
        using Addr = Register::Address<0x40033908,0xfffffff1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P21; 
    }
    namespace Nonefpoer3{
        using Addr = Register::Address<0x4003390c,0xffff01ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P3D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P3B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P3A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P39; 
    }
    namespace Nonefpoer4{
        using Addr = Register::Address<0x40033910,0xfffff93f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P4A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P46; 
    }
    namespace Nonefpoer5{
        using Addr = Register::Address<0x40033914,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P50; 
    }
    namespace Nonefpoer6{
        using Addr = Register::Address<0x40033918,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P60; 
    }
    namespace Nonefpoer8{
        using Addr = Register::Address<0x40033920,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P80; 
    }
    namespace Nonefpoere{
        using Addr = Register::Address<0x40033938,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0; 
    }
}
