#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepfr0{
        using Addr = Register::Address<0x4006f000,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P00; 
    }
    namespace Nonepfr1{
        using Addr = Register::Address<0x4006f004,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P10; 
    }
    namespace Nonepfr2{
        using Addr = Register::Address<0x4006f008,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P20; 
    }
    namespace Nonepfr3{
        using Addr = Register::Address<0x4006f00c,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P30; 
    }
    namespace Nonepfr4{
        using Addr = Register::Address<0x4006f010,0xfffffc3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P40; 
    }
    namespace Nonepfr5{
        using Addr = Register::Address<0x4006f014,0xffffff00>;
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
        using Addr = Register::Address<0x4006f018,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P66; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P65; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P64; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P63; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P60; 
    }
    namespace Nonepfr8{
        using Addr = Register::Address<0x4006f020,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P80; 
    }
    namespace Nonepfre{
        using Addr = Register::Address<0x4006f038,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0; 
    }
    namespace Nonepcr0{
        using Addr = Register::Address<0x4006f100,0xffffffff>;
    }
    namespace Nonepcr1{
        using Addr = Register::Address<0x4006f104,0xffffffff>;
    }
    namespace Nonepcr2{
        using Addr = Register::Address<0x4006f108,0xffffffff>;
    }
    namespace Nonepcr3{
        using Addr = Register::Address<0x4006f10c,0xffffffff>;
    }
    namespace Nonepcr4{
        using Addr = Register::Address<0x4006f110,0xffffffff>;
    }
    namespace Nonepcr5{
        using Addr = Register::Address<0x4006f114,0xffffffff>;
    }
    namespace Nonepcr6{
        using Addr = Register::Address<0x4006f118,0xffffffff>;
    }
    namespace Nonepcr8{
        using Addr = Register::Address<0x4006f120,0xffffffff>;
    }
    namespace Nonepcre{
        using Addr = Register::Address<0x4006f138,0xffffffff>;
    }
    namespace Noneddr0{
        using Addr = Register::Address<0x4006f200,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P00; 
    }
    namespace Noneddr1{
        using Addr = Register::Address<0x4006f204,0xffffffff>;
    }
    namespace Noneddr2{
        using Addr = Register::Address<0x4006f208,0xffffffff>;
    }
    namespace Noneddr3{
        using Addr = Register::Address<0x4006f20c,0xffffffff>;
    }
    namespace Noneddr4{
        using Addr = Register::Address<0x4006f210,0xffffffff>;
    }
    namespace Noneddr5{
        using Addr = Register::Address<0x4006f214,0xffffffff>;
    }
    namespace Noneddr6{
        using Addr = Register::Address<0x4006f218,0xffffffff>;
    }
    namespace Noneddr8{
        using Addr = Register::Address<0x4006f220,0xffffffff>;
    }
    namespace Noneddre{
        using Addr = Register::Address<0x4006f238,0xffffffff>;
    }
    namespace Nonepdir0{
        using Addr = Register::Address<0x4006f300,0xffffffff>;
    }
    namespace Nonepdir1{
        using Addr = Register::Address<0x4006f304,0xffffffff>;
    }
    namespace Nonepdir2{
        using Addr = Register::Address<0x4006f308,0xffffffff>;
    }
    namespace Nonepdir3{
        using Addr = Register::Address<0x4006f30c,0xffffffff>;
    }
    namespace Nonepdir4{
        using Addr = Register::Address<0x4006f310,0xffffffff>;
    }
    namespace Nonepdir5{
        using Addr = Register::Address<0x4006f314,0xffffffff>;
    }
    namespace Nonepdir6{
        using Addr = Register::Address<0x4006f318,0xffffffff>;
    }
    namespace Nonepdir8{
        using Addr = Register::Address<0x4006f320,0xffffffff>;
    }
    namespace Nonepdire{
        using Addr = Register::Address<0x4006f338,0xffffffff>;
    }
    namespace Nonepdor0{
        using Addr = Register::Address<0x4006f400,0xffffffff>;
    }
    namespace Nonepdor1{
        using Addr = Register::Address<0x4006f404,0xffffffff>;
    }
    namespace Nonepdor2{
        using Addr = Register::Address<0x4006f408,0xffffffff>;
    }
    namespace Nonepdor3{
        using Addr = Register::Address<0x4006f40c,0xffffffff>;
    }
    namespace Nonepdor4{
        using Addr = Register::Address<0x4006f410,0xffffffff>;
    }
    namespace Nonepdor5{
        using Addr = Register::Address<0x4006f414,0xffffffff>;
    }
    namespace Nonepdor6{
        using Addr = Register::Address<0x4006f418,0xffffffff>;
    }
    namespace Nonepdor8{
        using Addr = Register::Address<0x4006f420,0xffffffff>;
    }
    namespace Nonepdore{
        using Addr = Register::Address<0x4006f438,0xffffffff>;
    }
    namespace Noneade{
        using Addr = Register::Address<0x4006f500,0x00000000>;
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
        using Addr = Register::Address<0x4006f580,0xffffffc3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USB1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USB0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> MAINXC; 
    }
    namespace Noneepfr00{
        using Addr = Register::Address<0x4006f600,0xfcfcdd08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TRC1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TRC0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> JTAGEN1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> JTAGEN0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> USBP1E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USBP0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SUBOUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> RTCCOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CROUTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NMIS; 
    }
    namespace Noneepfr01{
        using Addr = Register::Address<0x4006f604,0x0000e000>;
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
        using Addr = Register::Address<0x4006f608,0x0000e000>;
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
        using Addr = Register::Address<0x4006f60c,0x0000e000>;
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
        using Addr = Register::Address<0x4006f610,0xc0c3c083>;
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
        using Addr = Register::Address<0x4006f614,0xc0c3c0c3>;
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
        using Addr = Register::Address<0x4006f618,0x00000000>;
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
        using Addr = Register::Address<0x4006f61c,0xf000000f>;
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
        using Addr = Register::Address<0x4006f620,0xffc0fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> SCK6B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> SOT6B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SIN6S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SCK4B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SOT4B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SIN4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> CTS4S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RTS4E; 
    }
    namespace Noneepfr09{
        using Addr = Register::Address<0x4006f624,0xf0f00fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CTX0E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> CRX0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> ADTRG1S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> ADTRG0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> QZIN0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> QBIN0S; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> QAIN0S; 
    }
    namespace Noneepfr10{
        using Addr = Register::Address<0x4006f628,0xffffffff>;
    }
    namespace Noneepfr11{
        using Addr = Register::Address<0x4006f62c,0xffffffff>;
    }
    namespace Noneepfr12{
        using Addr = Register::Address<0x4006f630,0xc0c3c0c3>;
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
        using Addr = Register::Address<0x4006f634,0xc0c3c0c3>;
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
        using Addr = Register::Address<0x4006f638,0xc003ffff>;
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
    }
    namespace Noneepfr15{
        using Addr = Register::Address<0x4006f63c,0x00000000>;
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
        using Addr = Register::Address<0x4006f640,0xcfffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> SFMPBC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> SFMPAC; 
    }
    namespace Noneepfr17{
        using Addr = Register::Address<0x4006f644,0xffffffff>;
    }
    namespace Noneepfr18{
        using Addr = Register::Address<0x4006f648,0xffffffff>;
    }
    namespace Noneepfr19{
        using Addr = Register::Address<0x4006f64c,0xffffffff>;
    }
    namespace Noneepfr20{
        using Addr = Register::Address<0x4006f650,0xffffffff>;
    }
    namespace Nonepzr0{
        using Addr = Register::Address<0x4006f700,0xffffffff>;
    }
    namespace Nonepzr1{
        using Addr = Register::Address<0x4006f704,0xffffffff>;
    }
    namespace Nonepzr2{
        using Addr = Register::Address<0x4006f708,0xffffffff>;
    }
    namespace Nonepzr3{
        using Addr = Register::Address<0x4006f70c,0xffffffff>;
    }
    namespace Nonepzr4{
        using Addr = Register::Address<0x4006f710,0xffffffff>;
    }
    namespace Nonepzr5{
        using Addr = Register::Address<0x4006f714,0xffffffff>;
    }
    namespace Nonepzr6{
        using Addr = Register::Address<0x4006f718,0xffffffff>;
    }
    namespace Nonepzr8{
        using Addr = Register::Address<0x4006f720,0xffffffff>;
    }
    namespace Nonepzre{
        using Addr = Register::Address<0x4006f738,0xffffffff>;
    }
}
