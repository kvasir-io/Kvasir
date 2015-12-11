#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter (AD)
    namespace Noneclk{    ///<AD Conversion Clock Setting Register
        using Addr = Register::Address<0x40050000,0xffffff08,0,unsigned>;
        ///ADCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> adclk{}; 
        ///ADSH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> adsh{}; 
    }
    namespace Nonemod0{    ///<AD Mode Control Register 0
        using Addr = Register::Address<0x40050004,0xfffffffc,0,unsigned>;
        ///ADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ads{}; 
        ///HPADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hpads{}; 
    }
    namespace Nonemod1{    ///<AD Mode Control Register 1
        using Addr = Register::Address<0x40050008,0xffffff10,0,unsigned>;
        ///ADHWE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adhwe{}; 
        ///ADHWS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adhws{}; 
        ///HPADHWE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hpadhwe{}; 
        ///HPADHWS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hpadhws{}; 
        ///RCUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rcut{}; 
        ///I2AD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2ad{}; 
        ///VREFON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> vrefon{}; 
    }
    namespace Nonemod2{    ///<AD Mode Control Register 2
        using Addr = Register::Address<0x4005000c,0xffffff00,0,unsigned>;
        ///ADCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> adch{}; 
        ///HPADCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpadch{}; 
    }
    namespace Nonemod3{    ///<AD Mode Control Register 3
        using Addr = Register::Address<0x40050010,0xffffff8c,0,unsigned>;
        ///SCAN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scan{}; 
        ///REPEAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> repeat{}; 
        ///ITM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> itm{}; 
    }
    namespace Nonemod4{    ///<AD Mode Control Register 4
        using Addr = Register::Address<0x40050014,0xffffff00,0,unsigned>;
        ///SCANSTA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> scansta{}; 
        ///SCANAREA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> scanarea{}; 
    }
    namespace Nonemod5{    ///<AD Mode Control Register 5
        using Addr = Register::Address<0x40050018,0xfffffff0,0,unsigned>;
        ///ADBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adbf{}; 
        ///EOCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eocf{}; 
        ///HPADBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hpadbf{}; 
        ///HPEOCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hpeocf{}; 
    }
    namespace Nonemod6{    ///<AD Mode Control Register 6
        using Addr = Register::Address<0x4005001c,0xfffffffc,0,unsigned>;
        ///ADRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> adrst{}; 
    }
    namespace Nonemod7{    ///<AD Mode Control Register 7
        using Addr = Register::Address<0x40050020,0xfffffffc,0,unsigned>;
        ///INTADDMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intaddma{}; 
        ///INTADHPDMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intadhpdma{}; 
    }
    namespace Nonecmpcr0{    ///<AD Monitoring Setting Register 0
        using Addr = Register::Address<0x40050024,0xfffff060,0,unsigned>;
        ///REGS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> regs0{}; 
        ///ADBIG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adbig0{}; 
        ///CMP0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmp0en{}; 
        ///CMPCNT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cmpcnt0{}; 
    }
    namespace Nonecmpcr1{    ///<AD Monitoring Setting Register 1
        using Addr = Register::Address<0x40050028,0xfffff060,0,unsigned>;
        ///REGS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> regs1{}; 
        ///ADBIG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adbig1{}; 
        ///CMP1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmp1en{}; 
        ///CMPCNT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cmpcnt1{}; 
    }
    namespace Nonecmp0{    ///<AD Conversion Result Comparison Register 0
        using Addr = Register::Address<0x4005002c,0xfffff000,0,unsigned>;
        ///AD0CMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ad0cmp{}; 
    }
    namespace Nonecmp1{    ///<AD Conversion Result Comparison Register 1
        using Addr = Register::Address<0x40050030,0xfffff000,0,unsigned>;
        ///AD1CMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ad1cmp{}; 
    }
    namespace Nonereg00{    ///<AD Conversion Result Register 00
        using Addr = Register::Address<0x40050034,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg01{    ///<AD Conversion Result Register 01
        using Addr = Register::Address<0x40050038,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg02{    ///<AD Conversion Result Register 02
        using Addr = Register::Address<0x4005003c,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg03{    ///<AD Conversion Result Register 03
        using Addr = Register::Address<0x40050040,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg04{    ///<AD Conversion Result Register 04
        using Addr = Register::Address<0x40050044,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg05{    ///<AD Conversion Result Register 05
        using Addr = Register::Address<0x40050048,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg06{    ///<AD Conversion Result Register 06
        using Addr = Register::Address<0x4005004c,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg07{    ///<AD Conversion Result Register 07
        using Addr = Register::Address<0x40050050,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg08{    ///<AD Conversion Result Register 08
        using Addr = Register::Address<0x40050054,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg09{    ///<AD Conversion Result Register 09
        using Addr = Register::Address<0x40050058,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg10{    ///<AD Conversion Result Register 10
        using Addr = Register::Address<0x4005005c,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Nonereg11{    ///<AD Conversion Result Register 11
        using Addr = Register::Address<0x40050060,0xffff8000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        ///ADPOSWF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> adposwf{}; 
    }
    namespace Noneregsp{    ///<AD Conversion Result Register SP
        using Addr = Register::Address<0x40050074,0xffffc000,0,unsigned>;
        ///ADRSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adrsp{}; 
        ///SPADRARF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spadrarf{}; 
        ///SPOVRA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spovra{}; 
    }
}
