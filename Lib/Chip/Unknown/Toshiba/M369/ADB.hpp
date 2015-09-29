#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter (AD)
    namespace Noneclk{    ///<AD Conversion Clock Setting Register
        using Addr = Register::Address<0x40051000,0xffffff08,0,unsigned>;
        ///ADCLK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> adclk{}; 
        ///ADSH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> adsh{}; 
    }
    namespace Nonemod0{    ///<AD Mode Control Register 0
        using Addr = Register::Address<0x40051004,0xfffffffc,0,unsigned>;
        ///ADS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ads{}; 
        ///HPADS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hpads{}; 
    }
    namespace Nonemod1{    ///<AD Mode Control Register 1
        using Addr = Register::Address<0x40051008,0xffffff10,0,unsigned>;
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
        using Addr = Register::Address<0x4005100c,0xffffff00,0,unsigned>;
        ///ADCH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> adch{}; 
        ///HPADCH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpadch{}; 
    }
    namespace Nonemod3{    ///<AD Mode Control Register 3
        using Addr = Register::Address<0x40051010,0xffffff8c,0,unsigned>;
        ///SCAN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scan{}; 
        ///REPEAT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> repeat{}; 
        ///ITM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> itm{}; 
    }
    namespace Nonemod4{    ///<AD Mode Control Register 4
        using Addr = Register::Address<0x40051014,0xffffff00,0,unsigned>;
        ///SCANSTA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> scansta{}; 
        ///SCANAREA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> scanarea{}; 
    }
    namespace Nonemod5{    ///<AD Mode Control Register 5
        using Addr = Register::Address<0x40051018,0xfffffff0,0,unsigned>;
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
        using Addr = Register::Address<0x4005101c,0xfffffffc,0,unsigned>;
        ///ADRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> adrst{}; 
    }
    namespace Nonecmpcr0{    ///<AD Monitoring Setting Register 0
        using Addr = Register::Address<0x40051024,0xfffff040,0,unsigned>;
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
        using Addr = Register::Address<0x40051028,0xfffff040,0,unsigned>;
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
        using Addr = Register::Address<0x4005102c,0xfffff000,0,unsigned>;
        ///AD0CMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ad0cmp{}; 
    }
    namespace Nonecmp1{    ///<AD Conversion Result Comparison Register 1
        using Addr = Register::Address<0x40051030,0xfffff000,0,unsigned>;
        ///AD1CMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ad1cmp{}; 
    }
    namespace Nonereg00{    ///<AD Conversion Result Register 00
        using Addr = Register::Address<0x40051034,0x000cc000,0,unsigned>;
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
        using Addr = Register::Address<0x40051038,0x000cc000,0,unsigned>;
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
        using Addr = Register::Address<0x4005103c,0x000cc000,0,unsigned>;
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
        using Addr = Register::Address<0x40051040,0x000cc000,0,unsigned>;
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
        using Addr = Register::Address<0x40051044,0x000cc000,0,unsigned>;
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
        using Addr = Register::Address<0x40051048,0x000cc000,0,unsigned>;
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
        using Addr = Register::Address<0x4005104c,0x000cc000,0,unsigned>;
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
        using Addr = Register::Address<0x40051050,0x000cc000,0,unsigned>;
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
    namespace Nonereg08{    ///<AD Conversion Result Register 08
        using Addr = Register::Address<0x40051054,0x000cc000,0,unsigned>;
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
    namespace Nonereg09{    ///<AD Conversion Result Register 09
        using Addr = Register::Address<0x40051058,0x000cc000,0,unsigned>;
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
    namespace Nonereg10{    ///<AD Conversion Result Register 10
        using Addr = Register::Address<0x4005105c,0x000cc000,0,unsigned>;
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
    namespace Nonereg11{    ///<AD Conversion Result Register 11
        using Addr = Register::Address<0x40051060,0x000cc000,0,unsigned>;
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
        using Addr = Register::Address<0x40051074,0x000cc000,0,unsigned>;
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
