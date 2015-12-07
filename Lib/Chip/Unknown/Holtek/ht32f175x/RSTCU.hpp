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
    namespace NonerstcuAhbprstr{    ///<RSTCU_AHBPRSTR
        using Addr = Register::Address<0x40088104,0xfffffffe,0,unsigned>;
        ///DMARST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmarst{}; 
        namespace DmarstValC{
        }
    }
    namespace NonerstcuApbprstr0{    ///<RSTCU_APBPRSTR0
        using Addr = Register::Address<0x40088108,0xfee03ccc,0,unsigned>;
        ///I2C0RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2c0rst{}; 
        namespace I2c0rstValC{
        }
        ///I2C1RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        namespace I2c1rstValC{
        }
        ///SPI0RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spi0rst{}; 
        namespace Spi0rstValC{
        }
        ///SPI1RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        namespace Spi1rstValC{
        }
        ///UR0RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ur0rst{}; 
        namespace Ur0rstValC{
        }
        ///UR1RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ur1rst{}; 
        namespace Ur1rstValC{
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
        ///PCRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pcrst{}; 
        namespace PcrstValC{
        }
        ///PDRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdrst{}; 
        namespace PdrstValC{
        }
        ///PERST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> perst{}; 
        namespace PerstValC{
        }
        ///SCIRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> scirst{}; 
        namespace ScirstValC{
        }
    }
    namespace NonerstcuApbprstr1{    ///<RSTCU_APBPRSTR1
        using Addr = Register::Address<0x4008810c,0xfe3cbcee,0,unsigned>;
        ///MCTMRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mctmrst{}; 
        namespace MctmrstValC{
        }
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
        ///USBRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usbrst{}; 
        namespace UsbrstValC{
        }
        ///BFTM0RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bftm0rst{}; 
        namespace Bftm0rstValC{
        }
        ///BFTM1RST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bftm1rst{}; 
        namespace Bftm1rstValC{
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
