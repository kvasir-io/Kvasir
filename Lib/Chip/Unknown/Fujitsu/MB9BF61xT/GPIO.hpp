#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepfr0{
        using Addr = Register::Address<0x40033000,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P05; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P00; 
    }
    namespace Nonepfr1{
        using Addr = Register::Address<0x40033004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P1F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P1D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P1B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P1A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P10; 
    }
    namespace Nonepfr2{
        using Addr = Register::Address<0x40033008,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P20; 
    }
    namespace Nonepfr3{
        using Addr = Register::Address<0x4003300c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P3D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P3B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P3A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P30; 
    }
    namespace Nonepfr4{
        using Addr = Register::Address<0x40033010,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P4E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P4D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P4B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P4A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P40; 
    }
    namespace Nonepfr5{
        using Addr = Register::Address<0x40033014,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P5D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P5B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P5A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P50; 
    }
    namespace Nonepfr6{
        using Addr = Register::Address<0x40033018,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P60; 
    }
    namespace Nonepfr7{
        using Addr = Register::Address<0x4003301c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P7F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P7E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P7D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P7C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P7B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P7A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P79; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P78; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P77; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P76; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P75; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P74; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P73; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P72; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P71; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P70; 
    }
    namespace Nonepfr8{
        using Addr = Register::Address<0x40033020,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P83; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P80; 
    }
    namespace Nonepfr9{
        using Addr = Register::Address<0x40033024,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P95; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P94; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P93; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P92; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P91; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P90; 
    }
    namespace Nonepfra{
        using Addr = Register::Address<0x40033028,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PA0; 
    }
    namespace Nonepfrb{
        using Addr = Register::Address<0x4003302c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PB7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PB6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PB3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PB0; 
    }
    namespace Nonepfrc{
        using Addr = Register::Address<0x40033030,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PCC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PCB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PCA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PC9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PC8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0; 
    }
    namespace Nonepfrd{
        using Addr = Register::Address<0x40033034,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD0; 
    }
    namespace Nonepfre{
        using Addr = Register::Address<0x40033038,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0; 
    }
    namespace Nonepfrf{
        using Addr = Register::Address<0x4003303c,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PF0; 
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
    namespace Nonepcr7{
        using Addr = Register::Address<0x4003311c,0xffffffff>;
    }
    namespace Nonepcr8{
        using Addr = Register::Address<0x40033120,0xffffffff>;
    }
    namespace Nonepcr9{
        using Addr = Register::Address<0x40033124,0xffffffff>;
    }
    namespace Nonepcra{
        using Addr = Register::Address<0x40033128,0xffffffff>;
    }
    namespace Nonepcrb{
        using Addr = Register::Address<0x4003312c,0xffffffff>;
    }
    namespace Nonepcrc{
        using Addr = Register::Address<0x40033130,0xffffffff>;
    }
    namespace Nonepcrd{
        using Addr = Register::Address<0x40033134,0xffffffff>;
    }
    namespace Nonepcre{
        using Addr = Register::Address<0x40033138,0xffffffff>;
    }
    namespace Nonepcrf{
        using Addr = Register::Address<0x4003313c,0xffffffff>;
    }
    namespace Noneddr0{
        using Addr = Register::Address<0x40033200,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P0D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P0A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P09; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P08; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P07; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P06; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P05; 
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
    namespace Noneddr7{
        using Addr = Register::Address<0x4003321c,0xffffffff>;
    }
    namespace Noneddr8{
        using Addr = Register::Address<0x40033220,0xffffffff>;
    }
    namespace Noneddr9{
        using Addr = Register::Address<0x40033224,0xffffffff>;
    }
    namespace Noneddra{
        using Addr = Register::Address<0x40033228,0xffffffff>;
    }
    namespace Noneddrb{
        using Addr = Register::Address<0x4003322c,0xffffffff>;
    }
    namespace Noneddrc{
        using Addr = Register::Address<0x40033230,0xffffffff>;
    }
    namespace Noneddrd{
        using Addr = Register::Address<0x40033234,0xffffffff>;
    }
    namespace Noneddre{
        using Addr = Register::Address<0x40033238,0xffffffff>;
    }
    namespace Noneddrf{
        using Addr = Register::Address<0x4003323c,0xffffffff>;
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
    namespace Nonepdir7{
        using Addr = Register::Address<0x4003331c,0xffffffff>;
    }
    namespace Nonepdir8{
        using Addr = Register::Address<0x40033320,0xffffffff>;
    }
    namespace Nonepdir9{
        using Addr = Register::Address<0x40033324,0xffffffff>;
    }
    namespace Nonepdira{
        using Addr = Register::Address<0x40033328,0xffffffff>;
    }
    namespace Nonepdirb{
        using Addr = Register::Address<0x4003332c,0xffffffff>;
    }
    namespace Nonepdirc{
        using Addr = Register::Address<0x40033330,0xffffffff>;
    }
    namespace Nonepdird{
        using Addr = Register::Address<0x40033334,0xffffffff>;
    }
    namespace Nonepdire{
        using Addr = Register::Address<0x40033338,0xffffffff>;
    }
    namespace Nonepdirf{
        using Addr = Register::Address<0x4003333c,0xffffffff>;
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
    namespace Nonepdor7{
        using Addr = Register::Address<0x4003341c,0xffffffff>;
    }
    namespace Nonepdor8{
        using Addr = Register::Address<0x40033420,0xffffffff>;
    }
    namespace Nonepdor9{
        using Addr = Register::Address<0x40033424,0xffffffff>;
    }
    namespace Nonepdora{
        using Addr = Register::Address<0x40033428,0xffffffff>;
    }
    namespace Nonepdorb{
        using Addr = Register::Address<0x4003342c,0xffffffff>;
    }
    namespace Nonepdorc{
        using Addr = Register::Address<0x40033430,0xffffffff>;
    }
    namespace Nonepdord{
        using Addr = Register::Address<0x40033434,0xffffffff>;
    }
    namespace Nonepdore{
        using Addr = Register::Address<0x40033438,0xffffffff>;
    }
    namespace Nonepdorf{
        using Addr = Register::Address<0x4003343c,0xffffffff>;
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
        using Addr = Register::Address<0x40033580,0xffffffca>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USB1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USB0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MAINXC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SUBXC; 
    }
    namespace Noneepfr00{
        using Addr = Register::Address<0x40033600,0xfcfcdd38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TRC1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TRC0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> JTAGEN1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> JTAGEN0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> USBP1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USBP0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SUBOUTE; 
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
        using Addr = Register::Address<0x40033608,0x0000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> IC13S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> IC12S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23)> IC11S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> IC10S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> FRCK1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DTTI1S; 
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
        using Addr = Register::Address<0x40033610,0xc0c3c0c3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> TIOB3S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> TIOA3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> TIOA3S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TIOB2S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> TIOA2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> TIOB1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> TIOA1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> TIOA1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TIOB0S; 
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
        using Addr = Register::Address<0x40033624,0xff000000>;
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
    namespace Noneepfr10{
        using Addr = Register::Address<0x40033628,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UEA24E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> UEA23E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> UEA22E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> UEA21E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> UEA20E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> UEA19E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> UEA18E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> UEA17E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> UEA16E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> UEA15E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> UEA14E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> UEA13E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UEA12E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UEA11E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UEA10E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UEA09E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> UEA08E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> UEAOOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UECS7E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UECS6E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UECS5E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UECS4E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UECS3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UECS2E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UECS1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UEFLSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UEOEXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UEDQME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UEWEXE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UECLKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UEDTHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UEDEFB; 
    }
    namespace Noneepfr11{
        using Addr = Register::Address<0x4003362c,0xfc000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> UERLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> UED15B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> UED14B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> UED13B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> UED12B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> UED11B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> UED10B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> UED09B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> UED08B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> UED07B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> UED06B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> UED05B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> UED04B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> UED03B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> UED02B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> UED01B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> UED00B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> UEA07E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> UEA06E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> UEA05E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UEA04E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UEA03E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UEA02E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UEA01E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UECS0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UEALEE; 
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
        using Addr = Register::Address<0x40033638,0xc003ffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> E_SPLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> E_PSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> E_CKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> E_MD1B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> E_MD0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> E_MC1B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> E_MC0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> E_TE1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> E_TE0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> E_TD1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> E_TD0E; 
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
    namespace Nonepzr7{
        using Addr = Register::Address<0x4003371c,0xffffffff>;
    }
    namespace Nonepzr8{
        using Addr = Register::Address<0x40033720,0xffffffff>;
    }
    namespace Nonepzr9{
        using Addr = Register::Address<0x40033724,0xffffffff>;
    }
    namespace Nonepzra{
        using Addr = Register::Address<0x40033728,0xffffffff>;
    }
    namespace Nonepzrb{
        using Addr = Register::Address<0x4003372c,0xffffffff>;
    }
    namespace Nonepzrc{
        using Addr = Register::Address<0x40033730,0xffffffff>;
    }
    namespace Nonepzrd{
        using Addr = Register::Address<0x40033734,0xffffffff>;
    }
    namespace Nonepzre{
        using Addr = Register::Address<0x40033738,0xffffffff>;
    }
    namespace Nonepzrf{
        using Addr = Register::Address<0x4003373c,0xffffffff>;
    }
}
