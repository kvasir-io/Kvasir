#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ADC
    namespace NoneadcRst{    ///<ADC_RST
        using Addr = Register::Address<0x40010004,0xfffffffe,0,unsigned>;
        ///ADRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrst{}; 
    }
    namespace NoneadcConv{    ///<ADC_CONV
        using Addr = Register::Address<0x40010008,0xfff8f8fc,0,unsigned>;
        ///ADMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> admode{}; 
        ///ADSEQL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> adseql{}; 
        ///ADSUBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> adsubl{}; 
    }
    namespace NoneadcLst0{    ///<ADC_LST0
        using Addr = Register::Address<0x40010010,0xe0e0e0e0,0,unsigned>;
        ///ADSEQ0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> adseq0{}; 
        ///ADSEQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> adseq1{}; 
        ///ADSEQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> adseq2{}; 
        ///ADSEQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> adseq3{}; 
    }
    namespace NoneadcLst1{    ///<ADC_LST1
        using Addr = Register::Address<0x40010014,0xe0e0e0e0,0,unsigned>;
        ///ADSEQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> adseq4{}; 
        ///ADSEQ5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> adseq5{}; 
        ///ADSEQ6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> adseq6{}; 
        ///ADSEQ7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> adseq7{}; 
    }
    namespace NoneadcOfr0{    ///<ADC_OFR0
        using Addr = Register::Address<0x40010030,0xffff7000,0,unsigned>;
        ///ADOF0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adof0{}; 
        ///ADOFE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> adofe0{}; 
    }
    namespace NoneadcOfr1{    ///<ADC_OFR1
        using Addr = Register::Address<0x40010034,0xffff7000,0,unsigned>;
        ///ADOF1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adof1{}; 
        ///ADOFE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> adofe1{}; 
    }
    namespace NoneadcOfr2{    ///<ADC_OFR2
        using Addr = Register::Address<0x40010038,0xffff7000,0,unsigned>;
        ///ADOF2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adof2{}; 
        ///ADOFE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> adofe2{}; 
    }
    namespace NoneadcOfr3{    ///<ADC_OFR3
        using Addr = Register::Address<0x4001003c,0xffff7000,0,unsigned>;
        ///ADOF3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adof3{}; 
        ///ADOFE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> adofe3{}; 
    }
    namespace NoneadcOfr4{    ///<ADC_OFR4
        using Addr = Register::Address<0x40010040,0xffff7000,0,unsigned>;
        ///ADOF4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adof4{}; 
        ///ADOFE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> adofe4{}; 
    }
    namespace NoneadcOfr5{    ///<ADC_OFR5
        using Addr = Register::Address<0x40010044,0xffff7000,0,unsigned>;
        ///ADOF5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adof5{}; 
        ///ADOFE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> adofe5{}; 
    }
    namespace NoneadcOfr6{    ///<ADC_OFR6
        using Addr = Register::Address<0x40010048,0xffff7000,0,unsigned>;
        ///ADOF6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adof6{}; 
        ///ADOFE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> adofe6{}; 
    }
    namespace NoneadcOfr7{    ///<ADC_OFR7
        using Addr = Register::Address<0x4001004c,0xffff7000,0,unsigned>;
        ///ADOF7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adof7{}; 
        ///ADOFE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> adofe7{}; 
    }
    namespace NoneadcStr0{    ///<ADC_STR0
        using Addr = Register::Address<0x40010070,0xffffff00,0,unsigned>;
        ///ADST0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst0{}; 
    }
    namespace NoneadcStr1{    ///<ADC_STR1
        using Addr = Register::Address<0x40010074,0xffffff00,0,unsigned>;
        ///ADST1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst1{}; 
    }
    namespace NoneadcStr2{    ///<ADC_STR2
        using Addr = Register::Address<0x40010078,0xffffff00,0,unsigned>;
        ///ADST2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst2{}; 
    }
    namespace NoneadcStr3{    ///<ADC_STR3
        using Addr = Register::Address<0x4001007c,0xffffff00,0,unsigned>;
        ///ADST3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst3{}; 
    }
    namespace NoneadcStr4{    ///<ADC_STR4
        using Addr = Register::Address<0x40010080,0xffffff00,0,unsigned>;
        ///ADST4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst4{}; 
    }
    namespace NoneadcStr5{    ///<ADC_STR5
        using Addr = Register::Address<0x40010084,0xffffff00,0,unsigned>;
        ///ADST5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst5{}; 
    }
    namespace NoneadcStr6{    ///<ADC_STR6
        using Addr = Register::Address<0x40010088,0xffffff00,0,unsigned>;
        ///ADST6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst6{}; 
    }
    namespace NoneadcStr7{    ///<ADC_STR7
        using Addr = Register::Address<0x4001008c,0xffffff00,0,unsigned>;
        ///ADST7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst7{}; 
    }
    namespace NoneadcDr0{    ///<ADC_DR0
        using Addr = Register::Address<0x400100b0,0x7fff0000,0,unsigned>;
        ///ADD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add0{}; 
        ///ADVLD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld0{}; 
    }
    namespace NoneadcDr1{    ///<ADC_DR1
        using Addr = Register::Address<0x400100b4,0x7fff0000,0,unsigned>;
        ///ADD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add1{}; 
        ///ADVLD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld1{}; 
    }
    namespace NoneadcDr2{    ///<ADC_DR2
        using Addr = Register::Address<0x400100b8,0x7fff0000,0,unsigned>;
        ///ADD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add2{}; 
        ///ADVLD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld2{}; 
    }
    namespace NoneadcDr3{    ///<ADC_DR3
        using Addr = Register::Address<0x400100bc,0x7fff0000,0,unsigned>;
        ///ADD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add3{}; 
        ///ADVLD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld3{}; 
    }
    namespace NoneadcDr4{    ///<ADC_DR4
        using Addr = Register::Address<0x400100c0,0x7fff0000,0,unsigned>;
        ///ADD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add4{}; 
        ///ADVLD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld4{}; 
    }
    namespace NoneadcDr5{    ///<ADC_DR5
        using Addr = Register::Address<0x400100c4,0x7fff0000,0,unsigned>;
        ///ADD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add5{}; 
        ///ADVLD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld5{}; 
    }
    namespace NoneadcDr6{    ///<ADC_DR6
        using Addr = Register::Address<0x400100c8,0x7fff0000,0,unsigned>;
        ///ADD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add6{}; 
        ///ADVLD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld6{}; 
    }
    namespace NoneadcDr7{    ///<ADC_DR7
        using Addr = Register::Address<0x400100cc,0x7fff0000,0,unsigned>;
        ///ADD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add7{}; 
        ///ADVLD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld7{}; 
    }
    namespace NoneadcTcr{    ///<ADC_TCR
        using Addr = Register::Address<0x40010100,0xfffffff0,0,unsigned>;
        ///ADSW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adsw{}; 
        ///ADEXTI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adexti{}; 
        ///TM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tm{}; 
        ///BFTM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bftm{}; 
    }
    namespace NoneadcTsr{    ///<ADC_TSR
        using Addr = Register::Address<0x40010104,0xf8f0f0fe,0,unsigned>;
        ///ADSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adsc{}; 
        ///ADEXTIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> adextis{}; 
        ///TMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> tms{}; 
        ///BFTMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> bftms{}; 
        ///TME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> tme{}; 
    }
    namespace NoneadcWcr{    ///<ADC_WCR
        using Addr = Register::Address<0x40010120,0xf0f0f0f8,0,unsigned>;
        ///ADWLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adwle{}; 
        ///ADWUE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adwue{}; 
        ///ADWALL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adwall{}; 
        ///ADWCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> adwch{}; 
        ///ADLCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adlch{}; 
        ///ADUCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> aduch{}; 
    }
    namespace NoneadcLtr{    ///<ADC_LTR
        using Addr = Register::Address<0x40010124,0xfffff000,0,unsigned>;
        ///ADLT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adlt{}; 
    }
    namespace NoneadcUtr{    ///<ADC_UTR
        using Addr = Register::Address<0x40010128,0xfffff000,0,unsigned>;
        ///ADUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adut{}; 
    }
    namespace NoneadcImr{    ///<ADC_IMR
        using Addr = Register::Address<0x40010130,0xfefcfff8,0,unsigned>;
        ///ADIMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adims{}; 
        ///ADIMG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adimg{}; 
        ///ADIMC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adimc{}; 
        ///ADIML
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adiml{}; 
        ///ADIMU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adimu{}; 
        ///ADIMO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adimo{}; 
    }
    namespace NoneadcIraw{    ///<ADC_IRAW
        using Addr = Register::Address<0x40010134,0xfefcfff8,0,unsigned>;
        ///ADIRAWS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adiraws{}; 
        ///ADIRAWG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adirawg{}; 
        ///ADIRAWC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adirawc{}; 
        ///ADIRAWL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adirawl{}; 
        ///ADIRAWU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adirawu{}; 
        ///ADIRAWO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adirawo{}; 
    }
    namespace NoneadcImask{    ///<ADC_IMASK
        using Addr = Register::Address<0x40010138,0xfefcfff8,0,unsigned>;
        ///ADIMASKS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adimasks{}; 
        ///ADIMASKG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adimaskg{}; 
        ///ADIMASKC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adimaskc{}; 
        ///ADIMASKL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adimaskl{}; 
        ///ADIMASKU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adimasku{}; 
        ///ADIMASKO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adimasko{}; 
    }
    namespace NoneadcIclr{    ///<ADC_ICLR
        using Addr = Register::Address<0x4001013c,0xfefcfff8,0,unsigned>;
        ///ADICLRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adiclrs{}; 
        ///ADICLRG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adiclrg{}; 
        ///ADICLRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adiclrc{}; 
        ///ADICLRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adiclrl{}; 
        ///ADICLRU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adiclru{}; 
        ///ADICLRO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adiclro{}; 
    }
    namespace NoneadcDmar{    ///<ADC_DMAR
        using Addr = Register::Address<0x40010140,0xfffffff8,0,unsigned>;
        ///ADDMAS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> addmas{}; 
        ///ADDMAG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addmag{}; 
        ///ADDMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> addmac{}; 
    }
}
