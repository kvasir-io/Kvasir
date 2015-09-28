#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonescm_ctl{
        using Addr = Register::Address<0x40010000,0xffffff05>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> RCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOSCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MOSCE; 
    }
    namespace Nonescm_str{
        using Addr = Register::Address<0x40010004,0xffffff05>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> RCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PLRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SORDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MORDY; 
    }
    namespace Nonebsc_psr{
        using Addr = Register::Address<0x40010010,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> BSR; 
    }
    namespace Noneapbc0_psr{
        using Addr = Register::Address<0x40010014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> APBC0; 
    }
    namespace Noneapbc1_psr{
        using Addr = Register::Address<0x40010018,0xffffff6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> APBC1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> APBC1RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> APBC1; 
    }
    namespace Noneapbc2_psr{
        using Addr = Register::Address<0x4001001c,0xffffff6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> APBC2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> APBC2RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> APBC2; 
    }
    namespace Noneswc_psr{
        using Addr = Register::Address<0x40010020,0xffffff7c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TESTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SWDS; 
    }
    namespace Nonettc_psr{
        using Addr = Register::Address<0x40010028,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TTC; 
    }
    namespace Nonecsw_tmr{
        using Addr = Register::Address<0x40010030,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> SOWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MOWT; 
    }
    namespace Nonepsw_tmr{
        using Addr = Register::Address<0x40010034,0xffffffe8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> POWT; 
    }
    namespace Nonepll_ctl1{
        using Addr = Register::Address<0x40010038,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PLLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PLLM; 
    }
    namespace Nonepll_ctl2{
        using Addr = Register::Address<0x4001003c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> PLLN; 
    }
    namespace Nonedbwdt_ctl{
        using Addr = Register::Address<0x40010054,0xffffff5f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DPHWBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DPSWBE; 
    }
    namespace Noneint_enr{
        using Addr = Register::Address<0x40010060,0xffffffd8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FCSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCSE; 
    }
    namespace Noneint_str{
        using Addr = Register::Address<0x40010064,0xffffffd8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FCSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCSI; 
    }
    namespace Noneint_clr{
        using Addr = Register::Address<0x40010068,0xffffffd8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FCSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCSC; 
    }
    namespace Nonerst_str{
        using Addr = Register::Address<0x4001000c,0xfffffe0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FCSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CSVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HWDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SWDG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INITX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PONR; 
    }
    namespace Nonestb_ctl{
        using Addr = Register::Address<0x40010008,0x0000ffec>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> KEY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> STM; 
    }
    namespace Nonecsv_ctl{
        using Addr = Register::Address<0x40010040,0xffff8cfc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> FCD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FCSRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FCSDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCSVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCSVE; 
    }
    namespace Nonecsv_str{
        using Addr = Register::Address<0x40010044,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCMF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MCMF; 
    }
    namespace Nonefcswh_ctl{
        using Addr = Register::Address<0x40010048,0xffffffff>;
    }
    namespace Nonefcswl_ctl{
        using Addr = Register::Address<0x4001004c,0xffffffff>;
    }
    namespace Nonefcswd_ctl{
        using Addr = Register::Address<0x40010050,0xffffffff>;
    }
}
