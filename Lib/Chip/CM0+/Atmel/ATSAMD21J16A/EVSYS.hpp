#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace EVSYS_channel{
        using Addr = Register::Address<0x42000404,0xf080fef0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHANNEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWEVT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> EVGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> PATH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> EDGSEL; 
    }
    namespace EVSYS_chstatus{
        using Addr = Register::Address<0x4200040c,0xf0f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USRRDY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USRRDY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USRRDY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USRRDY3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USRRDY4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USRRDY5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> USRRDY6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> USRRDY7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CHBUSY0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CHBUSY1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CHBUSY2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CHBUSY3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CHBUSY4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CHBUSY5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CHBUSY6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CHBUSY7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> USRRDY8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> USRRDY9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> USRRDY10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> USRRDY11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CHBUSY8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CHBUSY9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> CHBUSY10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CHBUSY11; 
    }
    namespace EVSYS_ctrl{
        using Addr = Register::Address<0x42000400,0xffffffee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GCLKREQ; 
    }
    namespace EVSYS_intenclr{
        using Addr = Register::Address<0x42000410,0xf0f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EVD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EVD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EVD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EVD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EVD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EVD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EVD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EVD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OVR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OVR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OVR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EVD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EVD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EVD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EVD11; 
    }
    namespace EVSYS_intenset{
        using Addr = Register::Address<0x42000414,0xf0f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EVD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EVD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EVD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EVD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EVD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EVD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EVD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EVD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OVR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OVR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OVR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EVD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EVD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EVD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EVD11; 
    }
    namespace EVSYS_intflag{
        using Addr = Register::Address<0x42000418,0xf0f00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OVR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OVR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OVR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OVR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> OVR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EVD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> EVD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> EVD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> EVD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> EVD4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EVD5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> EVD6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EVD7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OVR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> OVR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> OVR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> OVR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EVD8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> EVD9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> EVD10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> EVD11; 
    }
    namespace EVSYS_user{
        using Addr = Register::Address<0x42000408,0xffffe0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> USER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> CHANNEL; 
    }
}
