#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral MFT_PPG 
    namespace Nonettcr0{    ///< register TTCR0 
        using Addr = Register::Address<0x40024000,0xffff00ff,0,unsigned>;
        /// bitfield TRG6O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg6o{}; 
        namespace Trg6oValC{
        }
        /// bitfield TRG4O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg4o{}; 
        namespace Trg4oValC{
        }
        /// bitfield TRG2O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg2o{}; 
        namespace Trg2oValC{
        }
        /// bitfield TRG0O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg0o{}; 
        namespace Trg0oValC{
        }
        /// bitfield CS0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs0{}; 
        namespace Cs0ValC{
        }
        /// bitfield MONI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> moni0{}; 
        namespace Moni0ValC{
        }
        /// bitfield STR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str0{}; 
        namespace Str0ValC{
        }
    }
    namespace Nonettcr1{    ///< register TTCR1 
        using Addr = Register::Address<0x40024020,0xffff00ff,0,unsigned>;
        /// bitfield TRG7O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg7o{}; 
        namespace Trg7oValC{
        }
        /// bitfield TRG5O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg5o{}; 
        namespace Trg5oValC{
        }
        /// bitfield TRG3O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg3o{}; 
        namespace Trg3oValC{
        }
        /// bitfield TRG1O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg1o{}; 
        namespace Trg1oValC{
        }
        /// bitfield CS1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs1{}; 
        namespace Cs1ValC{
        }
        /// bitfield MONI1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> moni1{}; 
        namespace Moni1ValC{
        }
        /// bitfield STR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str1{}; 
        namespace Str1ValC{
        }
    }
    namespace Nonettcr2{    ///< register TTCR2 
        using Addr = Register::Address<0x40024040,0xffff00ff,0,unsigned>;
        /// bitfield TRG22O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg22o{}; 
        namespace Trg22oValC{
        }
        /// bitfield TRG20O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg20o{}; 
        namespace Trg20oValC{
        }
        /// bitfield TRG18O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg18o{}; 
        namespace Trg18oValC{
        }
        /// bitfield TRG16O 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg16o{}; 
        namespace Trg16oValC{
        }
        /// bitfield CS2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs2{}; 
        namespace Cs2ValC{
        }
        /// bitfield MONI2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> moni2{}; 
        namespace Moni2ValC{
        }
        /// bitfield STR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str2{}; 
        namespace Str2ValC{
        }
    }
    namespace Nonecomp0{    ///< register COMP0 
        using Addr = Register::Address<0x40024008,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp2{    ///< register COMP2 
        using Addr = Register::Address<0x4002400c,0xffffffff,0,unsigned char>;
    }
    namespace Nonecomp4{    ///< register COMP4 
        using Addr = Register::Address<0x40024010,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp6{    ///< register COMP6 
        using Addr = Register::Address<0x40024014,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp1{    ///< register COMP1 
        using Addr = Register::Address<0x40024028,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp3{    ///< register COMP3 
        using Addr = Register::Address<0x4002402c,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp5{    ///< register COMP5 
        using Addr = Register::Address<0x40024030,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp7{    ///< register COMP7 
        using Addr = Register::Address<0x40024034,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp8{    ///< register COMP8 
        using Addr = Register::Address<0x40024048,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp10{    ///< register COMP10 
        using Addr = Register::Address<0x4002404c,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp12{    ///< register COMP12 
        using Addr = Register::Address<0x40024050,0xffffffff,0,unsigned>;
    }
    namespace Nonecomp14{    ///< register COMP14 
        using Addr = Register::Address<0x40024054,0xffffffff,0,unsigned>;
    }
    namespace Nonetrg{    ///< register TRG 
        using Addr = Register::Address<0x40024100,0xffff0000,0,unsigned>;
        /// bitfield PEN15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pen15{}; 
        namespace Pen15ValC{
        }
        /// bitfield PEN14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pen14{}; 
        namespace Pen14ValC{
        }
        /// bitfield PEN13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pen13{}; 
        namespace Pen13ValC{
        }
        /// bitfield PEN12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pen12{}; 
        namespace Pen12ValC{
        }
        /// bitfield PEN11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pen11{}; 
        namespace Pen11ValC{
        }
        /// bitfield PEN10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pen10{}; 
        namespace Pen10ValC{
        }
        /// bitfield PEN09 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pen09{}; 
        namespace Pen09ValC{
        }
        /// bitfield PEN08 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pen08{}; 
        namespace Pen08ValC{
        }
        /// bitfield PEN07 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen07{}; 
        namespace Pen07ValC{
        }
        /// bitfield PEN06 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen06{}; 
        namespace Pen06ValC{
        }
        /// bitfield PEN05 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen05{}; 
        namespace Pen05ValC{
        }
        /// bitfield PEN04 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen04{}; 
        namespace Pen04ValC{
        }
        /// bitfield PEN03 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen03{}; 
        namespace Pen03ValC{
        }
        /// bitfield PEN02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen02{}; 
        namespace Pen02ValC{
        }
        /// bitfield PEN01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen01{}; 
        namespace Pen01ValC{
        }
        /// bitfield PEN00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen00{}; 
        namespace Pen00ValC{
        }
    }
    namespace Nonetrg1{    ///< register TRG1 
        using Addr = Register::Address<0x40024140,0xffffff00,0,unsigned>;
        /// bitfield PEN23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen23{}; 
        namespace Pen23ValC{
        }
        /// bitfield PEN22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen22{}; 
        namespace Pen22ValC{
        }
        /// bitfield PEN21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen21{}; 
        namespace Pen21ValC{
        }
        /// bitfield PEN20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen20{}; 
        namespace Pen20ValC{
        }
        /// bitfield PEN19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen19{}; 
        namespace Pen19ValC{
        }
        /// bitfield PEN18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen18{}; 
        namespace Pen18ValC{
        }
        /// bitfield PEN17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen17{}; 
        namespace Pen17ValC{
        }
        /// bitfield PEN16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen16{}; 
        namespace Pen16ValC{
        }
    }
    namespace Nonerevc{    ///< register REVC 
        using Addr = Register::Address<0x40024104,0xffff0000,0,unsigned>;
        /// bitfield REV15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rev15{}; 
        namespace Rev15ValC{
        }
        /// bitfield REV14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev14{}; 
        namespace Rev14ValC{
        }
        /// bitfield REV13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev13{}; 
        namespace Rev13ValC{
        }
        /// bitfield REV12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rev12{}; 
        namespace Rev12ValC{
        }
        /// bitfield REV11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rev11{}; 
        namespace Rev11ValC{
        }
        /// bitfield REV10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rev10{}; 
        namespace Rev10ValC{
        }
        /// bitfield REV09 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev09{}; 
        namespace Rev09ValC{
        }
        /// bitfield REV08 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rev08{}; 
        namespace Rev08ValC{
        }
        /// bitfield REV07 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev07{}; 
        namespace Rev07ValC{
        }
        /// bitfield REV06 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev06{}; 
        namespace Rev06ValC{
        }
        /// bitfield REV05 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev05{}; 
        namespace Rev05ValC{
        }
        /// bitfield REV04 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev04{}; 
        namespace Rev04ValC{
        }
        /// bitfield REV03 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev03{}; 
        namespace Rev03ValC{
        }
        /// bitfield REV02 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev02{}; 
        namespace Rev02ValC{
        }
        /// bitfield REV01 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev01{}; 
        namespace Rev01ValC{
        }
        /// bitfield REV00 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev00{}; 
        namespace Rev00ValC{
        }
    }
    namespace Nonerevc1{    ///< register REVC1 
        using Addr = Register::Address<0x40024144,0xffffff00,0,unsigned>;
        /// bitfield REV23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev23{}; 
        namespace Rev23ValC{
        }
        /// bitfield REV22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev22{}; 
        namespace Rev22ValC{
        }
        /// bitfield REV21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev21{}; 
        namespace Rev21ValC{
        }
        /// bitfield REV20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev20{}; 
        namespace Rev20ValC{
        }
        /// bitfield REV19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev19{}; 
        namespace Rev19ValC{
        }
        /// bitfield REV18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev18{}; 
        namespace Rev18ValC{
        }
        /// bitfield REV17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev17{}; 
        namespace Rev17ValC{
        }
        /// bitfield REV16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev16{}; 
        namespace Rev16ValC{
        }
    }
    namespace Noneppgc0{    ///< register PPGC0 
        using Addr = Register::Address<0x40024201,0xffffff00,0,unsigned char>;
        /// bitfield PIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pie{}; 
        namespace PieValC{
        }
        /// bitfield PUF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> puf{}; 
        namespace PufValC{
        }
        /// bitfield INTM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intm{}; 
        namespace IntmValC{
        }
        /// bitfield PCS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> pcs{}; 
        namespace PcsValC{
        }
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        /// bitfield TTRG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ttrg{}; 
        namespace TtrgValC{
        }
    }
    namespace Noneppgc1{    ///< register PPGC1 
        using Addr = Register::Address<0x40024200,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc2{    ///< register PPGC2 
        using Addr = Register::Address<0x40024205,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc3{    ///< register PPGC3 
        using Addr = Register::Address<0x40024204,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc4{    ///< register PPGC4 
        using Addr = Register::Address<0x40024241,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc5{    ///< register PPGC5 
        using Addr = Register::Address<0x40024240,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc6{    ///< register PPGC6 
        using Addr = Register::Address<0x40024245,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc7{    ///< register PPGC7 
        using Addr = Register::Address<0x40024244,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc8{    ///< register PPGC8 
        using Addr = Register::Address<0x40024281,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc9{    ///< register PPGC9 
        using Addr = Register::Address<0x40024280,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc10{    ///< register PPGC10 
        using Addr = Register::Address<0x40024285,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc11{    ///< register PPGC11 
        using Addr = Register::Address<0x40024284,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc12{    ///< register PPGC12 
        using Addr = Register::Address<0x400242c1,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc13{    ///< register PPGC13 
        using Addr = Register::Address<0x400242c0,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc14{    ///< register PPGC14 
        using Addr = Register::Address<0x400242c5,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc15{    ///< register PPGC15 
        using Addr = Register::Address<0x400242c4,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc16{    ///< register PPGC16 
        using Addr = Register::Address<0x40024301,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc17{    ///< register PPGC17 
        using Addr = Register::Address<0x40024300,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc18{    ///< register PPGC18 
        using Addr = Register::Address<0x40024305,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc19{    ///< register PPGC19 
        using Addr = Register::Address<0x40024304,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc20{    ///< register PPGC20 
        using Addr = Register::Address<0x40024341,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc21{    ///< register PPGC21 
        using Addr = Register::Address<0x40024340,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc22{    ///< register PPGC22 
        using Addr = Register::Address<0x40024345,0xffffffff,0,unsigned>;
    }
    namespace Noneppgc23{    ///< register PPGC23 
        using Addr = Register::Address<0x40024344,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh0{    ///< register PRLH0 
        using Addr = Register::Address<0x40024209,0xffffff00,0,unsigned char>;
        /// bitfield PRLH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prlh{}; 
        namespace PrlhValC{
        }
    }
    namespace Noneprll0{    ///< register PRLL0 
        using Addr = Register::Address<0x40024208,0xffffff00,0,unsigned char>;
        /// bitfield PRLL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prll{}; 
        namespace PrllValC{
        }
    }
    namespace Noneprlh1{    ///< register PRLH1 
        using Addr = Register::Address<0x4002420d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll1{    ///< register PRLL1 
        using Addr = Register::Address<0x4002420c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh2{    ///< register PRLH2 
        using Addr = Register::Address<0x40024211,0xffffffff,0,unsigned>;
    }
    namespace Noneprll2{    ///< register PRLL2 
        using Addr = Register::Address<0x40024210,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh3{    ///< register PRLH3 
        using Addr = Register::Address<0x40024215,0xffffffff,0,unsigned>;
    }
    namespace Noneprll3{    ///< register PRLL3 
        using Addr = Register::Address<0x40024214,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh4{    ///< register PRLH4 
        using Addr = Register::Address<0x40024249,0xffffffff,0,unsigned>;
    }
    namespace Noneprll4{    ///< register PRLL4 
        using Addr = Register::Address<0x40024248,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh5{    ///< register PRLH5 
        using Addr = Register::Address<0x4002424d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll5{    ///< register PRLL5 
        using Addr = Register::Address<0x4002424c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh6{    ///< register PRLH6 
        using Addr = Register::Address<0x40024251,0xffffffff,0,unsigned>;
    }
    namespace Noneprll6{    ///< register PRLL6 
        using Addr = Register::Address<0x40024250,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh7{    ///< register PRLH7 
        using Addr = Register::Address<0x40024255,0xffffffff,0,unsigned>;
    }
    namespace Noneprll7{    ///< register PRLL7 
        using Addr = Register::Address<0x40024254,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh8{    ///< register PRLH8 
        using Addr = Register::Address<0x40024289,0xffffffff,0,unsigned>;
    }
    namespace Noneprll8{    ///< register PRLL8 
        using Addr = Register::Address<0x40024288,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh9{    ///< register PRLH9 
        using Addr = Register::Address<0x4002428d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll9{    ///< register PRLL9 
        using Addr = Register::Address<0x4002428c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh10{    ///< register PRLH10 
        using Addr = Register::Address<0x40024291,0xffffffff,0,unsigned>;
    }
    namespace Noneprll10{    ///< register PRLL10 
        using Addr = Register::Address<0x40024290,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh11{    ///< register PRLH11 
        using Addr = Register::Address<0x40024295,0xffffffff,0,unsigned>;
    }
    namespace Noneprll11{    ///< register PRLL11 
        using Addr = Register::Address<0x40024294,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh12{    ///< register PRLH12 
        using Addr = Register::Address<0x400242c9,0xffffffff,0,unsigned>;
    }
    namespace Noneprll12{    ///< register PRLL12 
        using Addr = Register::Address<0x400242c8,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh13{    ///< register PRLH13 
        using Addr = Register::Address<0x400242cd,0xffffffff,0,unsigned>;
    }
    namespace Noneprll13{    ///< register PRLL13 
        using Addr = Register::Address<0x400242cc,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh14{    ///< register PRLH14 
        using Addr = Register::Address<0x400242d1,0xffffffff,0,unsigned>;
    }
    namespace Noneprll14{    ///< register PRLL14 
        using Addr = Register::Address<0x400242d0,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh15{    ///< register PRLH15 
        using Addr = Register::Address<0x400242d5,0xffffffff,0,unsigned>;
    }
    namespace Noneprll15{    ///< register PRLL15 
        using Addr = Register::Address<0x400242d4,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh16{    ///< register PRLH16 
        using Addr = Register::Address<0x40024309,0xffffffff,0,unsigned>;
    }
    namespace Noneprll16{    ///< register PRLL16 
        using Addr = Register::Address<0x40024308,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh17{    ///< register PRLH17 
        using Addr = Register::Address<0x4002430d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll17{    ///< register PRLL17 
        using Addr = Register::Address<0x4002430c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh18{    ///< register PRLH18 
        using Addr = Register::Address<0x40024311,0xffffffff,0,unsigned>;
    }
    namespace Noneprll18{    ///< register PRLL18 
        using Addr = Register::Address<0x40024310,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh19{    ///< register PRLH19 
        using Addr = Register::Address<0x40024315,0xffffffff,0,unsigned>;
    }
    namespace Noneprll19{    ///< register PRLL19 
        using Addr = Register::Address<0x40024314,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh20{    ///< register PRLH20 
        using Addr = Register::Address<0x40024349,0xffffffff,0,unsigned>;
    }
    namespace Noneprll20{    ///< register PRLL20 
        using Addr = Register::Address<0x40024348,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh21{    ///< register PRLH21 
        using Addr = Register::Address<0x4002434d,0xffffffff,0,unsigned>;
    }
    namespace Noneprll21{    ///< register PRLL21 
        using Addr = Register::Address<0x4002434c,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh22{    ///< register PRLH22 
        using Addr = Register::Address<0x40024351,0xffffffff,0,unsigned>;
    }
    namespace Noneprll22{    ///< register PRLL22 
        using Addr = Register::Address<0x40024350,0xffffffff,0,unsigned>;
    }
    namespace Noneprlh23{    ///< register PRLH23 
        using Addr = Register::Address<0x40024355,0xffffffff,0,unsigned>;
    }
    namespace Noneprll23{    ///< register PRLL23 
        using Addr = Register::Address<0x40024354,0xffffffff,0,unsigned>;
    }
    namespace Nonegatec0{    ///< register GATEC0 
        using Addr = Register::Address<0x40024218,0xffffffcc,0,unsigned char>;
        /// bitfield STRG2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg2{}; 
        namespace Strg2ValC{
        }
        /// bitfield EDGE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge2{}; 
        namespace Edge2ValC{
        }
        /// bitfield STRG0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg0{}; 
        namespace Strg0ValC{
        }
        /// bitfield EDGE0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge0{}; 
        namespace Edge0ValC{
        }
    }
    namespace Nonegatec4{    ///< register GATEC4 
        using Addr = Register::Address<0x40024258,0xffffffcc,0,unsigned char>;
        /// bitfield STRG6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg6{}; 
        namespace Strg6ValC{
        }
        /// bitfield EDGE6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge6{}; 
        namespace Edge6ValC{
        }
        /// bitfield STRG4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg4{}; 
        namespace Strg4ValC{
        }
        /// bitfield EDGE4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge4{}; 
        namespace Edge4ValC{
        }
    }
    namespace Nonegatec8{    ///< register GATEC8 
        using Addr = Register::Address<0x40024298,0xffffffcc,0,unsigned char>;
        /// bitfield STRG10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg10{}; 
        namespace Strg10ValC{
        }
        /// bitfield EDGE10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge10{}; 
        namespace Edge10ValC{
        }
        /// bitfield STRG8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg8{}; 
        namespace Strg8ValC{
        }
        /// bitfield EDGE8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge8{}; 
        namespace Edge8ValC{
        }
    }
    namespace Nonegatec12{    ///< register GATEC12 
        using Addr = Register::Address<0x400242d8,0xffffffcc,0,unsigned char>;
        /// bitfield STRG14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg14{}; 
        namespace Strg14ValC{
        }
        /// bitfield EDGE14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge14{}; 
        namespace Edge14ValC{
        }
        /// bitfield STRG12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg12{}; 
        namespace Strg12ValC{
        }
        /// bitfield EDGE12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge12{}; 
        namespace Edge12ValC{
        }
    }
    namespace Nonegatec16{    ///< register GATEC16 
        using Addr = Register::Address<0x40024318,0xffffffcc,0,unsigned char>;
        /// bitfield STRG18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg18{}; 
        namespace Strg18ValC{
        }
        /// bitfield EDGE18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge18{}; 
        namespace Edge18ValC{
        }
        /// bitfield STRG16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg16{}; 
        namespace Strg16ValC{
        }
        /// bitfield EDGE16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge16{}; 
        namespace Edge16ValC{
        }
    }
    namespace Nonegatec20{    ///< register GATEC20 
        using Addr = Register::Address<0x40024358,0xffffffcc,0,unsigned char>;
        /// bitfield STRG22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg22{}; 
        namespace Strg22ValC{
        }
        /// bitfield EDGE22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge22{}; 
        namespace Edge22ValC{
        }
        /// bitfield STRG20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg20{}; 
        namespace Strg20ValC{
        }
        /// bitfield EDGE20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge20{}; 
        namespace Edge20ValC{
        }
    }
    namespace Noneigbtc{    ///< register IGBTC 
        using Addr = Register::Address<0x40024380,0xffffff00,0,unsigned char>;
        /// bitfield IGATIH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> igatih{}; 
        namespace IgatihValC{
        }
        /// bitfield IGNFW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ignfw{}; 
        namespace IgnfwValC{
        }
        /// bitfield IGOSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> igosel{}; 
        namespace IgoselValC{
        }
        /// bitfield IGTRGLV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igtrglv{}; 
        namespace IgtrglvValC{
        }
        /// bitfield IGBTMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igbtmd{}; 
        namespace IgbtmdValC{
        }
    }
}
