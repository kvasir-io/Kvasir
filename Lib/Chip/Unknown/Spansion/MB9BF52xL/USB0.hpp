#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneudcc{
        using Addr = Register::Address<0x40042120,0xffffff04>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RESUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HCONX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> STALCLREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RFBK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PWC; 
    }
    namespace Noneep0c{
        using Addr = Register::Address<0x40042124,0xfffffd80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PKS0; 
    }
    namespace Noneep1c{
        using Addr = Register::Address<0x40042128,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> NULE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> PKS; 
    }
    namespace Noneep2c{
        using Addr = Register::Address<0x4004212c,0xffff0180>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,13)> TYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DMAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> NULE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> STAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> PKS; 
    }
    namespace Noneep3c{
        using Addr = Register::Address<0x40042130,0xffffffff>;
    }
    namespace Noneep4c{
        using Addr = Register::Address<0x40042134,0xffffffff>;
    }
    namespace Noneep5c{
        using Addr = Register::Address<0x40042138,0xffffffff>;
    }
    namespace Nonetmsp{
        using Addr = Register::Address<0x4004213c,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> TMSP; 
    }
    namespace Noneudcs{
        using Addr = Register::Address<0x40042140,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SETP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CONF; 
    }
    namespace Noneudcie{
        using Addr = Register::Address<0x40042141,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SUSPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SOFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BRSTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WKUPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CONFN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CONFIE; 
    }
    namespace Noneep0is{
        using Addr = Register::Address<0x40042144,0xffff3bff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BFINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DRQIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DRQI; 
    }
    namespace Noneep0os{
        using Addr = Register::Address<0x40042148,0xffff1980>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BFINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DRQOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DRQO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SPK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> SIZE; 
    }
    namespace Noneep1s{
        using Addr = Register::Address<0x4004214c,0xffff1000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BFINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DRQIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SPK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> SIZE; 
    }
    namespace Noneep2s{
        using Addr = Register::Address<0x40042150,0xffff1180>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BFINI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DRQIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SPKIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SPK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> SIZE; 
    }
    namespace Noneep3s{
        using Addr = Register::Address<0x40042154,0xffffffff>;
    }
    namespace Noneep4s{
        using Addr = Register::Address<0x40042158,0xffffffff>;
    }
    namespace Noneep5s{
        using Addr = Register::Address<0x4004215c,0xffffffff>;
    }
    namespace Noneep0dt{
        using Addr = Register::Address<0x40042160,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BFDT; 
    }
    namespace Noneep1dt{
        using Addr = Register::Address<0x40042164,0xffffffff>;
    }
    namespace Noneep2dt{
        using Addr = Register::Address<0x40042168,0xffffffff>;
    }
    namespace Noneep3dt{
        using Addr = Register::Address<0x4004216c,0xffffffff>;
    }
    namespace Noneep4dt{
        using Addr = Register::Address<0x40042170,0xffffffff>;
    }
    namespace Noneep5dt{
        using Addr = Register::Address<0x40042174,0xffffffff>;
    }
    namespace Nonehcnt{
        using Addr = Register::Address<0x40042100,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> SOFSTEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CANCEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RETRY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RWKIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> URIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMPIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CNNIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFIRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> URST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HOST; 
    }
    namespace Nonehirq{
        using Addr = Register::Address<0x40042104,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCAN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RWKIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> URIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMPIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CNNIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DIRQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFIRQ; 
    }
    namespace Noneherr{
        using Addr = Register::Address<0x40042105,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LSTSOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TGERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STUFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> HS; 
    }
    namespace Nonehstate{
        using Addr = Register::Address<0x40042108,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ALIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SOFBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSTAT; 
    }
    namespace Nonehfcomp{
        using Addr = Register::Address<0x40042109,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FRAMECOMP; 
    }
    namespace Nonehrtimer{
        using Addr = Register::Address<0x4004210c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> RTIMER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RTIMER0; 
    }
    namespace Nonehrtimer2{
        using Addr = Register::Address<0x40042110,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> RTIMER2; 
    }
    namespace Nonehadr{
        using Addr = Register::Address<0x40042111,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> ADDRESS; 
    }
    namespace Noneheof{
        using Addr = Register::Address<0x40042114,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> EOF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EOF0; 
    }
    namespace Nonehframe{
        using Addr = Register::Address<0x40042118,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> FRAME1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FRAME0; 
    }
    namespace Nonehtoken{
        using Addr = Register::Address<0x4004211c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TGGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> TKNEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> ENDPT; 
    }
}
