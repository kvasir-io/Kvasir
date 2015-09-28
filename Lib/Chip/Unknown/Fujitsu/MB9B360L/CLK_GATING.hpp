#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecken0{
        using Addr = Register::Address<0x4003c100,0xeaf00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> GIOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EXBCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DMACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ADCCK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ADCCK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADCCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADCCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MFSCK15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MFSCK14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MFSCK13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MFSCK12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MFSCK11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MFSCK10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MFSCK9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MFSCK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MFSCK7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MFSCK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MFSCK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MFSCK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MFSCK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MFSCK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSCK0; 
    }
    namespace Nonemrst0{
        using Addr = Register::Address<0x4003c104,0xfaf00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EXBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DMARST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ADCRST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ADCRST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ADCRST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ADCRST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MFSRST15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MFSRST14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MFSRST13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MFSRST12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MFSRST11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MFSRST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MFSRST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MFSRST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MFSRST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MFSRST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MFSRST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MFSRST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MFSRST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MFSRST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSRST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRST0; 
    }
    namespace Nonecken1{
        using Addr = Register::Address<0x4003c110,0xfff0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> QDUCK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> QDUCK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> QDUCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> QDUCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MFTCK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MFTCK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MFTCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MFTCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTMCK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTMCK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTMCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTMCK0; 
    }
    namespace Nonemrst1{
        using Addr = Register::Address<0x4003c114,0xfff0f0f0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> QDURST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> QDURST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> QDURST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> QDURST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MFTRST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MFTRST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MFTRST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MFTRST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTMRST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTMRST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTMRST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTMRST0; 
    }
    namespace Nonecken2{
        using Addr = Register::Address<0x4003c120,0xfffffecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SDCCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CANCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CANCK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USBCK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBCK0; 
    }
    namespace Nonemrst2{
        using Addr = Register::Address<0x4003c124,0xfffffecc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SDCRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CANRST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CANRST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USBRST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBRST0; 
    }
}
