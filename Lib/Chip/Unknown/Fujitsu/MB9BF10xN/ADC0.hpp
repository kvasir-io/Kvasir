#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ADC0 Registers
    namespace Noneadcr{    ///<A/D Control Register
        using Addr = Register::Address<0x40027001,0xffffff10,0,unsigned char>;
        ///Scan conversion interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> scif{}; 
        namespace ScifValC{
        }
        ///Priority conversion interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pcif{}; 
        namespace PcifValC{
        }
        ///Conversion result comparison interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpif{}; 
        namespace CmpifValC{
        }
        ///Scan conversion interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scie{}; 
        namespace ScieValC{
        }
        ///Priority conversion interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcie{}; 
        namespace PcieValC{
        }
        ///Conversion result comparison interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpie{}; 
        namespace CmpieValC{
        }
        ///FIFO overrun interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrie{}; 
        namespace OvrieValC{
        }
    }
    namespace Noneadsr{    ///<A/D Status Register
        using Addr = Register::Address<0x40027000,0xffffff38,0,unsigned char>;
        ///A/D conversion forced stop bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adstp{}; 
        namespace AdstpValC{
        }
        ///FIFO data placement selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fdas{}; 
        namespace FdasValC{
        }
        ///Priority conversion pending flag 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcns{}; 
        namespace PcnsValC{
        }
        ///Priority conversion status flag 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pcs{}; 
        namespace PcsValC{
        }
        ///Scan conversion status flag 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scs{}; 
        namespace ScsValC{
        }
    }
    namespace Nonesccr{    ///<Scan Conversion Control Register
        using Addr = Register::Address<0x40027009,0xffffff08,0,unsigned char>;
        ///Scan conversion FIFO empty bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> semp{}; 
        namespace SempValC{
        }
        ///Scan conversion FIFO full bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sful{}; 
        namespace SfulValC{
        }
        ///Scan conversion overrun flag 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sovr{}; 
        namespace SovrValC{
        }
        ///Scan conversion FIFO clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sfclr{}; 
        namespace SfclrValC{
        }
        ///Scan conversion repeat bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rpt{}; 
        namespace RptValC{
        }
        ///Scan conversion timer start enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> shen{}; 
        namespace ShenValC{
        }
        ///Scan conversion start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sstr{}; 
        namespace SstrValC{
        }
    }
    namespace Nonesfns{    ///<Scan Conversion FIFO Stage Count Setup Register
        using Addr = Register::Address<0x40027008,0xfffffff0,0,unsigned char>;
        ///Scan conversion FIFO stage count setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfs{}; 
        namespace SfsValC{
        }
    }
    namespace Nonescfd{    ///<Scan Conversion FIFO Data Register
        using Addr = Register::Address<0x4002700c,0x000fece0,0,unsigned>;
        ///Scan conversion result 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> sd{}; 
        namespace SdValC{
        }
        ///A/D conversion result disable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invl{}; 
        namespace InvlValC{
        }
        ///Scan conversion start factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rs{}; 
        namespace RsValC{
        }
        ///Conversion input channel bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sc{}; 
        namespace ScValC{
        }
    }
    namespace Nonescis3{    ///<Scan Conversion Input Selection Register 3
        using Addr = Register::Address<0x40027011,0xffffff00,0,unsigned char>;
        ///Bit7 of SCIS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an31{}; 
        namespace An31ValC{
        }
        ///Bit6 of SCIS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an30{}; 
        namespace An30ValC{
        }
        ///Bit5 of SCIS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an29{}; 
        namespace An29ValC{
        }
        ///Bit4 of SCIS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an28{}; 
        namespace An28ValC{
        }
        ///Bit3 of SCIS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an27{}; 
        namespace An27ValC{
        }
        ///Bit2 of SCIS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an26{}; 
        namespace An26ValC{
        }
        ///Bit1 of SCIS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an25{}; 
        namespace An25ValC{
        }
        ///Bit0 of SCIS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an24{}; 
        namespace An24ValC{
        }
    }
    namespace Nonescis2{    ///<Scan Conversion Input Selection Register 2
        using Addr = Register::Address<0x40027010,0xffffff00,0,unsigned char>;
        ///Bit7 of SCIS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an23{}; 
        namespace An23ValC{
        }
        ///Bit6 of SCIS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an22{}; 
        namespace An22ValC{
        }
        ///Bit5 of SCIS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an21{}; 
        namespace An21ValC{
        }
        ///Bit4 of SCIS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an20{}; 
        namespace An20ValC{
        }
        ///Bit3 of SCIS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an19{}; 
        namespace An19ValC{
        }
        ///Bit2 of SCIS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an18{}; 
        namespace An18ValC{
        }
        ///Bit1 of SCIS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an17{}; 
        namespace An17ValC{
        }
        ///Bit0 of SCIS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an16{}; 
        namespace An16ValC{
        }
    }
    namespace Nonescis1{    ///<Scan Conversion Input Selection Register 1
        using Addr = Register::Address<0x40027015,0xffffff00,0,unsigned char>;
        ///Bit7 of SCIS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an15{}; 
        namespace An15ValC{
        }
        ///Bit6 of SCIS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an14{}; 
        namespace An14ValC{
        }
        ///Bit5 of SCIS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an13{}; 
        namespace An13ValC{
        }
        ///Bit4 of SCIS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an12{}; 
        namespace An12ValC{
        }
        ///Bit3 of SCIS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an11{}; 
        namespace An11ValC{
        }
        ///Bit2 of SCIS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an10{}; 
        namespace An10ValC{
        }
        ///Bit1 of SCIS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an9{}; 
        namespace An9ValC{
        }
        ///Bit0 of SCIS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an8{}; 
        namespace An8ValC{
        }
    }
    namespace Nonescis0{    ///<Scan Conversion Input Selection Register 0
        using Addr = Register::Address<0x40027014,0xffffff00,0,unsigned char>;
        ///Bit7 of SCIS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        namespace An7ValC{
        }
        ///Bit6 of SCIS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        namespace An6ValC{
        }
        ///Bit5 of SCIS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        namespace An5ValC{
        }
        ///Bit4 of SCIS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        namespace An4ValC{
        }
        ///Bit3 of SCIS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        namespace An3ValC{
        }
        ///Bit2 of SCIS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        namespace An2ValC{
        }
        ///Bit1 of SCIS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        namespace An1ValC{
        }
        ///Bit0 of SCIS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
        namespace An0ValC{
        }
    }
    namespace Nonepfns{    ///<Priority Conversion FIFO Stage Count Setup Register
        using Addr = Register::Address<0x40027018,0xffffffcc,0,unsigned char>;
        ///Test bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> test{}; 
        namespace TestValC{
        }
        ///Priority conversion FIFO stage count setting bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pfs{}; 
        namespace PfsValC{
        }
    }
    namespace Nonepccr{    ///<Priority Conversion Control Register
        using Addr = Register::Address<0x40027019,0xffffff00,0,unsigned char>;
        ///Priority conversion FIFO empty bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pemp{}; 
        namespace PempValC{
        }
        ///Priority conversion FIFO full bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pful{}; 
        namespace PfulValC{
        }
        ///Priority conversion overrun flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> povr{}; 
        namespace PovrValC{
        }
        ///Priority conversion FIFO clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pfclr{}; 
        namespace PfclrValC{
        }
        ///External trigger analog input selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esce{}; 
        namespace EsceValC{
        }
        ///Priority conversion external start enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peen{}; 
        namespace PeenValC{
        }
        ///Priority conversion timer start enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> phen{}; 
        namespace PhenValC{
        }
        ///Priority conversion start bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pstr{}; 
        namespace PstrValC{
        }
    }
    namespace Nonepcfd{    ///<Priority Conversion FIFO Data Register
        using Addr = Register::Address<0x4002701c,0x000fe8e0,0,unsigned>;
        ///Priority conversion result 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///A/D conversion result disable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invl{}; 
        namespace InvlValC{
        }
        ///Scan conversion start factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> rs{}; 
        namespace RsValC{
        }
        ///Conversion input channel bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
    }
    namespace Nonepcis{    ///<Priority Conversion Input Selection Register
        using Addr = Register::Address<0x40027020,0xffffff00,0,unsigned char>;
        ///Priority level 2 analog input selection 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> p2a{}; 
        namespace P2aValC{
        }
        ///Priority level 1 analog input selection 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> p1a{}; 
        namespace P1aValC{
        }
    }
    namespace Nonecmpcr{    ///<A/D Comparison Control Register
        using Addr = Register::Address<0x40027024,0xffffff00,0,unsigned char>;
        ///Conversion result comparison function operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmpen{}; 
        namespace CmpenValC{
        }
        ///Comparison mode 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmd1{}; 
        namespace Cmd1ValC{
        }
        ///Comparison mode 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmd0{}; 
        namespace Cmd0ValC{
        }
        ///Comparison target analog input channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cch{}; 
        namespace CchValC{
        }
    }
    namespace Nonecmpd{    ///<A/D Comparison Value Setup Register
        using Addr = Register::Address<0x40027026,0xffff003f,0,unsigned>;
        ///A/D conversion result value setting bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmad{}; 
        namespace CmadValC{
        }
    }
    namespace Noneadss3{    ///<Sampling Time Selection Register 3
        using Addr = Register::Address<0x40027029,0xffffff00,0,unsigned char>;
        ///Bit7 of ADSS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts31{}; 
        namespace Ts31ValC{
        }
        ///Bit6 of ADSS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts30{}; 
        namespace Ts30ValC{
        }
        ///Bit5 of ADSS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts29{}; 
        namespace Ts29ValC{
        }
        ///Bit4 of ADSS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts28{}; 
        namespace Ts28ValC{
        }
        ///Bit3 of ADSS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts27{}; 
        namespace Ts27ValC{
        }
        ///Bit2 of ADSS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts26{}; 
        namespace Ts26ValC{
        }
        ///Bit1 of ADSS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts25{}; 
        namespace Ts25ValC{
        }
        ///Bit0 of ADSS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts24{}; 
        namespace Ts24ValC{
        }
    }
    namespace Noneadss2{    ///<Sampling Time Selection Register 2
        using Addr = Register::Address<0x40027028,0xffffff00,0,unsigned char>;
        ///Bit7 of ADSS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts23{}; 
        namespace Ts23ValC{
        }
        ///Bit6 of ADSS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts22{}; 
        namespace Ts22ValC{
        }
        ///Bit5 of ADSS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts21{}; 
        namespace Ts21ValC{
        }
        ///Bit4 of ADSS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts20{}; 
        namespace Ts20ValC{
        }
        ///Bit3 of ADSS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts19{}; 
        namespace Ts19ValC{
        }
        ///Bit2 of ADSS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts18{}; 
        namespace Ts18ValC{
        }
        ///Bit1 of ADSS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts17{}; 
        namespace Ts17ValC{
        }
        ///Bit0 of ADSS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts16{}; 
        namespace Ts16ValC{
        }
    }
    namespace Noneadss1{    ///<Sampling Time Selection Register 1
        using Addr = Register::Address<0x4002702d,0xffffff00,0,unsigned char>;
        ///Bit7 of ADSS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts15{}; 
        namespace Ts15ValC{
        }
        ///Bit6 of ADSS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts14{}; 
        namespace Ts14ValC{
        }
        ///Bit5 of ADSS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts13{}; 
        namespace Ts13ValC{
        }
        ///Bit4 of ADSS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts12{}; 
        namespace Ts12ValC{
        }
        ///Bit3 of ADSS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts11{}; 
        namespace Ts11ValC{
        }
        ///Bit2 of ADSS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts10{}; 
        namespace Ts10ValC{
        }
        ///Bit1 of ADSS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts9{}; 
        namespace Ts9ValC{
        }
        ///Bit0 of ADSS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts8{}; 
        namespace Ts8ValC{
        }
    }
    namespace Noneadss0{    ///<Sampling Time Selection Register 0
        using Addr = Register::Address<0x4002702c,0xffffff00,0,unsigned char>;
        ///Bit7 of ADSS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts7{}; 
        namespace Ts7ValC{
        }
        ///Bit6 of ADSS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts6{}; 
        namespace Ts6ValC{
        }
        ///Bit5 of ADSS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts5{}; 
        namespace Ts5ValC{
        }
        ///Bit4 of ADSS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts4{}; 
        namespace Ts4ValC{
        }
        ///Bit3 of ADSS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts3{}; 
        namespace Ts3ValC{
        }
        ///Bit2 of ADSS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts2{}; 
        namespace Ts2ValC{
        }
        ///Bit1 of ADSS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts1{}; 
        namespace Ts1ValC{
        }
        ///Bit0 of ADSS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts0{}; 
        namespace Ts0ValC{
        }
    }
    namespace Noneadst1{    ///<Sampling Time Setup Register 1
        using Addr = Register::Address<0x40027030,0xffffff00,0,unsigned char>;
        ///Sampling time N times setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx1{}; 
        namespace Stx1ValC{
        }
        ///Sampling time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st1{}; 
        namespace St1ValC{
        }
    }
    namespace Noneadst0{    ///<Sampling Time Setup Register 0
        using Addr = Register::Address<0x40027031,0xffffff00,0,unsigned char>;
        ///Sampling time N times setting bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx0{}; 
        namespace Stx0ValC{
        }
        ///Sampling time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st0{}; 
        namespace St0ValC{
        }
    }
    namespace Noneadct{    ///<Comparison Time Setup Register
        using Addr = Register::Address<0x40027034,0xfffffff8,0,unsigned char>;
        ///Compare clock frequency division ratio setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ct{}; 
        namespace CtValC{
        }
    }
    namespace Noneprtsl{    ///<Priority Conversion Timer Trigger Selection Register
        using Addr = Register::Address<0x40027038,0xfffffff0,0,unsigned char>;
        ///Priority conversion timer trigger selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prtsl{}; 
        namespace PrtslValC{
        }
    }
    namespace Nonesctsl{    ///<Scan Conversion Timer Trigger Selection Register
        using Addr = Register::Address<0x40027039,0xfffffff0,0,unsigned char>;
        ///Scan conversion timer trigger selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sctsl{}; 
        namespace SctslValC{
        }
    }
    namespace Noneadcen{    ///<A/D Operation Enable Setup Register
        using Addr = Register::Address<0x4002703c,0xfffffffc,0,unsigned char>;
        ///A/D operation enable state bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ready{}; 
        namespace ReadyValC{
        }
        ///A/D operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enbl{}; 
        namespace EnblValC{
        }
    }
}
