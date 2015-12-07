#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//LCD Controller
    namespace Nonelcdcc1{    ///<LCDC Control Register 1
        using Addr = Register::Address<0x40032000,0xffffff83,0,unsigned char>;
        ///Timer mode operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lcden{}; 
        namespace LcdenValC{
        }
        ///LCD drive power control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> vsel{}; 
        namespace VselValC{
        }
        ///LCD controller display mode selection bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> ms{}; 
        namespace MsValC{
        }
    }
    namespace Nonelcdcc2{    ///<LCDC Control Register 2
        using Addr = Register::Address<0x40032001,0xffffffc0,0,unsigned char>;
        ///Divider resistor value selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsel{}; 
        namespace RselValC{
        }
        ///8 COM mode bias selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bls8{}; 
        namespace Bls8ValC{
        }
        ///Reverse display control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inv{}; 
        namespace InvValC{
        }
        ///Blank display control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bk{}; 
        namespace BkValC{
        }
        ///Interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lcdien{}; 
        namespace LcdienValC{
        }
        ///Interrupt request detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lcdif{}; 
        namespace LcdifValC{
        }
    }
    namespace Nonelcdcc3{    ///<LCDC Control Register 3
        using Addr = Register::Address<0x40032002,0xffffff01,0,unsigned char>;
        ///I/O port input control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pictl{}; 
        namespace PictlValC{
        }
        ///Blink interval selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> blsel{}; 
        namespace BlselValC{
        }
        ///VV4 selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ve4{}; 
        namespace Ve4ValC{
        }
        ///VV3 selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ve3{}; 
        namespace Ve3ValC{
        }
        ///VV2 selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ve2{}; 
        namespace Ve2ValC{
        }
        ///VV1 selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ve1{}; 
        namespace Ve1ValC{
        }
        ///VV0 selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ve0{}; 
        namespace Ve0ValC{
        }
    }
    namespace NonelcdcPsr{    ///<LCDC Clock Prescaler Register
        using Addr = Register::Address<0x40032004,0xff800000,0,unsigned>;
        ///Source clock selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> clksel{}; 
        namespace ClkselValC{
        }
        ///LCDC clock division ratio setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        namespace ClkdivValC{
        }
    }
    namespace NonelcdcComen{    ///<LCDC COM Output Enable Register
        using Addr = Register::Address<0x40032008,0xffffff00,0,unsigned char>;
        ///Dual purpose COM/SEG port control bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> com7{}; 
        namespace Com7ValC{
        }
        ///Dual purpose COM/SEG port control bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> com6{}; 
        namespace Com6ValC{
        }
        ///Dual purpose COM/SEG port control bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> com5{}; 
        namespace Com5ValC{
        }
        ///Dual purpose COM/SEG port control bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> com4{}; 
        namespace Com4ValC{
        }
        ///Dual purpose COM port control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> com3{}; 
        namespace Com3ValC{
        }
        ///Dual purpose COM port control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> com2{}; 
        namespace Com2ValC{
        }
        ///Dual purpose COM port control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> com1{}; 
        namespace Com1ValC{
        }
        ///Dual purpose COM port control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> com0{}; 
        namespace Com0ValC{
        }
    }
    namespace NonelcdcSegen1{    ///<LCDC SEG Output Enable Register 1
        using Addr = Register::Address<0x4003200c,0x0047c7fc,0,unsigned>;
        ///Segment 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> seg31{}; 
        namespace Seg31ValC{
        }
        ///Segment 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> seg30{}; 
        namespace Seg30ValC{
        }
        ///Segment 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> seg29{}; 
        namespace Seg29ValC{
        }
        ///Segment 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> seg28{}; 
        namespace Seg28ValC{
        }
        ///Segment 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> seg27{}; 
        namespace Seg27ValC{
        }
        ///Segment 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> seg26{}; 
        namespace Seg26ValC{
        }
        ///Segment 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> seg25{}; 
        namespace Seg25ValC{
        }
        ///Segment 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> seg24{}; 
        namespace Seg24ValC{
        }
        ///Segment 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> seg23{}; 
        namespace Seg23ValC{
        }
        ///Segment 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> seg21{}; 
        namespace Seg21ValC{
        }
        ///Segment 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> seg20{}; 
        namespace Seg20ValC{
        }
        ///Segment 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> seg19{}; 
        namespace Seg19ValC{
        }
        ///Segment 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> seg13{}; 
        namespace Seg13ValC{
        }
        ///Segment 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> seg12{}; 
        namespace Seg12ValC{
        }
        ///Segment 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> seg11{}; 
        namespace Seg11ValC{
        }
        ///Segment 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> seg01{}; 
        namespace Seg01ValC{
        }
        ///Segment 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> seg00{}; 
        namespace Seg00ValC{
        }
    }
    namespace NonelcdcSegen2{    ///<LCDC SEG Output Enable Register 2
        using Addr = Register::Address<0x40032010,0xffffffc7,0,unsigned char>;
        ///Segment 37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> seg37{}; 
        namespace Seg37ValC{
        }
        ///Segment 36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> seg36{}; 
        namespace Seg36ValC{
        }
        ///Segment 35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> seg35{}; 
        namespace Seg35ValC{
        }
    }
    namespace NonelcdcBlink{    ///<LCDC Blink Setting Register
        using Addr = Register::Address<0x40032014,0xffff0000,0,unsigned>;
        ///Blink operation control bit 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bld15{}; 
        namespace Bld15ValC{
        }
        ///Blink operation control bit 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> bld14{}; 
        namespace Bld14ValC{
        }
        ///Blink operation control bit 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> bld13{}; 
        namespace Bld13ValC{
        }
        ///Blink operation control bit 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> bld12{}; 
        namespace Bld12ValC{
        }
        ///Blink operation control bit 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bld11{}; 
        namespace Bld11ValC{
        }
        ///Blink operation control bit 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bld10{}; 
        namespace Bld10ValC{
        }
        ///Blink operation control bit 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bld09{}; 
        namespace Bld09ValC{
        }
        ///Blink operation control bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bld08{}; 
        namespace Bld08ValC{
        }
        ///Blink operation control bit 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bld07{}; 
        namespace Bld07ValC{
        }
        ///Blink operation control bit 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bld06{}; 
        namespace Bld06ValC{
        }
        ///Blink operation control bit 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bld05{}; 
        namespace Bld05ValC{
        }
        ///Blink operation control bit 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bld04{}; 
        namespace Bld04ValC{
        }
        ///Blink operation control bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bld03{}; 
        namespace Bld03ValC{
        }
        ///Blink operation control bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bld02{}; 
        namespace Bld02ValC{
        }
        ///Blink operation control bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bld01{}; 
        namespace Bld01ValC{
        }
        ///Blink operation control bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bld00{}; 
        namespace Bld00ValC{
        }
    }
    namespace Nonelcdram00{    ///<Display Data Memory Register 00
        using Addr = Register::Address<0x4003201c,0xffffff00,0,unsigned char>;
        ///Display Data 00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram01{    ///<Display Data Memory Register 01
        using Addr = Register::Address<0x4003201d,0xffffff00,0,unsigned char>;
        ///Display Data 01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram02{    ///<Display Data Memory Register 02
        using Addr = Register::Address<0x4003201e,0xffffff00,0,unsigned char>;
        ///Display Data 02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram03{    ///<Display Data Memory Register 03
        using Addr = Register::Address<0x4003201f,0xffffff00,0,unsigned char>;
        ///Display Data 03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram04{    ///<Display Data Memory Register 04
        using Addr = Register::Address<0x40032020,0xffffff00,0,unsigned char>;
        ///Display Data 04
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram05{    ///<Display Data Memory Register 05
        using Addr = Register::Address<0x40032021,0xffffff00,0,unsigned char>;
        ///Display Data 05
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram06{    ///<Display Data Memory Register 06
        using Addr = Register::Address<0x40032022,0xffffff00,0,unsigned char>;
        ///Display Data 06
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram07{    ///<Display Data Memory Register 07
        using Addr = Register::Address<0x40032023,0xffffff00,0,unsigned char>;
        ///Display Data 07
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram08{    ///<Display Data Memory Register 08
        using Addr = Register::Address<0x40032024,0xffffff00,0,unsigned char>;
        ///Display Data 08
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram09{    ///<Display Data Memory Register 09
        using Addr = Register::Address<0x40032025,0xffffff00,0,unsigned char>;
        ///Display Data 09
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram10{    ///<Display Data Memory Register 10
        using Addr = Register::Address<0x40032026,0xffffff00,0,unsigned char>;
        ///Display Data 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram11{    ///<Display Data Memory Register 11
        using Addr = Register::Address<0x40032027,0xffffff00,0,unsigned char>;
        ///Display Data 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram12{    ///<Display Data Memory Register 12
        using Addr = Register::Address<0x40032028,0xffffff00,0,unsigned char>;
        ///Display Data 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram13{    ///<Display Data Memory Register 13
        using Addr = Register::Address<0x40032029,0xffffff00,0,unsigned char>;
        ///Display Data 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram14{    ///<Display Data Memory Register 14
        using Addr = Register::Address<0x4003202a,0xffffff00,0,unsigned char>;
        ///Display Data 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram15{    ///<Display Data Memory Register 15
        using Addr = Register::Address<0x4003202b,0xffffff00,0,unsigned char>;
        ///Display Data 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram16{    ///<Display Data Memory Register 16
        using Addr = Register::Address<0x4003202c,0xffffff00,0,unsigned char>;
        ///Display Data 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram17{    ///<Display Data Memory Register 17
        using Addr = Register::Address<0x4003202d,0xffffff00,0,unsigned char>;
        ///Display Data 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram18{    ///<Display Data Memory Register 18
        using Addr = Register::Address<0x4003202e,0xffffff00,0,unsigned char>;
        ///Display Data 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram19{    ///<Display Data Memory Register 19
        using Addr = Register::Address<0x4003202f,0xffffff00,0,unsigned char>;
        ///Display Data 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram20{    ///<Display Data Memory Register 20
        using Addr = Register::Address<0x40032030,0xffffff00,0,unsigned char>;
        ///Display Data 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram21{    ///<Display Data Memory Register 21
        using Addr = Register::Address<0x40032031,0xffffff00,0,unsigned char>;
        ///Display Data 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram22{    ///<Display Data Memory Register 22
        using Addr = Register::Address<0x40032032,0xffffff00,0,unsigned char>;
        ///Display Data 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram23{    ///<Display Data Memory Register 23
        using Addr = Register::Address<0x40032033,0xffffff00,0,unsigned char>;
        ///Display Data 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram24{    ///<Display Data Memory Register 24
        using Addr = Register::Address<0x40032034,0xffffff00,0,unsigned char>;
        ///Display Data 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram25{    ///<Display Data Memory Register 25
        using Addr = Register::Address<0x40032035,0xffffff00,0,unsigned char>;
        ///Display Data 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram26{    ///<Display Data Memory Register 26
        using Addr = Register::Address<0x40032036,0xffffff00,0,unsigned char>;
        ///Display Data 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram27{    ///<Display Data Memory Register 27
        using Addr = Register::Address<0x40032037,0xffffff00,0,unsigned char>;
        ///Display Data 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram28{    ///<Display Data Memory Register 28
        using Addr = Register::Address<0x40032038,0xffffff00,0,unsigned char>;
        ///Display Data 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram29{    ///<Display Data Memory Register 29
        using Addr = Register::Address<0x40032039,0xffffff00,0,unsigned char>;
        ///Display Data 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram30{    ///<Display Data Memory Register 30
        using Addr = Register::Address<0x4003203a,0xffffff00,0,unsigned char>;
        ///Display Data 30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram31{    ///<Display Data Memory Register 31
        using Addr = Register::Address<0x4003203b,0xffffff00,0,unsigned char>;
        ///Display Data 31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram32{    ///<Display Data Memory Register 32
        using Addr = Register::Address<0x4003203c,0xffffff00,0,unsigned char>;
        ///Display Data 32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram33{    ///<Display Data Memory Register 33
        using Addr = Register::Address<0x4003203d,0xffffff00,0,unsigned char>;
        ///Display Data 33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram34{    ///<Display Data Memory Register 34
        using Addr = Register::Address<0x4003203e,0xffffff00,0,unsigned char>;
        ///Display Data 34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram35{    ///<Display Data Memory Register 35
        using Addr = Register::Address<0x4003203f,0xffffff00,0,unsigned char>;
        ///Display Data 35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram36{    ///<Display Data Memory Register 36
        using Addr = Register::Address<0x40032040,0xffffff00,0,unsigned char>;
        ///Display Data 36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram37{    ///<Display Data Memory Register 37
        using Addr = Register::Address<0x40032041,0xffffff00,0,unsigned char>;
        ///Display Data 37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram38{    ///<Display Data Memory Register 38
        using Addr = Register::Address<0x40032042,0xffffff00,0,unsigned char>;
        ///Display Data 38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
    namespace Nonelcdram39{    ///<Display Data Memory Register 39
        using Addr = Register::Address<0x40032043,0xffffff00,0,unsigned char>;
        ///Display Data 39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> lcdram{}; 
        namespace LcdramValC{
        }
    }
}
