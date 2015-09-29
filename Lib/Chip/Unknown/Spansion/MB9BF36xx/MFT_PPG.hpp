#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral MFT_PPG 
    namespace Nonettcr0{    ///< register TTCR0 
        using Addr = Register::Address<0x40024000,0xffff00ff,0,unsigned>;
        /// bitfield TRG6O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg6o{}; 
        /// bitfield TRG4O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg4o{}; 
        /// bitfield TRG2O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg2o{}; 
        /// bitfield TRG0O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg0o{}; 
        /// bitfield CS0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs0{}; 
        /// bitfield MONI0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> moni0{}; 
        /// bitfield STR0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str0{}; 
    }
    namespace Nonettcr1{    ///< register TTCR1 
        using Addr = Register::Address<0x40024020,0xffff00ff,0,unsigned>;
        /// bitfield TRG7O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg7o{}; 
        /// bitfield TRG5O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg5o{}; 
        /// bitfield TRG3O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg3o{}; 
        /// bitfield TRG1O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg1o{}; 
        /// bitfield CS1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs1{}; 
        /// bitfield MONI1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> moni1{}; 
        /// bitfield STR1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str1{}; 
    }
    namespace Nonettcr2{    ///< register TTCR2 
        using Addr = Register::Address<0x40024040,0xffff00ff,0,unsigned>;
        /// bitfield TRG22O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> trg22o{}; 
        /// bitfield TRG20O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> trg20o{}; 
        /// bitfield TRG18O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> trg18o{}; 
        /// bitfield TRG16O 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> trg16o{}; 
        /// bitfield CS2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> cs2{}; 
        /// bitfield MONI2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> moni2{}; 
        /// bitfield STR2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> str2{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pen15{}; 
        /// bitfield PEN14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pen14{}; 
        /// bitfield PEN13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pen13{}; 
        /// bitfield PEN12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pen12{}; 
        /// bitfield PEN11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pen11{}; 
        /// bitfield PEN10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pen10{}; 
        /// bitfield PEN09 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pen09{}; 
        /// bitfield PEN08 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pen08{}; 
        /// bitfield PEN07 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen07{}; 
        /// bitfield PEN06 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen06{}; 
        /// bitfield PEN05 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen05{}; 
        /// bitfield PEN04 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen04{}; 
        /// bitfield PEN03 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen03{}; 
        /// bitfield PEN02 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen02{}; 
        /// bitfield PEN01 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen01{}; 
        /// bitfield PEN00 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen00{}; 
    }
    namespace Nonetrg1{    ///< register TRG1 
        using Addr = Register::Address<0x40024140,0xffffff00,0,unsigned>;
        /// bitfield PEN23 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pen23{}; 
        /// bitfield PEN22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pen22{}; 
        /// bitfield PEN21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pen21{}; 
        /// bitfield PEN20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen20{}; 
        /// bitfield PEN19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pen19{}; 
        /// bitfield PEN18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pen18{}; 
        /// bitfield PEN17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen17{}; 
        /// bitfield PEN16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pen16{}; 
    }
    namespace Nonerevc{    ///< register REVC 
        using Addr = Register::Address<0x40024104,0xffff0000,0,unsigned>;
        /// bitfield REV15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rev15{}; 
        /// bitfield REV14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rev14{}; 
        /// bitfield REV13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rev13{}; 
        /// bitfield REV12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rev12{}; 
        /// bitfield REV11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rev11{}; 
        /// bitfield REV10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rev10{}; 
        /// bitfield REV09 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rev09{}; 
        /// bitfield REV08 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rev08{}; 
        /// bitfield REV07 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev07{}; 
        /// bitfield REV06 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev06{}; 
        /// bitfield REV05 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev05{}; 
        /// bitfield REV04 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev04{}; 
        /// bitfield REV03 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev03{}; 
        /// bitfield REV02 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev02{}; 
        /// bitfield REV01 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev01{}; 
        /// bitfield REV00 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev00{}; 
    }
    namespace Nonerevc1{    ///< register REVC1 
        using Addr = Register::Address<0x40024144,0xffffff00,0,unsigned>;
        /// bitfield REV23 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rev23{}; 
        /// bitfield REV22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rev22{}; 
        /// bitfield REV21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rev21{}; 
        /// bitfield REV20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rev20{}; 
        /// bitfield REV19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rev19{}; 
        /// bitfield REV18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rev18{}; 
        /// bitfield REV17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rev17{}; 
        /// bitfield REV16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rev16{}; 
    }
    namespace Noneppgc0{    ///< register PPGC0 
        using Addr = Register::Address<0x40024201,0xffffff00,0,unsigned char>;
        /// bitfield PIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pie{}; 
        /// bitfield PUF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> puf{}; 
        /// bitfield INTM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intm{}; 
        /// bitfield PCS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> pcs{}; 
        /// bitfield MD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield TTRG 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ttrg{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prlh{}; 
    }
    namespace Noneprll0{    ///< register PRLL0 
        using Addr = Register::Address<0x40024208,0xffffff00,0,unsigned char>;
        /// bitfield PRLL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> prll{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg2{}; 
        /// bitfield EDGE2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge2{}; 
        /// bitfield STRG0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg0{}; 
        /// bitfield EDGE0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge0{}; 
    }
    namespace Nonegatec4{    ///< register GATEC4 
        using Addr = Register::Address<0x40024258,0xffffffcc,0,unsigned char>;
        /// bitfield STRG6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg6{}; 
        /// bitfield EDGE6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge6{}; 
        /// bitfield STRG4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg4{}; 
        /// bitfield EDGE4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge4{}; 
    }
    namespace Nonegatec8{    ///< register GATEC8 
        using Addr = Register::Address<0x40024298,0xffffffcc,0,unsigned char>;
        /// bitfield STRG10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg10{}; 
        /// bitfield EDGE10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge10{}; 
        /// bitfield STRG8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg8{}; 
        /// bitfield EDGE8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge8{}; 
    }
    namespace Nonegatec12{    ///< register GATEC12 
        using Addr = Register::Address<0x400242d8,0xffffffcc,0,unsigned char>;
        /// bitfield STRG14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg14{}; 
        /// bitfield EDGE14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge14{}; 
        /// bitfield STRG12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg12{}; 
        /// bitfield EDGE12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge12{}; 
    }
    namespace Nonegatec16{    ///< register GATEC16 
        using Addr = Register::Address<0x40024318,0xffffffcc,0,unsigned char>;
        /// bitfield STRG18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg18{}; 
        /// bitfield EDGE18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge18{}; 
        /// bitfield STRG16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg16{}; 
        /// bitfield EDGE16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge16{}; 
    }
    namespace Nonegatec20{    ///< register GATEC20 
        using Addr = Register::Address<0x40024358,0xffffffcc,0,unsigned char>;
        /// bitfield STRG22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> strg22{}; 
        /// bitfield EDGE22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> edge22{}; 
        /// bitfield STRG20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> strg20{}; 
        /// bitfield EDGE20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> edge20{}; 
    }
    namespace Noneigbtc{    ///< register IGBTC 
        using Addr = Register::Address<0x40024380,0xffffff00,0,unsigned char>;
        /// bitfield IGATIH 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> igatih{}; 
        /// bitfield IGNFW 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ignfw{}; 
        /// bitfield IGOSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> igosel{}; 
        /// bitfield IGTRGLV 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> igtrglv{}; 
        /// bitfield IGBTMD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> igbtmd{}; 
    }
}
