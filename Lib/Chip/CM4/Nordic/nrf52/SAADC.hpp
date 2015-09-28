#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonetasks_start{
        using Addr = Register::Address<0x40007000,0xffffffff>;
    }
    namespace Nonetasks_sample{
        using Addr = Register::Address<0x40007004,0xffffffff>;
    }
    namespace Nonetasks_stop{
        using Addr = Register::Address<0x40007008,0xffffffff>;
    }
    namespace Nonetasks_calibrateoffset{
        using Addr = Register::Address<0x4000700c,0xffffffff>;
    }
    namespace Noneevents_started{
        using Addr = Register::Address<0x40007100,0xffffffff>;
    }
    namespace Noneevents_end{
        using Addr = Register::Address<0x40007104,0xffffffff>;
    }
    namespace Noneevents_done{
        using Addr = Register::Address<0x40007108,0xffffffff>;
    }
    namespace Noneevents_resultdone{
        using Addr = Register::Address<0x4000710c,0xffffffff>;
    }
    namespace Noneevents_calibratedone{
        using Addr = Register::Address<0x40007110,0xffffffff>;
    }
    namespace Noneevents_stopped{
        using Addr = Register::Address<0x40007114,0xffffffff>;
    }
    namespace Noneinten{
        using Addr = Register::Address<0x40007300,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RESULTDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CALIBRATEDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH0LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH0LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH1LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH1LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH2LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH2LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH3LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH3LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH4LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH4LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CH5LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CH5LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CH6LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CH6LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CH7LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CH7LIMITL; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40007304,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RESULTDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CALIBRATEDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH0LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH0LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH1LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH1LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH2LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH2LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH3LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH3LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH4LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH4LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CH5LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CH5LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CH6LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CH6LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CH7LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CH7LIMITL; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x40007308,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STARTED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RESULTDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CALIBRATEDONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STOPPED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH0LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH0LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH1LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH1LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH2LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH2LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH3LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH3LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH4LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH4LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CH5LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CH5LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CH6LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CH6LIMITL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CH7LIMITH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CH7LIMITL; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x40007400,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STATUS; 
    }
    namespace Noneenable{
        using Addr = Register::Address<0x40007500,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENABLE; 
    }
    namespace Noneresolution{
        using Addr = Register::Address<0x400075f0,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> VAL; 
    }
    namespace Noneoversample{
        using Addr = Register::Address<0x400075f4,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> OVERSAMPLE; 
    }
    namespace Nonesamplerate{
        using Addr = Register::Address<0x400075f8,0xffffe800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> CC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MODE; 
    }
}
