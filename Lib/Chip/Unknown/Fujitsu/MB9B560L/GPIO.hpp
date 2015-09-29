#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//0
    namespace Nonepfr0{    ///<Port Function Setting Register 0
        using Addr = Register::Address<0x4006f000,0xffffffe0,0,unsigned>;
        ///Bit4 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        ///Bit3 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        ///Bit2 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        ///Bit1 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        ///Bit0 of PFR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
    }
    namespace Nonepfr1{    ///<Port Function Setting Register 1
        using Addr = Register::Address<0x4006f004,0xfffffff0,0,unsigned>;
        ///Bit3 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p13{}; 
        ///Bit2 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p12{}; 
        ///Bit1 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p11{}; 
        ///Bit0 of PFR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p10{}; 
    }
    namespace Nonepfr2{    ///<Port Function Setting Register 2
        using Addr = Register::Address<0x4006f008,0xffffff80,0,unsigned>;
        ///Bit6 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26{}; 
        ///Bit5 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25{}; 
        ///Bit4 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24{}; 
        ///Bit3 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23{}; 
        ///Bit2 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22{}; 
        ///Bit1 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21{}; 
        ///Bit0 of PFR2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20{}; 
    }
    namespace Nonepfr3{    ///<Port Function Setting Register 3
        using Addr = Register::Address<0x4006f00c,0xffffffc0,0,unsigned>;
        ///Bit5 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p35{}; 
        ///Bit4 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p34{}; 
        ///Bit3 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p33{}; 
        ///Bit2 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p32{}; 
        ///Bit1 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p31{}; 
        ///Bit0 of PFR3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p30{}; 
    }
    namespace Nonepfr4{    ///<Port Function Setting Register 4
        using Addr = Register::Address<0x4006f010,0xfffffc3c,0,unsigned>;
        ///Bit9 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p49{}; 
        ///Bit8 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p48{}; 
        ///Bit7 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p47{}; 
        ///Bit6 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p46{}; 
        ///Bit1 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p41{}; 
        ///Bit0 of PFR4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p40{}; 
    }
    namespace Nonepfr5{    ///<Port Function Setting Register 5
        using Addr = Register::Address<0x4006f014,0xffffff00,0,unsigned>;
        ///Bit7 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p57{}; 
        ///Bit6 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p56{}; 
        ///Bit5 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p55{}; 
        ///Bit4 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p54{}; 
        ///Bit3 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p53{}; 
        ///Bit2 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p52{}; 
        ///Bit1 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p51{}; 
        ///Bit0 of PFR5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p50{}; 
    }
    namespace Nonepfr6{    ///<Port Function Setting Register 6
        using Addr = Register::Address<0x4006f018,0xffffff80,0,unsigned>;
        ///Bit6 of PFR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p66{}; 
        ///Bit5 of PFR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p65{}; 
        ///Bit4 of PFR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p64{}; 
        ///Bit3 of PFR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p63{}; 
        ///Bit2 of PFR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p62{}; 
        ///Bit1 of PFR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p61{}; 
        ///Bit0 of PFR6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p60{}; 
    }
    namespace Nonepfr8{    ///<Port Function Setting Register 8
        using Addr = Register::Address<0x4006f020,0xfffffffc,0,unsigned>;
        ///Bit1 of PFR8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p81{}; 
        ///Bit0 of PFR8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p80{}; 
    }
    namespace Nonepfre{    ///<Port Function Setting Register E
        using Addr = Register::Address<0x4006f038,0xfffffff2,0,unsigned>;
        ///Bit3 of PFRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        ///Bit2 of PFRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        ///Bit0 of PFRE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
    }
    namespace Nonepcr0{    ///<Pull-up Setting Register 0
        using Addr = Register::Address<0x4006f100,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr1{    ///<Pull-up Setting Register 1
        using Addr = Register::Address<0x4006f104,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr2{    ///<Pull-up Setting Register 2
        using Addr = Register::Address<0x4006f108,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr3{    ///<Pull-up Setting Register 3
        using Addr = Register::Address<0x4006f10c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr4{    ///<Pull-up Setting Register 4
        using Addr = Register::Address<0x4006f110,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr5{    ///<Pull-up Setting Register 5
        using Addr = Register::Address<0x4006f114,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr6{    ///<Pull-up Setting Register 6
        using Addr = Register::Address<0x4006f118,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr8{    ///<Pull-up Setting Register 8
        using Addr = Register::Address<0x4006f120,0xffffffff,0,unsigned>;
    }
    namespace Nonepcre{    ///<Pull-up Setting Register E
        using Addr = Register::Address<0x4006f138,0xffffffff,0,unsigned>;
    }
    namespace Noneddr0{    ///<Port input/output Direction Setting Register 0
        using Addr = Register::Address<0x4006f200,0xffffffe0,0,unsigned>;
        ///Bit4 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04{}; 
        ///Bit3 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03{}; 
        ///Bit2 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02{}; 
        ///Bit1 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01{}; 
        ///Bit0 of DDR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00{}; 
    }
    namespace Noneddr1{    ///<Port input/output Direction Setting Register 1
        using Addr = Register::Address<0x4006f204,0xffffffff,0,unsigned>;
    }
    namespace Noneddr2{    ///<Port input/output Direction Setting Register 2
        using Addr = Register::Address<0x4006f208,0xffffffff,0,unsigned>;
    }
    namespace Noneddr3{    ///<Port input/output Direction Setting Register 3
        using Addr = Register::Address<0x4006f20c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr4{    ///<Port input/output Direction Setting Register 4
        using Addr = Register::Address<0x4006f210,0xffffffff,0,unsigned>;
    }
    namespace Noneddr5{    ///<Port input/output Direction Setting Register 5
        using Addr = Register::Address<0x4006f214,0xffffffff,0,unsigned>;
    }
    namespace Noneddr6{    ///<Port input/output Direction Setting Register 6
        using Addr = Register::Address<0x4006f218,0xffffffff,0,unsigned>;
    }
    namespace Noneddr8{    ///<Port input/output Direction Setting Register 8
        using Addr = Register::Address<0x4006f220,0xffffffff,0,unsigned>;
    }
    namespace Noneddre{    ///<Port input/output Direction Setting Register E
        using Addr = Register::Address<0x4006f238,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir0{    ///<Port Input Data Register 0
        using Addr = Register::Address<0x4006f300,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir1{    ///<Port Input Data Register 1
        using Addr = Register::Address<0x4006f304,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir2{    ///<Port Input Data Register 2
        using Addr = Register::Address<0x4006f308,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir3{    ///<Port Input Data Register 3
        using Addr = Register::Address<0x4006f30c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir4{    ///<Port Input Data Register 4
        using Addr = Register::Address<0x4006f310,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir5{    ///<Port Input Data Register 5
        using Addr = Register::Address<0x4006f314,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir6{    ///<Port Input Data Register 6
        using Addr = Register::Address<0x4006f318,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir8{    ///<Port Input Data Register 8
        using Addr = Register::Address<0x4006f320,0xffffffff,0,unsigned>;
    }
    namespace Nonepdire{    ///<Port Input Data Register E
        using Addr = Register::Address<0x4006f338,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor0{    ///<Port Output Data Register 0
        using Addr = Register::Address<0x4006f400,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor1{    ///<Port Output Data Register 1
        using Addr = Register::Address<0x4006f404,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor2{    ///<Port Output Data Register 2
        using Addr = Register::Address<0x4006f408,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor3{    ///<Port Output Data Register 3
        using Addr = Register::Address<0x4006f40c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor4{    ///<Port Output Data Register 4
        using Addr = Register::Address<0x4006f410,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor5{    ///<Port Output Data Register 5
        using Addr = Register::Address<0x4006f414,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor6{    ///<Port Output Data Register 6
        using Addr = Register::Address<0x4006f418,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor8{    ///<Port Output Data Register 8
        using Addr = Register::Address<0x4006f420,0xffffffff,0,unsigned>;
    }
    namespace Nonepdore{    ///<Port Output Data Register E
        using Addr = Register::Address<0x4006f438,0xffffffff,0,unsigned>;
    }
    namespace Noneade{    ///<Analog Input Setting Register
        using Addr = Register::Address<0x4006f500,0x00000000,0,unsigned>;
        ///Bit31 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> an31{}; 
        ///Bit30 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> an30{}; 
        ///Bit29 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> an29{}; 
        ///Bit28 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> an28{}; 
        ///Bit27 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> an27{}; 
        ///Bit26 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> an26{}; 
        ///Bit25 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> an25{}; 
        ///Bit24 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> an24{}; 
        ///Bit23 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> an23{}; 
        ///Bit22 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> an22{}; 
        ///Bit21 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> an21{}; 
        ///Bit20 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> an20{}; 
        ///Bit19 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> an19{}; 
        ///Bit18 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> an18{}; 
        ///Bit17 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> an17{}; 
        ///Bit16 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> an16{}; 
        ///Bit15 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> an15{}; 
        ///Bit14 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        ///Bit13 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        ///Bit12 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        ///Bit11 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> an11{}; 
        ///Bit10 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> an10{}; 
        ///Bit9 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> an09{}; 
        ///Bit8 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> an08{}; 
        ///Bit7 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> an07{}; 
        ///Bit6 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> an06{}; 
        ///Bit5 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an05{}; 
        ///Bit4 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an04{}; 
        ///Bit3 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an03{}; 
        ///Bit2 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an02{}; 
        ///Bit1 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an01{}; 
        ///Bit0 of ADE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an00{}; 
    }
    namespace Nonespsr{    ///<Special Port Setting Register
        using Addr = Register::Address<0x4006f580,0xffffffc3,0,unsigned>;
        ///USB (ch.1) Pin Setting bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> usb1c{}; 
        ///USB (ch.0) Pin Setting bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> usb0c{}; 
        ///Main Clock (Oscillation) Pin Setting bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
    }
    namespace Noneepfr00{    ///<Extended Pin Function Setting Register 00
        using Addr = Register::Address<0x4006f600,0xfcfcdd08,0,unsigned>;
        ///TRACED Function Select bit 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> trc1e{}; 
        ///TRACED Function Select bit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trc0e{}; 
        ///JTAG Function Select bit 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jtagen1s{}; 
        ///JTAG Function Select bit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jtagen0b{}; 
        ///USB ch.1 Function Select bit 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> usbp1e{}; 
        ///USB ch.0 Function Select bit 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usbp0e{}; 
        ///Sub clock divide output function select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        ///RTC clock output select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        ///Internal high-speed CR Oscillation Output Function Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        ///NMIX Function Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
    }
    namespace Noneepfr01{    ///<Extended Pin Function Setting Register 01
        using Addr = Register::Address<0x4006f604,0x0000e000,0,unsigned>;
        ///IC03 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        ///IC02 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        ///IC01 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        ///IC00 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        ///FRCK0 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        ///DTTIX0 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        ///DTTIX0 Function Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        ///RTO05 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        ///RTO04 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        ///RTO03 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        ///RTO02 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        ///RTO01 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        ///RTO00 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
    }
    namespace Noneepfr02{    ///<Extended Pin Function Setting Register 02
        using Addr = Register::Address<0x4006f608,0x0000e000,0,unsigned>;
        ///IC13 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic13s{}; 
        ///IC13 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic12s{}; 
        ///IC13 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic11s{}; 
        ///IC13 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic10s{}; 
        ///FRCK1 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck1s{}; 
        ///DTTIX1 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti1s{}; 
        ///DTTIX1 Function Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti1c{}; 
        ///RTO15 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto15e{}; 
        ///RTO14 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto14e{}; 
        ///RTO13 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto13e{}; 
        ///RTO12 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto12e{}; 
        ///RTO11 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto11e{}; 
        ///RTO10 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto10e{}; 
    }
    namespace Noneepfr03{    ///<Extended Pin Function Setting Register 03
        using Addr = Register::Address<0x4006f60c,0x0000e000,0,unsigned>;
        ///IC23 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic23s{}; 
        ///IC23 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic22s{}; 
        ///IC23 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic21s{}; 
        ///IC23 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic20s{}; 
        ///FRCK2 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck2s{}; 
        ///DTTIX2 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti2s{}; 
        ///DTTIX2 Function Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti2c{}; 
        ///RTO25 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto25e{}; 
        ///RTO24 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto24e{}; 
        ///RTO23 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto23e{}; 
        ///RTO22 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto22e{}; 
        ///RTO21 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto21e{}; 
        ///RTO20 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto20e{}; 
    }
    namespace Noneepfr04{    ///<Extended Pin Function Setting Register 04
        using Addr = Register::Address<0x4006f610,0xc0c3c083,0,unsigned>;
        ///TIOB3 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        ///TIOA3 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        ///TIOA3 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        ///TIOB2 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        ///TIOA2 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        ///TIOB1 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        ///TIOA1 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        ///TIOA1 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        ///TIOB0 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        ///TIOA0 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
    }
    namespace Noneepfr05{    ///<Extended Pin Function Setting Register 05
        using Addr = Register::Address<0x4006f614,0xc0c3c0c3,0,unsigned>;
        ///TIOB7 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        ///TIOA7 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        ///TIOA7 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        ///TIOB6 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        ///TIOA6 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        ///TIOB5 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        ///TIOA5 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        ///TIOA5 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        ///TIOB4 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        ///TIOA4 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
    }
    namespace Noneepfr06{    ///<Extended Pin Function Setting Register 06
        using Addr = Register::Address<0x4006f618,0x00000000,0,unsigned>;
        ///External Interrupt 15 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint15s{}; 
        ///External Interrupt 14 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        ///External Interrupt 13 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint13s{}; 
        ///External Interrupt 12 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint12s{}; 
        ///External Interrupt 11 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint11s{}; 
        ///External Interrupt 10 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint10s{}; 
        ///External Interrupt 09 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint09s{}; 
        ///External Interrupt 08 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint08s{}; 
        ///External Interrupt 07 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        ///External Interrupt 06 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        ///External Interrupt 05 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint05s{}; 
        ///External Interrupt 04 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint04s{}; 
        ///External Interrupt 03 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        ///External Interrupt 02 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        ///External Interrupt 01 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint01s{}; 
        ///External Interrupt 00 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint00s{}; 
    }
    namespace Noneepfr07{    ///<Extended Pin Function Setting Register 07
        using Addr = Register::Address<0x4006f61c,0xf000000f,0,unsigned>;
        ///SCK3 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck3b{}; 
        ///SOT3 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot3b{}; 
        ///SIN3 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin3s{}; 
        ///SCK2 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        ///SOT2 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        ///SIN2 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        ///SCK1 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        ///SOT1 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        ///SIN1 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        ///SCK0 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        ///SOT0 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        ///SIN0 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
    }
    namespace Noneepfr08{    ///<Extended Pin Function Setting Register 08
        using Addr = Register::Address<0x4006f620,0xffc0fc00,0,unsigned>;
        ///SCK6 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck6b{}; 
        ///SOT6 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot6b{}; 
        ///SIN6 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin6s{}; 
        ///SCK4 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck4b{}; 
        ///SOT4 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot4b{}; 
        ///SIN4 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin4s{}; 
        ///CTS4 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cts4s{}; 
        ///RTS4 Input/Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rts4e{}; 
    }
    namespace Noneepfr09{    ///<Extended Pin Function Setting Register 09
        using Addr = Register::Address<0x4006f624,0xf0f00fc0,0,unsigned>;
        ///CTX0E Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> ctx0e{}; 
        ///CRX0S Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> crx0s{}; 
        ///ADTRG1 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> adtrg1s{}; 
        ///ADTRG0 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        ///QZIN0S Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> qzin0s{}; 
        ///QBIN0S Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> qbin0s{}; 
        ///QAIN0S Input Select bits$
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> qain0s{}; 
    }
    namespace Noneepfr10{    ///<Extended Pin Function Setting Register 10
        using Addr = Register::Address<0x4006f628,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr11{    ///<Extended Pin Function Setting Register 11
        using Addr = Register::Address<0x4006f62c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr12{    ///<Extended Pin Function Setting Register 12
        using Addr = Register::Address<0x4006f630,0xc0c3c0c3,0,unsigned>;
        ///TIOB11 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob11s{}; 
        ///TIOA11 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa11e{}; 
        ///TIOA11 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa11s{}; 
        ///TIOB10 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob10s{}; 
        ///TIOA10 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa10e{}; 
        ///TIOB9 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob9s{}; 
        ///TIOA9 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa9e{}; 
        ///TIOA9 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa9s{}; 
        ///TIOB8 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob8s{}; 
        ///TIOA8 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa8e{}; 
    }
    namespace Noneepfr13{    ///<Extended Pin Function Setting Register 13
        using Addr = Register::Address<0x4006f634,0xc0c3c0c3,0,unsigned>;
        ///TIOB15 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob15s{}; 
        ///TIOA15 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa15e{}; 
        ///TIOA15 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa15s{}; 
        ///TIOB14 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob14s{}; 
        ///TIOA14 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa14e{}; 
        ///TIOB13 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob13s{}; 
        ///TIOA13 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa13e{}; 
        ///TIOA13 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa13s{}; 
        ///TIOB12 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob12s{}; 
        ///TIOA12 Output Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa12e{}; 
    }
    namespace Noneepfr14{    ///<Extended Pin Function Setting Register 14
        using Addr = Register::Address<0x4006f638,0xc003ffff,0,unsigned>;
        ///Input cutoff Select bit in Standby of input Pin for Ethernet-MAC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eSplc{}; 
        ///PPS0_PPS1 Output Select bit for Ethernet-MAC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ePse{}; 
        ///E_COUT Output Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> eCke{}; 
        ///E_MDO1 I/O Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> eMd1b{}; 
        ///E_MDO0 I/O Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eMd0b{}; 
        ///E_MDC1 I/O Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> eMc1b{}; 
        ///E_MDC0 Output Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eMc0e{}; 
        ///E_TXER0_TXEN1 Output Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> eTe1e{}; 
        ///E_TXEN0 Output Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> eTe0e{}; 
        ///E_TX02_TX10, E_TX03_TX11 Output Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> eTd1e{}; 
        ///E_TX00, E_TX01 Output Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> eTd0e{}; 
    }
    namespace Noneepfr15{    ///<Extended Pin Function Setting Register 15
        using Addr = Register::Address<0x4006f63c,0x00000000,0,unsigned>;
        ///External Interrupt 31 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint31s{}; 
        ///External Interrupt 30 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint30s{}; 
        ///External Interrupt 29 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> eint29s{}; 
        ///External Interrupt 28 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> eint28s{}; 
        ///External Interrupt 27 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> eint27s{}; 
        ///External Interrupt 26 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> eint26s{}; 
        ///External Interrupt 25 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eint25s{}; 
        ///External Interrupt 24 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> eint24s{}; 
        ///External Interrupt 23 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint23s{}; 
        ///External Interrupt 22 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint22s{}; 
        ///External Interrupt 21 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint21s{}; 
        ///External Interrupt 20 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint20s{}; 
        ///External Interrupt 19 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        ///External Interrupt 18 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        ///External Interrupt 17 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint17s{}; 
        ///External Interrupt 16 Input Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint16s{}; 
    }
    namespace Noneepfr16{    ///<Extended Pin Function Setting Register 16
        using Addr = Register::Address<0x4006f640,0xcfffffff,0,unsigned>;
        ///MFS ch.B I2C FastMode+ Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> sfmpbc{}; 
        ///MFS ch.A I2C FastMode+ Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sfmpac{}; 
    }
    namespace Noneepfr17{    ///<Extended Pin Function Setting Register 17
        using Addr = Register::Address<0x4006f644,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr18{    ///<Extended Pin Function Setting Register 18
        using Addr = Register::Address<0x4006f648,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr19{    ///<Extended Pin Function Setting Register 19
        using Addr = Register::Address<0x4006f64c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr20{    ///<Extended Pin Function Setting Register 20
        using Addr = Register::Address<0x4006f650,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr0{    ///<Port Pseudo Open Drain Setting Register 0
        using Addr = Register::Address<0x4006f700,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr1{    ///<Port Pseudo Open Drain Setting Register 1
        using Addr = Register::Address<0x4006f704,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr2{    ///<Port Pseudo Open Drain Setting Register 2
        using Addr = Register::Address<0x4006f708,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr3{    ///<Port Pseudo Open Drain Setting Register 3
        using Addr = Register::Address<0x4006f70c,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr4{    ///<Port Pseudo Open Drain Setting Register 4
        using Addr = Register::Address<0x4006f710,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr5{    ///<Port Pseudo Open Drain Setting Register 5
        using Addr = Register::Address<0x4006f714,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr6{    ///<Port Pseudo Open Drain Setting Register 6
        using Addr = Register::Address<0x4006f718,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr8{    ///<Port Pseudo Open Drain Setting Register 8
        using Addr = Register::Address<0x4006f720,0xffffffff,0,unsigned>;
    }
    namespace Nonepzre{    ///<Port Pseudo Open Drain Setting Register E
        using Addr = Register::Address<0x4006f738,0xffffffff,0,unsigned>;
    }
}
