#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x50060000,0xffffe000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DMAOUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DMAINEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ERRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CCFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ERRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> CHMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> MODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> DATATYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x50060004,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WRERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RDERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCF; 
    }
    namespace Nonedinr{
        using Addr = Register::Address<0x50060008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AES_DINR; 
    }
    namespace Nonedoutr{
        using Addr = Register::Address<0x5006000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AES_DOUTR; 
    }
    namespace Nonekeyr0{
        using Addr = Register::Address<0x50060010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AES_KEYR0; 
    }
    namespace Nonekeyr1{
        using Addr = Register::Address<0x50060014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AES_KEYR1; 
    }
    namespace Nonekeyr2{
        using Addr = Register::Address<0x50060018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AES_KEYR2; 
    }
    namespace Nonekeyr3{
        using Addr = Register::Address<0x5006001c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AES_KEYR3; 
    }
    namespace Noneivr0{
        using Addr = Register::Address<0x50060020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AES_IVR0; 
    }
    namespace Noneivr1{
        using Addr = Register::Address<0x50060024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AES_IVR1; 
    }
    namespace Noneivr2{
        using Addr = Register::Address<0x50060028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AES_IVR2; 
    }
    namespace Noneivr3{
        using Addr = Register::Address<0x5006002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AES_IVR3; 
    }
}
