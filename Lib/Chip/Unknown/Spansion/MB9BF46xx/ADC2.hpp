#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral ADC0 
    namespace Adc2Adcr{    ///< register ADCR 
        using Addr = Register::Address<0x40027201,0xffffff10,0x00000000,unsigned char>;
        /// bitfield SCIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> scif{}; 
        /// bitfield PCIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pcif{}; 
        /// bitfield CMPIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpif{}; 
        /// bitfield SCIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scie{}; 
        /// bitfield PCIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcie{}; 
        /// bitfield CMPIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpie{}; 
        /// bitfield OVRIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrie{}; 
    }
    namespace Adc2Adsr{    ///< register ADSR 
        using Addr = Register::Address<0x40027200,0xffffff38,0x00000000,unsigned char>;
        /// bitfield ADSTP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adstp{}; 
        /// bitfield FDAS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fdas{}; 
        /// bitfield PCNS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcns{}; 
        /// bitfield PCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pcs{}; 
        /// bitfield SCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scs{}; 
    }
    namespace Adc2Sccr{    ///< register SCCR 
        using Addr = Register::Address<0x40027209,0xffffff08,0x00000000,unsigned char>;
        /// bitfield SEMP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> semp{}; 
        /// bitfield SFUL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sful{}; 
        /// bitfield SOVR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sovr{}; 
        /// bitfield SFCLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sfclr{}; 
        /// bitfield RPT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rpt{}; 
        /// bitfield SHEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> shen{}; 
        /// bitfield SSTR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sstr{}; 
    }
    namespace Adc2Sfns{    ///< register SFNS 
        using Addr = Register::Address<0x40027208,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield SFS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfs{}; 
    }
    namespace Adc2Scfd{    ///< register SCFD 
        using Addr = Register::Address<0x4002720c,0x000fece0,0x00000000,unsigned>;
        /// bitfield SD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sd{}; 
        /// bitfield INVL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> invl{}; 
        /// bitfield RS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rs{}; 
        /// bitfield SC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sc{}; 
    }
    namespace Adc2Scis3{    ///< register SCIS3 
        using Addr = Register::Address<0x40027211,0xffffff00,0x00000000,unsigned char>;
        /// bitfield AN31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an31{}; 
        /// bitfield AN30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an30{}; 
        /// bitfield AN29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an29{}; 
        /// bitfield AN28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an28{}; 
        /// bitfield AN27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an27{}; 
        /// bitfield AN26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an26{}; 
        /// bitfield AN25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an25{}; 
        /// bitfield AN24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an24{}; 
    }
    namespace Adc2Scis2{    ///< register SCIS2 
        using Addr = Register::Address<0x40027210,0xffffff00,0x00000000,unsigned char>;
        /// bitfield AN23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an23{}; 
        /// bitfield AN22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an22{}; 
        /// bitfield AN21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an21{}; 
        /// bitfield AN20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an20{}; 
        /// bitfield AN19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an19{}; 
        /// bitfield AN18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an18{}; 
        /// bitfield AN17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an17{}; 
        /// bitfield AN16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an16{}; 
    }
    namespace Adc2Scis1{    ///< register SCIS1 
        using Addr = Register::Address<0x40027215,0xffffff00,0x00000000,unsigned char>;
        /// bitfield AN15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an15{}; 
        /// bitfield AN14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an14{}; 
        /// bitfield AN13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an13{}; 
        /// bitfield AN12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an12{}; 
        /// bitfield AN11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an11{}; 
        /// bitfield AN10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an10{}; 
        /// bitfield AN9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an9{}; 
        /// bitfield AN8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an8{}; 
    }
    namespace Adc2Scis0{    ///< register SCIS0 
        using Addr = Register::Address<0x40027214,0xffffff00,0x00000000,unsigned char>;
        /// bitfield AN7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        /// bitfield AN6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        /// bitfield AN5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        /// bitfield AN4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        /// bitfield AN3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        /// bitfield AN2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        /// bitfield AN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        /// bitfield AN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
    }
    namespace Adc2Pfns{    ///< register PFNS 
        using Addr = Register::Address<0x40027218,0xffffffcc,0x00000000,unsigned char>;
        /// bitfield TEST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> test{}; 
        /// bitfield PFS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pfs{}; 
    }
    namespace Adc2Pccr{    ///< register PCCR 
        using Addr = Register::Address<0x40027219,0xffffff00,0x00000000,unsigned char>;
        /// bitfield PEMP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pemp{}; 
        /// bitfield PFUL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pful{}; 
        /// bitfield POVR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> povr{}; 
        /// bitfield PFCLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pfclr{}; 
        /// bitfield ESCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esce{}; 
        /// bitfield PEEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peen{}; 
        /// bitfield PHEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> phen{}; 
        /// bitfield PSTR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pstr{}; 
    }
    namespace Adc2Pcfd{    ///< register PCFD 
        using Addr = Register::Address<0x4002721c,0x000fe8e0,0x00000000,unsigned>;
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pd{}; 
        /// bitfield INVL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> invl{}; 
        /// bitfield RS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rs{}; 
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pc{}; 
    }
    namespace Adc2Pcis{    ///< register PCIS 
        using Addr = Register::Address<0x40027220,0xffffff00,0x00000000,unsigned char>;
        /// bitfield P2A 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> p2a{}; 
        /// bitfield P1A 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> p1a{}; 
    }
    namespace Adc2Cmpcr{    ///< register CMPCR 
        using Addr = Register::Address<0x40027224,0xffffff00,0x00000000,unsigned char>;
        /// bitfield CMPEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmpen{}; 
        /// bitfield CMD1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmd1{}; 
        /// bitfield CMD0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmd0{}; 
        /// bitfield CCH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cch{}; 
    }
    namespace Adc2Cmpd{    ///< register CMPD 
        using Addr = Register::Address<0x40027226,0xffff003f,0x00000000,unsigned>;
        /// bitfield CMAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmad{}; 
    }
    namespace Adc2Adss3{    ///< register ADSS3 
        using Addr = Register::Address<0x40027229,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TS31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts31{}; 
        /// bitfield TS30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts30{}; 
        /// bitfield TS29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts29{}; 
        /// bitfield TS28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts28{}; 
        /// bitfield TS27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts27{}; 
        /// bitfield TS26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts26{}; 
        /// bitfield TS25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts25{}; 
        /// bitfield TS24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts24{}; 
    }
    namespace Adc2Adss2{    ///< register ADSS2 
        using Addr = Register::Address<0x40027228,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TS23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts23{}; 
        /// bitfield TS22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts22{}; 
        /// bitfield TS21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts21{}; 
        /// bitfield TS20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts20{}; 
        /// bitfield TS19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts19{}; 
        /// bitfield TS18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts18{}; 
        /// bitfield TS17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts17{}; 
        /// bitfield TS16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts16{}; 
    }
    namespace Adc2Adss1{    ///< register ADSS1 
        using Addr = Register::Address<0x4002722d,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TS15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts15{}; 
        /// bitfield TS14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts14{}; 
        /// bitfield TS13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts13{}; 
        /// bitfield TS12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts12{}; 
        /// bitfield TS11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts11{}; 
        /// bitfield TS10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts10{}; 
        /// bitfield TS9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts9{}; 
        /// bitfield TS8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts8{}; 
    }
    namespace Adc2Adss0{    ///< register ADSS0 
        using Addr = Register::Address<0x4002722c,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TS7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts7{}; 
        /// bitfield TS6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts6{}; 
        /// bitfield TS5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts5{}; 
        /// bitfield TS4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts4{}; 
        /// bitfield TS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts3{}; 
        /// bitfield TS2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts2{}; 
        /// bitfield TS1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts1{}; 
        /// bitfield TS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts0{}; 
    }
    namespace Adc2Adst1{    ///< register ADST1 
        using Addr = Register::Address<0x40027230,0xffffff00,0x00000000,unsigned char>;
        /// bitfield STX1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx1{}; 
        /// bitfield ST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st1{}; 
    }
    namespace Adc2Adst0{    ///< register ADST0 
        using Addr = Register::Address<0x40027231,0xffffff00,0x00000000,unsigned char>;
        /// bitfield STX0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx0{}; 
        /// bitfield ST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st0{}; 
    }
    namespace Adc2Adct{    ///< register ADCT 
        using Addr = Register::Address<0x40027234,0xffffff00,0x00000000,unsigned char>;
        /// bitfield CT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ct{}; 
    }
    namespace Adc2Prtsl{    ///< register PRTSL 
        using Addr = Register::Address<0x40027238,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield PRTSL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prtsl{}; 
    }
    namespace Adc2Sctsl{    ///< register SCTSL 
        using Addr = Register::Address<0x40027239,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield SCTSL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sctsl{}; 
    }
    namespace Adc2Adcen{    ///< register ADCEN 
        using Addr = Register::Address<0x4002723c,0xffff00fc,0x00000000,unsigned>;
        /// bitfield ENBLTIME 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> enbltime{}; 
        /// bitfield READY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ready{}; 
        /// bitfield ENBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enbl{}; 
    }
    namespace Adc2Wcmrcot{    ///< register WCMRCOT 
        using Addr = Register::Address<0x40027244,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield RCOOF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcoof{}; 
    }
    namespace Adc2Wcmrcif{    ///< register WCMRCIF 
        using Addr = Register::Address<0x40027248,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield RCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcint{}; 
    }
    namespace Adc2Wcmpcr{    ///< register WCMPCR 
        using Addr = Register::Address<0x4002724c,0xffffff03,0x00000000,unsigned char>;
        /// bitfield RCOCD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcocd{}; 
        /// bitfield RCOIRS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcoirs{}; 
        /// bitfield RCOIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rcoie{}; 
        /// bitfield RCOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rcoe{}; 
    }
    namespace Adc2Wcmpsr{    ///< register WCMPSR 
        using Addr = Register::Address<0x4002724d,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield WCMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wcmd{}; 
        /// bitfield WCCH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> wcch{}; 
    }
    namespace Adc2Wcmpdl{    ///< register WCMPDL 
        using Addr = Register::Address<0x40027250,0xffff003f,0x00000000,unsigned>;
        /// bitfield CMLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmld{}; 
    }
    namespace Adc2Wcmpdh{    ///< register WCMPDH 
        using Addr = Register::Address<0x40027252,0xffff003f,0x00000000,unsigned>;
        /// bitfield CMHD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmhd{}; 
    }
}
