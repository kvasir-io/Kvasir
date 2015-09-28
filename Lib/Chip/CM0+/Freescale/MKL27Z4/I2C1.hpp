#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace I2C1_a1{
        using Addr = Register::Address<0x40067000,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> AD; 
    }
    namespace I2C1_f{
        using Addr = Register::Address<0x40067001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> ICR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> MULT; 
    }
    namespace I2C1_c1{
        using Addr = Register::Address<0x40067002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WUEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RSTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TXAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IICIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IICEN; 
    }
    namespace I2C1_s{
        using Addr = Register::Address<0x40067003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IICIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SRW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RAM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ARBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IAAS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TCF; 
    }
    namespace I2C1_d{
        using Addr = Register::Address<0x40067004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> DATA; 
    }
    namespace I2C1_c2{
        using Addr = Register::Address<0x40067005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SBRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HDRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADEXT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GCAEN; 
    }
    namespace I2C1_flt{
        using Addr = Register::Address<0x40067006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> STARTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> STOPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SHEN; 
    }
    namespace I2C1_ra{
        using Addr = Register::Address<0x40067007,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> RAD; 
    }
    namespace I2C1_smb{
        using Addr = Register::Address<0x40067008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SHTF2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SHTF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SHTF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SLTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TCKSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SIICAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ALERTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FACK; 
    }
    namespace I2C1_a2{
        using Addr = Register::Address<0x40067009,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> SAD; 
    }
    namespace I2C1_slth{
        using Addr = Register::Address<0x4006700a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SSLT; 
    }
    namespace I2C1_sltl{
        using Addr = Register::Address<0x4006700b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SSLT; 
    }
    namespace I2C1_s2{
        using Addr = Register::Address<0x4006700c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERROR; 
    }
}
