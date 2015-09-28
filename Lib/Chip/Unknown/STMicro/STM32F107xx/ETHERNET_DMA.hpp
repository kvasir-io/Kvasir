#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedmabmr{
        using Addr = Register::Address<0x40029000,0xfc000080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2)> DSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> PBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> RTPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,17)> RDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AAB; 
    }
    namespace Nonedmatpdr{
        using Addr = Register::Address<0x40029004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TPD; 
    }
    namespace Nonedmarpdr{
        using Addr = Register::Address<0x40029008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RPD; 
    }
    namespace Nonedmardlar{
        using Addr = Register::Address<0x4002900c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRL; 
    }
    namespace Nonedmatdlar{
        using Addr = Register::Address<0x40029010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> STL; 
    }
    namespace Nonedmasr{
        using Addr = Register::Address<0x40029014,0xc4001800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TPSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TJTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ROS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RBUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RPSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PWTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ETS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> RPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> TPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23)> EBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MMCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PMTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TSTS; 
    }
    namespace Nonedmaomr{
        using Addr = Register::Address<0x40029018,0xf8ce1f21>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FUGF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14)> TTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DFRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DTCEFD; 
    }
    namespace Nonedmaier{
        using Addr = Register::Address<0x4002901c,0xfffe1800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TPSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBUIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TJTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ROIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TUIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RBUIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RPSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RWTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ETIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AISE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NISE; 
    }
    namespace Nonedmamfbocr{
        using Addr = Register::Address<0x40029020,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> MFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OMFC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,17)> MFA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> OFOC; 
    }
    namespace Nonedmachtdr{
        using Addr = Register::Address<0x40029048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTDAP; 
    }
    namespace Nonedmachrdr{
        using Addr = Register::Address<0x4002904c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HRDAP; 
    }
    namespace Nonedmachtbar{
        using Addr = Register::Address<0x40029050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTBAP; 
    }
    namespace Nonedmachrbar{
        using Addr = Register::Address<0x40029054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HRBAP; 
    }
}
