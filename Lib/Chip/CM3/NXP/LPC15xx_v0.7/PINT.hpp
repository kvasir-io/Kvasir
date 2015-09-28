#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneisel{
        using Addr = Register::Address<0x400a4000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PMODE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PMODE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PMODE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PMODE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PMODE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PMODE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PMODE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PMODE7; 
    }
    namespace Noneienr{
        using Addr = Register::Address<0x400a4004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENRL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENRL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENRL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENRL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENRL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENRL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENRL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENRL7; 
    }
    namespace Nonesienr{
        using Addr = Register::Address<0x400a4008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETENRL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETENRL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETENRL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETENRL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETENRL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETENRL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETENRL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETENRL7; 
    }
    namespace Nonecienr{
        using Addr = Register::Address<0x400a400c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENRL0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CENRL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CENRL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CENRL3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CENRL4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CENRL5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CENRL6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CENRL7; 
    }
    namespace Noneienf{
        using Addr = Register::Address<0x400a4010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENAF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENAF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ENAF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ENAF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ENAF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ENAF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ENAF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ENAF7; 
    }
    namespace Nonesienf{
        using Addr = Register::Address<0x400a4014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETENAF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETENAF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SETENAF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SETENAF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SETENAF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SETENAF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SETENAF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SETENAF7; 
    }
    namespace Nonecienf{
        using Addr = Register::Address<0x400a4018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CENAF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CENAF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CENAF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CENAF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CENAF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CENAF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CENAF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CENAF7; 
    }
    namespace Nonerise{
        using Addr = Register::Address<0x400a401c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RDET0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RDET1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RDET2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RDET3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RDET4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RDET5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RDET6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RDET7; 
    }
    namespace Nonefall{
        using Addr = Register::Address<0x400a4020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FDET0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FDET1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FDET2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FDET3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FDET4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FDET5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FDET6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FDET7; 
    }
    namespace Noneist{
        using Addr = Register::Address<0x400a4024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PSTAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PSTAT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PSTAT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PSTAT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PSTAT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PSTAT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PSTAT7; 
    }
    namespace Nonepmctrl{
        using Addr = Register::Address<0x400a4028,0x00fffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SEL_PMATCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ENA_RXEV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> PMAT; 
    }
    namespace Nonepmsrc{
        using Addr = Register::Address<0x400a402c,0x000000ff>;
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
        using Addr = Register::Address<0x400a4030,0x00000080>;
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
