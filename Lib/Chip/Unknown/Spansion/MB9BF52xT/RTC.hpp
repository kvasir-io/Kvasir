#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral RTC 
    namespace RtcWtcr1{    ///< register WTCR1 
        using Addr = Register::Address<0x4003b000,0x0000e082,0x00000000,unsigned>;
        /// bitfield INTCRIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> intcrie{}; 
        /// bitfield INTERIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> interie{}; 
        /// bitfield INTALIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> intalie{}; 
        /// bitfield INTTMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> inttmie{}; 
        /// bitfield INTHIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> inthie{}; 
        /// bitfield INTMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> intmie{}; 
        /// bitfield INTSIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> intsie{}; 
        /// bitfield INTSSIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> intssie{}; 
        /// bitfield INTCRI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> intcri{}; 
        /// bitfield INTERI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> interi{}; 
        /// bitfield INTALI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> intali{}; 
        /// bitfield INTTMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inttmi{}; 
        /// bitfield INTHI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> inthi{}; 
        /// bitfield INTMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> intmi{}; 
        /// bitfield INTSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> intsi{}; 
        /// bitfield INTSSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> intssi{}; 
        /// bitfield YEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> yen{}; 
        /// bitfield MOEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> moen{}; 
        /// bitfield DEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> den{}; 
        /// bitfield HEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hen{}; 
        /// bitfield MIEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mien{}; 
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
    namespace RtcWtcr2{    ///< register WTCR2 
        using Addr = Register::Address<0x4003b004,0xfffff8fe,0x00000000,unsigned>;
        /// bitfield TMRUN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmrun{}; 
        /// bitfield TMEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tmen{}; 
        /// bitfield TMST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tmst{}; 
        /// bitfield CREAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cread{}; 
    }
    namespace RtcWtbr{    ///< register WTBR 
        using Addr = Register::Address<0x4003b008,0xff000000,0x00000000,unsigned>;
        /// bitfield BR23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> br23{}; 
        /// bitfield BR22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> br22{}; 
        /// bitfield BR21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> br21{}; 
        /// bitfield BR20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> br20{}; 
        /// bitfield BR19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> br19{}; 
        /// bitfield BR18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> br18{}; 
        /// bitfield BR17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> br17{}; 
        /// bitfield BR16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> br16{}; 
        /// bitfield BR15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> br15{}; 
        /// bitfield BR14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> br14{}; 
        /// bitfield BR13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> br13{}; 
        /// bitfield BR12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> br12{}; 
        /// bitfield BR11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> br11{}; 
        /// bitfield BR10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> br10{}; 
        /// bitfield BR9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> br9{}; 
        /// bitfield BR8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> br8{}; 
        /// bitfield BR7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        /// bitfield BR6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        /// bitfield BR5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        /// bitfield BR4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        /// bitfield BR3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        /// bitfield BR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        /// bitfield BR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        /// bitfield BR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
    }
    namespace RtcWtdr{    ///< register WTDR 
        using Addr = Register::Address<0x4003b00f,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield TD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> td{}; 
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> d{}; 
    }
    namespace RtcWthr{    ///< register WTHR 
        using Addr = Register::Address<0x4003b00e,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield TH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> th{}; 
        /// bitfield H 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> h{}; 
    }
    namespace RtcWtmir{    ///< register WTMIR 
        using Addr = Register::Address<0x4003b00d,0xffffff80,0x00000000,unsigned char>;
        /// bitfield TMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tmi{}; 
        /// bitfield MI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mi{}; 
    }
    namespace RtcWtsr{    ///< register WTSR 
        using Addr = Register::Address<0x4003b00c,0xffffff80,0x00000000,unsigned char>;
        /// bitfield TS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        /// bitfield S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> s{}; 
    }
    namespace RtcWtyr{    ///< register WTYR 
        using Addr = Register::Address<0x4003b012,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ty{}; 
        /// bitfield Y 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> y{}; 
    }
    namespace RtcWtmor{    ///< register WTMOR 
        using Addr = Register::Address<0x4003b011,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield TMO0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmo0{}; 
        /// bitfield MO 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mo{}; 
    }
    namespace RtcWtdw{    ///< register WTDW 
        using Addr = Register::Address<0x4003b010,0xfffffff8,0x00000000,unsigned char>;
        /// bitfield DW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dw{}; 
    }
    namespace RtcAldr{    ///< register ALDR 
        using Addr = Register::Address<0x4003b017,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield TAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tad{}; 
        /// bitfield AD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ad{}; 
    }
    namespace RtcAlhr{    ///< register ALHR 
        using Addr = Register::Address<0x4003b016,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield TAH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tah{}; 
        /// bitfield AH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ah{}; 
    }
    namespace RtcAlmir{    ///< register ALMIR 
        using Addr = Register::Address<0x4003b015,0xffffff80,0x00000000,unsigned char>;
        /// bitfield TAMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tami{}; 
        /// bitfield AMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ami{}; 
    }
    namespace RtcAlyr{    ///< register ALYR 
        using Addr = Register::Address<0x4003b01a,0xffffff00,0x00000000,unsigned char>;
        /// bitfield TAY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tay{}; 
        /// bitfield AY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ay{}; 
    }
    namespace RtcAlmor{    ///< register ALMOR 
        using Addr = Register::Address<0x4003b019,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield TAMO0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tamo0{}; 
        /// bitfield AMO 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> amo{}; 
    }
    namespace RtcWttr{    ///< register WTTR 
        using Addr = Register::Address<0x4003b01c,0xfffc0000,0x00000000,unsigned>;
        /// bitfield TM17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tm17{}; 
        /// bitfield TM16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tm16{}; 
        /// bitfield TM15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tm15{}; 
        /// bitfield TM14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tm14{}; 
        /// bitfield TM13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tm13{}; 
        /// bitfield TM12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tm12{}; 
        /// bitfield TM11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tm11{}; 
        /// bitfield TM10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tm10{}; 
        /// bitfield TM9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tm9{}; 
        /// bitfield TM8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tm8{}; 
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
    namespace RtcWtclks{    ///< register WTCLKS 
        using Addr = Register::Address<0x4003b020,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield WTCLKS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtclks{}; 
    }
    namespace RtcWtclkm{    ///< register WTCLKM 
        using Addr = Register::Address<0x4003b021,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield WTCLKM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wtclkm{}; 
    }
    namespace RtcWtcal{    ///< register WTCAL 
        using Addr = Register::Address<0x4003b024,0xfffffc00,0x00000000,unsigned>;
        /// bitfield WTCAL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> wtcal{}; 
    }
    namespace RtcWtcalen{    ///< register WTCALEN 
        using Addr = Register::Address<0x4003b026,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield WTCALEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcalen{}; 
    }
    namespace RtcWtdiv{    ///< register WTDIV 
        using Addr = Register::Address<0x4003b028,0xfffffff0,0x00000000,unsigned char>;
        /// bitfield WTDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wtdiv{}; 
    }
    namespace RtcWtdiven{    ///< register WTDIVEN 
        using Addr = Register::Address<0x4003b029,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield WTDIVRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wtdivrdy{}; 
        /// bitfield WTDIVEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtdiven{}; 
    }
    namespace RtcWtcalprd{    ///< register WTCALPRD 
        using Addr = Register::Address<0x4003b02c,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield WTCALPRD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> wtcalprd{}; 
    }
    namespace RtcWtcosel{    ///< register WTCOSEL 
        using Addr = Register::Address<0x4003b030,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield WTCOSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcosel{}; 
    }
}
