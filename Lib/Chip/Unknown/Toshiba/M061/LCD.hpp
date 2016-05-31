#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//LCD Driver (LCD)
    namespace LcdEn{    ///<Enable register
        using Addr = Register::Address<0x4006e000,0xfffffffe,0x00000000,unsigned>;
        ///LCDE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lcde{}; 
    }
    namespace LcdCr1{    ///<Control register 1
        using Addr = Register::Address<0x4006e004,0xffffff00,0x00000000,unsigned>;
        ///SLF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> slf{}; 
        ///DUTY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> duty{}; 
        ///EDSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> edsp{}; 
    }
    namespace LcdCr2{    ///<Control register 2
        using Addr = Register::Address<0x4006e008,0xffffff07,0x00000000,unsigned>;
        ///BRSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brsel{}; 
        ///BRH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> brh{}; 
        ///LRSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> lrse{}; 
    }
    namespace LcdBuf00{    ///<Buffer register 00
        using Addr = Register::Address<0x4006e00c,0xffffff00,0x00000000,unsigned>;
        ///SEG0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg0{}; 
        ///SEG1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg1{}; 
    }
    namespace LcdBuf01{    ///<Buffer register 01
        using Addr = Register::Address<0x4006e010,0xffffff00,0x00000000,unsigned>;
        ///SEG2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg2{}; 
        ///SEG3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg3{}; 
    }
    namespace LcdBuf02{    ///<Buffer register 02
        using Addr = Register::Address<0x4006e014,0xffffff00,0x00000000,unsigned>;
        ///SEG4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg4{}; 
        ///SEG5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg5{}; 
    }
    namespace LcdBuf03{    ///<Buffer register 03
        using Addr = Register::Address<0x4006e018,0xffffff00,0x00000000,unsigned>;
        ///SEG6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg6{}; 
        ///SEG7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg7{}; 
    }
    namespace LcdBuf04{    ///<Buffer register 04
        using Addr = Register::Address<0x4006e01c,0xffffff00,0x00000000,unsigned>;
        ///SEG8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg8{}; 
        ///SEG9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg9{}; 
    }
    namespace LcdBuf05{    ///<Buffer register 05
        using Addr = Register::Address<0x4006e020,0xffffff00,0x00000000,unsigned>;
        ///SEG10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg10{}; 
        ///SEG11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg11{}; 
    }
    namespace LcdBuf06{    ///<Buffer register 06
        using Addr = Register::Address<0x4006e024,0xffffff00,0x00000000,unsigned>;
        ///SEG12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg12{}; 
        ///SEG13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg13{}; 
    }
    namespace LcdBuf07{    ///<Buffer register 07
        using Addr = Register::Address<0x4006e028,0xffffff00,0x00000000,unsigned>;
        ///SEG14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg14{}; 
        ///SEG15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg15{}; 
    }
    namespace LcdBuf08{    ///<Buffer register 08
        using Addr = Register::Address<0x4006e02c,0xffffff00,0x00000000,unsigned>;
        ///SEG16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg16{}; 
        ///SEG17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg17{}; 
    }
    namespace LcdBuf09{    ///<Buffer register 09
        using Addr = Register::Address<0x4006e030,0xffffff00,0x00000000,unsigned>;
        ///SEG18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg18{}; 
        ///SEG19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg19{}; 
    }
    namespace LcdBuf10{    ///<Buffer register 10
        using Addr = Register::Address<0x4006e034,0xffffff00,0x00000000,unsigned>;
        ///SEG20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg20{}; 
        ///SEG21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg21{}; 
    }
    namespace LcdBuf11{    ///<Buffer register 11
        using Addr = Register::Address<0x4006e038,0xffffff00,0x00000000,unsigned>;
        ///SEG22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg22{}; 
        ///SEG23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg23{}; 
    }
    namespace LcdBuf12{    ///<Buffer register 12
        using Addr = Register::Address<0x4006e03c,0xffffff00,0x00000000,unsigned>;
        ///SEG24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg24{}; 
        ///SEG25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg25{}; 
    }
    namespace LcdBuf13{    ///<Buffer register 13
        using Addr = Register::Address<0x4006e040,0xffffff00,0x00000000,unsigned>;
        ///SEG26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg26{}; 
        ///SEG27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg27{}; 
    }
    namespace LcdBuf14{    ///<Buffer register 14
        using Addr = Register::Address<0x4006e044,0xffffff00,0x00000000,unsigned>;
        ///SEG28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg28{}; 
        ///SEG29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg29{}; 
    }
    namespace LcdBuf15{    ///<Buffer register 15
        using Addr = Register::Address<0x4006e048,0xffffff00,0x00000000,unsigned>;
        ///SEG30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg30{}; 
        ///SEG31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg31{}; 
    }
    namespace LcdBuf16{    ///<Buffer register 16
        using Addr = Register::Address<0x4006e04c,0xffffff00,0x00000000,unsigned>;
        ///SEG32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg32{}; 
        ///SEG33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg33{}; 
    }
    namespace LcdBuf17{    ///<Buffer register 17
        using Addr = Register::Address<0x4006e050,0xffffff00,0x00000000,unsigned>;
        ///SEG34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg34{}; 
        ///SEG35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg35{}; 
    }
    namespace LcdBuf18{    ///<Buffer register 18
        using Addr = Register::Address<0x4006e054,0xffffff00,0x00000000,unsigned>;
        ///SEG36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg36{}; 
        ///SEG37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg37{}; 
    }
    namespace LcdBuf19{    ///<Buffer register 19
        using Addr = Register::Address<0x4006e058,0xffffff00,0x00000000,unsigned>;
        ///SEG38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> seg38{}; 
        ///SEG39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> seg39{}; 
    }
}
