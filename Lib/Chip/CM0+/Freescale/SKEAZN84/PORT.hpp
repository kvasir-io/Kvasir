#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PORT_ioflt{
        using Addr = Register::Address<0x40049000,0x000003c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FLTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> FLTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> FLTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> FLTIIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> FLTFTM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> FLTPWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> FLTRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> FLTKBI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> FLTKBI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> FLTNMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> FLTDIV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> FLTDIV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> FLTDIV3; 
    }
    namespace PORT_puel{
        using Addr = Register::Address<0x40049004,0xffc00000>;
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
    }
    namespace PORT_hdrve{
        using Addr = Register::Address<0x4004900c,0xfffffff1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PTB5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PTC5; 
    }
}
