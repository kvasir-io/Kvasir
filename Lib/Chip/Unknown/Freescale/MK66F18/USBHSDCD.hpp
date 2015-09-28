#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace USBHSDCD_control{
        using Addr = Register::Address<0x400a3000,0xfcfcfefe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> BC12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SR; 
    }
    namespace USBHSDCD_clock{
        using Addr = Register::Address<0x400a3004,0xfffff002>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLOCK_UNIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,2)> CLOCK_SPEED; 
    }
    namespace USBHSDCD_status{
        using Addr = Register::Address<0x400a3008,0xff80ffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> SEQ_RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> SEQ_STAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ACTIVE; 
    }
    namespace USBHSDCD_timer0{
        using Addr = Register::Address<0x400a3010,0xfc00f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> TUNITCON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> TSEQ_INIT; 
    }
    namespace USBHSDCD_timer1{
        using Addr = Register::Address<0x400a3014,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TVDPSRC_ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> TDCD_DBNC; 
    }
    namespace USBHSDCD_timer2_bc11{
        using Addr = Register::Address<0x400a3018,0xfc00fff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CHECK_DM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> TVDPSRC_CON; 
    }
    namespace USBHSDCD_timer2_bc12{
        using Addr = Register::Address<0x400a3018,0xfc00fc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> TVDMSRC_ON; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,16)> TWAIT_AFTER_PRD; 
    }
}
