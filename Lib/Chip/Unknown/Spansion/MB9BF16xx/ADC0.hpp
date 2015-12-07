#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral ADC0 
    namespace Noneadcr{    ///< register ADCR 
        using Addr = Register::Address<0x40027001,0xffffff10,0,unsigned char>;
        /// bitfield SCIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> scif{}; 
        namespace ScifValC{
        }
        /// bitfield PCIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pcif{}; 
        namespace PcifValC{
        }
        /// bitfield CMPIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpif{}; 
        namespace CmpifValC{
        }
        /// bitfield SCIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scie{}; 
        namespace ScieValC{
        }
        /// bitfield PCIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcie{}; 
        namespace PcieValC{
        }
        /// bitfield CMPIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpie{}; 
        namespace CmpieValC{
        }
        /// bitfield OVRIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrie{}; 
        namespace OvrieValC{
        }
    }
    namespace Noneadsr{    ///< register ADSR 
        using Addr = Register::Address<0x40027000,0xffffff38,0,unsigned char>;
        /// bitfield ADSTP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adstp{}; 
        namespace AdstpValC{
        }
        /// bitfield FDAS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fdas{}; 
        namespace FdasValC{
        }
        /// bitfield PCNS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcns{}; 
        namespace PcnsValC{
        }
        /// bitfield PCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pcs{}; 
        namespace PcsValC{
        }
        /// bitfield SCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scs{}; 
        namespace ScsValC{
        }
    }
    namespace Nonesccr{    ///< register SCCR 
        using Addr = Register::Address<0x40027009,0xffffff08,0,unsigned char>;
        /// bitfield SEMP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> semp{}; 
        namespace SempValC{
        }
        /// bitfield SFUL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sful{}; 
        namespace SfulValC{
        }
        /// bitfield SOVR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sovr{}; 
        namespace SovrValC{
        }
        /// bitfield SFCLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sfclr{}; 
        namespace SfclrValC{
        }
        /// bitfield RPT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rpt{}; 
        namespace RptValC{
        }
        /// bitfield SHEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> shen{}; 
        namespace ShenValC{
        }
        /// bitfield SSTR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sstr{}; 
        namespace SstrValC{
        }
    }
    namespace Nonesfns{    ///< register SFNS 
        using Addr = Register::Address<0x40027008,0xfffffff0,0,unsigned char>;
        /// bitfield SFS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfs{}; 
        namespace SfsValC{
        }
    }
    namespace Nonescfd{    ///< register SCFD 
        using Addr = Register::Address<0x4002700c,0x000fece0,0,unsigned>;
        /// bitfield SD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> sd{}; 
        namespace SdValC{
        }
        /// bitfield INVL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invl{}; 
        namespace InvlValC{
        }
        /// bitfield RS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rs{}; 
        namespace RsValC{
        }
        /// bitfield SC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sc{}; 
        namespace ScValC{
        }
    }
    namespace Nonescis3{    ///< register SCIS3 
        using Addr = Register::Address<0x40027011,0xffffff00,0,unsigned char>;
        /// bitfield AN31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an31{}; 
        namespace An31ValC{
        }
        /// bitfield AN30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an30{}; 
        namespace An30ValC{
        }
        /// bitfield AN29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an29{}; 
        namespace An29ValC{
        }
        /// bitfield AN28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an28{}; 
        namespace An28ValC{
        }
        /// bitfield AN27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an27{}; 
        namespace An27ValC{
        }
        /// bitfield AN26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an26{}; 
        namespace An26ValC{
        }
        /// bitfield AN25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an25{}; 
        namespace An25ValC{
        }
        /// bitfield AN24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an24{}; 
        namespace An24ValC{
        }
    }
    namespace Nonescis2{    ///< register SCIS2 
        using Addr = Register::Address<0x40027010,0xffffff00,0,unsigned char>;
        /// bitfield AN23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an23{}; 
        namespace An23ValC{
        }
        /// bitfield AN22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an22{}; 
        namespace An22ValC{
        }
        /// bitfield AN21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an21{}; 
        namespace An21ValC{
        }
        /// bitfield AN20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an20{}; 
        namespace An20ValC{
        }
        /// bitfield AN19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an19{}; 
        namespace An19ValC{
        }
        /// bitfield AN18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an18{}; 
        namespace An18ValC{
        }
        /// bitfield AN17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an17{}; 
        namespace An17ValC{
        }
        /// bitfield AN16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an16{}; 
        namespace An16ValC{
        }
    }
    namespace Nonescis1{    ///< register SCIS1 
        using Addr = Register::Address<0x40027015,0xffffff00,0,unsigned char>;
        /// bitfield AN15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an15{}; 
        namespace An15ValC{
        }
        /// bitfield AN14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an14{}; 
        namespace An14ValC{
        }
        /// bitfield AN13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an13{}; 
        namespace An13ValC{
        }
        /// bitfield AN12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an12{}; 
        namespace An12ValC{
        }
        /// bitfield AN11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an11{}; 
        namespace An11ValC{
        }
        /// bitfield AN10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an10{}; 
        namespace An10ValC{
        }
        /// bitfield AN9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an9{}; 
        namespace An9ValC{
        }
        /// bitfield AN8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an8{}; 
        namespace An8ValC{
        }
    }
    namespace Nonescis0{    ///< register SCIS0 
        using Addr = Register::Address<0x40027014,0xffffff00,0,unsigned char>;
        /// bitfield AN7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        namespace An7ValC{
        }
        /// bitfield AN6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        namespace An6ValC{
        }
        /// bitfield AN5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        namespace An5ValC{
        }
        /// bitfield AN4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        namespace An4ValC{
        }
        /// bitfield AN3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        namespace An3ValC{
        }
        /// bitfield AN2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        namespace An2ValC{
        }
        /// bitfield AN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        namespace An1ValC{
        }
        /// bitfield AN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
        namespace An0ValC{
        }
    }
    namespace Nonepfns{    ///< register PFNS 
        using Addr = Register::Address<0x40027018,0xffffffcc,0,unsigned char>;
        /// bitfield TEST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> test{}; 
        namespace TestValC{
        }
        /// bitfield PFS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pfs{}; 
        namespace PfsValC{
        }
    }
    namespace Nonepccr{    ///< register PCCR 
        using Addr = Register::Address<0x40027019,0xffffff00,0,unsigned char>;
        /// bitfield PEMP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pemp{}; 
        namespace PempValC{
        }
        /// bitfield PFUL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pful{}; 
        namespace PfulValC{
        }
        /// bitfield POVR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> povr{}; 
        namespace PovrValC{
        }
        /// bitfield PFCLR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pfclr{}; 
        namespace PfclrValC{
        }
        /// bitfield ESCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esce{}; 
        namespace EsceValC{
        }
        /// bitfield PEEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peen{}; 
        namespace PeenValC{
        }
        /// bitfield PHEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> phen{}; 
        namespace PhenValC{
        }
        /// bitfield PSTR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pstr{}; 
        namespace PstrValC{
        }
    }
    namespace Nonepcfd{    ///< register PCFD 
        using Addr = Register::Address<0x4002701c,0x000fe8e0,0,unsigned>;
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        /// bitfield INVL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invl{}; 
        namespace InvlValC{
        }
        /// bitfield RS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> rs{}; 
        namespace RsValC{
        }
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
    }
    namespace Nonepcis{    ///< register PCIS 
        using Addr = Register::Address<0x40027020,0xffffff00,0,unsigned char>;
        /// bitfield P2A 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> p2a{}; 
        namespace P2aValC{
        }
        /// bitfield P1A 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> p1a{}; 
        namespace P1aValC{
        }
    }
    namespace Nonecmpcr{    ///< register CMPCR 
        using Addr = Register::Address<0x40027024,0xffffff00,0,unsigned char>;
        /// bitfield CMPEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmpen{}; 
        namespace CmpenValC{
        }
        /// bitfield CMD1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmd1{}; 
        namespace Cmd1ValC{
        }
        /// bitfield CMD0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmd0{}; 
        namespace Cmd0ValC{
        }
        /// bitfield CCH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cch{}; 
        namespace CchValC{
        }
    }
    namespace Nonecmpd{    ///< register CMPD 
        using Addr = Register::Address<0x40027026,0xffff003f,0,unsigned>;
        /// bitfield CMAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmad{}; 
        namespace CmadValC{
        }
    }
    namespace Noneadss3{    ///< register ADSS3 
        using Addr = Register::Address<0x40027029,0xffffff00,0,unsigned char>;
        /// bitfield TS31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts31{}; 
        namespace Ts31ValC{
        }
        /// bitfield TS30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts30{}; 
        namespace Ts30ValC{
        }
        /// bitfield TS29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts29{}; 
        namespace Ts29ValC{
        }
        /// bitfield TS28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts28{}; 
        namespace Ts28ValC{
        }
        /// bitfield TS27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts27{}; 
        namespace Ts27ValC{
        }
        /// bitfield TS26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts26{}; 
        namespace Ts26ValC{
        }
        /// bitfield TS25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts25{}; 
        namespace Ts25ValC{
        }
        /// bitfield TS24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts24{}; 
        namespace Ts24ValC{
        }
    }
    namespace Noneadss2{    ///< register ADSS2 
        using Addr = Register::Address<0x40027028,0xffffff00,0,unsigned char>;
        /// bitfield TS23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts23{}; 
        namespace Ts23ValC{
        }
        /// bitfield TS22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts22{}; 
        namespace Ts22ValC{
        }
        /// bitfield TS21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts21{}; 
        namespace Ts21ValC{
        }
        /// bitfield TS20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts20{}; 
        namespace Ts20ValC{
        }
        /// bitfield TS19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts19{}; 
        namespace Ts19ValC{
        }
        /// bitfield TS18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts18{}; 
        namespace Ts18ValC{
        }
        /// bitfield TS17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts17{}; 
        namespace Ts17ValC{
        }
        /// bitfield TS16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts16{}; 
        namespace Ts16ValC{
        }
    }
    namespace Noneadss1{    ///< register ADSS1 
        using Addr = Register::Address<0x4002702d,0xffffff00,0,unsigned char>;
        /// bitfield TS15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts15{}; 
        namespace Ts15ValC{
        }
        /// bitfield TS14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts14{}; 
        namespace Ts14ValC{
        }
        /// bitfield TS13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts13{}; 
        namespace Ts13ValC{
        }
        /// bitfield TS12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts12{}; 
        namespace Ts12ValC{
        }
        /// bitfield TS11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts11{}; 
        namespace Ts11ValC{
        }
        /// bitfield TS10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts10{}; 
        namespace Ts10ValC{
        }
        /// bitfield TS9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts9{}; 
        namespace Ts9ValC{
        }
        /// bitfield TS8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts8{}; 
        namespace Ts8ValC{
        }
    }
    namespace Noneadss0{    ///< register ADSS0 
        using Addr = Register::Address<0x4002702c,0xffffff00,0,unsigned char>;
        /// bitfield TS7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts7{}; 
        namespace Ts7ValC{
        }
        /// bitfield TS6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts6{}; 
        namespace Ts6ValC{
        }
        /// bitfield TS5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts5{}; 
        namespace Ts5ValC{
        }
        /// bitfield TS4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts4{}; 
        namespace Ts4ValC{
        }
        /// bitfield TS3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts3{}; 
        namespace Ts3ValC{
        }
        /// bitfield TS2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts2{}; 
        namespace Ts2ValC{
        }
        /// bitfield TS1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts1{}; 
        namespace Ts1ValC{
        }
        /// bitfield TS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts0{}; 
        namespace Ts0ValC{
        }
    }
    namespace Noneadst1{    ///< register ADST1 
        using Addr = Register::Address<0x40027030,0xffffff00,0,unsigned char>;
        /// bitfield STX1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx1{}; 
        namespace Stx1ValC{
        }
        /// bitfield ST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st1{}; 
        namespace St1ValC{
        }
    }
    namespace Noneadst0{    ///< register ADST0 
        using Addr = Register::Address<0x40027031,0xffffff00,0,unsigned char>;
        /// bitfield STX0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx0{}; 
        namespace Stx0ValC{
        }
        /// bitfield ST0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st0{}; 
        namespace St0ValC{
        }
    }
    namespace Noneadct{    ///< register ADCT 
        using Addr = Register::Address<0x40027034,0xffffff00,0,unsigned char>;
        /// bitfield CT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
    }
    namespace Noneprtsl{    ///< register PRTSL 
        using Addr = Register::Address<0x40027038,0xfffffff0,0,unsigned char>;
        /// bitfield PRTSL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prtsl{}; 
        namespace PrtslValC{
        }
    }
    namespace Nonesctsl{    ///< register SCTSL 
        using Addr = Register::Address<0x40027039,0xfffffff0,0,unsigned char>;
        /// bitfield SCTSL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sctsl{}; 
        namespace SctslValC{
        }
    }
    namespace Noneadcen{    ///< register ADCEN 
        using Addr = Register::Address<0x4002703c,0xffff00fc,0,unsigned>;
        /// bitfield ENBLTIME 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> enbltime{}; 
        namespace EnbltimeValC{
        }
        /// bitfield READY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ready{}; 
        namespace ReadyValC{
        }
        /// bitfield ENBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enbl{}; 
        namespace EnblValC{
        }
    }
    namespace Nonewcmrcot{    ///< register WCMRCOT 
        using Addr = Register::Address<0x40027044,0xfffffffe,0,unsigned char>;
        /// bitfield RCOOF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcoof{}; 
        namespace RcoofValC{
        }
    }
    namespace Nonewcmrcif{    ///< register WCMRCIF 
        using Addr = Register::Address<0x40027048,0xfffffffe,0,unsigned char>;
        /// bitfield RCINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcint{}; 
        namespace RcintValC{
        }
    }
    namespace Nonewcmpcr{    ///< register WCMPCR 
        using Addr = Register::Address<0x4002704c,0xffffff03,0,unsigned char>;
        /// bitfield RCOCD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcocd{}; 
        namespace RcocdValC{
        }
        /// bitfield RCOIRS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcoirs{}; 
        namespace RcoirsValC{
        }
        /// bitfield RCOIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rcoie{}; 
        namespace RcoieValC{
        }
        /// bitfield RCOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rcoe{}; 
        namespace RcoeValC{
        }
    }
    namespace Nonewcmpsr{    ///< register WCMPSR 
        using Addr = Register::Address<0x4002704d,0xffffffc0,0,unsigned char>;
        /// bitfield WCMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wcmd{}; 
        namespace WcmdValC{
        }
        /// bitfield WCCH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> wcch{}; 
        namespace WcchValC{
        }
    }
    namespace Nonewcmpdl{    ///< register WCMPDL 
        using Addr = Register::Address<0x40027050,0xffff003f,0,unsigned>;
        /// bitfield CMLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmld{}; 
        namespace CmldValC{
        }
    }
    namespace Nonewcmpdh{    ///< register WCMPDH 
        using Addr = Register::Address<0x40027052,0xffff003f,0,unsigned>;
        /// bitfield CMHD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmhd{}; 
        namespace CmhdValC{
        }
    }
}
