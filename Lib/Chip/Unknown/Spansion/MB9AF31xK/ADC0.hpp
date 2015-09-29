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
        ///Scan conversion FIFO stage count setting bit 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cs{}; 
    }
    namespace Nonescis3{    ///<Scan Conversion Input Selection Register 3
        using Addr = Register::Address<0x40027011,0xffffff00,0,unsigned char>;
        ///Bit7 of SCIS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an31{}; 
        ///Bit6 of SCIS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an30{}; 
        ///Bit5 of SCIS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an29{}; 
        ///Bit4 of SCIS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an28{}; 
        ///Bit3 of SCIS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an27{}; 
        ///Bit2 of SCIS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an26{}; 
        ///Bit1 of SCIS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an25{}; 
        ///Bit0 of SCIS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an24{}; 
    }
    namespace Nonescis2{    ///<Scan Conversion Input Selection Register 2
        using Addr = Register::Address<0x40027010,0xffffff00,0,unsigned char>;
        ///Bit7 of SCIS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an23{}; 
        ///Bit6 of SCIS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an22{}; 
        ///Bit5 of SCIS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an21{}; 
        ///Bit4 of SCIS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an20{}; 
        ///Bit3 of SCIS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an19{}; 
        ///Bit2 of SCIS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an18{}; 
        ///Bit1 of SCIS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an17{}; 
        ///Bit0 of SCIS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an16{}; 
    }
    namespace Nonescis1{    ///<Scan Conversion Input Selection Register 1
        using Addr = Register::Address<0x40027015,0xffffff00,0,unsigned char>;
        ///Bit7 of SCIS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an15{}; 
        ///Bit6 of SCIS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an14{}; 
        ///Bit5 of SCIS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an13{}; 
        ///Bit4 of SCIS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an12{}; 
        ///Bit3 of SCIS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an11{}; 
        ///Bit2 of SCIS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an10{}; 
        ///Bit1 of SCIS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an9{}; 
        ///Bit0 of SCIS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an8{}; 
    }
    namespace Nonescis0{    ///<Scan Conversion Input Selection Register 0
        using Addr = Register::Address<0x40027014,0xffffff00,0,unsigned char>;
        ///Bit7 of SCIS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an7{}; 
        ///Bit6 of SCIS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an6{}; 
        ///Bit5 of SCIS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        ///Bit4 of SCIS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        ///Bit3 of SCIS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        ///Bit2 of SCIS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        ///Bit1 of SCIS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        ///Bit0 of SCIS0
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
        using Addr = Register::Address<0x4002701c,0x000fece0,0,unsigned>;
        ///Priority conversion result 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> pd{}; 
        ///A/D conversion result disable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> invl{}; 
        ///Scan conversion start factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rs{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> cmd{}; 
        ///Comparison mode 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cch{}; 
    }
    namespace Nonecmpd{    ///<A/D Comparison Value Setup Register
        using Addr = Register::Address<0x40027026,0xffff003f,0,unsigned>;
        ///A/D conversion result value setting bits 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> cmad{}; 
    }
    namespace Noneadss3{    ///<Sampling Time Selection Register 3
        using Addr = Register::Address<0x40027029,0xffffff00,0,unsigned char>;
        ///Bit7 of ADSS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts31{}; 
        ///Bit6 of ADSS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts30{}; 
        ///Bit5 of ADSS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts29{}; 
        ///Bit4 of ADSS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts28{}; 
        ///Bit3 of ADSS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts27{}; 
        ///Bit2 of ADSS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts26{}; 
        ///Bit1 of ADSS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts25{}; 
        ///Bit0 of ADSS3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts24{}; 
    }
    namespace Noneadss2{    ///<Sampling Time Selection Register 2
        using Addr = Register::Address<0x40027028,0xffffff00,0,unsigned char>;
        ///Bit7 of ADSS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts23{}; 
        ///Bit6 of ADSS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts22{}; 
        ///Bit5 of ADSS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts21{}; 
        ///Bit4 of ADSS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts20{}; 
        ///Bit3 of ADSS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts19{}; 
        ///Bit2 of ADSS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts18{}; 
        ///Bit1 of ADSS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts17{}; 
        ///Bit0 of ADSS2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts16{}; 
    }
    namespace Noneadss1{    ///<Sampling Time Selection Register 1
        using Addr = Register::Address<0x4002702d,0xffffff00,0,unsigned char>;
        ///Bit7 of ADSS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts15{}; 
        ///Bit6 of ADSS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts14{}; 
        ///Bit5 of ADSS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts13{}; 
        ///Bit4 of ADSS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts12{}; 
        ///Bit3 of ADSS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts11{}; 
        ///Bit2 of ADSS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts10{}; 
        ///Bit1 of ADSS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts9{}; 
        ///Bit0 of ADSS1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts8{}; 
    }
    namespace Noneadss0{    ///<Sampling Time Selection Register 0
        using Addr = Register::Address<0x4002702c,0xffffff00,0,unsigned char>;
        ///Bit7 of ADSS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ts7{}; 
        ///Bit6 of ADSS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ts6{}; 
        ///Bit5 of ADSS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ts5{}; 
        ///Bit4 of ADSS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ts4{}; 
        ///Bit3 of ADSS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ts3{}; 
        ///Bit2 of ADSS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ts2{}; 
        ///Bit1 of ADSS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ts1{}; 
        ///Bit0 of ADSS0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ts0{}; 
    }
    namespace Noneadst1{    ///<Sampling Time Setup Register 1
        using Addr = Register::Address<0x40027030,0xffffff00,0,unsigned char>;
        ///Sampling time N times setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx1{}; 
        ///Sampling time setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st{}; 
    }
    namespace Noneadst0{    ///<Sampling Time Setup Register 0
        using Addr = Register::Address<0x40027031,0xffffff00,0,unsigned char>;
        ///Sampling time N times setting bits 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> stx0{}; 
        ///Sampling time setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> st{}; 
    }
    namespace Noneadct{    ///<Comparison Time Setup Register
        using Addr = Register::Address<0x40027034,0xffffff00,0,unsigned char>;
        ///Compare clock frequency division ratio setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ct{}; 
    }
    namespace Noneprtsl{    ///<Priority Conversion Timer Trigger Selection Register
        using Addr = Register::Address<0x40027038,0xfffffff0,0,unsigned char>;
        ///Priority conversion timer trigger selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prtsl{}; 
    }
    namespace Nonesctsl{    ///<Scan Conversion Timer Trigger Selection Register
        using Addr = Register::Address<0x40027039,0xfffffff0,0,unsigned char>;
        ///Scan conversion timer trigger selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sctsl{}; 
    }
    namespace Noneadcen{    ///<A/D Operation Enable Setup Register
        using Addr = Register::Address<0x4002703c,0xffffffcc,0,unsigned char>;
        ///Basic cycle selection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> cyclsl{}; 
        ///A/D operation enable state bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ready{}; 
        ///A/D operation enable bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enbl{}; 
    }
}
