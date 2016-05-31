#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral RTC 
    namespace RtcWtcr10{    ///< register WTCR10 
        using Addr = Register::Address<0x4003b100,0xffffff02,0x00000000,unsigned char>;
        /// bitfield TRANS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trans{}; 
        /// bitfield BUSY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        /// bitfield SCRST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scrst{}; 
        /// bitfield SCST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> scst{}; 
        /// bitfield SRST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srst{}; 
        /// bitfield RUN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> run{}; 
        /// bitfield ST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> st{}; 
    }
    namespace RtcWtcr11{    ///< register WTCR11 
        using Addr = Register::Address<0x4003b104,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield YEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> yen{}; 
        /// bitfield MOEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> moen{}; 
        /// bitfield DEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> den{}; 
        /// bitfield HEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hen{}; 
        /// bitfield MIEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mien{}; 
    }
    namespace RtcWtcr12{    ///< register WTCR12 
        using Addr = Register::Address<0x4003b108,0xffffff00,0x00000000,unsigned char>;
        /// bitfield INTCRI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intcri{}; 
        /// bitfield INTERI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> interi{}; 
        /// bitfield INTALI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intali{}; 
        /// bitfield INTTMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inttmi{}; 
        /// bitfield INTHI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inthi{}; 
        /// bitfield INTMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intmi{}; 
        /// bitfield INTSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intsi{}; 
        /// bitfield INTSSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intssi{}; 
    }
    namespace RtcWtcr13{    ///< register WTCR13 
        using Addr = Register::Address<0x4003b10c,0xffffff00,0x00000000,unsigned char>;
        /// bitfield INTCRIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intcrie{}; 
        /// bitfield INTERIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> interie{}; 
        /// bitfield INTALIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intalie{}; 
        /// bitfield INTTMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inttmie{}; 
        /// bitfield INTHIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inthie{}; 
        /// bitfield INTMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intmie{}; 
        /// bitfield INTSIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intsie{}; 
        /// bitfield INTSSIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intssie{}; 
    }
    namespace RtcWtcr20{    ///< register WTCR20 
        using Addr = Register::Address<0x4003b110,0xffffffc0,0x00000000,unsigned>;
        /// bitfield PWRITE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pwrite{}; 
        /// bitfield PREAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pread{}; 
        /// bitfield BWRITE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bwrite{}; 
        /// bitfield BREAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bread{}; 
        /// bitfield CWRITE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cwrite{}; 
        /// bitfield CREAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cread{}; 
    }
    namespace RtcWtcr21{    ///< register WTCR21 
        using Addr = Register::Address<0x4003b114,0xfffffff8,0x00000000,unsigned>;
        /// bitfield TMRUN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmrun{}; 
        /// bitfield TMEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tmen{}; 
        /// bitfield TMST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmst{}; 
    }
    namespace RtcWtsr{    ///< register WTSR 
        using Addr = Register::Address<0x4003b11c,0xffffff80,0x00000000,unsigned char>;
        /// bitfield TS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        /// bitfield S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> s{}; 
    }
    namespace RtcWtmir{    ///< register WTMIR 
        using Addr = Register::Address<0x4003b120,0xffffff80,0x00000000,unsigned char>;
        /// bitfield TMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tmi{}; 
        /// bitfield MI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace RtcWthr{    ///< register WTHR 
        using Addr = Register::Address<0x4003b124,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield TH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> th{}; 
        /// bitfield H 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> h{}; 
    }
    namespace RtcWtdr{    ///< register WTDR 
        using Addr = Register::Address<0x4003b128,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield TD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> td{}; 
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> d{}; 
    }
    namespace RtcWtdw{    ///< register WTDW 
        using Addr = Register::Address<0x4003b12c,0xfffffff8,0x00000000,unsigned char>;
        /// bitfield DW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dw{}; 
    }
    namespace RtcWtmor{    ///< register WTMOR 
        using Addr = Register::Address<0x4003b130,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield TMO0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmo0{}; 
        /// bitfield MO 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mo{}; 
    }
    namespace RtcWtyr{    ///< register WTYR 
        using Addr = Register::Address<0x4003b134,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ty{}; 
        /// bitfield Y 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> y{}; 
    }
    namespace RtcAlmir{    ///< register ALMIR 
        using Addr = Register::Address<0x4003b138,0xffffff80,0x00000000,unsigned char>;
        /// bitfield TAMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tami{}; 
        /// bitfield AMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ami{}; 
    }
    namespace RtcAlhr{    ///< register ALHR 
        using Addr = Register::Address<0x4003b13c,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield TAH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tah{}; 
        /// bitfield AH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ah{}; 
    }
    namespace RtcAldr{    ///< register ALDR 
        using Addr = Register::Address<0x4003b140,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield TAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tad{}; 
        /// bitfield AD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ad{}; 
    }
    namespace RtcAlmor{    ///< register ALMOR 
        using Addr = Register::Address<0x4003b144,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield TAMO0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tamo0{}; 
        /// bitfield AMO 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> amo{}; 
    }
    namespace RtcAlyr{    ///< register ALYR 
        using Addr = Register::Address<0x4003b148,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TAY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tay{}; 
        /// bitfield AY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ay{}; 
    }
    namespace RtcWttr0{    ///< register WTTR0 
        using Addr = Register::Address<0x4003b14c,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TM7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tm7{}; 
        /// bitfield TM6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tm6{}; 
        /// bitfield TM5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tm5{}; 
        /// bitfield TM4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tm4{}; 
        /// bitfield TM3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tm3{}; 
        /// bitfield TM2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tm2{}; 
        /// bitfield TM1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tm1{}; 
        /// bitfield TM0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tm0{}; 
    }
    namespace RtcWttr1{    ///< register WTTR1 
        using Addr = Register::Address<0x4003b150,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TM15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tm15{}; 
        /// bitfield TM14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tm14{}; 
        /// bitfield TM13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tm13{}; 
        /// bitfield TM12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tm12{}; 
        /// bitfield TM11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tm11{}; 
        /// bitfield TM10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tm10{}; 
        /// bitfield TM9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tm9{}; 
        /// bitfield TM8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tm8{}; 
    }
    namespace RtcWttr2{    ///< register WTTR2 
        using Addr = Register::Address<0x4003b154,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield TM17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tm17{}; 
        /// bitfield TM16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tm16{}; 
    }
    namespace RtcWtcal0{    ///< register WTCAL0 
        using Addr = Register::Address<0x4003b158,0xffffff00,0x00000000,unsigned char>;
        /// bitfield WTCAL0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wtcal0{}; 
    }
    namespace RtcWtcal1{    ///< register WTCAL1 
        using Addr = Register::Address<0x4003b15c,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield WTCAL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wtcal1{}; 
    }
    namespace RtcWtcalen{    ///< register WTCALEN 
        using Addr = Register::Address<0x4003b160,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield WTCALEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcalen{}; 
    }
    namespace RtcWtdiv{    ///< register WTDIV 
        using Addr = Register::Address<0x4003b164,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield WTDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wtdiv{}; 
    }
    namespace RtcWtdiven{    ///< register WTDIVEN 
        using Addr = Register::Address<0x4003b168,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield WTDIVRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wtdivrdy{}; 
        /// bitfield WTDIVEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtdiven{}; 
    }
    namespace RtcWtcalprd{    ///< register WTCALPRD 
        using Addr = Register::Address<0x4003b16c,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield WTCALPRD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> wtcalprd{}; 
    }
    namespace RtcWtcosel{    ///< register WTCOSEL 
        using Addr = Register::Address<0x4003b170,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield WTCOSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcosel{}; 
    }
    namespace RtcVbClkdiv{    ///< register VB_CLKDIV 
        using Addr = Register::Address<0x4003b174,0xffffff00,0x00000000,unsigned char>;
        /// bitfield DIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace RtcWtosccnt{    ///< register WTOSCCNT 
        using Addr = Register::Address<0x4003b178,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield SOSCNTL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soscntl{}; 
        /// bitfield SOSCEX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soscex{}; 
    }
    namespace RtcCcs{    ///< register CCS 
        using Addr = Register::Address<0x4003b17c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcCcb{    ///< register CCB 
        using Addr = Register::Address<0x4003b180,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcTrim{    ///< register TRIM 
        using Addr = Register::Address<0x4003b184,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBoost{    ///< register BOOST 
        using Addr = Register::Address<0x4003b188,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield BOOST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> boost{}; 
    }
    namespace RtcEwkup{    ///< register EWKUP 
        using Addr = Register::Address<0x4003b18c,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield WUP0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wup0{}; 
    }
    namespace RtcVdet{    ///< register VDET 
        using Addr = Register::Address<0x4003b190,0xffffff7f,0x00000000,unsigned char>;
        /// bitfield PON 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pon{}; 
    }
    namespace RtcFdet{    ///< register FDET 
        using Addr = Register::Address<0x4003b194,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcHibrst{    ///< register HIBRST 
        using Addr = Register::Address<0x4003b198,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield HIBRST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hibrst{}; 
    }
    namespace RtcVbpfr{    ///< register VBPFR 
        using Addr = Register::Address<0x4003b19c,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield SPSR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spsr1{}; 
        /// bitfield SPSR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spsr0{}; 
        /// bitfield VPFR3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vpfr3{}; 
        /// bitfield VPFR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vpfr2{}; 
        /// bitfield VPFR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vpfr1{}; 
        /// bitfield VPFR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vpfr0{}; 
    }
    namespace RtcVbpcr{    ///< register VBPCR 
        using Addr = Register::Address<0x4003b1a0,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield VPCR3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vpcr3{}; 
        /// bitfield VPCR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vpcr2{}; 
        /// bitfield VPCR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vpcr1{}; 
        /// bitfield VPCR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vpcr0{}; 
    }
    namespace RtcVbddr{    ///< register VBDDR 
        using Addr = Register::Address<0x4003b1a4,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield VDDR3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vddr3{}; 
        /// bitfield VDDR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vddr2{}; 
        /// bitfield VDDR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vddr1{}; 
        /// bitfield VDDR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vddr0{}; 
    }
    namespace RtcVbdir{    ///< register VBDIR 
        using Addr = Register::Address<0x4003b1a8,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield VDIR3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vdir3{}; 
        /// bitfield VDIR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vdir2{}; 
        /// bitfield VDIR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vdir1{}; 
        /// bitfield VDIR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vdir0{}; 
    }
    namespace RtcVbdor{    ///< register VBDOR 
        using Addr = Register::Address<0x4003b1ac,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield VDOR3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> vdor3{}; 
        /// bitfield VDOR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> vdor2{}; 
        /// bitfield VDOR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vdor1{}; 
        /// bitfield VDOR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vdor0{}; 
    }
    namespace RtcVbpzr{    ///< register VBPZR 
        using Addr = Register::Address<0x4003b1b0,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield VPZR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vpzr1{}; 
        /// bitfield VPZR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vpzr0{}; 
    }
    namespace RtcBreg00{    ///< register BREG00 
        using Addr = Register::Address<0x4003b200,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg01{    ///< register BREG01 
        using Addr = Register::Address<0x4003b201,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg02{    ///< register BREG02 
        using Addr = Register::Address<0x4003b202,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg03{    ///< register BREG03 
        using Addr = Register::Address<0x4003b203,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg04{    ///< register BREG04 
        using Addr = Register::Address<0x4003b204,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg05{    ///< register BREG05 
        using Addr = Register::Address<0x4003b205,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg06{    ///< register BREG06 
        using Addr = Register::Address<0x4003b206,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg07{    ///< register BREG07 
        using Addr = Register::Address<0x4003b207,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg08{    ///< register BREG08 
        using Addr = Register::Address<0x4003b208,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg09{    ///< register BREG09 
        using Addr = Register::Address<0x4003b209,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg0a{    ///< register BREG0A 
        using Addr = Register::Address<0x4003b20a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg0b{    ///< register BREG0B 
        using Addr = Register::Address<0x4003b20b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg0c{    ///< register BREG0C 
        using Addr = Register::Address<0x4003b20c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg0d{    ///< register BREG0D 
        using Addr = Register::Address<0x4003b20d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg0e{    ///< register BREG0E 
        using Addr = Register::Address<0x4003b20e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg0f{    ///< register BREG0F 
        using Addr = Register::Address<0x4003b20f,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg10{    ///< register BREG10 
        using Addr = Register::Address<0x4003b210,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg11{    ///< register BREG11 
        using Addr = Register::Address<0x4003b211,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg12{    ///< register BREG12 
        using Addr = Register::Address<0x4003b212,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg13{    ///< register BREG13 
        using Addr = Register::Address<0x4003b213,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg14{    ///< register BREG14 
        using Addr = Register::Address<0x4003b214,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg15{    ///< register BREG15 
        using Addr = Register::Address<0x4003b215,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg16{    ///< register BREG16 
        using Addr = Register::Address<0x4003b216,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg17{    ///< register BREG17 
        using Addr = Register::Address<0x4003b217,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg18{    ///< register BREG18 
        using Addr = Register::Address<0x4003b218,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg19{    ///< register BREG19 
        using Addr = Register::Address<0x4003b219,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg1a{    ///< register BREG1A 
        using Addr = Register::Address<0x4003b21a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg1b{    ///< register BREG1B 
        using Addr = Register::Address<0x4003b21b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg1c{    ///< register BREG1C 
        using Addr = Register::Address<0x4003b21c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg1d{    ///< register BREG1D 
        using Addr = Register::Address<0x4003b21d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg1e{    ///< register BREG1E 
        using Addr = Register::Address<0x4003b21e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg1f{    ///< register BREG1F 
        using Addr = Register::Address<0x4003b21f,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg20{    ///< register BREG20 
        using Addr = Register::Address<0x4003b220,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg21{    ///< register BREG21 
        using Addr = Register::Address<0x4003b221,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg22{    ///< register BREG22 
        using Addr = Register::Address<0x4003b222,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg23{    ///< register BREG23 
        using Addr = Register::Address<0x4003b223,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg24{    ///< register BREG24 
        using Addr = Register::Address<0x4003b224,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg25{    ///< register BREG25 
        using Addr = Register::Address<0x4003b225,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg26{    ///< register BREG26 
        using Addr = Register::Address<0x4003b226,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg27{    ///< register BREG27 
        using Addr = Register::Address<0x4003b227,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg28{    ///< register BREG28 
        using Addr = Register::Address<0x4003b228,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg29{    ///< register BREG29 
        using Addr = Register::Address<0x4003b229,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg2a{    ///< register BREG2A 
        using Addr = Register::Address<0x4003b22a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg2b{    ///< register BREG2B 
        using Addr = Register::Address<0x4003b22b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg2c{    ///< register BREG2C 
        using Addr = Register::Address<0x4003b22c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg2d{    ///< register BREG2D 
        using Addr = Register::Address<0x4003b22d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg2e{    ///< register BREG2E 
        using Addr = Register::Address<0x4003b22e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg2f{    ///< register BREG2F 
        using Addr = Register::Address<0x4003b22f,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg30{    ///< register BREG30 
        using Addr = Register::Address<0x4003b230,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg31{    ///< register BREG31 
        using Addr = Register::Address<0x4003b231,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg32{    ///< register BREG32 
        using Addr = Register::Address<0x4003b232,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg33{    ///< register BREG33 
        using Addr = Register::Address<0x4003b233,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg34{    ///< register BREG34 
        using Addr = Register::Address<0x4003b234,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg35{    ///< register BREG35 
        using Addr = Register::Address<0x4003b235,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg36{    ///< register BREG36 
        using Addr = Register::Address<0x4003b236,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg37{    ///< register BREG37 
        using Addr = Register::Address<0x4003b237,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg38{    ///< register BREG38 
        using Addr = Register::Address<0x4003b238,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg39{    ///< register BREG39 
        using Addr = Register::Address<0x4003b239,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg3a{    ///< register BREG3A 
        using Addr = Register::Address<0x4003b23a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg3b{    ///< register BREG3B 
        using Addr = Register::Address<0x4003b23b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg3c{    ///< register BREG3C 
        using Addr = Register::Address<0x4003b23c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg3d{    ///< register BREG3D 
        using Addr = Register::Address<0x4003b23d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg3e{    ///< register BREG3E 
        using Addr = Register::Address<0x4003b23e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg3f{    ///< register BREG3F 
        using Addr = Register::Address<0x4003b23f,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg40{    ///< register BREG40 
        using Addr = Register::Address<0x4003b240,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg41{    ///< register BREG41 
        using Addr = Register::Address<0x4003b241,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg42{    ///< register BREG42 
        using Addr = Register::Address<0x4003b242,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg43{    ///< register BREG43 
        using Addr = Register::Address<0x4003b243,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg44{    ///< register BREG44 
        using Addr = Register::Address<0x4003b244,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg45{    ///< register BREG45 
        using Addr = Register::Address<0x4003b245,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg46{    ///< register BREG46 
        using Addr = Register::Address<0x4003b246,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg47{    ///< register BREG47 
        using Addr = Register::Address<0x4003b247,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg48{    ///< register BREG48 
        using Addr = Register::Address<0x4003b248,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg49{    ///< register BREG49 
        using Addr = Register::Address<0x4003b249,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg4a{    ///< register BREG4A 
        using Addr = Register::Address<0x4003b24a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg4b{    ///< register BREG4B 
        using Addr = Register::Address<0x4003b24b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg4c{    ///< register BREG4C 
        using Addr = Register::Address<0x4003b24c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg4d{    ///< register BREG4D 
        using Addr = Register::Address<0x4003b24d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg4e{    ///< register BREG4E 
        using Addr = Register::Address<0x4003b24e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg4f{    ///< register BREG4F 
        using Addr = Register::Address<0x4003b24f,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg50{    ///< register BREG50 
        using Addr = Register::Address<0x4003b250,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg51{    ///< register BREG51 
        using Addr = Register::Address<0x4003b251,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg52{    ///< register BREG52 
        using Addr = Register::Address<0x4003b252,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg53{    ///< register BREG53 
        using Addr = Register::Address<0x4003b253,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg54{    ///< register BREG54 
        using Addr = Register::Address<0x4003b254,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg55{    ///< register BREG55 
        using Addr = Register::Address<0x4003b255,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg56{    ///< register BREG56 
        using Addr = Register::Address<0x4003b256,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg57{    ///< register BREG57 
        using Addr = Register::Address<0x4003b257,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg58{    ///< register BREG58 
        using Addr = Register::Address<0x4003b258,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg59{    ///< register BREG59 
        using Addr = Register::Address<0x4003b259,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg5a{    ///< register BREG5A 
        using Addr = Register::Address<0x4003b25a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg5b{    ///< register BREG5B 
        using Addr = Register::Address<0x4003b25b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg5c{    ///< register BREG5C 
        using Addr = Register::Address<0x4003b25c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg5d{    ///< register BREG5D 
        using Addr = Register::Address<0x4003b25d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg5e{    ///< register BREG5E 
        using Addr = Register::Address<0x4003b25e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg5f{    ///< register BREG5F 
        using Addr = Register::Address<0x4003b25f,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg60{    ///< register BREG60 
        using Addr = Register::Address<0x4003b260,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg61{    ///< register BREG61 
        using Addr = Register::Address<0x4003b261,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg62{    ///< register BREG62 
        using Addr = Register::Address<0x4003b262,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg63{    ///< register BREG63 
        using Addr = Register::Address<0x4003b263,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg64{    ///< register BREG64 
        using Addr = Register::Address<0x4003b264,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg65{    ///< register BREG65 
        using Addr = Register::Address<0x4003b265,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg66{    ///< register BREG66 
        using Addr = Register::Address<0x4003b266,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg67{    ///< register BREG67 
        using Addr = Register::Address<0x4003b267,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg68{    ///< register BREG68 
        using Addr = Register::Address<0x4003b268,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg69{    ///< register BREG69 
        using Addr = Register::Address<0x4003b269,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg6a{    ///< register BREG6A 
        using Addr = Register::Address<0x4003b26a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg6b{    ///< register BREG6B 
        using Addr = Register::Address<0x4003b26b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg6c{    ///< register BREG6C 
        using Addr = Register::Address<0x4003b26c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg6d{    ///< register BREG6D 
        using Addr = Register::Address<0x4003b26d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg6e{    ///< register BREG6E 
        using Addr = Register::Address<0x4003b26e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg6f{    ///< register BREG6F 
        using Addr = Register::Address<0x4003b26f,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg70{    ///< register BREG70 
        using Addr = Register::Address<0x4003b270,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg71{    ///< register BREG71 
        using Addr = Register::Address<0x4003b271,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg72{    ///< register BREG72 
        using Addr = Register::Address<0x4003b272,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg73{    ///< register BREG73 
        using Addr = Register::Address<0x4003b273,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg74{    ///< register BREG74 
        using Addr = Register::Address<0x4003b274,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg75{    ///< register BREG75 
        using Addr = Register::Address<0x4003b275,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg76{    ///< register BREG76 
        using Addr = Register::Address<0x4003b276,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg77{    ///< register BREG77 
        using Addr = Register::Address<0x4003b277,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg78{    ///< register BREG78 
        using Addr = Register::Address<0x4003b278,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg79{    ///< register BREG79 
        using Addr = Register::Address<0x4003b279,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg7a{    ///< register BREG7A 
        using Addr = Register::Address<0x4003b27a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg7b{    ///< register BREG7B 
        using Addr = Register::Address<0x4003b27b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg7c{    ///< register BREG7C 
        using Addr = Register::Address<0x4003b27c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg7d{    ///< register BREG7D 
        using Addr = Register::Address<0x4003b27d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg7e{    ///< register BREG7E 
        using Addr = Register::Address<0x4003b27e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace RtcBreg7f{    ///< register BREG7F 
        using Addr = Register::Address<0x4003b27f,0xffffffff,0x00000000,unsigned char>;
    }
}
