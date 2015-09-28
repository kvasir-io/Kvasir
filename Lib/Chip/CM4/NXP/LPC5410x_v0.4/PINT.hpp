#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneisel{
        using Addr = Register::Address<0x40018000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PMODE; 
    }
    namespace Noneienr{
        using Addr = Register::Address<0x40018004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ENRL; 
    }
    namespace Nonesienr{
        using Addr = Register::Address<0x40018008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SETENRL; 
    }
    namespace Nonecienr{
        using Addr = Register::Address<0x4001800c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CENRL; 
    }
    namespace Noneienf{
        using Addr = Register::Address<0x40018010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ENAF; 
    }
    namespace Nonesienf{
        using Addr = Register::Address<0x40018014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SETENAF; 
    }
    namespace Nonecienf{
        using Addr = Register::Address<0x40018018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CENAF; 
    }
    namespace Nonerise{
        using Addr = Register::Address<0x4001801c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDET; 
    }
    namespace Nonefall{
        using Addr = Register::Address<0x40018020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FDET; 
    }
    namespace Noneist{
        using Addr = Register::Address<0x40018024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PSTAT; 
    }
    namespace Nonepmctrl{
        using Addr = Register::Address<0x40018028,0x00fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEL_PMATCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA_RXEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PMAT; 
    }
    namespace Nonepmsrc{
        using Addr = Register::Address<0x4001802c,0x000000ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SRC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> SRC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14)> SRC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> SRC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> SRC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23)> SRC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> SRC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> SRC7; 
    }
    namespace Nonepmcfg{
        using Addr = Register::Address<0x40018030,0x00000080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PROD_ENDPTS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PROD_ENDPTS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PROD_ENDPTS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PROD_ENDPTS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PROD_ENDPTS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PROD_ENDPTS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PROD_ENDPTS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CFG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> CFG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14)> CFG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> CFG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> CFG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23)> CFG5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26)> CFG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29)> CFG7; 
    }
}
