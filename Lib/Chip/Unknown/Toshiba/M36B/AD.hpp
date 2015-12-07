#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter (AD)
    namespace Noneclk{    ///<AD Conversion Clock Setting Register
        using Addr = Register::Address<0x40050000,0xffffff08,0,unsigned>;
        ///ADCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> adclk{}; 
        namespace AdclkValC{
        }
        ///ADSH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> adsh{}; 
        namespace AdshValC{
        }
    }
    namespace Nonemod0{    ///<AD Mode Control Register 0
        using Addr = Register::Address<0x40050004,0xfffffffc,0,unsigned>;
        ///ADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ads{}; 
        namespace AdsValC{
        }
        ///HPADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hpads{}; 
        namespace HpadsValC{
        }
    }
    namespace Nonemod1{    ///<AD Mode Control Register 1
        using Addr = Register::Address<0x40050008,0xffffff10,0,unsigned>;
        ///ADHWE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adhwe{}; 
        namespace AdhweValC{
        }
        ///ADHWS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adhws{}; 
        namespace AdhwsValC{
        }
        ///HPADHWE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hpadhwe{}; 
        namespace HpadhweValC{
        }
        ///HPADHWS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hpadhws{}; 
        namespace HpadhwsValC{
        }
        ///RCUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rcut{}; 
        namespace RcutValC{
        }
        ///I2AD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> i2ad{}; 
        namespace I2adValC{
        }
        ///DACON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dacon{}; 
        namespace DaconValC{
        }
    }
    namespace Nonemod2{    ///<AD Mode Control Register 2
        using Addr = Register::Address<0x4005000c,0xffffff00,0,unsigned>;
        ///ADCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> adch{}; 
        namespace AdchValC{
        }
        ///HPADCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpadch{}; 
        namespace HpadchValC{
        }
    }
    namespace Nonemod3{    ///<AD Mode Control Register 3
        using Addr = Register::Address<0x40050010,0xffffff8c,0,unsigned>;
        ///SCAN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scan{}; 
        namespace ScanValC{
        }
        ///REPEAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> repeat{}; 
        namespace RepeatValC{
        }
        ///ITM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> itm{}; 
        namespace ItmValC{
        }
    }
    namespace Nonemod4{    ///<AD Mode Control Register 4
        using Addr = Register::Address<0x40050014,0xffffff00,0,unsigned>;
        ///SCANSTA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> scansta{}; 
        namespace ScanstaValC{
        }
        ///SCANAREA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> scanarea{}; 
        namespace ScanareaValC{
        }
    }
    namespace Nonemod5{    ///<AD Mode Control Register 5
        using Addr = Register::Address<0x40050018,0xfffffff0,0,unsigned>;
        ///ADBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adbf{}; 
        namespace AdbfValC{
        }
        ///EOCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eocf{}; 
        namespace EocfValC{
        }
        ///HPADBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hpadbf{}; 
        namespace HpadbfValC{
        }
        ///HPEOCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hpeocf{}; 
        namespace HpeocfValC{
        }
    }
    namespace Nonemod6{    ///<AD Mode Control Register 6
        using Addr = Register::Address<0x4005001c,0xfffffffc,0,unsigned>;
        ///ADRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> adrst{}; 
        namespace AdrstValC{
        }
    }
    namespace Nonecmpcr0{    ///<AD Monitoring Setting Register 0
        using Addr = Register::Address<0x40050024,0xfffff040,0,unsigned>;
        ///AINS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ains0{}; 
        namespace Ains0ValC{
        }
        ///ADBIG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adbig0{}; 
        namespace Adbig0ValC{
        }
        ///CMPCOND0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpcond0{}; 
        namespace Cmpcond0ValC{
        }
        ///CMP0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmp0en{}; 
        namespace Cmp0enValC{
        }
        ///CMPCMT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cmpcmt0{}; 
        namespace Cmpcmt0ValC{
        }
    }
    namespace Nonecmpcr1{    ///<AD Monitoring Setting Register 1
        using Addr = Register::Address<0x40050028,0xfffff040,0,unsigned>;
        ///AINS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ains1{}; 
        namespace Ains1ValC{
        }
        ///ADBIG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adbig1{}; 
        namespace Adbig1ValC{
        }
        ///CMPCOND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpcond1{}; 
        namespace Cmpcond1ValC{
        }
        ///CMP1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmp1en{}; 
        namespace Cmp1enValC{
        }
        ///CMPCMT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cmpcmt1{}; 
        namespace Cmpcmt1ValC{
        }
    }
    namespace Nonecmp0{    ///<AD Conversion Result Comparison Register 0
        using Addr = Register::Address<0x4005002c,0xfffff000,0,unsigned>;
        ///AD0CMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ad0cmp{}; 
        namespace Ad0cmpValC{
        }
    }
    namespace Nonecmp1{    ///<AD Conversion Result Comparison Register 1
        using Addr = Register::Address<0x40050030,0xfffff000,0,unsigned>;
        ///AD1CMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ad1cmp{}; 
        namespace Ad1cmpValC{
        }
    }
    namespace Nonereg00{    ///<AD Conversion Result Register 00
        using Addr = Register::Address<0x40050034,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg01{    ///<AD Conversion Result Register 01
        using Addr = Register::Address<0x40050038,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg02{    ///<AD Conversion Result Register 02
        using Addr = Register::Address<0x4005003c,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg03{    ///<AD Conversion Result Register 03
        using Addr = Register::Address<0x40050040,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg04{    ///<AD Conversion Result Register 04
        using Addr = Register::Address<0x40050044,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg05{    ///<AD Conversion Result Register 05
        using Addr = Register::Address<0x40050048,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg06{    ///<AD Conversion Result Register 06
        using Addr = Register::Address<0x4005004c,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg07{    ///<AD Conversion Result Register 07
        using Addr = Register::Address<0x40050050,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg08{    ///<AD Conversion Result Register 08
        using Addr = Register::Address<0x40050054,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg09{    ///<AD Conversion Result Register 09
        using Addr = Register::Address<0x40050058,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg10{    ///<AD Conversion Result Register 10
        using Addr = Register::Address<0x4005005c,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg11{    ///<AD Conversion Result Register 11
        using Addr = Register::Address<0x40050060,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg12{    ///<AD Conversion Result Register 12
        using Addr = Register::Address<0x40050064,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg13{    ///<AD Conversion Result Register 13
        using Addr = Register::Address<0x40050068,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg14{    ///<AD Conversion Result Register 14
        using Addr = Register::Address<0x4005006c,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Nonereg15{    ///<AD Conversion Result Register 15
        using Addr = Register::Address<0x40050070,0x000cc000,0,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
        namespace AdrValC{
        }
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adrf{}; 
        namespace AdrfValC{
        }
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrf{}; 
        namespace AdovrfValC{
        }
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adrfMir{}; 
        namespace AdrfmirValC{
        }
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrfMir{}; 
        namespace AdovrfmirValC{
        }
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adrMir{}; 
        namespace AdrmirValC{
        }
    }
    namespace Noneregsp{    ///<AD Conversion Result Register SP
        using Addr = Register::Address<0x40050074,0x000cc000,0,unsigned>;
        ///ADSPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adspr{}; 
        namespace AdsprValC{
        }
        ///ADSPRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> adsprf{}; 
        namespace AdsprfValC{
        }
        ///ADOVRSPF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adovrspf{}; 
        namespace AdovrspfValC{
        }
        ///ADSPRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adsprfMir{}; 
        namespace AdsprfmirValC{
        }
        ///ADOVRSPF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adovrspfMir{}; 
        namespace AdovrspfmirValC{
        }
        ///ADSPR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> adsprMir{}; 
        namespace AdsprmirValC{
        }
    }
}
