#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PE)
    namespace Nonedata{    ///<PE Data Register
        using Addr = Register::Address<0x400c0400,0xffffff00,0,unsigned>;
        ///PE0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0{}; 
        ///PE1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1{}; 
        ///PE2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2{}; 
        ///PE3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3{}; 
        ///PE4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4{}; 
        ///PE5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5{}; 
        ///PE6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6{}; 
        ///PE7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7{}; 
    }
    namespace Nonecr{    ///<PE Control Register
        using Addr = Register::Address<0x400c0404,0xffffff00,0,unsigned>;
        ///PE0C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0c{}; 
        ///PE1C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1c{}; 
        ///PE2C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2c{}; 
        ///PE3C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3c{}; 
        ///PE4C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4c{}; 
        ///PE5C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5c{}; 
        ///PE6C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6c{}; 
        ///PE7C
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7c{}; 
    }
    namespace Nonefr1{    ///<PE Function Register 1
        using Addr = Register::Address<0x400c0408,0xffffff81,0,unsigned>;
        ///PE1F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1f1{}; 
        ///PE2F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2f1{}; 
        ///PE3F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3f1{}; 
        ///PE4F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4f1{}; 
        ///PE5F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5f1{}; 
        ///PE6F1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6f1{}; 
    }
    namespace Nonefr3{    ///<PE Function Register 3
        using Addr = Register::Address<0x400c0410,0xffffff00,0,unsigned>;
        ///PE0F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0f3{}; 
        ///PE1F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1f3{}; 
        ///PE2F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2f3{}; 
        ///PE3F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3f3{}; 
        ///PE4F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4f3{}; 
        ///PE5F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5f3{}; 
        ///PE6F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6f3{}; 
        ///PE7F3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7f3{}; 
    }
    namespace Nonefr4{    ///<PE Function Register 4
        using Addr = Register::Address<0x400c0414,0xffffff64,0,unsigned>;
        ///PE0F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0f4{}; 
        ///PE1F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1f4{}; 
        ///PE3F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3f4{}; 
        ///PE4F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4f4{}; 
        ///PE7F4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7f4{}; 
    }
    namespace Nonefr5{    ///<PE Function Register 5
        using Addr = Register::Address<0x400c0418,0xffffff60,0,unsigned>;
        ///PE0F5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0f5{}; 
        ///PE1F5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1f5{}; 
        ///PE2F5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2f5{}; 
        ///PE3F5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3f5{}; 
        ///PE4F5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4f5{}; 
        ///PE7F5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7f5{}; 
    }
    namespace Noneod{    ///<PE Open Drain Control Register
        using Addr = Register::Address<0x400c0428,0xffffff00,0,unsigned>;
        ///PE0OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0od{}; 
        ///PE1OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1od{}; 
        ///PE2OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2od{}; 
        ///PE3OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3od{}; 
        ///PE4OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4od{}; 
        ///PE5OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5od{}; 
        ///PE6OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6od{}; 
        ///PE7OD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7od{}; 
    }
    namespace Nonepup{    ///<PE Pull-Up Control Register
        using Addr = Register::Address<0x400c042c,0xffffff00,0,unsigned>;
        ///PE0UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0up{}; 
        ///PE1UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1up{}; 
        ///PE2UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2up{}; 
        ///PE3UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3up{}; 
        ///PE4UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4up{}; 
        ///PE5UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5up{}; 
        ///PE6UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6up{}; 
        ///PE7UP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7up{}; 
    }
    namespace Nonepdn{    ///<PE Pull-Down Control Register
        using Addr = Register::Address<0x400c0430,0xffffff00,0,unsigned>;
        ///PE0DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0dn{}; 
        ///PE1DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1dn{}; 
        ///PE2DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2dn{}; 
        ///PE3DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3dn{}; 
        ///PE4DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4dn{}; 
        ///PE5DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5dn{}; 
        ///PE6DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6dn{}; 
        ///PE7DN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7dn{}; 
    }
    namespace Noneie{    ///<PE Input Enable Control Register
        using Addr = Register::Address<0x400c0438,0xffffff00,0,unsigned>;
        ///PE0IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pe0ie{}; 
        ///PE1IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe1ie{}; 
        ///PE2IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe2ie{}; 
        ///PE3IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pe3ie{}; 
        ///PE4IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pe4ie{}; 
        ///PE5IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe5ie{}; 
        ///PE6IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pe6ie{}; 
        ///PE7IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pe7ie{}; 
    }
}
