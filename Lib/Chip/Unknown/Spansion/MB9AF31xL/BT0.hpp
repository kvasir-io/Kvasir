#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepwm_tmcr{
        using Addr = Register::Address<0x4002500c,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CKS2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RTGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MDSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STRG; 
    }
    namespace Nonepwm_tmcr2{
        using Addr = Register::Address<0x40025011,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CKS3; 
    }
    namespace Nonepwm_stc{
        using Addr = Register::Address<0x40025010,0xffffff88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DTIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TGIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DTIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UDIR; 
    }
    namespace Nonepwm_pcsr{
        using Addr = Register::Address<0x40025000,0xffffffff>;
    }
    namespace Nonepwm_pdut{
        using Addr = Register::Address<0x40025004,0xffffffff>;
    }
    namespace Nonepwm_tmr{
        using Addr = Register::Address<0x40025008,0xffffffff>;
    }
    namespace Noneppg_tmcr{
        using Addr = Register::Address<0x4002500c,0xffff8080>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CKS2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RTGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PMSK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MDSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STRG; 
    }
    namespace Noneppg_tmcr2{
        using Addr = Register::Address<0x40025011,0xfffffffd>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CKS3; 
    }
    namespace Noneppg_stc{
        using Addr = Register::Address<0x40025010,0xffffffaa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TGIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UDIR; 
    }
    namespace Noneppg_prll{
        using Addr = Register::Address<0x40025000,0xffffffff>;
    }
    namespace Noneppg_prlh{
        using Addr = Register::Address<0x40025004,0xffffffff>;
    }
    namespace Noneppg_tmr{
        using Addr = Register::Address<0x40025008,0xffffffff>;
    }
    namespace Nonert_tmcr{
        using Addr = Register::Address<0x4002500c,0xffff8c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CKS2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> EGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> T32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MDSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STRG; 
    }
    namespace Nonert_tmcr2{
        using Addr = Register::Address<0x40025011,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CKS3; 
    }
    namespace Nonert_stc{
        using Addr = Register::Address<0x40025010,0xffffffaa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TGIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> UDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TGIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UDIR; 
    }
    namespace Nonert_pcsr{
        using Addr = Register::Address<0x40025000,0xffffffff>;
    }
    namespace Nonert_tmr{
        using Addr = Register::Address<0x40025008,0xffffffff>;
    }
    namespace Nonepwc_tmcr{
        using Addr = Register::Address<0x4002500c,0xffff8809>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CKS2_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> EGS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> T32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> FMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MDSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CTEN; 
    }
    namespace Nonepwc_tmcr2{
        using Addr = Register::Address<0x40025011,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CKS3; 
    }
    namespace Nonepwc_stc{
        using Addr = Register::Address<0x40025010,0xffffff2a>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EDIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OVIR; 
    }
    namespace Nonepwc_dtbf{
        using Addr = Register::Address<0x40025004,0xffffffff>;
    }
}
