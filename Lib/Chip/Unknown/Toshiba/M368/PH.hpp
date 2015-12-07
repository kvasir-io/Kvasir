#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General Purpose Input_Output Port (PH)
    namespace Nonedata{    ///<PH Data Register
        using Addr = Register::Address<0x400c0700,0xfffffff0,0,unsigned>;
        ///PH0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0{}; 
        namespace Ph0ValC{
        }
        ///PH1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1{}; 
        namespace Ph1ValC{
        }
        ///PH2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2{}; 
        namespace Ph2ValC{
        }
        ///PH3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3{}; 
        namespace Ph3ValC{
        }
    }
    namespace Nonecr{    ///<PH Control Register
        using Addr = Register::Address<0x400c0704,0xfffffff0,0,unsigned>;
        ///PH0C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0c{}; 
        namespace Ph0cValC{
        }
        ///PH1C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1c{}; 
        namespace Ph1cValC{
        }
        ///PH2C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2c{}; 
        namespace Ph2cValC{
        }
        ///PH3C
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3c{}; 
        namespace Ph3cValC{
        }
    }
    namespace Nonefr1{    ///<PH Function Register 1
        using Addr = Register::Address<0x400c0708,0xfffffff0,0,unsigned>;
        ///PH0F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0f1{}; 
        namespace Ph0f1ValC{
        }
        ///PH1F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1f1{}; 
        namespace Ph1f1ValC{
        }
        ///PH2F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2f1{}; 
        namespace Ph2f1ValC{
        }
        ///PH3F1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3f1{}; 
        namespace Ph3f1ValC{
        }
    }
    namespace Nonefr2{    ///<PH Function Register 2
        using Addr = Register::Address<0x400c070c,0xfffffff0,0,unsigned>;
        ///PH0F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0f2{}; 
        namespace Ph0f2ValC{
        }
        ///PH1F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1f2{}; 
        namespace Ph1f2ValC{
        }
        ///PH2F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2f2{}; 
        namespace Ph2f2ValC{
        }
        ///PH3F2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3f2{}; 
        namespace Ph3f2ValC{
        }
    }
    namespace Nonefr3{    ///<PH Function Register 3
        using Addr = Register::Address<0x400c0710,0xfffffff0,0,unsigned>;
        ///PH0F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0f3{}; 
        namespace Ph0f3ValC{
        }
        ///PH1F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1f3{}; 
        namespace Ph1f3ValC{
        }
        ///PH2F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2f3{}; 
        namespace Ph2f3ValC{
        }
        ///PH3F3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3f3{}; 
        namespace Ph3f3ValC{
        }
    }
    namespace Nonefr4{    ///<PH Function Register 4
        using Addr = Register::Address<0x400c0714,0xfffffff3,0,unsigned>;
        ///PH2F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2f4{}; 
        namespace Ph2f4ValC{
        }
        ///PH3F4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3f4{}; 
        namespace Ph3f4ValC{
        }
    }
    namespace Nonefr5{    ///<PH Function Register 5
        using Addr = Register::Address<0x400c0718,0xfffffff0,0,unsigned>;
        ///PH0F5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0f5{}; 
        namespace Ph0f5ValC{
        }
        ///PH1F5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1f5{}; 
        namespace Ph1f5ValC{
        }
        ///PH2F5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2f5{}; 
        namespace Ph2f5ValC{
        }
        ///PH3F5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3f5{}; 
        namespace Ph3f5ValC{
        }
    }
    namespace Noneod{    ///<PH Open Drain Control Register
        using Addr = Register::Address<0x400c0728,0xfffffff0,0,unsigned>;
        ///PH0OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0od{}; 
        namespace Ph0odValC{
        }
        ///PH1OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1od{}; 
        namespace Ph1odValC{
        }
        ///PH2OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2od{}; 
        namespace Ph2odValC{
        }
        ///PH3OD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3od{}; 
        namespace Ph3odValC{
        }
    }
    namespace Nonepup{    ///<PH Pull-Up Control Register
        using Addr = Register::Address<0x400c072c,0xfffffff0,0,unsigned>;
        ///PH0UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0up{}; 
        namespace Ph0upValC{
        }
        ///PH1UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1up{}; 
        namespace Ph1upValC{
        }
        ///PH2UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2up{}; 
        namespace Ph2upValC{
        }
        ///PH3UP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3up{}; 
        namespace Ph3upValC{
        }
    }
    namespace Nonepdn{    ///<PH Pull-Down Control Register
        using Addr = Register::Address<0x400c0730,0xfffffff0,0,unsigned>;
        ///PN0DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pn0dn{}; 
        namespace Pn0dnValC{
        }
        ///PN1DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pn1dn{}; 
        namespace Pn1dnValC{
        }
        ///PN2DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pn2dn{}; 
        namespace Pn2dnValC{
        }
        ///PN3DN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pn3dn{}; 
        namespace Pn3dnValC{
        }
    }
    namespace Noneie{    ///<PH Input Enable Control Register
        using Addr = Register::Address<0x400c0738,0xfffffff0,0,unsigned>;
        ///PH0IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ph0ie{}; 
        namespace Ph0ieValC{
        }
        ///PH1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ph1ie{}; 
        namespace Ph1ieValC{
        }
        ///PH2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ph2ie{}; 
        namespace Ph2ieValC{
        }
        ///PH3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ph3ie{}; 
        namespace Ph3ieValC{
        }
    }
}
