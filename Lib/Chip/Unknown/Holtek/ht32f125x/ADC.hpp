#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ADC
    namespace NoneadcRst{    ///<ADC_RST
        using Addr = Register::Address<0x40010004,0xfffffffe,0,unsigned>;
        ///ADRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrst{}; 
        namespace AdrstValC{
        }
    }
    namespace NoneadcConv{    ///<ADC_CONV
        using Addr = Register::Address<0x40010008,0xfff8f8fc,0,unsigned>;
        ///ADMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> admode{}; 
        namespace AdmodeValC{
        }
        ///ADSEQL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> adseql{}; 
        namespace AdseqlValC{
        }
        ///ADSUBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> adsubl{}; 
        namespace AdsublValC{
        }
    }
    namespace NoneadcLst0{    ///<ADC_LST0
        using Addr = Register::Address<0x40010010,0xe0e0e0e0,0,unsigned>;
        ///ADSEQ0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> adseq0{}; 
        namespace Adseq0ValC{
        }
        ///ADSEQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> adseq1{}; 
        namespace Adseq1ValC{
        }
        ///ADSEQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> adseq2{}; 
        namespace Adseq2ValC{
        }
        ///ADSEQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> adseq3{}; 
        namespace Adseq3ValC{
        }
    }
    namespace NoneadcLst1{    ///<ADC_LST1
        using Addr = Register::Address<0x40010014,0xe0e0e0e0,0,unsigned>;
        ///ADSEQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> adseq4{}; 
        namespace Adseq4ValC{
        }
        ///ADSEQ5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> adseq5{}; 
        namespace Adseq5ValC{
        }
        ///ADSEQ6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> adseq6{}; 
        namespace Adseq6ValC{
        }
        ///ADSEQ7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> adseq7{}; 
        namespace Adseq7ValC{
        }
    }
    namespace NoneadcStr0{    ///<ADC_STR0
        using Addr = Register::Address<0x40010070,0xffffff00,0,unsigned>;
        ///ADST0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst0{}; 
        namespace Adst0ValC{
        }
    }
    namespace NoneadcStr1{    ///<ADC_STR1
        using Addr = Register::Address<0x40010074,0xffffff00,0,unsigned>;
        ///ADST1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst1{}; 
        namespace Adst1ValC{
        }
    }
    namespace NoneadcStr2{    ///<ADC_STR2
        using Addr = Register::Address<0x40010078,0xffffff00,0,unsigned>;
        ///ADST2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst2{}; 
        namespace Adst2ValC{
        }
    }
    namespace NoneadcStr3{    ///<ADC_STR3
        using Addr = Register::Address<0x4001007c,0xffffff00,0,unsigned>;
        ///ADST3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst3{}; 
        namespace Adst3ValC{
        }
    }
    namespace NoneadcStr4{    ///<ADC_STR4
        using Addr = Register::Address<0x40010080,0xffffff00,0,unsigned>;
        ///ADST4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst4{}; 
        namespace Adst4ValC{
        }
    }
    namespace NoneadcStr5{    ///<ADC_STR5
        using Addr = Register::Address<0x40010084,0xffffff00,0,unsigned>;
        ///ADST5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst5{}; 
        namespace Adst5ValC{
        }
    }
    namespace NoneadcStr6{    ///<ADC_STR6
        using Addr = Register::Address<0x40010088,0xffffff00,0,unsigned>;
        ///ADST6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst6{}; 
        namespace Adst6ValC{
        }
    }
    namespace NoneadcStr7{    ///<ADC_STR7
        using Addr = Register::Address<0x4001008c,0xffffff00,0,unsigned>;
        ///ADST7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst7{}; 
        namespace Adst7ValC{
        }
    }
    namespace NoneadcDr0{    ///<ADC_DR0
        using Addr = Register::Address<0x400100b0,0x7fff0000,0,unsigned>;
        ///ADD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add0{}; 
        namespace Add0ValC{
        }
        ///ADVLD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld0{}; 
        namespace Advld0ValC{
        }
    }
    namespace NoneadcDr1{    ///<ADC_DR1
        using Addr = Register::Address<0x400100b4,0x7fff0000,0,unsigned>;
        ///ADD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add1{}; 
        namespace Add1ValC{
        }
        ///ADVLD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld1{}; 
        namespace Advld1ValC{
        }
    }
    namespace NoneadcDr2{    ///<ADC_DR2
        using Addr = Register::Address<0x400100b8,0x7fff0000,0,unsigned>;
        ///ADD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add2{}; 
        namespace Add2ValC{
        }
        ///ADVLD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld2{}; 
        namespace Advld2ValC{
        }
    }
    namespace NoneadcDr3{    ///<ADC_DR3
        using Addr = Register::Address<0x400100bc,0x7fff0000,0,unsigned>;
        ///ADD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add3{}; 
        namespace Add3ValC{
        }
        ///ADVLD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld3{}; 
        namespace Advld3ValC{
        }
    }
    namespace NoneadcDr4{    ///<ADC_DR4
        using Addr = Register::Address<0x400100c0,0x7fff0000,0,unsigned>;
        ///ADD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add4{}; 
        namespace Add4ValC{
        }
        ///ADVLD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld4{}; 
        namespace Advld4ValC{
        }
    }
    namespace NoneadcDr5{    ///<ADC_DR5
        using Addr = Register::Address<0x400100c4,0x7fff0000,0,unsigned>;
        ///ADD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add5{}; 
        namespace Add5ValC{
        }
        ///ADVLD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld5{}; 
        namespace Advld5ValC{
        }
    }
    namespace NoneadcDr6{    ///<ADC_DR6
        using Addr = Register::Address<0x400100c8,0x7fff0000,0,unsigned>;
        ///ADD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add6{}; 
        namespace Add6ValC{
        }
        ///ADVLD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld6{}; 
        namespace Advld6ValC{
        }
    }
    namespace NoneadcDr7{    ///<ADC_DR7
        using Addr = Register::Address<0x400100cc,0x7fff0000,0,unsigned>;
        ///ADD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add7{}; 
        namespace Add7ValC{
        }
        ///ADVLD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld7{}; 
        namespace Advld7ValC{
        }
    }
    namespace NoneadcTcr{    ///<ADC_TCR
        using Addr = Register::Address<0x40010100,0xfffffff8,0,unsigned>;
        ///ADSW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adsw{}; 
        namespace AdswValC{
        }
        ///ADEXTI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adexti{}; 
        namespace AdextiValC{
        }
        ///GPTM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gptm{}; 
        namespace GptmValC{
        }
    }
    namespace NoneadcTsr{    ///<ADC_TSR
        using Addr = Register::Address<0x40010104,0xf8f8f0fe,0,unsigned>;
        ///ADSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adsc{}; 
        namespace AdscValC{
        }
        ///ADEXTIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> adextis{}; 
        namespace AdextisValC{
        }
        ///GPTMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> gptms{}; 
        namespace GptmsValC{
        }
        ///GPTME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> gptme{}; 
        namespace GptmeValC{
        }
    }
    namespace NoneadcWcr{    ///<ADC_WCR
        using Addr = Register::Address<0x40010120,0xf0f0f0f8,0,unsigned>;
        ///ADWLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adwle{}; 
        namespace AdwleValC{
        }
        ///ADWUE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adwue{}; 
        namespace AdwueValC{
        }
        ///ADWALL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adwall{}; 
        namespace AdwallValC{
        }
        ///ADWCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> adwch{}; 
        namespace AdwchValC{
        }
        ///ADLCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adlch{}; 
        namespace AdlchValC{
        }
        ///ADUCH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> aduch{}; 
        namespace AduchValC{
        }
    }
    namespace NoneadcLtr{    ///<ADC_LTR
        using Addr = Register::Address<0x40010124,0xfffff000,0,unsigned>;
        ///ADLT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adlt{}; 
        namespace AdltValC{
        }
    }
    namespace NoneadcUtr{    ///<ADC_UTR
        using Addr = Register::Address<0x40010128,0xfffff000,0,unsigned>;
        ///ADUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adut{}; 
        namespace AdutValC{
        }
    }
    namespace NoneadcImr{    ///<ADC_IMR
        using Addr = Register::Address<0x40010130,0xfefcfff8,0,unsigned>;
        ///ADIMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adims{}; 
        namespace AdimsValC{
        }
        ///ADIMG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adimg{}; 
        namespace AdimgValC{
        }
        ///ADIMC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adimc{}; 
        namespace AdimcValC{
        }
        ///ADIML
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adiml{}; 
        namespace AdimlValC{
        }
        ///ADIMU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adimu{}; 
        namespace AdimuValC{
        }
        ///ADIMO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adimo{}; 
        namespace AdimoValC{
        }
    }
    namespace NoneadcIraw{    ///<ADC_IRAW
        using Addr = Register::Address<0x40010134,0xfefcfff8,0,unsigned>;
        ///ADIRAWS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adiraws{}; 
        namespace AdirawsValC{
        }
        ///ADIRAWG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adirawg{}; 
        namespace AdirawgValC{
        }
        ///ADIRAWC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adirawc{}; 
        namespace AdirawcValC{
        }
        ///ADIRAWL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adirawl{}; 
        namespace AdirawlValC{
        }
        ///ADIRAWU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adirawu{}; 
        namespace AdirawuValC{
        }
        ///ADIRAWO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adirawo{}; 
        namespace AdirawoValC{
        }
    }
    namespace NoneadcImask{    ///<ADC_IMASK
        using Addr = Register::Address<0x40010138,0xfefcfff8,0,unsigned>;
        ///ADIMASKS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adimasks{}; 
        namespace AdimasksValC{
        }
        ///ADIMASKG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adimaskg{}; 
        namespace AdimaskgValC{
        }
        ///ADIMASKC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adimaskc{}; 
        namespace AdimaskcValC{
        }
        ///ADIMASKL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adimaskl{}; 
        namespace AdimasklValC{
        }
        ///ADIMASKU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adimasku{}; 
        namespace AdimaskuValC{
        }
        ///ADIMASKO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adimasko{}; 
        namespace AdimaskoValC{
        }
    }
    namespace NoneadcIclr{    ///<ADC_ICLR
        using Addr = Register::Address<0x4001013c,0xfefcfff8,0,unsigned>;
        ///ADICLRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adiclrs{}; 
        namespace AdiclrsValC{
        }
        ///ADICLRG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adiclrg{}; 
        namespace AdiclrgValC{
        }
        ///ADICLRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adiclrc{}; 
        namespace AdiclrcValC{
        }
        ///ADICLRL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adiclrl{}; 
        namespace AdiclrlValC{
        }
        ///ADICLRU
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adiclru{}; 
        namespace AdiclruValC{
        }
        ///ADICLRO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adiclro{}; 
        namespace AdiclroValC{
        }
    }
}
