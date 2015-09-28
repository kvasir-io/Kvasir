#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneqpcr{
        using Addr = Register::Address<0x40026000,0xffffffff>;
    }
    namespace Noneqrcr{
        using Addr = Register::Address<0x40026004,0xffffffff>;
    }
    namespace Noneqpccr{
        using Addr = Register::Address<0x40026008,0xffffffff>;
    }
    namespace Noneqprcr{
        using Addr = Register::Address<0x4002600c,0xffffffff>;
    }
    namespace Noneqmpr{
        using Addr = Register::Address<0x40026010,0xffffffff>;
    }
    namespace Noneqicrl{
        using Addr = Register::Address<0x40026014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ZIIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> OFDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UFDF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OUZIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> QPRCMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> QPRCMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> QPCMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> QPCMIE; 
    }
    namespace Noneqicrh{
        using Addr = Register::Address<0x40026015,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> QPCNRCMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> QPCNRCMIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIROU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DIRPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CDCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CDCIE; 
    }
    namespace Noneqcr{
        using Addr = Register::Address<0x40026018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> CGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> BES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> AES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> PCRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SWAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CGSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> RCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PCM; 
    }
    namespace Noneqecr{
        using Addr = Register::Address<0x4002601c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ORNGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ORNGF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ORNGMD; 
    }
    namespace Noneqprcrr{
        using Addr = Register::Address<0x4002603c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> QRCRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> QPCRR; 
    }
}
