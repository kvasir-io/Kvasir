#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemod{
        using Addr = Register::Address<0x40044000,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> LOM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RPM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TM; 
    }
    namespace Nonecmr{
        using Addr = Register::Address<0x40044004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RRB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CDO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SRR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STB2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STB3; 
    }
    namespace Nonegsr{
        using Addr = Register::Address<0x40044008,0x0000ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> RXERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> TXERR; 
    }
    namespace Noneicr{
        using Addr = Register::Address<0x4004400c,0x0000f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DOI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ALI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IDI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TI3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> ERRBIT4_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERRDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> ERRC1_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> ALCBIT; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x40044010,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DOIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> WUIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ALIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BEIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TIE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TIE3; 
    }
    namespace Nonebtr{
        using Addr = Register::Address<0x40044014,0xff003c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> BRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> SJW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> TESG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20)> TESG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> SAM; 
    }
    namespace Noneewl{
        using Addr = Register::Address<0x40044018,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EWL; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x4004401c,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RBS_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DOS_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TBS1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCS1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RS_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TS1_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ES_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BS_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RBS_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DOS_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TBS2_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TCS2_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RS_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TS2_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ES_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BS_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> RBS_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> DOS_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TBS3_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TCS3_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> RS_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TS3_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ES_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> BS_3; 
    }
    namespace Nonerfs{
        using Addr = Register::Address<0x40044020,0x3ff0f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> IDINDEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FF; 
    }
    namespace Nonerid{
        using Addr = Register::Address<0x40044024,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> ID; 
    }
    namespace Nonerda{
        using Addr = Register::Address<0x40044028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA4; 
    }
    namespace Nonerdb{
        using Addr = Register::Address<0x4004402c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA8; 
    }
    namespace Nonetfi1{
        using Addr = Register::Address<0x40044030,0x3ff0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FF; 
    }
    namespace Nonetfi2{
        using Addr = Register::Address<0x40044040,0x3ff0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FF; 
    }
    namespace Nonetfi3{
        using Addr = Register::Address<0x40044050,0x3ff0ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PRIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> DLC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> RTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> FF; 
    }
    namespace Nonetid1{
        using Addr = Register::Address<0x40044034,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> ID; 
    }
    namespace Nonetid2{
        using Addr = Register::Address<0x40044044,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> ID; 
    }
    namespace Nonetid3{
        using Addr = Register::Address<0x40044054,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> ID; 
    }
    namespace Nonetda1{
        using Addr = Register::Address<0x40044038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA4; 
    }
    namespace Nonetda2{
        using Addr = Register::Address<0x40044048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA4; 
    }
    namespace Nonetda3{
        using Addr = Register::Address<0x40044058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA4; 
    }
    namespace Nonetdb1{
        using Addr = Register::Address<0x4004403c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA8; 
    }
    namespace Nonetdb2{
        using Addr = Register::Address<0x4004404c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA8; 
    }
    namespace Nonetdb3{
        using Addr = Register::Address<0x4004405c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> DATA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> DATA8; 
    }
}
