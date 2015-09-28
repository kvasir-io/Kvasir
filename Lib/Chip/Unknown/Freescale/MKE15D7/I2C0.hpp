#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace I2C0_a1{
        using Addr = Register::Address<0x40047000,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> AD; 
    }
    namespace I2C0_f{
        using Addr = Register::Address<0x40047001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> ICR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> MULT; 
    }
    namespace I2C0_c1{
        using Addr = Register::Address<0x40047002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WUEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IICIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IICEN; 
    }
    namespace I2C0_s{
        using Addr = Register::Address<0x40047003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IICIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ARBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IAAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCF; 
    }
    namespace I2C0_d{
        using Addr = Register::Address<0x40047004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace I2C0_c2{
        using Addr = Register::Address<0x40047005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SBRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HDRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADEXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GCAEN; 
    }
    namespace I2C0_flt{
        using Addr = Register::Address<0x40047006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> FLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> STOPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STOPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHEN; 
    }
    namespace I2C0_ra{
        using Addr = Register::Address<0x40047007,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> RAD; 
    }
    namespace I2C0_smb{
        using Addr = Register::Address<0x40047008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SHTF2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SHTF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SHTF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SLTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SIICAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ALERTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FACK; 
    }
    namespace I2C0_a2{
        using Addr = Register::Address<0x40047009,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> SAD; 
    }
    namespace I2C0_slth{
        using Addr = Register::Address<0x4004700a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SSLT; 
    }
    namespace I2C0_sltl{
        using Addr = Register::Address<0x4004700b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SSLT; 
    }
}
