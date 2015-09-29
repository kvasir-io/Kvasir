#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//PPG Configuration Registers
    namespace Nonettcr0{    ///<PPG Start Trigger Control Register 0
        using Addr = Register::Address<0x40024000,0xffff00ff,0,unsigned>;
        ///PPG6 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg6o{}; 
        ///PPG4 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg4o{}; 
        ///PPG2 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg2o{}; 
        ///PPG0 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg0o{}; 
        ///8-bit UP counter clock select bits for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs0{}; 
        ///8-bit UP counter operation state monitor bit for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> moni0{}; 
        ///8-bit UP counter operation enable bit for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str0{}; 
    }
    namespace Nonettcr1{    ///<PPG Start Trigger Control Register 1
        using Addr = Register::Address<0x40024020,0xffff00ff,0,unsigned>;
        ///PPG7 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg7o{}; 
        ///PPG5 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg5o{}; 
        ///PPG3 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg3o{}; 
        ///PPG1 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg1o{}; 
        ///8-bit UP counter clock select bits for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs1{}; 
        ///8-bit UP counter operation state monitor bit for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> moni1{}; 
        ///8-bit UP counter operation enable bit for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str1{}; 
    }
    namespace Nonettcr2{    ///<PPG Start Trigger Control Register 2
        using Addr = Register::Address<0x40024040,0xffff00ff,0,unsigned>;
        ///PPG22 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg22o{}; 
        ///PPG20 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg20o{}; 
        ///PPG18 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg18o{}; 
        ///PPG16 trigger stop bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg16o{}; 
        ///8-bit UP counter clock select bits for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs2{}; 
        ///8-bit UP counter operation state monitor bit for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> moni2{}; 
        ///8-bit UP counter operation enable bit for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str2{}; 
    }
    namespace Nonecomp0{    ///<PPG Compare Register 0
        using Addr = Register::Address<0x40024009,0xffffffff,0,unsigned char>;
    }
    namespace Nonecomp2{    ///<PPG Compare Register 2
        using Addr = Register::Address<0x4002400c,0xffffffff,0,unsigned char>;
    }
    namespace Nonecomp4{    ///<PPG Compare Register 4
        using Addr = Register::Address<0x40024011,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp6{    ///<PPG Compare Register 6
        using Addr = Register::Address<0x40024014,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp1{    ///<PPG Compare Register 1
        using Addr = Register::Address<0x40024029,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp3{    ///<PPG Compare Register 3
        using Addr = Register::Address<0x4002402c,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp5{    ///<PPG Compare Register 5
        using Addr = Register::Address<0x40024031,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp7{    ///<PPG Compare Register 7
        using Addr = Register::Address<0x40024034,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp8{    ///<PPG Compare Register 8
        using Addr = Register::Address<0x40024049,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp10{    ///<PPG Compare Register 10
        using Addr = Register::Address<0x4002404c,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp12{    ///<PPG Compare Register 12
        using Addr = Register::Address<0x40024051,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp14{    ///<PPG Compare Register 14
        using Addr = Register::Address<0x40024054,0xffffffff,0,unsigned>;
    }
    namespace Nonetrg0{    ///<PPG Start Register 0
        using Addr = Register::Address<0x40024100,0xffff0000,0,unsigned>;
        ///PPG15 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pen15{}; 
        ///PPG14 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pen14{}; 
        ///PPG13 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pen13{}; 
        ///PPG12 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pen12{}; 
        ///PPG11 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pen11{}; 
        ///PPG10 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pen10{}; 
        ///PPG9 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pen09{}; 
        ///PPG8 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pen08{}; 
        ///PPG7 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen07{}; 
        ///PPG6 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen06{}; 
        ///PPG5 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen05{}; 
        ///PPG4 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen04{}; 
        ///PPG3 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen03{}; 
        ///PPG2 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen02{}; 
        ///PPG1 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen01{}; 
        ///PPG0 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen00{}; 
    }
    namespace Nonetrg1{    ///<PPG Start Register 1
        using Addr = Register::Address<0x40024140,0xffffff00,0,unsigned>;
        ///PPG23 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen23{}; 
        ///PPG22 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen22{}; 
        ///PPG21 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen21{}; 
        ///PPG20 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen20{}; 
        ///PPG19 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen19{}; 
        ///PPG18 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen18{}; 
        ///PPG17 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen17{}; 
        ///PPG16 Start Trigger bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen16{}; 
    }
    namespace Nonerevc0{    ///<Output Reverse Register 0
        using Addr = Register::Address<0x40024104,0xffff0000,0,unsigned>;
        ///PPG15 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rev15{}; 
        ///PPG14 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev14{}; 
        ///PPG13 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev13{}; 
        ///PPG12 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rev12{}; 
        ///PPG11 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rev11{}; 
        ///PPG10 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rev10{}; 
        ///PPG9 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev09{}; 
        ///PPG8 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rev08{}; 
        ///PPG7 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev07{}; 
        ///PPG6 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev06{}; 
        ///PPG5 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev05{}; 
        ///PPG4 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev04{}; 
        ///PPG3 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev03{}; 
        ///PPG2 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev02{}; 
        ///PPG1 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev01{}; 
        ///PPG0 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev00{}; 
    }
    namespace Nonerevc1{    ///<Output Reverse Register 1
        using Addr = Register::Address<0x40024144,0xffffff00,0,unsigned>;
        ///PPG23 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev23{}; 
        ///PPG22 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev22{}; 
        ///PPG21 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev21{}; 
        ///PPG20 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev20{}; 
        ///PPG19 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev19{}; 
        ///PPG18 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev18{}; 
        ///PPG17 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev17{}; 
        ///PPG16 Output Reverse Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev16{}; 
    }
    namespace Noneppgc0{    ///<PPG Operation Mode Control Register 0
        using Addr = Register::Address<0x40024201,0xffffff00,0,unsigned char>;
        ///PPG Interrupt Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pie{}; 
        ///PPG Counter Underflow bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> puf{}; 
        ///Interrupt Mode Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intm{}; 
        ///PPG DOWN Counter Operation Clock Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///PPG Operation Mode Set bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> md{}; 
        ///PPG start trigger select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ttrg{}; 
    }
    namespace Noneppgc1{    ///<PPG Operation Mode Control Register 1
        using Addr = Register::Address<0x40024200,0xffffff01,0,unsigned char>;
        ///PPG Interrupt Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pie{}; 
        ///PPG Counter Underflow bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> puf{}; 
        ///Interrupt Mode Select bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intm{}; 
        ///PPG DOWN Counter Operation Clock Select bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///PPG Operation Mode Set bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> md{}; 
    }
    namespace Noneppgc2{    ///<PPG Operation Mode Control Register 2
        using Addr = Register::Address<0x40024205,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc3{    ///<PPG Operation Mode Control Register 3
        using Addr = Register::Address<0x40024204,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc4{    ///<PPG Operation Mode Control Register 4
        using Addr = Register::Address<0x40024241,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc5{    ///<PPG Operation Mode Control Register 5
        using Addr = Register::Address<0x40024240,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc6{    ///<PPG Operation Mode Control Register 6
        using Addr = Register::Address<0x40024245,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc7{    ///<PPG Operation Mode Control Register 7
        using Addr = Register::Address<0x40024244,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc8{    ///<PPG Operation Mode Control Register 8
        using Addr = Register::Address<0x40024281,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc9{    ///<PPG Operation Mode Control Register 9
        using Addr = Register::Address<0x40024280,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc10{    ///<PPG Operation Mode Control Register 10
        using Addr = Register::Address<0x40024285,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc11{    ///<PPG Operation Mode Control Register 11
        using Addr = Register::Address<0x40024284,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc12{    ///<PPG Operation Mode Control Register 12
        using Addr = Register::Address<0x400242c1,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc13{    ///<PPG Operation Mode Control Register 13
        using Addr = Register::Address<0x400242c0,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc14{    ///<PPG Operation Mode Control Register 14
        using Addr = Register::Address<0x400242c5,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc15{    ///<PPG Operation Mode Control Register 15
        using Addr = Register::Address<0x400242c4,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc16{    ///<PPG Operation Mode Control Register 16
        using Addr = Register::Address<0x40024301,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc17{    ///<PPG Operation Mode Control Register 17
        using Addr = Register::Address<0x40024300,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc18{    ///<PPG Operation Mode Control Register 18
        using Addr = Register::Address<0x40024305,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc19{    ///<PPG Operation Mode Control Register 19
        using Addr = Register::Address<0x40024304,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc20{    ///<PPG Operation Mode Control Register 20
        using Addr = Register::Address<0x40024341,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc21{    ///<PPG Operation Mode Control Register 21
        using Addr = Register::Address<0x40024340,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc22{    ///<PPG Operation Mode Control Register 22
        using Addr = Register::Address<0x40024345,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc23{    ///<PPG Operation Mode Control Register 23
        using Addr = Register::Address<0x40024344,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh0{    ///<PPG0 Reload Registers High
        using Addr = Register::Address<0x40024209,0xffffff00,0,unsigned char>;
        ///Reload Registers High
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prlh{}; 
    }
    namespace Noneprll0{    ///<PPG0 Reload Registers Low
        using Addr = Register::Address<0x40024208,0xffffff00,0,unsigned char>;
        ///Reload Registers Low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prll{}; 
    }
    namespace Noneprlh1{    ///<PPG1 Reload Registers High
        using Addr = Register::Address<0x4002420d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll1{    ///<PPG1 Reload Registers Low
        using Addr = Register::Address<0x4002420c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh2{    ///<PPG2 Reload Registers High
        using Addr = Register::Address<0x40024211,0xffffffff,0,unsigned>;
    }
    namespace Noneprll2{    ///<PPG2 Reload Registers Low
        using Addr = Register::Address<0x40024210,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh3{    ///<PPG3 Reload Registers High
        using Addr = Register::Address<0x40024215,0xffffffff,0,unsigned>;
    }
    namespace Noneprll3{    ///<PPG3 Reload Registers Low
        using Addr = Register::Address<0x40024214,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh4{    ///<PPG4 Reload Registers High
        using Addr = Register::Address<0x40024249,0xffffffff,0,unsigned>;
    }
    namespace Noneprll4{    ///<PPG4 Reload Registers Low
        using Addr = Register::Address<0x40024248,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh5{    ///<PPG5 Reload Registers High
        using Addr = Register::Address<0x4002424d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll5{    ///<PPG5 Reload Registers Low
        using Addr = Register::Address<0x4002424c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh6{    ///<PPG6 Reload Registers High
        using Addr = Register::Address<0x40024251,0xffffffff,0,unsigned>;
    }
    namespace Noneprll6{    ///<PPG6 Reload Registers Low
        using Addr = Register::Address<0x40024250,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh7{    ///<PPG7 Reload Registers High
        using Addr = Register::Address<0x40024255,0xffffffff,0,unsigned>;
    }
    namespace Noneprll7{    ///<PPG7 Reload Registers Low
        using Addr = Register::Address<0x40024254,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh8{    ///<PPG8 Reload Registers High
        using Addr = Register::Address<0x40024289,0xffffffff,0,unsigned>;
    }
    namespace Noneprll8{    ///<PPG8 Reload Registers Low
        using Addr = Register::Address<0x40024288,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh9{    ///<PPG9 Reload Registers High
        using Addr = Register::Address<0x4002428d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll9{    ///<PPG9 Reload Registers Low
        using Addr = Register::Address<0x4002428c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh10{    ///<PPG10 Reload Registers High
        using Addr = Register::Address<0x40024291,0xffffffff,0,unsigned>;
    }
    namespace Noneprll10{    ///<PPG10 Reload Registers Low
        using Addr = Register::Address<0x40024290,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh11{    ///<PPG11 Reload Registers High
        using Addr = Register::Address<0x40024295,0xffffffff,0,unsigned>;
    }
    namespace Noneprll11{    ///<PPG11 Reload Registers Low
        using Addr = Register::Address<0x40024294,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh12{    ///<PPG12 Reload Registers High
        using Addr = Register::Address<0x400242c9,0xffffffff,0,unsigned>;
    }
    namespace Noneprll12{    ///<PPG12 Reload Registers Low
        using Addr = Register::Address<0x400242c8,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh13{    ///<PPG13 Reload Registers High
        using Addr = Register::Address<0x400242cd,0xffffffff,0,unsigned>;
    }
    namespace Noneprll13{    ///<PPG13 Reload Registers Low
        using Addr = Register::Address<0x400242cc,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh14{    ///<PPG14 Reload Registers High
        using Addr = Register::Address<0x400242d1,0xffffffff,0,unsigned>;
    }
    namespace Noneprll14{    ///<PPG14 Reload Registers Low
        using Addr = Register::Address<0x400242d0,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh15{    ///<PPG15 Reload Registers High
        using Addr = Register::Address<0x400242d5,0xffffffff,0,unsigned>;
    }
    namespace Noneprll15{    ///<PPG15 Reload Registers Low
        using Addr = Register::Address<0x400242d4,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh16{    ///<PPG16 Reload Registers High
        using Addr = Register::Address<0x40024309,0xffffffff,0,unsigned>;
    }
    namespace Noneprll16{    ///<PPG16 Reload Registers Low
        using Addr = Register::Address<0x40024308,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh17{    ///<PPG17 Reload Registers High
        using Addr = Register::Address<0x4002430d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll17{    ///<PPG17 Reload Registers Low
        using Addr = Register::Address<0x4002430c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh18{    ///<PPG18 Reload Registers High
        using Addr = Register::Address<0x40024311,0xffffffff,0,unsigned>;
    }
    namespace Noneprll18{    ///<PPG18 Reload Registers Low
        using Addr = Register::Address<0x40024310,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh19{    ///<PPG19 Reload Registers High
        using Addr = Register::Address<0x40024315,0xffffffff,0,unsigned>;
    }
    namespace Noneprll19{    ///<PPG19 Reload Registers Low
        using Addr = Register::Address<0x40024314,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh20{    ///<PPG20 Reload Registers High
        using Addr = Register::Address<0x40024349,0xffffffff,0,unsigned>;
    }
    namespace Noneprll20{    ///<PPG20 Reload Registers Low
        using Addr = Register::Address<0x40024348,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh21{    ///<PPG21 Reload Registers High
        using Addr = Register::Address<0x4002434d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll21{    ///<PPG21 Reload Registers Low
        using Addr = Register::Address<0x4002434c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh22{    ///<PPG22 Reload Registers High
        using Addr = Register::Address<0x40024351,0xffffffff,0,unsigned>;
    }
    namespace Noneprll22{    ///<PPG22 Reload Registers Low
        using Addr = Register::Address<0x40024350,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh23{    ///<PPG23 Reload Registers High
        using Addr = Register::Address<0x40024355,0xffffffff,0,unsigned>;
    }
    namespace Noneprll23{    ///<PPG23 Reload Registers Low
        using Addr = Register::Address<0x40024354,0xffffffff,0,unsigned>;
    }
    namespace Nonegatec0{    ///<PPG Gate Function Control Register 0
        using Addr = Register::Address<0x40024218,0xffffffcc,0,unsigned char>;
        ///Select trigger bit for PPG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg2{}; 
        ///Start Effective Level Select bit for PPG2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge2{}; 
        ///Select trigger bit for PPG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg0{}; 
        ///Start Effective Level Select bit for PPG0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge0{}; 
    }
    namespace Nonegatec4{    ///<PPG Gate Function Control Register 4
        using Addr = Register::Address<0x40024258,0xffffffcc,0,unsigned char>;
        ///Select trigger bit for PPG6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg6{}; 
        ///Start Effective Level Select bit for PPG6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge6{}; 
        ///Select trigger bit for PPG4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg4{}; 
        ///Start Effective Level Select bit for PPG4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge4{}; 
    }
    namespace Nonegatec8{    ///<PPG Gate Function Control Register 8
        using Addr = Register::Address<0x40024298,0xffffffcc,0,unsigned char>;
        ///Select trigger bit for PPG10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg10{}; 
        ///Start Effective Level Select bit for PPG10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge10{}; 
        ///Select trigger bit for PPG8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg8{}; 
        ///Start Effective Level Select bit for PPG8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge8{}; 
    }
    namespace Nonegatec12{    ///<PPG Gate Function Control Register 12
        using Addr = Register::Address<0x400242d8,0xffffffcc,0,unsigned char>;
        ///Select trigger bit for PPG14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg14{}; 
        ///Start Effective Level Select bit for PPG14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge14{}; 
        ///Select trigger bit for PPG12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg12{}; 
        ///Start Effective Level Select bit for PPG12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge12{}; 
    }
    namespace Nonegatec16{    ///<PPG Gate Function Control Register 16
        using Addr = Register::Address<0x40024318,0xffffffcc,0,unsigned char>;
        ///Select trigger bit for PPG18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg18{}; 
        ///Start Effective Level Select bit for PPG18
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge18{}; 
        ///Select trigger bit for PPG16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg16{}; 
        ///Start Effective Level Select bit for PPG16
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge16{}; 
    }
    namespace Nonegatec20{    ///<PPG Gate Function Control Register 20
        using Addr = Register::Address<0x40024358,0xffffffcc,0,unsigned char>;
        ///Select trigger bit for PPG22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg22{}; 
        ///Start Effective Level Select bit for PPG22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge22{}; 
        ///Select trigger bit for PPG20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg20{}; 
        ///Start Effective Level Select bit for PPG20
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge20{}; 
    }
    namespace Noneigbtc{    ///<IGBT Mode Control Register
        using Addr = Register::Address<0x40024380,0xffffff00,0,unsigned char>;
        ///Stop prohibition mode selection in output active bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> igatih{}; 
        ///Noise filter width selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ignfw{}; 
        ///Output level selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> igosel{}; 
        ///Trigger input level selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igtrglv{}; 
        ///IGBT mode selection bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igbtmd{}; 
    }
}
