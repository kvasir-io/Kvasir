#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x40016000,0x7ffc20e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOCALIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> JEOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JOVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ROVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> REFV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SLOWCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SBI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> JSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> RSYNC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> JDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> INIT; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x40016004,0xfe301088>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> RSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> RCONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> RCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> JSWSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> JEXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> JEXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> JDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> JCONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STARTCALIB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> CALIBCNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADON; 
    }
    namespace Noneisr{
        using Addr = Register::Address<0x40016008,0x7fff0fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> INITRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> STABIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RCIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> JCIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CALIBIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ROVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> REOCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> JOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> JEOCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EOCALF; 
    }
    namespace Noneclrisr{
        using Addr = Register::Address<0x4001600c,0xffffffea>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLRROVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLRJOVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLREOCALF; 
    }
    namespace Nonejchgr{
        using Addr = Register::Address<0x40016014,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> JCHG; 
    }
    namespace Noneconf0r{
        using Addr = Register::Address<0x40016020,0x338ff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> COMMON0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> SE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> GAIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> OFFSET0; 
    }
    namespace Noneconf1r{
        using Addr = Register::Address<0x40016024,0x338ff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> COMMON1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> SE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> GAIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> OFFSET1; 
    }
    namespace Noneconf2r{
        using Addr = Register::Address<0x40016028,0x338ff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> COMMON2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> SE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> GAIN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> OFFSET2; 
    }
    namespace Noneconfchr1{
        using Addr = Register::Address<0x40016040,0xcccccccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> CONFCH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> CONFCH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> CONFCH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> CONFCH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> CONFCH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CONFCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> CONFCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CONFCH0; 
    }
    namespace Noneconfchr2{
        using Addr = Register::Address<0x40016044,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CONFCH8; 
    }
    namespace Nonejdatar{
        using Addr = Register::Address<0x40016060,0xe1ff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,25)> JDATACH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA; 
    }
    namespace Nonerdatar{
        using Addr = Register::Address<0x40016064,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RDATA; 
    }
    namespace Nonejdata12r{
        using Addr = Register::Address<0x40016070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> JDATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA1; 
    }
    namespace Nonerdata12r{
        using Addr = Register::Address<0x40016074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RDATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RDATA1; 
    }
    namespace Nonejdata13r{
        using Addr = Register::Address<0x40016078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> JDATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA1; 
    }
    namespace Nonerdata13r{
        using Addr = Register::Address<0x4001607c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> RDATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> RDATA1; 
    }
}
