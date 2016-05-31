#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog-to-Digital Converter
    namespace Adc3Isr{    ///<interrupt and status register
        using Addr = Register::Address<0x50040200,0xfffff800,0x00000000,unsigned>;
        ///JQOVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovf{}; 
        ///AWD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3{}; 
        ///AWD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2{}; 
        ///AWD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1{}; 
        ///JEOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeos{}; 
        ///JEOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeoc{}; 
        ///OVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr{}; 
        ///EOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eos{}; 
        ///EOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc{}; 
        ///EOSMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmp{}; 
        ///ADRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdy{}; 
    }
    namespace Adc3Ier{    ///<interrupt enable register
        using Addr = Register::Address<0x50040204,0xfffff800,0x00000000,unsigned>;
        ///JQOVFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovfie{}; 
        ///AWD3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3ie{}; 
        ///AWD2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2ie{}; 
        ///AWD1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1ie{}; 
        ///JEOSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeosie{}; 
        ///JEOCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeocie{}; 
        ///OVRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrie{}; 
        ///EOSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosie{}; 
        ///EOCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocie{}; 
        ///EOSMPIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpie{}; 
        ///ADRDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdyie{}; 
    }
    namespace Adc3Cr{    ///<control register
        using Addr = Register::Address<0x50040208,0x0fffffc0,0x00000000,unsigned>;
        ///ADCAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> adcal{}; 
        ///ADCALDIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> adcaldif{}; 
        ///DEEPPWD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> deeppwd{}; 
        ///ADVREGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> advregen{}; 
        ///JADSTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jadstp{}; 
        ///ADSTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adstp{}; 
        ///JADSTART
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jadstart{}; 
        ///ADSTART
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adstart{}; 
        ///ADDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addis{}; 
        ///ADEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aden{}; 
    }
    namespace Adc3Cfgr{    ///<configuration register
        using Addr = Register::Address<0x5004020c,0x80000004,0x00000000,unsigned>;
        ///AWDCH1CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> awdch1ch{}; 
        ///JAUTO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> jauto{}; 
        ///JAWD1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> jawd1en{}; 
        ///AWD1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awd1en{}; 
        ///AWD1SGL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awd1sgl{}; 
        ///JQM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jqm{}; 
        ///JDISCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> jdiscen{}; 
        ///DISCNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> discnum{}; 
        ///DISCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> discen{}; 
        ///AUTOFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> autoff{}; 
        ///AUTDLY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> autdly{}; 
        ///CONT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cont{}; 
        ///OVRMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrmod{}; 
        ///EXTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> exten{}; 
        ///EXTSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> extsel{}; 
        ///ALIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> align{}; 
        ///RES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> res{}; 
        ///DMACFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmacfg{}; 
        ///DMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
    }
    namespace Adc3Cfgr2{    ///<configuration register
        using Addr = Register::Address<0x50040210,0xfffff800,0x00000000,unsigned>;
        ///EXTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rovsm{}; 
        ///EXTSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tovs{}; 
        ///ALIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,5),Register::ReadWriteAccess,unsigned> ovss{}; 
        ///RES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> ovsr{}; 
        ///DMACFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> jovse{}; 
        ///DMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rovse{}; 
    }
    namespace Adc3Smpr1{    ///<sample time register 1
        using Addr = Register::Address<0x50040214,0xc0000007,0x00000000,unsigned>;
        ///SMP9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> smp9{}; 
        ///SMP8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp8{}; 
        ///SMP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp7{}; 
        ///SMP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp6{}; 
        ///SMP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp5{}; 
        ///SMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp4{}; 
        ///SMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp3{}; 
        ///SMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp2{}; 
        ///SMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp1{}; 
    }
    namespace Adc3Smpr2{    ///<sample time register 2
        using Addr = Register::Address<0x50040218,0xf8000000,0x00000000,unsigned>;
        ///SMP18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp18{}; 
        ///SMP17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp17{}; 
        ///SMP16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp16{}; 
        ///SMP15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp15{}; 
        ///SMP14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp14{}; 
        ///SMP13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp13{}; 
        ///SMP12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp12{}; 
        ///SMP11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp11{}; 
        ///SMP10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> smp10{}; 
    }
    namespace Adc3Tr1{    ///<watchdog threshold register 1
        using Addr = Register::Address<0x50040220,0xf000f000,0x00000000,unsigned>;
        ///HT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> ht1{}; 
        ///LT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt1{}; 
    }
    namespace Adc3Tr2{    ///<watchdog threshold register
        using Addr = Register::Address<0x50040224,0xff00ff00,0x00000000,unsigned>;
        ///HT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ht2{}; 
        ///LT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lt2{}; 
    }
    namespace Adc3Tr3{    ///<watchdog threshold register 3
        using Addr = Register::Address<0x50040228,0xff00ff00,0x00000000,unsigned>;
        ///HT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ht3{}; 
        ///LT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lt3{}; 
    }
    namespace Adc3Sqr1{    ///<regular sequence register 1
        using Addr = Register::Address<0x50040230,0xe0820830,0x00000000,unsigned>;
        ///SQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq4{}; 
        ///SQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq3{}; 
        ///SQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq2{}; 
        ///SQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq1{}; 
        ///L3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> l3{}; 
    }
    namespace Adc3Sqr2{    ///<regular sequence register 2
        using Addr = Register::Address<0x50040234,0xe0820820,0x00000000,unsigned>;
        ///SQ9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq9{}; 
        ///SQ8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq8{}; 
        ///SQ7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq7{}; 
        ///SQ6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq6{}; 
        ///SQ5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq5{}; 
    }
    namespace Adc3Sqr3{    ///<regular sequence register 3
        using Addr = Register::Address<0x50040238,0xe0820820,0x00000000,unsigned>;
        ///SQ14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq14{}; 
        ///SQ13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq13{}; 
        ///SQ12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq12{}; 
        ///SQ11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq11{}; 
        ///SQ10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq10{}; 
    }
    namespace Adc3Sqr4{    ///<regular sequence register 4
        using Addr = Register::Address<0x5004023c,0xfffff820,0x00000000,unsigned>;
        ///SQ16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq16{}; 
        ///SQ15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq15{}; 
    }
    namespace Adc3Dr{    ///<regular Data Register
        using Addr = Register::Address<0x50040240,0xffff0000,0x00000000,unsigned>;
        ///regularDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> regulardata{}; 
    }
    namespace Adc3Jsqr{    ///<injected sequence register
        using Addr = Register::Address<0x5004024c,0x82082000,0x00000000,unsigned>;
        ///JSQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> jsq4{}; 
        ///JSQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> jsq3{}; 
        ///JSQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,14),Register::ReadWriteAccess,unsigned> jsq2{}; 
        ///JSQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> jsq1{}; 
        ///JEXTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> jexten{}; 
        ///JEXTSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> jextsel{}; 
        ///JL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> jl{}; 
    }
    namespace Adc3Ofr1{    ///<offset register 1
        using Addr = Register::Address<0x50040260,0x03fff000,0x00000000,unsigned>;
        ///OFFSET1_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset1En{}; 
        ///OFFSET1_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset1Ch{}; 
        ///OFFSET1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset1{}; 
    }
    namespace Adc3Ofr2{    ///<offset register 2
        using Addr = Register::Address<0x50040264,0x03fff000,0x00000000,unsigned>;
        ///OFFSET2_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset2En{}; 
        ///OFFSET2_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset2Ch{}; 
        ///OFFSET2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset2{}; 
    }
    namespace Adc3Ofr3{    ///<offset register 3
        using Addr = Register::Address<0x50040268,0x03fff000,0x00000000,unsigned>;
        ///OFFSET3_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset3En{}; 
        ///OFFSET3_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset3Ch{}; 
        ///OFFSET3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset3{}; 
    }
    namespace Adc3Ofr4{    ///<offset register 4
        using Addr = Register::Address<0x5004026c,0x03fff000,0x00000000,unsigned>;
        ///OFFSET4_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset4En{}; 
        ///OFFSET4_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset4Ch{}; 
        ///OFFSET4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset4{}; 
    }
    namespace Adc3Jdr1{    ///<injected data register 1
        using Addr = Register::Address<0x50040280,0xffff0000,0x00000000,unsigned>;
        ///JDATA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata1{}; 
    }
    namespace Adc3Jdr2{    ///<injected data register 2
        using Addr = Register::Address<0x50040284,0xffff0000,0x00000000,unsigned>;
        ///JDATA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata2{}; 
    }
    namespace Adc3Jdr3{    ///<injected data register 3
        using Addr = Register::Address<0x50040288,0xffff0000,0x00000000,unsigned>;
        ///JDATA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata3{}; 
    }
    namespace Adc3Jdr4{    ///<injected data register 4
        using Addr = Register::Address<0x5004028c,0xffff0000,0x00000000,unsigned>;
        ///JDATA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata4{}; 
    }
    namespace Adc3Awd2cr{    ///<Analog Watchdog 2 Configuration          Register
        using Addr = Register::Address<0x500402a0,0xfff80001,0x00000000,unsigned>;
        ///AWD2CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,1),Register::ReadWriteAccess,unsigned> awd2ch{}; 
    }
    namespace Adc3Awd3cr{    ///<Analog Watchdog 3 Configuration          Register
        using Addr = Register::Address<0x500402a4,0xfff80001,0x00000000,unsigned>;
        ///AWD3CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,1),Register::ReadWriteAccess,unsigned> awd3ch{}; 
    }
    namespace Adc3Difsel{    ///<Differential Mode Selection Register          2
        using Addr = Register::Address<0x500402b0,0xfff80001,0x00000000,unsigned>;
        ///Differential mode for channels 15 to              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,1),Register::ReadWriteAccess,unsigned> difsel115{}; 
        ///Differential mode for channels 18 to              16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> difsel1618{}; 
    }
    namespace Adc3Calfact{    ///<Calibration Factors
        using Addr = Register::Address<0x500402b4,0xff80ff80,0x00000000,unsigned>;
        ///CALFACT_D
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> calfactD{}; 
        ///CALFACT_S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> calfactS{}; 
    }
}
