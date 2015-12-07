#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//RSTCU
    namespace NonerstcuGrsr{    ///<RSTCU_GRSR
        using Addr = Register::Address<0x40088100,0xfffffff0,0,unsigned>;
        ///SYSRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sysrstf{}; 
        namespace SysrstfValC{
        }
        ///EXTRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extrstf{}; 
        namespace ExtrstfValC{
        }
        ///WDTRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtrstf{}; 
        namespace WdtrstfValC{
        }
        ///PORSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> porstf{}; 
        namespace PorstfValC{
        }
    }
    namespace NonerstcuApbprstr0{    ///<RSTCU_APBPRSTR0
        using Addr = Register::Address<0x40088108,0xfffc3eee,0,unsigned>;
        ///I2CRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2crst{}; 
        namespace I2crstValC{
        }
        ///SPIRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spirst{}; 
        namespace SpirstValC{
        }
        ///URRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urrst{}; 
        namespace UrrstValC{
        }
        ///AFIORST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> afiorst{}; 
        namespace AfiorstValC{
        }
        ///EXTIRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extirst{}; 
        namespace ExtirstValC{
        }
        ///PARST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> parst{}; 
        namespace ParstValC{
        }
        ///PBRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pbrst{}; 
        namespace PbrstValC{
        }
    }
    namespace NonerstcuApbprstr1{    ///<RSTCU_APBPRSTR1
        using Addr = Register::Address<0x4008810c,0xfe3ffcef,0,unsigned>;
        ///WDTRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wdtrst{}; 
        namespace WdtrstValC{
        }
        ///GPTM0RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gptm0rst{}; 
        namespace Gptm0rstValC{
        }
        ///GPTM1RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gptm1rst{}; 
        namespace Gptm1rstValC{
        }
        ///OPA0RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> opa0rst{}; 
        namespace Opa0rstValC{
        }
        ///OPA1RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> opa1rst{}; 
        namespace Opa1rstValC{
        }
        ///ADCRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adcrst{}; 
        namespace AdcrstValC{
        }
    }
}
