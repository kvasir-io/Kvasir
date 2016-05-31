#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//ADC
    namespace AdcAdcRst{    ///<ADC_RST
        using Addr = Register::Address<0x40010004,0x00000000,0x00000000,unsigned>;
        ///ADRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrst{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcConv{    ///<ADC_CONV
        using Addr = Register::Address<0x40010008,0x0000f8fc,0x00000000,unsigned>;
        ///ADMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> admode{}; 
        ///ADSEQL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> adseql{}; 
        ///ADSUBL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> adsubl{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,19),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcLst0{    ///<ADC_LST0
        using Addr = Register::Address<0x40010010,0x00e0e0e0,0x00000000,unsigned>;
        ///ADSEQ0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> adseq0{}; 
        ///ADSEQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> adseq1{}; 
        ///ADSEQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> adseq2{}; 
        ///ADSEQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> adseq3{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcLst1{    ///<ADC_LST1
        using Addr = Register::Address<0x40010014,0x00e0e0e0,0x00000000,unsigned>;
        ///ADSEQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> adseq4{}; 
        ///ADSEQ5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> adseq5{}; 
        ///ADSEQ6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> adseq6{}; 
        ///ADSEQ7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> adseq7{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcStr0{    ///<ADC_STR0
        using Addr = Register::Address<0x40010070,0x00000000,0x00000000,unsigned>;
        ///ADST0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst0{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcStr1{    ///<ADC_STR1
        using Addr = Register::Address<0x40010074,0x00000000,0x00000000,unsigned>;
        ///ADST1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst1{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcStr2{    ///<ADC_STR2
        using Addr = Register::Address<0x40010078,0x00000000,0x00000000,unsigned>;
        ///ADST2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst2{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcStr3{    ///<ADC_STR3
        using Addr = Register::Address<0x4001007c,0x00000000,0x00000000,unsigned>;
        ///ADST3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst3{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcStr4{    ///<ADC_STR4
        using Addr = Register::Address<0x40010080,0x00000000,0x00000000,unsigned>;
        ///ADST4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst4{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcStr5{    ///<ADC_STR5
        using Addr = Register::Address<0x40010084,0x00000000,0x00000000,unsigned>;
        ///ADST5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst5{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcStr6{    ///<ADC_STR6
        using Addr = Register::Address<0x40010088,0x00000000,0x00000000,unsigned>;
        ///ADST6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst6{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcStr7{    ///<ADC_STR7
        using Addr = Register::Address<0x4001008c,0x00000000,0x00000000,unsigned>;
        ///ADST7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adst7{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcDr0{    ///<ADC_DR0
        using Addr = Register::Address<0x400100b0,0x7fff0000,0x00000000,unsigned>;
        ///ADD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add0{}; 
        ///ADVLD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld0{}; 
    }
    namespace AdcAdcDr1{    ///<ADC_DR1
        using Addr = Register::Address<0x400100b4,0x7fff0000,0x00000000,unsigned>;
        ///ADD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add1{}; 
        ///ADVLD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld1{}; 
    }
    namespace AdcAdcDr2{    ///<ADC_DR2
        using Addr = Register::Address<0x400100b8,0x7fff0000,0x00000000,unsigned>;
        ///ADD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add2{}; 
        ///ADVLD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld2{}; 
    }
    namespace AdcAdcDr3{    ///<ADC_DR3
        using Addr = Register::Address<0x400100bc,0x7fff0000,0x00000000,unsigned>;
        ///ADD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add3{}; 
        ///ADVLD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld3{}; 
    }
    namespace AdcAdcDr4{    ///<ADC_DR4
        using Addr = Register::Address<0x400100c0,0x7fff0000,0x00000000,unsigned>;
        ///ADD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add4{}; 
        ///ADVLD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld4{}; 
    }
    namespace AdcAdcDr5{    ///<ADC_DR5
        using Addr = Register::Address<0x400100c4,0x7fff0000,0x00000000,unsigned>;
        ///ADD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add5{}; 
        ///ADVLD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld5{}; 
    }
    namespace AdcAdcDr6{    ///<ADC_DR6
        using Addr = Register::Address<0x400100c8,0x7fff0000,0x00000000,unsigned>;
        ///ADD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add6{}; 
        ///ADVLD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld6{}; 
    }
    namespace AdcAdcDr7{    ///<ADC_DR7
        using Addr = Register::Address<0x400100cc,0x7fff0000,0x00000000,unsigned>;
        ///ADD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> add7{}; 
        ///ADVLD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> advld7{}; 
    }
    namespace AdcAdcTcr{    ///<ADC_TCR
        using Addr = Register::Address<0x40010100,0x00000000,0x00000000,unsigned>;
        ///ADSW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adsw{}; 
        ///ADEXTI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adexti{}; 
        ///GPTM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gptm{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcTsr{    ///<ADC_TSR
        using Addr = Register::Address<0x40010104,0x00f8f0fe,0x00000000,unsigned>;
        ///ADSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adsc{}; 
        ///ADEXTIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> adextis{}; 
        ///GPTMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> gptms{}; 
        ///GPTME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> gptme{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcWcr{    ///<ADC_WCR
        using Addr = Register::Address<0x40010120,0x00f0f0f8,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcLtr{    ///<ADC_LTR
        using Addr = Register::Address<0x40010124,0x00000000,0x00000000,unsigned>;
        ///ADLT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adlt{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcUtr{    ///<ADC_UTR
        using Addr = Register::Address<0x40010128,0x00000000,0x00000000,unsigned>;
        ///ADUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adut{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcImr{    ///<ADC_IMR
        using Addr = Register::Address<0x40010130,0x00fcfff8,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcIraw{    ///<ADC_IRAW
        using Addr = Register::Address<0x40010134,0x00fcfff8,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcImask{    ///<ADC_IMASK
        using Addr = Register::Address<0x40010138,0x00fcfff8,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AdcAdcIclr{    ///<ADC_ICLR
        using Addr = Register::Address<0x4001013c,0x00fcfff8,0x00000000,unsigned>;
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
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
