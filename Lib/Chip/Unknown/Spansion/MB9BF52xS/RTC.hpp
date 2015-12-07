#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral RTC 
    namespace Nonewtcr1{    ///< register WTCR1 
        using Addr = Register::Address<0x4003b000,0x0000e082,0,unsigned>;
        /// bitfield INTCRIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> intcrie{}; 
        namespace IntcrieValC{
        }
        /// bitfield INTERIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> interie{}; 
        namespace InterieValC{
        }
        /// bitfield INTALIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> intalie{}; 
        namespace IntalieValC{
        }
        /// bitfield INTTMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> inttmie{}; 
        namespace InttmieValC{
        }
        /// bitfield INTHIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> inthie{}; 
        namespace InthieValC{
        }
        /// bitfield INTMIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> intmie{}; 
        namespace IntmieValC{
        }
        /// bitfield INTSIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> intsie{}; 
        namespace IntsieValC{
        }
        /// bitfield INTSSIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> intssie{}; 
        namespace IntssieValC{
        }
        /// bitfield INTCRI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> intcri{}; 
        namespace IntcriValC{
        }
        /// bitfield INTERI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> interi{}; 
        namespace InteriValC{
        }
        /// bitfield INTALI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> intali{}; 
        namespace IntaliValC{
        }
        /// bitfield INTTMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> inttmi{}; 
        namespace InttmiValC{
        }
        /// bitfield INTHI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> inthi{}; 
        namespace InthiValC{
        }
        /// bitfield INTMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> intmi{}; 
        namespace IntmiValC{
        }
        /// bitfield INTSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> intsi{}; 
        namespace IntsiValC{
        }
        /// bitfield INTSSI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> intssi{}; 
        namespace IntssiValC{
        }
        /// bitfield YEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> yen{}; 
        namespace YenValC{
        }
        /// bitfield MOEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> moen{}; 
        namespace MoenValC{
        }
        /// bitfield DEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> den{}; 
        namespace DenValC{
        }
        /// bitfield HEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hen{}; 
        namespace HenValC{
        }
        /// bitfield MIEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mien{}; 
        namespace MienValC{
        }
        /// bitfield BUSY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        /// bitfield SCRST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> scrst{}; 
        namespace ScrstValC{
        }
        /// bitfield SCST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> scst{}; 
        namespace ScstValC{
        }
        /// bitfield SRST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> srst{}; 
        namespace SrstValC{
        }
        /// bitfield RUN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> run{}; 
        namespace RunValC{
        }
        /// bitfield ST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
    }
    namespace Nonewtcr2{    ///< register WTCR2 
        using Addr = Register::Address<0x4003b004,0xfffff8fe,0,unsigned>;
        /// bitfield TMRUN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tmrun{}; 
        namespace TmrunValC{
        }
        /// bitfield TMEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tmen{}; 
        namespace TmenValC{
        }
        /// bitfield TMST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tmst{}; 
        namespace TmstValC{
        }
        /// bitfield CREAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cread{}; 
        namespace CreadValC{
        }
    }
    namespace Nonewtbr{    ///< register WTBR 
        using Addr = Register::Address<0x4003b008,0xff000000,0,unsigned>;
        /// bitfield BR23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> br23{}; 
        namespace Br23ValC{
        }
        /// bitfield BR22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> br22{}; 
        namespace Br22ValC{
        }
        /// bitfield BR21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> br21{}; 
        namespace Br21ValC{
        }
        /// bitfield BR20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> br20{}; 
        namespace Br20ValC{
        }
        /// bitfield BR19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> br19{}; 
        namespace Br19ValC{
        }
        /// bitfield BR18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> br18{}; 
        namespace Br18ValC{
        }
        /// bitfield BR17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> br17{}; 
        namespace Br17ValC{
        }
        /// bitfield BR16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> br16{}; 
        namespace Br16ValC{
        }
        /// bitfield BR15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> br15{}; 
        namespace Br15ValC{
        }
        /// bitfield BR14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> br14{}; 
        namespace Br14ValC{
        }
        /// bitfield BR13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> br13{}; 
        namespace Br13ValC{
        }
        /// bitfield BR12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> br12{}; 
        namespace Br12ValC{
        }
        /// bitfield BR11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> br11{}; 
        namespace Br11ValC{
        }
        /// bitfield BR10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> br10{}; 
        namespace Br10ValC{
        }
        /// bitfield BR9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> br9{}; 
        namespace Br9ValC{
        }
        /// bitfield BR8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> br8{}; 
        namespace Br8ValC{
        }
        /// bitfield BR7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        namespace Br7ValC{
        }
        /// bitfield BR6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        namespace Br6ValC{
        }
        /// bitfield BR5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        namespace Br5ValC{
        }
        /// bitfield BR4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        namespace Br4ValC{
        }
        /// bitfield BR3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        namespace Br3ValC{
        }
        /// bitfield BR2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        namespace Br2ValC{
        }
        /// bitfield BR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        namespace Br1ValC{
        }
        /// bitfield BR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
        namespace Br0ValC{
        }
    }
    namespace Nonewtdr{    ///< register WTDR 
        using Addr = Register::Address<0x4003b00f,0xffffffc0,0,unsigned char>;
        /// bitfield TD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> td{}; 
        namespace TdValC{
        }
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace Nonewthr{    ///< register WTHR 
        using Addr = Register::Address<0x4003b00e,0xffffffc0,0,unsigned char>;
        /// bitfield TH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> th{}; 
        namespace ThValC{
        }
        /// bitfield H 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> h{}; 
        namespace HValC{
        }
    }
    namespace Nonewtmir{    ///< register WTMIR 
        using Addr = Register::Address<0x4003b00d,0xffffff80,0,unsigned char>;
        /// bitfield TMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tmi{}; 
        namespace TmiValC{
        }
        /// bitfield MI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mi{}; 
        namespace MiValC{
        }
    }
    namespace Nonewtsr{    ///< register WTSR 
        using Addr = Register::Address<0x4003b00c,0xffffff80,0,unsigned char>;
        /// bitfield TS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        namespace TsValC{
        }
        /// bitfield S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> s{}; 
        namespace SValC{
        }
    }
    namespace Nonewtyr{    ///< register WTYR 
        using Addr = Register::Address<0x4003b012,0xffffff00,0,unsigned char>;
        /// bitfield TY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ty{}; 
        namespace TyValC{
        }
        /// bitfield Y 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> y{}; 
        namespace YValC{
        }
    }
    namespace Nonewtmor{    ///< register WTMOR 
        using Addr = Register::Address<0x4003b011,0xffffffe0,0,unsigned char>;
        /// bitfield TMO0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmo0{}; 
        namespace Tmo0ValC{
        }
        /// bitfield MO 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mo{}; 
        namespace MoValC{
        }
    }
    namespace Nonewtdw{    ///< register WTDW 
        using Addr = Register::Address<0x4003b010,0xfffffff8,0,unsigned char>;
        /// bitfield DW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dw{}; 
        namespace DwValC{
        }
    }
    namespace Nonealdr{    ///< register ALDR 
        using Addr = Register::Address<0x4003b017,0xffffffc0,0,unsigned char>;
        /// bitfield TAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tad{}; 
        namespace TadValC{
        }
        /// bitfield AD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ad{}; 
        namespace AdValC{
        }
    }
    namespace Nonealhr{    ///< register ALHR 
        using Addr = Register::Address<0x4003b016,0xffffffc0,0,unsigned char>;
        /// bitfield TAH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tah{}; 
        namespace TahValC{
        }
        /// bitfield AH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ah{}; 
        namespace AhValC{
        }
    }
    namespace Nonealmir{    ///< register ALMIR 
        using Addr = Register::Address<0x4003b015,0xffffff80,0,unsigned char>;
        /// bitfield TAMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tami{}; 
        namespace TamiValC{
        }
        /// bitfield AMI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ami{}; 
        namespace AmiValC{
        }
    }
    namespace Nonealyr{    ///< register ALYR 
        using Addr = Register::Address<0x4003b01a,0xffffff00,0,unsigned char>;
        /// bitfield TAY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tay{}; 
        namespace TayValC{
        }
        /// bitfield AY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ay{}; 
        namespace AyValC{
        }
    }
    namespace Nonealmor{    ///< register ALMOR 
        using Addr = Register::Address<0x4003b019,0xffffffe0,0,unsigned char>;
        /// bitfield TAMO0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tamo0{}; 
        namespace Tamo0ValC{
        }
        /// bitfield AMO 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> amo{}; 
        namespace AmoValC{
        }
    }
    namespace Nonewttr{    ///< register WTTR 
        using Addr = Register::Address<0x4003b01c,0xfffc0000,0,unsigned>;
        /// bitfield TM17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> tm17{}; 
        namespace Tm17ValC{
        }
        /// bitfield TM16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tm16{}; 
        namespace Tm16ValC{
        }
        /// bitfield TM15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tm15{}; 
        namespace Tm15ValC{
        }
        /// bitfield TM14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tm14{}; 
        namespace Tm14ValC{
        }
        /// bitfield TM13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tm13{}; 
        namespace Tm13ValC{
        }
        /// bitfield TM12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tm12{}; 
        namespace Tm12ValC{
        }
        /// bitfield TM11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> tm11{}; 
        namespace Tm11ValC{
        }
        /// bitfield TM10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> tm10{}; 
        namespace Tm10ValC{
        }
        /// bitfield TM9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tm9{}; 
        namespace Tm9ValC{
        }
        /// bitfield TM8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tm8{}; 
        namespace Tm8ValC{
        }
        /// bitfield TM7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tm7{}; 
        namespace Tm7ValC{
        }
        /// bitfield TM6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tm6{}; 
        namespace Tm6ValC{
        }
        /// bitfield TM5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tm5{}; 
        namespace Tm5ValC{
        }
        /// bitfield TM4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tm4{}; 
        namespace Tm4ValC{
        }
        /// bitfield TM3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tm3{}; 
        namespace Tm3ValC{
        }
        /// bitfield TM2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tm2{}; 
        namespace Tm2ValC{
        }
        /// bitfield TM1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tm1{}; 
        namespace Tm1ValC{
        }
        /// bitfield TM0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tm0{}; 
        namespace Tm0ValC{
        }
    }
    namespace Nonewtclks{    ///< register WTCLKS 
        using Addr = Register::Address<0x4003b020,0xfffffffe,0,unsigned char>;
        /// bitfield WTCLKS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtclks{}; 
        namespace WtclksValC{
        }
    }
    namespace Nonewtclkm{    ///< register WTCLKM 
        using Addr = Register::Address<0x4003b021,0xfffffffc,0,unsigned char>;
        /// bitfield WTCLKM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wtclkm{}; 
        namespace WtclkmValC{
        }
    }
    namespace Nonewtcal{    ///< register WTCAL 
        using Addr = Register::Address<0x4003b024,0xfffffc00,0,unsigned>;
        /// bitfield WTCAL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> wtcal{}; 
        namespace WtcalValC{
        }
    }
    namespace Nonewtcalen{    ///< register WTCALEN 
        using Addr = Register::Address<0x4003b026,0xfffffffe,0,unsigned char>;
        /// bitfield WTCALEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcalen{}; 
        namespace WtcalenValC{
        }
    }
    namespace Nonewtdiv{    ///< register WTDIV 
        using Addr = Register::Address<0x4003b028,0xfffffff0,0,unsigned char>;
        /// bitfield WTDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wtdiv{}; 
        namespace WtdivValC{
        }
    }
    namespace Nonewtdiven{    ///< register WTDIVEN 
        using Addr = Register::Address<0x4003b029,0xfffffffc,0,unsigned char>;
        /// bitfield WTDIVRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wtdivrdy{}; 
        namespace WtdivrdyValC{
        }
        /// bitfield WTDIVEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtdiven{}; 
        namespace WtdivenValC{
        }
    }
    namespace Nonewtcalprd{    ///< register WTCALPRD 
        using Addr = Register::Address<0x4003b02c,0xffffffc0,0,unsigned char>;
        /// bitfield WTCALPRD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> wtcalprd{}; 
        namespace WtcalprdValC{
        }
    }
    namespace Nonewtcosel{    ///< register WTCOSEL 
        using Addr = Register::Address<0x4003b030,0xfffffffe,0,unsigned char>;
        /// bitfield WTCOSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wtcosel{}; 
        namespace WtcoselValC{
        }
    }
}
