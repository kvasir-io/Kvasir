#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecfg{
        using Addr = Register::Address<0x40050000,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MONEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TIMEOUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MONCLKSTR; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x40050004,0xfcf000a0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSTPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1)> MSTSTATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTARBLOSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSTSTSTPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLVPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> SLVSTATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SLVNOTSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SLVIDX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> SLVSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SLVDESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MONRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MONOV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MONACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MONIDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EVENTTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SCLTIMEOUT; 
    }
    namespace Noneintenset{
        using Addr = Register::Address<0x40050008,0xfcf476ae>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSTPENDINGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTARBLOSSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSTSTSTPERREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLVPENDINGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SLVNOTSTREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SLVDESELEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MONRDYEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MONOVEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MONIDLEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EVENTTIMEOUTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SCLTIMEOUTEN; 
    }
    namespace Noneintenclr{
        using Addr = Register::Address<0x4005000c,0xfcf476ae>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSTPENDINGCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTARBLOSSCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSTSTSTPERRCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLVPENDINGCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SLVNOTSTRCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SLVDESELCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MONRDYCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MONOVCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MONIDLECLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EVENTTIMEOUTCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SCLTIMEOUTCLR; 
    }
    namespace Nonetimeout{
        using Addr = Register::Address<0x40050010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TOMIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,4)> TO; 
    }
    namespace Noneclkdiv{
        using Addr = Register::Address<0x40050014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DIVVAL; 
    }
    namespace Noneintstat{
        using Addr = Register::Address<0x40050018,0xfcf476ae>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSTPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MSTARBLOSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MSTSTSTPERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SLVPENDING; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> SLVNOTSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> SLVDESEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MONRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MONOV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MONIDLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> EVENTTIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> SCLTIMEOUT; 
    }
    namespace Nonemstctl{
        using Addr = Register::Address<0x40050020,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MSTCONTINUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MSTSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MSTSTOP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MSTDMA; 
    }
    namespace Nonemsttime{
        using Addr = Register::Address<0x40050024,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> MSTSCLLOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> MSTSCLHIGH; 
    }
    namespace Nonemstdat{
        using Addr = Register::Address<0x40050028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace Noneslvctl{
        using Addr = Register::Address<0x40050040,0xfffffff4>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SLVCONTINUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SLVNACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SLVDMA; 
    }
    namespace Noneslvdat{
        using Addr = Register::Address<0x40050044,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace Noneslvadr0{
        using Addr = Register::Address<0x40050048,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SADISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> SLVADR; 
    }
    namespace Noneslvadr1{
        using Addr = Register::Address<0x4005004c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SADISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> SLVADR; 
    }
    namespace Noneslvadr2{
        using Addr = Register::Address<0x40050050,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SADISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> SLVADR; 
    }
    namespace Noneslvadr3{
        using Addr = Register::Address<0x40050054,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SADISABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> SLVADR; 
    }
    namespace Noneslvqual0{
        using Addr = Register::Address<0x40050058,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> QUALMODE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> SLVQUAL0; 
    }
    namespace Nonemonrxdat{
        using Addr = Register::Address<0x40050080,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MONRXDAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MONSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MONRESTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MONNACK; 
    }
}
