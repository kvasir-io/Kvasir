#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace CMCC_type{
        using Addr = Register::Address<0x4007c000,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GCLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RANDP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> LRUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RRP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> WAYNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LCKDOWN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> CSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11)> CLSIZE; 
    }
    namespace CMCC_cfg{
        using Addr = Register::Address<0x4007c004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GCLKDIS; 
    }
    namespace CMCC_ctrl{
        using Addr = Register::Address<0x4007c008,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CEN; 
    }
    namespace CMCC_sr{
        using Addr = Register::Address<0x4007c00c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CSTS; 
    }
    namespace CMCC_maint0{
        using Addr = Register::Address<0x4007c020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INVALL; 
    }
    namespace CMCC_maint1{
        using Addr = Register::Address<0x4007c024,0x3ffffe0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,4)> INDEX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> WAY; 
    }
    namespace CMCC_mcfg{
        using Addr = Register::Address<0x4007c028,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MODE; 
    }
    namespace CMCC_men{
        using Addr = Register::Address<0x4007c02c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MENABLE; 
    }
    namespace CMCC_mctrl{
        using Addr = Register::Address<0x4007c030,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
    }
    namespace CMCC_msr{
        using Addr = Register::Address<0x4007c034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> EVENT_CNT; 
    }
}
