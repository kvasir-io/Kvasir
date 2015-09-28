#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PORT_ioflt{
        using Addr = Register::Address<0x40049000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FLTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> FLTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> FLTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> FLTD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> FLTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> FLTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> FLTG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> FLTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> FLTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> FLTKBI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> FLTKBI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> FLTNMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> FLTDIV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> FLTDIV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> FLTDIV3; 
    }
    namespace PORT_puel{
        using Addr = Register::Address<0x40049004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PTAPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PTAPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PTAPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PTAPE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PTAPE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PTAPE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PTAPE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PTAPE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PTBPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PTBPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PTBPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PTBPE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PTBPE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PTBPE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PTBPE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PTBPE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PTCPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PTCPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PTCPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PTCPE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PTCPE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PTCPE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PTCPE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PTCPE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PTDPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PTDPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PTDPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PTDPE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PTDPE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PTDPE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PTDPE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PTDPE7; 
    }
    namespace PORT_pueh{
        using Addr = Register::Address<0x40049008,0x38f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PTEPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PTEPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PTEPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PTEPE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PTEPE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PTEPE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PTEPE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PTEPE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PTFPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PTFPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PTFPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PTFPE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PTFPE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PTFPE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PTFPE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PTFPE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PTGPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PTGPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PTGPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PTGPE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PTHPE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PTHPE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PTHPE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PTHPE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PTHPE7; 
    }
    namespace PORT_hdrve{
        using Addr = Register::Address<0x4004900c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PTB4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PTB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PTD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PTD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PTE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PTE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PTH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PTH1; 
    }
}
