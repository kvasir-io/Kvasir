#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power Calculation Engine (PCE)
    namespace Nonepintcr{    ///<PCE core interrupt control
        using Addr = Register::Address<0x4406f000,0xfffffff8,0,unsigned>;
        ///PCERST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pcerst{}; 
        ///PCENMI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pcenmi{}; 
        ///PCEINT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pceint{}; 
    }
    namespace Nonemintcr{    ///<Interrupt control to the main core
        using Addr = Register::Address<0x4406f004,0xfffffffe,0,unsigned>;
        ///MAININT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mainint{}; 
    }
    namespace Nonepclkcr{    ///<PCE core clock control)
        using Addr = Register::Address<0x4406f008,0xfffffffe,0,unsigned>;
        ///PCECLK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pceclk{}; 
    }
    namespace Nonepnmiflg{    ///<PCE core NMI event flag)
        using Addr = Register::Address<0x4406f00c,0xfffffffc,0,unsigned>;
        ///WDTNMIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdtnmif{}; 
        ///PCEIFNMIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pceifnmif{}; 
    }
    namespace Nonepnmiclr{    ///<PCE core NMI event clear)
        using Addr = Register::Address<0x4406f010,0xfffffffc,0,unsigned>;
        ///WDTNMIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdtnmic{}; 
        ///PCEIFNMIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pceifnmic{}; 
    }
}
