#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter (AD)
    namespace Noneclk{    ///<AD Conversion Clock Setting Register
        using Addr = Register::Address<0x40050000,0xffffff08,0,unsigned>;
        ///ADCLK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> adclk{}; 
        ///ADSH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> adsh{}; 
    }
    namespace Nonemod0{    ///<AD Mode Control Register 0
        using Addr = Register::Address<0x40050004,0xfffffffc,0,unsigned>;
        ///ADS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ads{}; 
        ///HPADS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hpads{}; 
    }
    namespace Nonemod1{    ///<AD Mode Control Register 1
        using Addr = Register::Address<0x40050008,0xffffff10,0,unsigned>;
        ///ADHWE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adhwe{}; 
        ///ADHWS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adhws{}; 
        ///HPADHWE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hpadhwe{}; 
        ///HPADHWS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hpadhws{}; 
        ///RCUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rcut{}; 
        ///I2AD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2ad{}; 
        ///DACON
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dacon{}; 
    }
    namespace Nonemod2{    ///<AD Mode Control Register 2
        using Addr = Register::Address<0x4005000c,0xffffff00,0,unsigned>;
        ///ADCH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> adch{}; 
        ///HPADCH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpadch{}; 
    }
    namespace Nonemod3{    ///<AD Mode Control Register 3
        using Addr = Register::Address<0x40050010,0xffffff8c,0,unsigned>;
        ///SCAN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scan{}; 
        ///REPEAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> repeat{}; 
        ///ITM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> itm{}; 
    }
    namespace Nonemod4{    ///<AD Mode Control Register 4
        using Addr = Register::Address<0x40050014,0xffffff00,0,unsigned>;
        ///SCANSTA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> scansta{}; 
        ///SCANAREA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> scanarea{}; 
    }
    namespace Nonemod5{    ///<AD Mode Control Register 5
        using Addr = Register::Address<0x40050018,0xfffffff0,0,unsigned>;
        ///ADBF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adbf{}; 
        ///EOCF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eocf{}; 
        ///HPADBF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hpadbf{}; 
        ///HPEOCF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hpeocf{}; 
    }
    namespace Nonemod6{    ///<AD Mode Control Register 6
        using Addr = Register::Address<0x4005001c,0xfffffffc,0,unsigned>;
        ///ADRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> adrst{}; 
    }
    namespace Nonecmpcr0{    ///<AD Monitoring Setting Register 0
        using Addr = Register::Address<0x40050024,0xfffff040,0,unsigned>;
        ///AINS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ains0{}; 
        ///ADBIG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adbig0{}; 
        ///CMPCOND0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpcond0{}; 
        ///CMP0EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmp0en{}; 
        ///CMPCMT0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cmpcmt0{}; 
    }
    namespace Nonecmpcr1{    ///<AD Monitoring Setting Register 1
        using Addr = Register::Address<0x40050028,0xfffff040,0,unsigned>;
        ///AINS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ains1{}; 
        ///ADBIG1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adbig1{}; 
        ///CMPCOND1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpcond1{}; 
        ///CMP1EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmp1en{}; 
        ///CMPCMT1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cmpcmt1{}; 
    }
    namespace Nonecmp0{    ///<AD Conversion Result Comparison Register 0
        using Addr = Register::Address<0x4005002c,0xfffff000,0,unsigned>;
        ///AD0CMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ad0cmp{}; 
    }
    namespace Nonecmp1{    ///<AD Conversion Result Comparison Register 1
        using Addr = Register::Address<0x40050030,0xfffff000,0,unsigned>;
        ///AD1CMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ad1cmp{}; 
    }
    namespace Nonereg00{    ///<AD Conversion Result Register 00
        using Addr = Register::Address<0x40050034,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///_ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adr{}; 
    }
    namespace Nonereg01{    ///<AD Conversion Result Register 01
        using Addr = Register::Address<0x40050038,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///_ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adr{}; 
    }
    namespace Nonereg02{    ///<AD Conversion Result Register 02
        using Addr = Register::Address<0x4005003c,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///_ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adr{}; 
    }
    namespace Nonereg03{    ///<AD Conversion Result Register 03
        using Addr = Register::Address<0x40050040,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///_ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adr{}; 
    }
    namespace Nonereg04{    ///<AD Conversion Result Register 04
        using Addr = Register::Address<0x40050044,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///_ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adr{}; 
    }
    namespace Nonereg05{    ///<AD Conversion Result Register 05
        using Addr = Register::Address<0x40050048,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///_ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adr{}; 
    }
    namespace Nonereg06{    ///<AD Conversion Result Register 06
        using Addr = Register::Address<0x4005004c,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///_ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adr{}; 
    }
    namespace Nonereg07{    ///<AD Conversion Result Register 07
        using Addr = Register::Address<0x40050050,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///_ADOVRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///_ADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adr{}; 
    }
    namespace Noneregsp{    ///<AD Conversion Result Register SP
        using Addr = Register::Address<0x40050074,0x000cc000,0,unsigned>;
        ///ADSPR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adspr{}; 
        ///ADSPRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adsprf{}; 
        ///ADOVRSPF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrspf{}; 
        ///_ADSPRF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adsprf{}; 
        ///_ADOVRSPF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrspf{}; 
        ///_ADSPR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adspr{}; 
    }
}
