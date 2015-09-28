#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecon{
        using Addr = Register::Address<0x400b8000,0x1fe0e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CENTER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> POLA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DISUP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RUN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CENTER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POLA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DISUP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RUN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CENTER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> POLA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DTE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DISUP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> INVBDC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ACMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DCMODE; 
    }
    namespace Nonecon_set{
        using Addr = Register::Address<0x400b8004,0x1fe0e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CENTER0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> POLA0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTE0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DISUP0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RUN1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CENTER1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POLA1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTE1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DISUP1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RUN2_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CENTER2_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> POLA2_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DTE2_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DISUP2_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> INVBDC_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ACMODE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DCMODE_SET; 
    }
    namespace Nonecon_clr{
        using Addr = Register::Address<0x400b8008,0x1fe0e0e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RUN0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CENTER0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> POLA0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DTE0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DISUP0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RUN1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CENTER1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POLA1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DTE1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> DISUP1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RUN2_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CENTER2_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> POLA2_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> DTE2_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> DISUP2_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> INVBDC_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ACMOD_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DCMODE_CLR; 
    }
    namespace Nonecapcon{
        using Addr = Register::Address<0x400b800c,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAP0MCI0_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAP0MCI0_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAP0MCI1_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAP0MCI1_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAP0MCI2_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAP0MCI2_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAP1MCI0_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAP1MCI0_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAP1MCI1_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAP1MCI1_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAP1MCI2_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAP1MCI2_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAP2MCI0_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAP2MCI0_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAP2MCI1_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAP2MCI1_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CAP2MCI2_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CAP2MCI2_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RT2; 
    }
    namespace Nonecapcon_set{
        using Addr = Register::Address<0x400b8010,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAP0MCI0_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAP0MCI0_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAP0MCI1_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAP0MCI1_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAP0MCI2_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAP0MCI2_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAP1MCI0_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAP1MCI0_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAP1MCI1_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAP1MCI1_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAP1MCI2_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAP1MCI2_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAP2MCI0_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAP2MCI0_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAP2MCI1_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAP2MCI1_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CAP2MCI2_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CAP2MCI2_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RT0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RT1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RT2_SET; 
    }
    namespace Nonecapcon_clr{
        using Addr = Register::Address<0x400b8014,0xffe00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAP0MCI0_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAP0MCI0_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAP0MCI1_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAP0MCI1_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAP0MCI2_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CAP0MCI2_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAP1MCI0_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CAP1MCI0_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CAP1MCI1_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CAP1MCI1_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CAP1MCI2_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CAP1MCI2_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CAP2MCI0_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CAP2MCI0_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CAP2MCI1_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CAP2MCI1_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CAP2MCI2_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CAP2MCI2_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> RT0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> RT1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RT2_CLR; 
    }
    namespace Nonetc0{
        using Addr = Register::Address<0x400b8018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCTC; 
    }
    namespace Nonetc1{
        using Addr = Register::Address<0x400b801c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCTC; 
    }
    namespace Nonetc2{
        using Addr = Register::Address<0x400b8020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCTC; 
    }
    namespace Nonelim0{
        using Addr = Register::Address<0x400b8024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCLIM; 
    }
    namespace Nonelim1{
        using Addr = Register::Address<0x400b8028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCLIM; 
    }
    namespace Nonelim2{
        using Addr = Register::Address<0x400b802c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCLIM; 
    }
    namespace Nonemat0{
        using Addr = Register::Address<0x400b8030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCMAT; 
    }
    namespace Nonemat1{
        using Addr = Register::Address<0x400b8034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCMAT; 
    }
    namespace Nonemat2{
        using Addr = Register::Address<0x400b8038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MCMAT; 
    }
    namespace Nonedt{
        using Addr = Register::Address<0x400b803c,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> DT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,10)> DT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,20)> DT2; 
    }
    namespace Nonecp{
        using Addr = Register::Address<0x400b8040,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CCPA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CCPB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CCPA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CCPB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CCPA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CCPB2; 
    }
    namespace Nonecap0{
        using Addr = Register::Address<0x400b8044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CAP; 
    }
    namespace Nonecap1{
        using Addr = Register::Address<0x400b8048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CAP; 
    }
    namespace Nonecap2{
        using Addr = Register::Address<0x400b804c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CAP; 
    }
    namespace Noneinten{
        using Addr = Register::Address<0x400b8050,0xffff7888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ILIM0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IMAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ICAP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILIM1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IMAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICAP1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ILIM2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IMAT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ICAP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ABORT; 
    }
    namespace Noneinten_set{
        using Addr = Register::Address<0x400b8054,0xffff7188>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ILIM0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IMAT0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ICAP0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILIM1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IMAT1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICAP1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ILIM2_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IMAT2_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ICAP2_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ABORT_SET; 
    }
    namespace Noneinten_clr{
        using Addr = Register::Address<0x400b8058,0xffff7888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ILIM0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IMAT0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ICAP0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILIM1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IMAT1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICAP1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ILIM2_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IMAT2_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ICAP2_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ABORT_CLR; 
    }
    namespace Noneintf{
        using Addr = Register::Address<0x400b8068,0xffff7888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ILIM0_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IMAT0_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ICAP0_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILIM1_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IMAT1_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICAP1_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ILIM2_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IMAT2_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ICAP2_F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ABORT_F; 
    }
    namespace Noneintf_set{
        using Addr = Register::Address<0x400b806c,0xffff7888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ILIM0_F_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IMAT0_F_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ICAP0_F_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILIM1_F_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IMAT1_F_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICAP1_F_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ILIM2_F_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IMAT2_F_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ICAP2_F_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ABORT_F_SET; 
    }
    namespace Noneintf_clr{
        using Addr = Register::Address<0x400b8070,0xffff7888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ILIM0_F_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IMAT0_F_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ICAP0_F_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ILIM1_F_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IMAT1_F_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ICAP1_F_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ILIM2_F_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IMAT2_F_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ICAP2_F_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ABORT_F_CLR; 
    }
    namespace Nonecntcon{
        using Addr = Register::Address<0x400b805c,0x1ffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TC0MCI0_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TC0MCI0_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TC0MCI1_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TC0MCI1_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TC0MCI2_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TC0MCI2_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TC1MCI0_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TC1MCI0_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TC1MCI1_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TC1MCI1_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TC1MCI2_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TC1MCI2_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TC2MCI0_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TC2MCI0_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TC2MCI1_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TC2MCI1_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TC2MCI2_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TC2MCI2_FE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CNTR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CNTR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CNTR2; 
    }
    namespace Nonecntcon_set{
        using Addr = Register::Address<0x400b8060,0x1ffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TC0MCI0_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TC0MCI0_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TC0MCI1_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TC0MCI1_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TC0MCI2_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TC0MCI2_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TC1MCI0_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TC1MCI0_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TC1MCI1_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TC1MCI1_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TC1MCI2_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TC1MCI2_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TC2MCI0_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TC2MCI0_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TC2MCI1_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TC2MCI1_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TC2MCI2_RE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TC2MCI2_FE_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CNTR0_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CNTR1_SET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CNTR2_SET; 
    }
    namespace Nonecntcon_clr{
        using Addr = Register::Address<0x400b8064,0x1ffc0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TC0MCI0_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TC0MCI0_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TC0MCI1_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TC0MCI1_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TC0MCI2_RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TC0MCI2_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TC1MCI0_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TC1MCI0_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TC1MCI1_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TC1MCI1_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TC1MCI2_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TC1MCI2_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TC2MCI0_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TC2MCI0_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TC2MCI1_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TC2MCI1_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TC2MCI2_RE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> TC2MCI2_FE_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CNTR0_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CNTR1_CLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CNTR2_CLR; 
    }
    namespace Nonecap_clr{
        using Addr = Register::Address<0x400b8074,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CAP_CLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CAP_CLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAP_CLR2; 
    }
}
