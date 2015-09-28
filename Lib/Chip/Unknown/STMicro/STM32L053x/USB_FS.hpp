#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneep0r{
        using Addr = Register::Address<0x40005c00,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DTOG_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> STAT_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_KIND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DTOG_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> STAT_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EA; 
    }
    namespace Noneep1r{
        using Addr = Register::Address<0x40005c04,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DTOG_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> STAT_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_KIND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DTOG_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> STAT_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EA; 
    }
    namespace Noneep2r{
        using Addr = Register::Address<0x40005c08,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DTOG_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> STAT_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_KIND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DTOG_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> STAT_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EA; 
    }
    namespace Noneep3r{
        using Addr = Register::Address<0x40005c0c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DTOG_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> STAT_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_KIND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DTOG_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> STAT_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EA; 
    }
    namespace Noneep4r{
        using Addr = Register::Address<0x40005c10,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DTOG_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> STAT_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_KIND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DTOG_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> STAT_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EA; 
    }
    namespace Noneep5r{
        using Addr = Register::Address<0x40005c14,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DTOG_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> STAT_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_KIND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DTOG_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> STAT_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EA; 
    }
    namespace Noneep6r{
        using Addr = Register::Address<0x40005c18,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DTOG_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> STAT_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_KIND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DTOG_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> STAT_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EA; 
    }
    namespace Noneep7r{
        using Addr = Register::Address<0x40005c1c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DTOG_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> STAT_RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EPTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> EP_KIND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CTR_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DTOG_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> STAT_TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EA; 
    }
    namespace Nonecntr{
        using Addr = Register::Address<0x40005c40,0xffff0040>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PMAOVRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WKUPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SUSPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RESETM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SOFM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ESOFM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> L1REQM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> L1RESUME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RESUME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LPMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PDWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRES; 
    }
    namespace Noneistr{
        using Addr = Register::Address<0x40005c44,0xffff0060>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PMAOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> WKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ESOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> L1REQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> EP_ID; 
    }
    namespace Nonefnr{
        using Addr = Register::Address<0x40005c48,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RXDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RXDM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> LCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11)> LSOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> FN; 
    }
    namespace Nonedaddr{
        using Addr = Register::Address<0x40005c4c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> ADD; 
    }
    namespace Nonebtable{
        using Addr = Register::Address<0x40005c50,0xffff0007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,3)> BTABLE; 
    }
    namespace Nonelpmcsr{
        using Addr = Register::Address<0x40005c54,0xffffff04>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> BESL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REMWAKE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LPMACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LPMEN; 
    }
    namespace Nonebcdr{
        using Addr = Register::Address<0x40005c58,0xffff7f00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DPPU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PS2DET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DCDET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DCDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BCDEN; 
    }
}
