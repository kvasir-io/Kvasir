#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//RSTCU
    namespace NonerstcuGrsr{    ///<RSTCU_GRSR
        using Addr = Register::Address<0x40088100,0xfffffff0,0,unsigned>;
        ///SYSRSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sysrstf{}; 
        ///EXTRSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> extrstf{}; 
        ///WDTRSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wdtrstf{}; 
        ///PORSTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> porstf{}; 
    }
    namespace NonerstcuAhbprstr{    ///<RSTCU_AHBPRSTR
        using Addr = Register::Address<0x40088104,0xffffffee,0,unsigned>;
        ///DMARST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmarst{}; 
        ///CSIFRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csifrst{}; 
    }
    namespace NonerstcuApbprstr0{    ///<RSTCU_APBPRSTR0
        using Addr = Register::Address<0x40088108,0xfee03ccc,0,unsigned>;
        ///I2C0RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> i2c0rst{}; 
        ///I2C1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        ///SPI0RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spi0rst{}; 
        ///SPI1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        ///UR0RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ur0rst{}; 
        ///UR1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ur1rst{}; 
        ///AFIORST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> afiorst{}; 
        ///EXTIRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> extirst{}; 
        ///PARST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> parst{}; 
        ///PBRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pbrst{}; 
        ///PCRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pcrst{}; 
        ///PDRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pdrst{}; 
        ///PERST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> perst{}; 
        ///SCIRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> scirst{}; 
    }
    namespace NonerstcuApbprstr1{    ///<RSTCU_APBPRSTR1
        using Addr = Register::Address<0x4008810c,0xfe3cbcee,0,unsigned>;
        ///MCTMRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mctmrst{}; 
        ///WDTRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wdtrst{}; 
        ///GPTM0RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gptm0rst{}; 
        ///GPTM1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gptm1rst{}; 
        ///USBRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///BFTM0RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bftm0rst{}; 
        ///BFTM1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> bftm1rst{}; 
        ///OPA0RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> opa0rst{}; 
        ///OPA1RST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> opa1rst{}; 
        ///ADCRST
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> adcrst{}; 
    }
}
