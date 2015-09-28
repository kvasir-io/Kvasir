#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecsif_enr{
        using Addr = Register::Address<0x400cc000,0x7fffffff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CSIF_EN; 
    }
    namespace Nonecsif_cr{
        using Addr = Register::Address<0x400cc004,0xff000021>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> VSYNCTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HSYNCTYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLKEDGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IMG_FMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> VSYNCPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HSYNCPOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> IMG_SLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> IMG_SFD; 
    }
    namespace Nonecsif_imgwh{
        using Addr = Register::Address<0x400cc008,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> IMG_WID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> IMG_HGH; 
    }
    namespace Nonecsif_wcr0{
        using Addr = Register::Address<0x400cc00c,0x7800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> WIN_HSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> WIN_VSTR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WIN_EN; 
    }
    namespace Nonecsif_wcr1{
        using Addr = Register::Address<0x400cc010,0xf800f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> WIN_WID; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16)> WIN_HGH; 
    }
    namespace Nonecsif_smp{
        using Addr = Register::Address<0x400cc014,0x7fe0e0ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> CSML; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16)> RSML; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMP_EN; 
    }
    namespace Nonecsif_smpcol{
        using Addr = Register::Address<0x400cc018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSM; 
    }
    namespace Nonecsif_smprow{
        using Addr = Register::Address<0x400cc01c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RSM; 
    }
    namespace Nonecsif_fifo0{
        using Addr = Register::Address<0x400cc020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFODATA; 
    }
    namespace Nonecsif_fifo1{
        using Addr = Register::Address<0x400cc024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFODATA; 
    }
    namespace Nonecsif_fifo2{
        using Addr = Register::Address<0x400cc028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFODATA; 
    }
    namespace Nonecsif_fifo3{
        using Addr = Register::Address<0x400cc02c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFODATA; 
    }
    namespace Nonecsif_fifo4{
        using Addr = Register::Address<0x400cc030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFODATA; 
    }
    namespace Nonecsif_fifo5{
        using Addr = Register::Address<0x400cc034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFODATA; 
    }
    namespace Nonecsif_fifo6{
        using Addr = Register::Address<0x400cc038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFODATA; 
    }
    namespace Nonecsif_fifo7{
        using Addr = Register::Address<0x400cc03c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> FIFODATA; 
    }
    namespace Nonecsif_ier{
        using Addr = Register::Address<0x400cc040,0xfffff8e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOFFLGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOFFLGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAPSTAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAPSTSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BADFRME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FIFOOVRE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FIFOEMPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIFOFULE; 
    }
    namespace Nonecsif_sr{
        using Addr = Register::Address<0x400cc044,0xfffff8e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SOF_FLG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOF_FLG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CAP_STA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAP_STS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BAD_FRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FIFO_OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> FIFO_EMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIFO_FUL; 
    }
}
