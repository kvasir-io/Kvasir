#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-Digital Converter
    namespace Noneisr{    ///<interrupt and status register
        using Addr = Register::Address<0x50000000,0xfffff800,0,unsigned>;
        ///JQOVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovf{}; 
        namespace JqovfValC{
        }
        ///AWD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3{}; 
        namespace Awd3ValC{
        }
        ///AWD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2{}; 
        namespace Awd2ValC{
        }
        ///AWD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1{}; 
        namespace Awd1ValC{
        }
        ///JEOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeos{}; 
        namespace JeosValC{
        }
        ///JEOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeoc{}; 
        namespace JeocValC{
        }
        ///OVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
        ///EOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eos{}; 
        namespace EosValC{
        }
        ///EOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eoc{}; 
        namespace EocValC{
        }
        ///EOSMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmp{}; 
        namespace EosmpValC{
        }
        ///ADRDY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdy{}; 
        namespace AdrdyValC{
        }
    }
    namespace Noneier{    ///<interrupt enable register
        using Addr = Register::Address<0x50000004,0xfffff800,0,unsigned>;
        ///JQOVFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> jqovfie{}; 
        namespace JqovfieValC{
        }
        ///AWD3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> awd3ie{}; 
        namespace Awd3ieValC{
        }
        ///AWD2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> awd2ie{}; 
        namespace Awd2ieValC{
        }
        ///AWD1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> awd1ie{}; 
        namespace Awd1ieValC{
        }
        ///JEOSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> jeosie{}; 
        namespace JeosieValC{
        }
        ///JEOCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jeocie{}; 
        namespace JeocieValC{
        }
        ///OVRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovrie{}; 
        namespace OvrieValC{
        }
        ///EOSIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eosie{}; 
        namespace EosieValC{
        }
        ///EOCIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eocie{}; 
        namespace EocieValC{
        }
        ///EOSMPIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eosmpie{}; 
        namespace EosmpieValC{
        }
        ///ADRDYIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adrdyie{}; 
        namespace AdrdyieValC{
        }
    }
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x50000008,0x0fffffc0,0,unsigned>;
        ///ADCAL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> adcal{}; 
        namespace AdcalValC{
        }
        ///ADCALDIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> adcaldif{}; 
        namespace AdcaldifValC{
        }
        ///DEEPPWD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> deeppwd{}; 
        namespace DeeppwdValC{
        }
        ///ADVREGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> advregen{}; 
        namespace AdvregenValC{
        }
        ///JADSTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> jadstp{}; 
        namespace JadstpValC{
        }
        ///ADSTP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> adstp{}; 
        namespace AdstpValC{
        }
        ///JADSTART
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> jadstart{}; 
        namespace JadstartValC{
        }
        ///ADSTART
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> adstart{}; 
        namespace AdstartValC{
        }
        ///ADDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> addis{}; 
        namespace AddisValC{
        }
        ///ADEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aden{}; 
        namespace AdenValC{
        }
    }
    namespace Nonecfgr{    ///<configuration register
        using Addr = Register::Address<0x5000000c,0x80000004,0,unsigned>;
        ///AWDCH1CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> awdch1ch{}; 
        namespace Awdch1chValC{
        }
        ///JAUTO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> jauto{}; 
        namespace JautoValC{
        }
        ///JAWD1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> jawd1en{}; 
        namespace Jawd1enValC{
        }
        ///AWD1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> awd1en{}; 
        namespace Awd1enValC{
        }
        ///AWD1SGL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> awd1sgl{}; 
        namespace Awd1sglValC{
        }
        ///JQM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> jqm{}; 
        namespace JqmValC{
        }
        ///JDISCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> jdiscen{}; 
        namespace JdiscenValC{
        }
        ///DISCNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,17),Register::ReadWriteAccess,unsigned> discnum{}; 
        namespace DiscnumValC{
        }
        ///DISCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> discen{}; 
        namespace DiscenValC{
        }
        ///AUTOFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> autoff{}; 
        namespace AutoffValC{
        }
        ///AUTDLY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> autdly{}; 
        namespace AutdlyValC{
        }
        ///CONT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cont{}; 
        namespace ContValC{
        }
        ///OVRMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ovrmod{}; 
        namespace OvrmodValC{
        }
        ///EXTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> exten{}; 
        namespace ExtenValC{
        }
        ///EXTSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,6),Register::ReadWriteAccess,unsigned> extsel{}; 
        namespace ExtselValC{
        }
        ///ALIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> align{}; 
        namespace AlignValC{
        }
        ///RES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> res{}; 
        namespace ResValC{
        }
        ///DMACFG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmacfg{}; 
        namespace DmacfgValC{
        }
        ///DMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
    }
    namespace Nonesmpr1{    ///<sample time register 1
        using Addr = Register::Address<0x50000014,0xc0000007,0,unsigned>;
        ///SMP9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,27),Register::ReadWriteAccess,unsigned> smp9{}; 
        namespace Smp9ValC{
        }
        ///SMP8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp8{}; 
        namespace Smp8ValC{
        }
        ///SMP7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp7{}; 
        namespace Smp7ValC{
        }
        ///SMP6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp6{}; 
        namespace Smp6ValC{
        }
        ///SMP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp5{}; 
        namespace Smp5ValC{
        }
        ///SMP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp4{}; 
        namespace Smp4ValC{
        }
        ///SMP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp3{}; 
        namespace Smp3ValC{
        }
        ///SMP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp2{}; 
        namespace Smp2ValC{
        }
        ///SMP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp1{}; 
        namespace Smp1ValC{
        }
    }
    namespace Nonesmpr2{    ///<sample time register 2
        using Addr = Register::Address<0x50000018,0xf8000000,0,unsigned>;
        ///SMP18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> smp18{}; 
        namespace Smp18ValC{
        }
        ///SMP17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> smp17{}; 
        namespace Smp17ValC{
        }
        ///SMP16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> smp16{}; 
        namespace Smp16ValC{
        }
        ///SMP15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,15),Register::ReadWriteAccess,unsigned> smp15{}; 
        namespace Smp15ValC{
        }
        ///SMP14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> smp14{}; 
        namespace Smp14ValC{
        }
        ///SMP13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> smp13{}; 
        namespace Smp13ValC{
        }
        ///SMP12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> smp12{}; 
        namespace Smp12ValC{
        }
        ///SMP11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> smp11{}; 
        namespace Smp11ValC{
        }
        ///SMP10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> smp10{}; 
        namespace Smp10ValC{
        }
    }
    namespace Nonetr1{    ///<watchdog threshold register 1
        using Addr = Register::Address<0x50000020,0xf000f000,0,unsigned>;
        ///HT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> ht1{}; 
        namespace Ht1ValC{
        }
        ///LT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lt1{}; 
        namespace Lt1ValC{
        }
    }
    namespace Nonetr2{    ///<watchdog threshold register
        using Addr = Register::Address<0x50000024,0xff00ff00,0,unsigned>;
        ///HT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ht2{}; 
        namespace Ht2ValC{
        }
        ///LT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lt2{}; 
        namespace Lt2ValC{
        }
    }
    namespace Nonetr3{    ///<watchdog threshold register 3
        using Addr = Register::Address<0x50000028,0xff00ff00,0,unsigned>;
        ///HT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ht3{}; 
        namespace Ht3ValC{
        }
        ///LT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lt3{}; 
        namespace Lt3ValC{
        }
    }
    namespace Nonesqr1{    ///<regular sequence register 1
        using Addr = Register::Address<0x50000030,0xe0820830,0,unsigned>;
        ///SQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq4{}; 
        namespace Sq4ValC{
        }
        ///SQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq3{}; 
        namespace Sq3ValC{
        }
        ///SQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq2{}; 
        namespace Sq2ValC{
        }
        ///SQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq1{}; 
        namespace Sq1ValC{
        }
        ///L3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> l3{}; 
        namespace L3ValC{
        }
    }
    namespace Nonesqr2{    ///<regular sequence register 2
        using Addr = Register::Address<0x50000034,0xe0820820,0,unsigned>;
        ///SQ9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq9{}; 
        namespace Sq9ValC{
        }
        ///SQ8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq8{}; 
        namespace Sq8ValC{
        }
        ///SQ7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq7{}; 
        namespace Sq7ValC{
        }
        ///SQ6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq6{}; 
        namespace Sq6ValC{
        }
        ///SQ5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq5{}; 
        namespace Sq5ValC{
        }
    }
    namespace Nonesqr3{    ///<regular sequence register 3
        using Addr = Register::Address<0x50000038,0xe0820820,0,unsigned>;
        ///SQ14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> sq14{}; 
        namespace Sq14ValC{
        }
        ///SQ13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> sq13{}; 
        namespace Sq13ValC{
        }
        ///SQ12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,12),Register::ReadWriteAccess,unsigned> sq12{}; 
        namespace Sq12ValC{
        }
        ///SQ11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq11{}; 
        namespace Sq11ValC{
        }
        ///SQ10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq10{}; 
        namespace Sq10ValC{
        }
    }
    namespace Nonesqr4{    ///<regular sequence register 4
        using Addr = Register::Address<0x5000003c,0xfffff820,0,unsigned>;
        ///SQ16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> sq16{}; 
        namespace Sq16ValC{
        }
        ///SQ15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sq15{}; 
        namespace Sq15ValC{
        }
    }
    namespace Nonedr{    ///<regular Data Register
        using Addr = Register::Address<0x50000040,0xffff0000,0,unsigned>;
        ///regularDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> regulardata{}; 
        namespace RegulardataValC{
        }
    }
    namespace Nonejsqr{    ///<injected sequence register
        using Addr = Register::Address<0x5000004c,0x82082000,0,unsigned>;
        ///JSQ4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> jsq4{}; 
        namespace Jsq4ValC{
        }
        ///JSQ3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,20),Register::ReadWriteAccess,unsigned> jsq3{}; 
        namespace Jsq3ValC{
        }
        ///JSQ2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,14),Register::ReadWriteAccess,unsigned> jsq2{}; 
        namespace Jsq2ValC{
        }
        ///JSQ1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> jsq1{}; 
        namespace Jsq1ValC{
        }
        ///JEXTEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> jexten{}; 
        namespace JextenValC{
        }
        ///JEXTSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> jextsel{}; 
        namespace JextselValC{
        }
        ///JL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> jl{}; 
        namespace JlValC{
        }
    }
    namespace Noneofr1{    ///<offset register 1
        using Addr = Register::Address<0x50000060,0x03fff000,0,unsigned>;
        ///OFFSET1_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset1En{}; 
        namespace Offset1enValC{
        }
        ///OFFSET1_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset1Ch{}; 
        namespace Offset1chValC{
        }
        ///OFFSET1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset1{}; 
        namespace Offset1ValC{
        }
    }
    namespace Noneofr2{    ///<offset register 2
        using Addr = Register::Address<0x50000064,0x03fff000,0,unsigned>;
        ///OFFSET2_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset2En{}; 
        namespace Offset2enValC{
        }
        ///OFFSET2_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset2Ch{}; 
        namespace Offset2chValC{
        }
        ///OFFSET2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset2{}; 
        namespace Offset2ValC{
        }
    }
    namespace Noneofr3{    ///<offset register 3
        using Addr = Register::Address<0x50000068,0x03fff000,0,unsigned>;
        ///OFFSET3_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset3En{}; 
        namespace Offset3enValC{
        }
        ///OFFSET3_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset3Ch{}; 
        namespace Offset3chValC{
        }
        ///OFFSET3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset3{}; 
        namespace Offset3ValC{
        }
    }
    namespace Noneofr4{    ///<offset register 4
        using Addr = Register::Address<0x5000006c,0x03fff000,0,unsigned>;
        ///OFFSET4_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> offset4En{}; 
        namespace Offset4enValC{
        }
        ///OFFSET4_CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,26),Register::ReadWriteAccess,unsigned> offset4Ch{}; 
        namespace Offset4chValC{
        }
        ///OFFSET4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> offset4{}; 
        namespace Offset4ValC{
        }
    }
    namespace Nonejdr1{    ///<injected data register 1
        using Addr = Register::Address<0x50000080,0xffff0000,0,unsigned>;
        ///JDATA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata1{}; 
        namespace Jdata1ValC{
        }
    }
    namespace Nonejdr2{    ///<injected data register 2
        using Addr = Register::Address<0x50000084,0xffff0000,0,unsigned>;
        ///JDATA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata2{}; 
        namespace Jdata2ValC{
        }
    }
    namespace Nonejdr3{    ///<injected data register 3
        using Addr = Register::Address<0x50000088,0xffff0000,0,unsigned>;
        ///JDATA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata3{}; 
        namespace Jdata3ValC{
        }
    }
    namespace Nonejdr4{    ///<injected data register 4
        using Addr = Register::Address<0x5000008c,0xffff0000,0,unsigned>;
        ///JDATA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> jdata4{}; 
        namespace Jdata4ValC{
        }
    }
    namespace Noneawd2cr{    ///<Analog Watchdog 2 Configuration
          Register
        using Addr = Register::Address<0x500000a0,0xfff80001,0,unsigned>;
        ///AWD2CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,1),Register::ReadWriteAccess,unsigned> awd2ch{}; 
        namespace Awd2chValC{
        }
    }
    namespace Noneawd3cr{    ///<Analog Watchdog 3 Configuration
          Register
        using Addr = Register::Address<0x500000a4,0xfff80001,0,unsigned>;
        ///AWD3CH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,1),Register::ReadWriteAccess,unsigned> awd3ch{}; 
        namespace Awd3chValC{
        }
    }
    namespace Nonedifsel{    ///<Differential Mode Selection Register
          2
        using Addr = Register::Address<0x500000b0,0xfff80001,0,unsigned>;
        ///Differential mode for channels 15 to
              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,1),Register::ReadWriteAccess,unsigned> difsel115{}; 
        namespace Difsel115ValC{
        }
        ///Differential mode for channels 18 to
              16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> difsel1618{}; 
        namespace Difsel1618ValC{
        }
    }
    namespace Nonecalfact{    ///<Calibration Factors
        using Addr = Register::Address<0x500000b4,0xff80ff80,0,unsigned>;
        ///CALFACT_D
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> calfactD{}; 
        namespace CalfactdValC{
        }
        ///CALFACT_S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> calfactS{}; 
        namespace CalfactsValC{
        }
    }
}
