#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneadcr{
        using Addr = Register::Address<0x40027001,0xffffff10>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PCIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMPIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVRIE; 
    }
    namespace Noneadsr{
        using Addr = Register::Address<0x40027000,0xffffff38>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FDAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCNS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PCS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SCS; 
    }
    namespace Nonesccr{
        using Addr = Register::Address<0x40027009,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SEMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SFUL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SOVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SFCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SSTR; 
    }
    namespace Nonesfns{
        using Addr = Register::Address<0x40027008,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SFS; 
    }
    namespace Nonescfd{
        using Addr = Register::Address<0x4002700c,0x000fece0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> SD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SC; 
    }
    namespace Nonescis3{
        using Addr = Register::Address<0x40027011,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AN31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AN30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AN29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AN28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AN27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AN26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AN25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AN24; 
    }
    namespace Nonescis2{
        using Addr = Register::Address<0x40027010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AN23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AN22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AN21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AN20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AN19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AN18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AN17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AN16; 
    }
    namespace Nonescis1{
        using Addr = Register::Address<0x40027015,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AN8; 
    }
    namespace Nonescis0{
        using Addr = Register::Address<0x40027014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> AN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> AN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> AN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> AN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AN0; 
    }
    namespace Nonepfns{
        using Addr = Register::Address<0x40027018,0xffffffcc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> TEST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PFS; 
    }
    namespace Nonepccr{
        using Addr = Register::Address<0x40027019,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PEMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PFUL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> POVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PFCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ESCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PSTR; 
    }
    namespace Nonepcfd{
        using Addr = Register::Address<0x4002701c,0x000fe8e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> RS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> PC; 
    }
    namespace Nonepcis{
        using Addr = Register::Address<0x40027020,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> P2A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> P1A; 
    }
    namespace Nonecmpcr{
        using Addr = Register::Address<0x40027024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CMPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CMD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CMD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> CCH; 
    }
    namespace Nonecmpd{
        using Addr = Register::Address<0x40027026,0xffff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> CMAD; 
    }
    namespace Noneadss3{
        using Addr = Register::Address<0x40027029,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TS31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TS30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TS29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TS28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TS27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TS26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TS25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TS24; 
    }
    namespace Noneadss2{
        using Addr = Register::Address<0x40027028,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TS23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TS22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TS21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TS20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TS19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TS18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TS17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TS16; 
    }
    namespace Noneadss1{
        using Addr = Register::Address<0x4002702d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TS15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TS14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TS13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TS12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TS11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TS10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TS9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TS8; 
    }
    namespace Noneadss0{
        using Addr = Register::Address<0x4002702c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TS7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TS6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TS5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TS0; 
    }
    namespace Noneadst1{
        using Addr = Register::Address<0x40027030,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> STX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ST1; 
    }
    namespace Noneadst0{
        using Addr = Register::Address<0x40027031,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> STX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> ST0; 
    }
    namespace Noneadct{
        using Addr = Register::Address<0x40027034,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CT; 
    }
    namespace Noneprtsl{
        using Addr = Register::Address<0x40027038,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PRTSL; 
    }
    namespace Nonesctsl{
        using Addr = Register::Address<0x40027039,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> SCTSL; 
    }
    namespace Noneadcen{
        using Addr = Register::Address<0x4002703c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> READY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ENBL; 
    }
}
