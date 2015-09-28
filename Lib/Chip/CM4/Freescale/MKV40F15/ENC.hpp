#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ENC_ctrl{
        using Addr = Register::Address<0x40055000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMPIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> XNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> XIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> XIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> XIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> REV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SWIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> HIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> HIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> HIRQ; 
    }
    namespace ENC_filt{
        using Addr = Register::Address<0x40055002,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FILT_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> FILT_CNT; 
    }
    namespace ENC_wtr{
        using Addr = Register::Address<0x40055004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WDOG; 
    }
    namespace ENC_posd{
        using Addr = Register::Address<0x40055006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> POSD; 
    }
    namespace ENC_posdh{
        using Addr = Register::Address<0x40055008,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> POSDH; 
    }
    namespace ENC_rev{
        using Addr = Register::Address<0x4005500a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REV; 
    }
    namespace ENC_revh{
        using Addr = Register::Address<0x4005500c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> REVH; 
    }
    namespace ENC_upos{
        using Addr = Register::Address<0x4005500e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> POS; 
    }
    namespace ENC_lpos{
        using Addr = Register::Address<0x40055010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> POS; 
    }
    namespace ENC_uposh{
        using Addr = Register::Address<0x40055012,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> POSH; 
    }
    namespace ENC_lposh{
        using Addr = Register::Address<0x40055014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> POSH; 
    }
    namespace ENC_uinit{
        using Addr = Register::Address<0x40055016,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INIT; 
    }
    namespace ENC_linit{
        using Addr = Register::Address<0x40055018,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INIT; 
    }
    namespace ENC_imr{
        using Addr = Register::Address<0x4005501a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HOME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INDEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PHA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FHOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FIND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FPHB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FPHA; 
    }
    namespace ENC_tst{
        using Addr = Register::Address<0x4005501c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> TEST_COUNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> TEST_PERIOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> QDN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TEN; 
    }
    namespace ENC_ctrl2{
        using Addr = Register::Address<0x4005501e,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPDHLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> UPDPOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RUIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RUIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ROIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ROIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> REVMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OUTCTL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SABIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SABIRQ; 
    }
    namespace ENC_umod{
        using Addr = Register::Address<0x40055020,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace ENC_lmod{
        using Addr = Register::Address<0x40055022,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MOD; 
    }
    namespace ENC_ucomp{
        using Addr = Register::Address<0x40055024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COMP; 
    }
    namespace ENC_lcomp{
        using Addr = Register::Address<0x40055026,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> COMP; 
    }
}
