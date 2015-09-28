#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig0{
        using Addr = Register::Address<0x40000600,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGION0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGION1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGION2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGION3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGION4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGION5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGION6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGION7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> REGION8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REGION9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> REGION10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> REGION11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> REGION12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REGION13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REGION14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> REGION15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> REGION16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> REGION17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> REGION18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> REGION19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> REGION20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> REGION21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> REGION22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> REGION23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> REGION24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> REGION25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> REGION26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> REGION27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> REGION28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> REGION29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> REGION30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> REGION31; 
    }
    namespace Noneconfig1{
        using Addr = Register::Address<0x40000604,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGION32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGION33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGION34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGION35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGION36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGION37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGION38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGION39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> REGION40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REGION41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> REGION42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> REGION43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> REGION44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REGION45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REGION46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> REGION47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> REGION48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> REGION49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> REGION50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> REGION51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> REGION52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> REGION53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> REGION54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> REGION55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> REGION56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> REGION57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> REGION58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> REGION59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> REGION60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> REGION61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> REGION62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> REGION63; 
    }
    namespace Nonedisableindebug{
        using Addr = Register::Address<0x40000608,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DISABLEINDEBUG; 
    }
    namespace Noneunused0{
        using Addr = Register::Address<0x4000060c,0xffffffff>;
    }
    namespace Noneconfig2{
        using Addr = Register::Address<0x40000610,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGION64; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGION65; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGION66; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGION67; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGION68; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGION69; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGION70; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGION71; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> REGION72; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REGION73; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> REGION74; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> REGION75; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> REGION76; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REGION77; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REGION78; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> REGION79; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> REGION80; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> REGION81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> REGION82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> REGION83; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> REGION84; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> REGION85; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> REGION86; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> REGION87; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> REGION88; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> REGION89; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> REGION90; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> REGION91; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> REGION92; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> REGION93; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> REGION94; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> REGION95; 
    }
    namespace Noneconfig3{
        using Addr = Register::Address<0x40000614,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> REGION96; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REGION97; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> REGION98; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REGION99; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> REGION100; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> REGION101; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> REGION102; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> REGION103; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> REGION104; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> REGION105; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> REGION106; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> REGION107; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> REGION108; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REGION109; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> REGION110; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> REGION111; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> REGION112; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> REGION113; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> REGION114; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> REGION115; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> REGION116; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> REGION117; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> REGION118; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> REGION119; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> REGION120; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> REGION121; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> REGION122; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> REGION123; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> REGION124; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> REGION125; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> REGION126; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> REGION127; 
    }
}
