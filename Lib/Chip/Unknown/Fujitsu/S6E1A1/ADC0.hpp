#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ADC0 Registers
    namespace Noneadcr{    ///<A/D Control Register
        using Addr = Register::Address<0x40027001,0xffffff10,0,unsigned char>;
        ///Scan conversion interrupt request bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> scif{}; 
        ///Priority conversion interrupt request bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pcif{}; 
        ///Conversion result comparison interrupt request bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmpif{}; 
        ///Scan conversion interrupt enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scie{}; 
        ///Priority conversion interrupt enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcie{}; 
        ///Conversion result comparison interrupt enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpie{}; 
        ///FIFO overrun interrupt enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovrie{}; 
    }
    namespace Noneadsr{    ///<A/D Status Register
        using Addr = Register::Address<0x40027000,0xffffff38,0,unsigned char>;
        ///A/D conversion forced stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adstp{}; 
        ///FIFO data placement selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fdas{}; 
        ///Priority conversion pending flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pcns{}; 
        ///Priority conversion status flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///Scan conversion status flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> scs{}; 
    }
    namespace Nonesccr{    ///<Scan Conversion Control Register
        using Addr = Register::Address<0x40027009,0xffffff08,0,unsigned char>;
        ///Scan conversion FIFO empty bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> semp{}; 
        ///Scan conversion FIFO full bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sful{}; 
        ///Scan conversion overrun flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sovr{}; 
        ///Scan conversion FIFO clear bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sfclr{}; 
        ///Scan conversion repeat bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rpt{}; 
        ///Scan conversion timer start enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> shen{}; 
        ///Scan conversion start bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sstr{}; 
    }
    namespace Nonesfns{    ///<Scan Conversion FIFO Stage Count Setup Register
        using Addr = Register::Address<0x40027008,0xfffffff0,0,unsigned char>;
        ///Scan conversion FIFO stage count setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfs{}; 
    }
    namespace Nonescfd{    ///<Scan Conversion FIFO Data Register
        using Addr = Register::Address<0x4002700c,0x000fece0,0,unsigned>;
        ///Scan conversion result
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> sd{}; 
        ///A/D conversion result disable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invl{}; 
        ///Scan conversion start factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rs{}; 
        ///Conversion input channel bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> sc{}; 
    }
    namespace Nonescis3{    ///<Scan Conversion Input Selection Register 3
        using Addr = Register::Address<0x40027011,0xffffff00,0,unsigned char>;
        ///AN31 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an31{}; 
        ///AN30 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an30{}; 
        ///AN29 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an29{}; 
        ///AN28 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an28{}; 
        ///AN27 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an27{}; 
        ///AN26 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an26{}; 
        ///AN25 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an25{}; 
        ///AN24 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an24{}; 
    }
    namespace Nonescis2{    ///<Scan Conversion Input Selection Register 2
        using Addr = Register::Address<0x40027010,0xffffff00,0,unsigned char>;
        ///AN23 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an23{}; 
        ///AN22 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an22{}; 
        ///AN21 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an21{}; 
        ///AN20 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an20{}; 
        ///AN19 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an19{}; 
        ///AN18 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an18{}; 
        ///AN17 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an17{}; 
        ///AN16 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an16{}; 
    }
    namespace Nonescis1{    ///<Scan Conversion Input Selection Register 1
        using Addr = Register::Address<0x40027015,0xffffff00,0,unsigned char>;
        ///AN15 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an15{}; 
        ///AN14 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an14{}; 
        ///AN13 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an13{}; 
        ///AN12 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an12{}; 
        ///AN11 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an11{}; 
        ///AN10 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an10{}; 
        ///AN9 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an9{}; 
        ///AN8 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an8{}; 
    }
    namespace Nonescis0{    ///<Scan Conversion Input Selection Register 0
        using Addr = Register::Address<0x40027014,0xffffff00,0,unsigned char>;
        ///AN7 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        ///AN6 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        ///AN5 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        ///AN4 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        ///AN3 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        ///AN2 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        ///AN1 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        ///AN0 analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
    }
    namespace Nonepfns{    ///<Priority Conversion FIFO Stage Count Setup Register
        using Addr = Register::Address<0x40027018,0xffffffcc,0,unsigned char>;
        ///Test bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> test{}; 
        ///Priority conversion FIFO stage count setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> pfs{}; 
    }
    namespace Nonepccr{    ///<Priority Conversion Control Register
        using Addr = Register::Address<0x40027019,0xffffff00,0,unsigned char>;
        ///Priority conversion FIFO empty bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pemp{}; 
        ///Priority conversion FIFO full bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pful{}; 
        ///Priority conversion overrun flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> povr{}; 
        ///Priority conversion FIFO clear bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pfclr{}; 
        ///External trigger analog input selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> esce{}; 
        ///Priority conversion external start enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> peen{}; 
        ///Priority conversion timer start enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> phen{}; 
        ///Priority conversion start bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pstr{}; 
    }
    namespace Nonepcfd{    ///<Priority Conversion FIFO Data Register
        using Addr = Register::Address<0x4002701c,0x000fe8e0,0,unsigned>;
        ///Priority conversion result
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> pd{}; 
        ///A/D conversion result disable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invl{}; 
        ///Scan conversion start factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> rs{}; 
        ///Conversion input channel bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace Nonepcis{    ///<Priority Conversion Input Selection Register
        using Addr = Register::Address<0x40027020,0xffffff00,0,unsigned char>;
        ///Priority level 2 analog input selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> p2a{}; 
        ///Priority level 1 analog input selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> p1a{}; 
    }
    namespace Nonecmpcr{    ///<A/D Comparison Control Register
        using Addr = Register::Address<0x40027024,0xffffff00,0,unsigned char>;
        ///Conversion result comparison function operation enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmpen{}; 
        ///Comparison mode 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cmd1{}; 
        ///Comparison mode 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cmd0{}; 
        ///Comparison target analog input channel
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cch{}; 
    }
    namespace Nonecmpd{    ///<A/D Comparison Value Setup Register
        using Addr = Register::Address<0x40027026,0xffff003f,0,unsigned>;
        ///A/D conversion compare value setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmad{}; 
    }
    namespace Noneadss3{    ///<Sampling Time Selection Register 3
        using Addr = Register::Address<0x40027029,0xffffff00,0,unsigned char>;
        ///AN31 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts31{}; 
        ///AN30 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts30{}; 
        ///AN29 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts29{}; 
        ///AN28 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts28{}; 
        ///AN27 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts27{}; 
        ///AN26 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts26{}; 
        ///AN25 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts25{}; 
        ///AN24 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts24{}; 
    }
    namespace Noneadss2{    ///<Sampling Time Selection Register 2
        using Addr = Register::Address<0x40027028,0xffffff00,0,unsigned char>;
        ///AN23 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts23{}; 
        ///AN22 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts22{}; 
        ///AN21 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts21{}; 
        ///AN20 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts20{}; 
        ///AN19 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts19{}; 
        ///AN18 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts18{}; 
        ///AN17 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts17{}; 
        ///AN16 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts16{}; 
    }
    namespace Noneadss1{    ///<Sampling Time Selection Register 1
        using Addr = Register::Address<0x4002702d,0xffffff00,0,unsigned char>;
        ///AN15 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts15{}; 
        ///AN14 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts14{}; 
        ///AN13 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts13{}; 
        ///AN12 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts12{}; 
        ///AN11 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts11{}; 
        ///AN10 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts10{}; 
        ///AN9 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts9{}; 
        ///AN8 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts8{}; 
    }
    namespace Noneadss0{    ///<Sampling Time Selection Register 0
        using Addr = Register::Address<0x4002702c,0xffffff00,0,unsigned char>;
        ///AN7 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts7{}; 
        ///AN6 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts6{}; 
        ///AN5 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts5{}; 
        ///AN4 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts4{}; 
        ///AN3 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts3{}; 
        ///AN2 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts2{}; 
        ///AN1 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts1{}; 
        ///AN0 sampling time selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts0{}; 
    }
    namespace Noneadst1{    ///<Sampling Time Setup Register 1
        using Addr = Register::Address<0x40027030,0xffffff00,0,unsigned char>;
        ///Sampling time N times setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx1{}; 
        ///Sampling time setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st1{}; 
    }
    namespace Noneadst0{    ///<Sampling Time Setup Register 0
        using Addr = Register::Address<0x40027031,0xffffff00,0,unsigned char>;
        ///Sampling time N times setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx0{}; 
        ///Sampling time setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st0{}; 
    }
    namespace Noneadct{    ///<Frequency Division Ratio Setup Register
        using Addr = Register::Address<0x40027034,0xffffff00,0,unsigned char>;
        ///Frequency division ratio setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ct{}; 
    }
    namespace Noneprtsl{    ///<Priority Conversion Timer Trigger Selection Register
        using Addr = Register::Address<0x40027038,0xfffffff0,0,unsigned char>;
        ///Priority conversion timer trigger selection bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prtsl{}; 
    }
    namespace Nonesctsl{    ///<Scan Conversion Timer Trigger Selection Register
        using Addr = Register::Address<0x40027039,0xfffffff0,0,unsigned char>;
        ///Scan conversion timer trigger selection bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sctsl{}; 
    }
    namespace Noneadcen{    ///<A/D Operation Enable Setup Register
        using Addr = Register::Address<0x4002703c,0xffff00fc,0,unsigned>;
        ///Operation enable state transition cycle selection bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> enbltime{}; 
        ///A/D operation enable state bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ready{}; 
        ///A/D operation enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enbl{}; 
    }
    namespace Nonewcmrcif{    ///<Range Comparison Flag Register
        using Addr = Register::Address<0x40027044,0xfffffffe,0,unsigned>;
        ///Range comparison interrupt factor flag bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcint{}; 
    }
    namespace Nonewcmrcot{    ///<Range Comparison Threshold Excess Flag Register
        using Addr = Register::Address<0x40027048,0xfffffffe,0,unsigned>;
        ///Threshold excess flag bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcoof{}; 
    }
    namespace Nonewcmpcr{    ///<Range Comparison Control Register
        using Addr = Register::Address<0x4002704c,0xffffff03,0,unsigned char>;
        ///Continuous detection specification count/state indication bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> rcocd{}; 
        ///Selection bit of within-range and out-of- range confirmation
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcoirs{}; 
        ///Range comparison interrupt request enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rcoie{}; 
        ///Range comparison execution enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rcoe{}; 
    }
    namespace Nonewcmpsr{    ///<Range Comparison Channel Select Register
        using Addr = Register::Address<0x4002704d,0xffffffc0,0,unsigned char>;
        ///Comparison mode select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wcmd{}; 
        ///Comparison target analog input channel
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> wcch{}; 
    }
    namespace Nonewcmpdl{    ///<Lower Limit Threshold Setup Register
        using Addr = Register::Address<0x40027050,0xffff003f,0,unsigned>;
        ///Lower limit threshold bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmld{}; 
    }
    namespace Nonewcmpdh{    ///<Upper Limit Setup Register
        using Addr = Register::Address<0x40027052,0xffff003f,0,unsigned>;
        ///Upper limit threshold bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmhd{}; 
    }
}
