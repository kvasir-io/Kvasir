#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//PPG Configuration
    namespace MftPpgTtcr0{    ///<PPG Start Trigger Control Register 0
        using Addr = Register::Address<0x40024000,0xffff00ff,0x00000000,unsigned>;
        ///PPG6 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg6o{}; 
        ///PPG4 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg4o{}; 
        ///PPG2 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg2o{}; 
        ///PPG0 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg0o{}; 
        ///8-bit UP counter clock select bits for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs0{}; 
        ///8-bit UP counter operation state monitor bit for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moni0{}; 
        ///8-bit UP counter operation enable bit for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str0{}; 
    }
    namespace MftPpgTtcr1{    ///<PPG Start Trigger Control Register 1
        using Addr = Register::Address<0x40024020,0xffff00ff,0x00000000,unsigned>;
        ///PPG7 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg7o{}; 
        ///PPG5 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg5o{}; 
        ///PPG3 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg3o{}; 
        ///PPG1 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg1o{}; 
        ///8-bit UP counter clock select bits for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs1{}; 
        ///8-bit UP counter operation state monitor bit for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moni1{}; 
        ///8-bit UP counter operation enable bit for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str1{}; 
    }
    namespace MftPpgTtcr2{    ///<PPG Start Trigger Control Register 2
        using Addr = Register::Address<0x40024040,0xffff00ff,0x00000000,unsigned>;
        ///PPG22 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg22o{}; 
        ///PPG20 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg20o{}; 
        ///PPG18 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg18o{}; 
        ///PPG16 trigger stop bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg16o{}; 
        ///8-bit UP counter clock select bits for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs2{}; 
        ///8-bit UP counter operation state monitor bit for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> moni2{}; 
        ///8-bit UP counter operation enable bit for comparison
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str2{}; 
    }
    namespace MftPpgComp0{    ///<PPG Compare Register 0
        using Addr = Register::Address<0x40024008,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp2{    ///<PPG Compare Register 2
        using Addr = Register::Address<0x4002400c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace MftPpgComp4{    ///<PPG Compare Register 4
        using Addr = Register::Address<0x40024010,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp6{    ///<PPG Compare Register 6
        using Addr = Register::Address<0x40024014,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp1{    ///<PPG Compare Register 1
        using Addr = Register::Address<0x40024028,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp3{    ///<PPG Compare Register 3
        using Addr = Register::Address<0x4002402c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp5{    ///<PPG Compare Register 5
        using Addr = Register::Address<0x40024030,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp7{    ///<PPG Compare Register 7
        using Addr = Register::Address<0x40024034,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp8{    ///<PPG Compare Register 8
        using Addr = Register::Address<0x40024048,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp10{    ///<PPG Compare Register 10
        using Addr = Register::Address<0x4002404c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp12{    ///<PPG Compare Register 12
        using Addr = Register::Address<0x40024050,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgComp14{    ///<PPG Compare Register 14
        using Addr = Register::Address<0x40024054,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgTrg{    ///<PPG Start Register 0
        using Addr = Register::Address<0x40024100,0xffff0000,0x00000000,unsigned>;
        ///PPG15 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pen15{}; 
        ///PPG14 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pen14{}; 
        ///PPG13 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pen13{}; 
        ///PPG12 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pen12{}; 
        ///PPG11 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pen11{}; 
        ///PPG10 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pen10{}; 
        ///PPG9 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pen09{}; 
        ///PPG8 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pen08{}; 
        ///PPG7 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen07{}; 
        ///PPG6 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen06{}; 
        ///PPG5 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen05{}; 
        ///PPG4 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen04{}; 
        ///PPG3 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen03{}; 
        ///PPG2 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen02{}; 
        ///PPG1 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen01{}; 
        ///PPG0 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen00{}; 
    }
    namespace MftPpgTrg1{    ///<PPG Start Register 1
        using Addr = Register::Address<0x40024140,0xffffff00,0x00000000,unsigned>;
        ///PPG23 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen23{}; 
        ///PPG22 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen22{}; 
        ///PPG21 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen21{}; 
        ///PPG20 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen20{}; 
        ///PPG19 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen19{}; 
        ///PPG18 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen18{}; 
        ///PPG17 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen17{}; 
        ///PPG16 Start Trigger bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen16{}; 
    }
    namespace MftPpgRevc{    ///<Output Reverse Register 0
        using Addr = Register::Address<0x40024104,0xffff0000,0x00000000,unsigned>;
        ///PPG15 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rev15{}; 
        ///PPG14 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev14{}; 
        ///PPG13 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev13{}; 
        ///PPG12 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rev12{}; 
        ///PPG11 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rev11{}; 
        ///PPG10 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rev10{}; 
        ///PPG9 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev09{}; 
        ///PPG8 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rev08{}; 
        ///PPG7 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev07{}; 
        ///PPG6 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev06{}; 
        ///PPG5 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev05{}; 
        ///PPG4 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev04{}; 
        ///PPG3 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev03{}; 
        ///PPG2 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev02{}; 
        ///PPG1 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev01{}; 
        ///PPG0 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev00{}; 
    }
    namespace MftPpgRevc1{    ///<Output Reverse Register 1
        using Addr = Register::Address<0x40024144,0xffffff00,0x00000000,unsigned>;
        ///PPG23 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev23{}; 
        ///PPG22 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev22{}; 
        ///PPG21 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev21{}; 
        ///PPG20 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev20{}; 
        ///PPG19 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev19{}; 
        ///PPG18 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev18{}; 
        ///PPG17 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev17{}; 
        ///PPG16 Output Reverse Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev16{}; 
    }
    namespace MftPpgPpgc0{    ///<PPG Operation Mode Control Register 0
        using Addr = Register::Address<0x40024201,0xffffff00,0x00000000,unsigned char>;
        ///PPG Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pie{}; 
        ///PPG Counter Underflow bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> puf{}; 
        ///Interrupt Mode Select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intm{}; 
        ///PPG DOWN Counter Operation Clock Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> pcs{}; 
        ///PPG Operation Mode Set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> md{}; 
        ///PPG start trigger select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ttrg{}; 
    }
    namespace MftPpgPpgc1{    ///<PPG Operation Mode Control Register 1
        using Addr = Register::Address<0x40024200,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc2{    ///<PPG Operation Mode Control Register 2
        using Addr = Register::Address<0x40024205,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc3{    ///<PPG Operation Mode Control Register 3
        using Addr = Register::Address<0x40024204,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc4{    ///<PPG Operation Mode Control Register 4
        using Addr = Register::Address<0x40024241,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc5{    ///<PPG Operation Mode Control Register 5
        using Addr = Register::Address<0x40024240,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc6{    ///<PPG Operation Mode Control Register 6
        using Addr = Register::Address<0x40024245,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc7{    ///<PPG Operation Mode Control Register 7
        using Addr = Register::Address<0x40024244,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc8{    ///<PPG Operation Mode Control Register 8
        using Addr = Register::Address<0x40024281,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc9{    ///<PPG Operation Mode Control Register 9
        using Addr = Register::Address<0x40024280,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc10{    ///<PPG Operation Mode Control Register 10
        using Addr = Register::Address<0x40024285,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc11{    ///<PPG Operation Mode Control Register 11
        using Addr = Register::Address<0x40024284,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc12{    ///<PPG Operation Mode Control Register 12
        using Addr = Register::Address<0x400242c1,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc13{    ///<PPG Operation Mode Control Register 13
        using Addr = Register::Address<0x400242c0,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc14{    ///<PPG Operation Mode Control Register 14
        using Addr = Register::Address<0x400242c5,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc15{    ///<PPG Operation Mode Control Register 15
        using Addr = Register::Address<0x400242c4,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc16{    ///<PPG Operation Mode Control Register 16
        using Addr = Register::Address<0x40024301,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc17{    ///<PPG Operation Mode Control Register 17
        using Addr = Register::Address<0x40024300,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc18{    ///<PPG Operation Mode Control Register 18
        using Addr = Register::Address<0x40024305,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc19{    ///<PPG Operation Mode Control Register 19
        using Addr = Register::Address<0x40024304,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc20{    ///<PPG Operation Mode Control Register 20
        using Addr = Register::Address<0x40024341,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc21{    ///<PPG Operation Mode Control Register 21
        using Addr = Register::Address<0x40024340,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc22{    ///<PPG Operation Mode Control Register 22
        using Addr = Register::Address<0x40024345,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPpgc23{    ///<PPG Operation Mode Control Register 23
        using Addr = Register::Address<0x40024344,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh0{    ///<PPG0 Reload Registers High
        using Addr = Register::Address<0x40024209,0xffffff00,0x00000000,unsigned char>;
        ///Reload Registers High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prlh{}; 
    }
    namespace MftPpgPrll0{    ///<PPG0 Reload Registers Low
        using Addr = Register::Address<0x40024208,0xffffff00,0x00000000,unsigned char>;
        ///Reload Registers Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prll{}; 
    }
    namespace MftPpgPrlh1{    ///<PPG1 Reload Registers High
        using Addr = Register::Address<0x4002420d,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll1{    ///<PPG1 Reload Registers Low
        using Addr = Register::Address<0x4002420c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh2{    ///<PPG2 Reload Registers High
        using Addr = Register::Address<0x40024211,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll2{    ///<PPG2 Reload Registers Low
        using Addr = Register::Address<0x40024210,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh3{    ///<PPG3 Reload Registers High
        using Addr = Register::Address<0x40024215,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll3{    ///<PPG3 Reload Registers Low
        using Addr = Register::Address<0x40024214,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh4{    ///<PPG4 Reload Registers High
        using Addr = Register::Address<0x40024249,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll4{    ///<PPG4 Reload Registers Low
        using Addr = Register::Address<0x40024248,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh5{    ///<PPG5 Reload Registers High
        using Addr = Register::Address<0x4002424d,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll5{    ///<PPG5 Reload Registers Low
        using Addr = Register::Address<0x4002424c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh6{    ///<PPG6 Reload Registers High
        using Addr = Register::Address<0x40024251,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll6{    ///<PPG6 Reload Registers Low
        using Addr = Register::Address<0x40024250,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh7{    ///<PPG7 Reload Registers High
        using Addr = Register::Address<0x40024255,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll7{    ///<PPG7 Reload Registers Low
        using Addr = Register::Address<0x40024254,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh8{    ///<PPG8 Reload Registers High
        using Addr = Register::Address<0x40024289,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll8{    ///<PPG8 Reload Registers Low
        using Addr = Register::Address<0x40024288,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh9{    ///<PPG9 Reload Registers High
        using Addr = Register::Address<0x4002428d,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll9{    ///<PPG9 Reload Registers Low
        using Addr = Register::Address<0x4002428c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh10{    ///<PPG10 Reload Registers High
        using Addr = Register::Address<0x40024291,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll10{    ///<PPG10 Reload Registers Low
        using Addr = Register::Address<0x40024290,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh11{    ///<PPG11 Reload Registers High
        using Addr = Register::Address<0x40024295,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll11{    ///<PPG11 Reload Registers Low
        using Addr = Register::Address<0x40024294,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh12{    ///<PPG12 Reload Registers High
        using Addr = Register::Address<0x400242c9,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll12{    ///<PPG12 Reload Registers Low
        using Addr = Register::Address<0x400242c8,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh13{    ///<PPG13 Reload Registers High
        using Addr = Register::Address<0x400242cd,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll13{    ///<PPG13 Reload Registers Low
        using Addr = Register::Address<0x400242cc,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh14{    ///<PPG14 Reload Registers High
        using Addr = Register::Address<0x400242d1,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll14{    ///<PPG14 Reload Registers Low
        using Addr = Register::Address<0x400242d0,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh15{    ///<PPG15 Reload Registers High
        using Addr = Register::Address<0x400242d5,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll15{    ///<PPG15 Reload Registers Low
        using Addr = Register::Address<0x400242d4,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh16{    ///<PPG16 Reload Registers High
        using Addr = Register::Address<0x40024309,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll16{    ///<PPG16 Reload Registers Low
        using Addr = Register::Address<0x40024308,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh17{    ///<PPG17 Reload Registers High
        using Addr = Register::Address<0x4002430d,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll17{    ///<PPG17 Reload Registers Low
        using Addr = Register::Address<0x4002430c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh18{    ///<PPG18 Reload Registers High
        using Addr = Register::Address<0x40024311,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll18{    ///<PPG18 Reload Registers Low
        using Addr = Register::Address<0x40024310,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh19{    ///<PPG19 Reload Registers High
        using Addr = Register::Address<0x40024315,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll19{    ///<PPG19 Reload Registers Low
        using Addr = Register::Address<0x40024314,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh20{    ///<PPG20 Reload Registers High
        using Addr = Register::Address<0x40024349,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll20{    ///<PPG20 Reload Registers Low
        using Addr = Register::Address<0x40024348,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh21{    ///<PPG21 Reload Registers High
        using Addr = Register::Address<0x4002434d,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll21{    ///<PPG21 Reload Registers Low
        using Addr = Register::Address<0x4002434c,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh22{    ///<PPG22 Reload Registers High
        using Addr = Register::Address<0x40024351,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll22{    ///<PPG22 Reload Registers Low
        using Addr = Register::Address<0x40024350,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrlh23{    ///<PPG23 Reload Registers High
        using Addr = Register::Address<0x40024355,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgPrll23{    ///<PPG23 Reload Registers Low
        using Addr = Register::Address<0x40024354,0xffffffff,0x00000000,unsigned>;
    }
    namespace MftPpgGatec0{    ///<PPG Gate Function Control Registers 0
        using Addr = Register::Address<0x40024218,0xffffffcc,0x00000000,unsigned char>;
        ///Select a trigger for PPG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg2{}; 
        ///Select Start Effective Level for PPG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge2{}; 
        ///Select a trigger for PPG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg0{}; 
        ///Select Start Effective Level for PPG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge0{}; 
    }
    namespace MftPpgGatec4{    ///<PPG Gate Function Control Registers 4
        using Addr = Register::Address<0x40024258,0xffffffcc,0x00000000,unsigned char>;
        ///Select a trigger for PPG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg6{}; 
        ///Select Start Effective Level for PPG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge6{}; 
        ///Select a trigger for PPG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg4{}; 
        ///Select Start Effective Level for PPG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge4{}; 
    }
    namespace MftPpgGatec8{    ///<PPG Gate Function Control Registers 8
        using Addr = Register::Address<0x40024298,0xffffffcc,0x00000000,unsigned char>;
        ///Select a trigger for PPG10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg10{}; 
        ///Select Start Effective Level for PPG10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge10{}; 
        ///Select a trigger for PPG8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg8{}; 
        ///Select Start Effective Level for PPG8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge8{}; 
    }
    namespace MftPpgGatec12{    ///<PPG Gate Function Control Registers 12
        using Addr = Register::Address<0x400242d8,0xffffffcc,0x00000000,unsigned char>;
        ///Select a trigger for PPG14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg14{}; 
        ///Select Start Effective Level for PPG14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge14{}; 
        ///Select a trigger for PPG12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg12{}; 
        ///Select Start Effective Level for PPG12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge12{}; 
    }
    namespace MftPpgGatec16{    ///<PPG Gate Function Control Registers 16
        using Addr = Register::Address<0x40024318,0xffffffcc,0x00000000,unsigned char>;
        ///Select a trigger for PPG18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg18{}; 
        ///Select Start Effective Level for PPG18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge18{}; 
        ///Select a trigger for PPG16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg16{}; 
        ///Select Start Effective Level for PPG16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge16{}; 
    }
    namespace MftPpgGatec20{    ///<PPG Gate Function Control Registers 20
        using Addr = Register::Address<0x40024358,0xffffffcc,0x00000000,unsigned char>;
        ///Select a trigger for PPG22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg22{}; 
        ///Select Start Effective Level for PPG22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge22{}; 
        ///Select a trigger for PPG20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg20{}; 
        ///Select Start Effective Level for PPG20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge20{}; 
    }
}
