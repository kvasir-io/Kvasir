#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog-to-Digital Converter (AD)
    namespace AdClk{    ///<AD Conversion Clock Setting Register
        using Addr = Register::Address<0x40050000,0xffffff08,0x00000000,unsigned>;
        ///ADCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> adclk{}; 
        ///ADSH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> adsh{}; 
    }
    namespace AdMod0{    ///<AD Mode Control Register 0
        using Addr = Register::Address<0x40050004,0xfffffffc,0x00000000,unsigned>;
        ///ADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ads{}; 
        ///HPADS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hpads{}; 
    }
    namespace AdMod1{    ///<AD Mode Control Register 1
        using Addr = Register::Address<0x40050008,0xffffff10,0x00000000,unsigned>;
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
        ///DACON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dacon{}; 
    }
    namespace AdMod2{    ///<AD Mode Control Register 2
        using Addr = Register::Address<0x4005000c,0xffffff00,0x00000000,unsigned>;
        ///ADCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> adch{}; 
        ///HPADCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpadch{}; 
    }
    namespace AdMod3{    ///<AD Mode Control Register 3
        using Addr = Register::Address<0x40050010,0xffffff8c,0x00000000,unsigned>;
        ///SCAN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scan{}; 
        ///REPEAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> repeat{}; 
        ///ITM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> itm{}; 
    }
    namespace AdMod4{    ///<AD Mode Control Register 4
        using Addr = Register::Address<0x40050014,0xffffff00,0x00000000,unsigned>;
        ///SCANSTA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> scansta{}; 
        ///SCANAREA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> scanarea{}; 
    }
    namespace AdMod5{    ///<AD Mode Control Register 5
        using Addr = Register::Address<0x40050018,0xfffffff0,0x00000000,unsigned>;
        ///ADBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adbf{}; 
        ///EOCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eocf{}; 
        ///HPADBF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hpadbf{}; 
        ///HPEOCF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hpeocf{}; 
    }
    namespace AdMod6{    ///<AD Mode Control Register 6
        using Addr = Register::Address<0x4005001c,0xfffffffc,0x00000000,unsigned>;
        ///ADRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrst{}; 
    }
    namespace AdCmpcr0{    ///<AD Monitoring Setting Register 0
        using Addr = Register::Address<0x40050024,0xfffff040,0x00000000,unsigned>;
        ///AINS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ains0{}; 
        ///ADBIG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adbig0{}; 
        ///CMPCOND0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpcond0{}; 
        ///CMP0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmp0en{}; 
        ///CMPCMT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cmpcmt0{}; 
    }
    namespace AdCmpcr1{    ///<AD Monitoring Setting Register 1
        using Addr = Register::Address<0x40050028,0xfffff040,0x00000000,unsigned>;
        ///AINS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ains1{}; 
        ///ADBIG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adbig1{}; 
        ///CMPCOND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpcond1{}; 
        ///CMP1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmp1en{}; 
        ///CMPCMT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cmpcmt1{}; 
    }
    namespace AdCmp0{    ///<AD Conversion Result Comparison Register 0
        using Addr = Register::Address<0x4005002c,0xfffff000,0x00000000,unsigned>;
        ///AD0CMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ad0cmp{}; 
    }
    namespace AdCmp1{    ///<AD Conversion Result Comparison Register 1
        using Addr = Register::Address<0x40050030,0xfffff000,0x00000000,unsigned>;
        ///AD1CMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ad1cmp{}; 
    }
    namespace AdReg00{    ///<AD Conversion Result Register 00
        using Addr = Register::Address<0x40050034,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg01{    ///<AD Conversion Result Register 01
        using Addr = Register::Address<0x40050038,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg02{    ///<AD Conversion Result Register 02
        using Addr = Register::Address<0x4005003c,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg03{    ///<AD Conversion Result Register 03
        using Addr = Register::Address<0x40050040,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg04{    ///<AD Conversion Result Register 04
        using Addr = Register::Address<0x40050044,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg05{    ///<AD Conversion Result Register 05
        using Addr = Register::Address<0x40050048,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg06{    ///<AD Conversion Result Register 06
        using Addr = Register::Address<0x4005004c,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg07{    ///<AD Conversion Result Register 07
        using Addr = Register::Address<0x40050050,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg08{    ///<AD Conversion Result Register 08
        using Addr = Register::Address<0x40050054,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg09{    ///<AD Conversion Result Register 09
        using Addr = Register::Address<0x40050058,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg10{    ///<AD Conversion Result Register 10
        using Addr = Register::Address<0x4005005c,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg11{    ///<AD Conversion Result Register 11
        using Addr = Register::Address<0x40050060,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg12{    ///<AD Conversion Result Register 12
        using Addr = Register::Address<0x40050064,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg13{    ///<AD Conversion Result Register 13
        using Addr = Register::Address<0x40050068,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg14{    ///<AD Conversion Result Register 14
        using Addr = Register::Address<0x4005006c,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdReg15{    ///<AD Conversion Result Register 15
        using Addr = Register::Address<0x40050070,0x000cc000,0x00000000,unsigned>;
        ///ADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
        ///ADRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrf{}; 
        ///ADOVRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrf{}; 
        ///ADRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrfMir{}; 
        ///ADOVRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrfMir{}; 
        ///ADR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adrMir{}; 
    }
    namespace AdRegsp{    ///<AD Conversion Result Register SP
        using Addr = Register::Address<0x40050074,0x000cc000,0x00000000,unsigned>;
        ///ADSPR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adspr{}; 
        ///ADSPRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adsprf{}; 
        ///ADOVRSPF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrspf{}; 
        ///ADSPRF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adsprfMir{}; 
        ///ADOVRSPF_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adovrspfMir{}; 
        ///ADSPR_MIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adsprMir{}; 
    }
}
