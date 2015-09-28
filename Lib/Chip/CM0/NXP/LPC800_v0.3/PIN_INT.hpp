#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneisel{
        using Addr = Register::Address<0xa0004000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PMODE; 
    }
    namespace Noneienr{
        using Addr = Register::Address<0xa0004004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ENRL; 
    }
    namespace Nonesienr{
        using Addr = Register::Address<0xa0004008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SETENRL; 
    }
    namespace Nonecienr{
        using Addr = Register::Address<0xa000400c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CENRL; 
    }
    namespace Noneienf{
        using Addr = Register::Address<0xa0004010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ENAF; 
    }
    namespace Nonesienf{
        using Addr = Register::Address<0xa0004014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SETENAF; 
    }
    namespace Nonecienf{
        using Addr = Register::Address<0xa0004018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CENAF; 
    }
    namespace Nonerise{
        using Addr = Register::Address<0xa000401c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RDET; 
    }
    namespace Nonefall{
        using Addr = Register::Address<0xa0004020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FDET; 
    }
    namespace Noneist{
        using Addr = Register::Address<0xa0004024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PSTAT; 
    }
    namespace Nonepmctrl{
        using Addr = Register::Address<0xa0004028,0x00fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEL_PMATCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA_RXEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PMAT; 
    }
    namespace Nonepmsrc{
        using Addr = Register::Address<0xa000402c,0x000000ff>;
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
        using Addr = Register::Address<0xa0004030,0x00000080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PROD_ENDPTS; 
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
