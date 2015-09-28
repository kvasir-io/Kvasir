#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneintsts{
        using Addr = Register::Address<0x40008000,0xcc01f800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SETUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STATUS_NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> STATUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RX_ZERO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EP0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NAK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SUSPEND_RESUME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> USB_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> USB_RESET_END; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MW_SET_ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MW_END_ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MW_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MW_AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MR_END_ADD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MR_EP_DSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MR_AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> UDC2_REG_RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMAC_REG_RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> POWERDETECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MW_RERR; 
    }
    namespace Noneintenb{
        using Addr = Register::Address<0x40008004,0xcc01f8ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SUSPEND_RESUME_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RESET_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RESET_END_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MW_SET_ADD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MW_END_ADD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MW_TIMEOUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MW_AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MR_END_ADD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MR_EP_DSET_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MR_AHBERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> UDC2_REG_RD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> DMAC_REG_RD_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> POWER_DETECT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> MW_RERROR_EN; 
    }
    namespace Nonemwtout{
        using Addr = Register::Address<0x40008008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIMEOUT_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,1)> TIMEOUTSET; 
    }
    namespace Nonec2stset{
        using Addr = Register::Address<0x4000800c,0xffffffee>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EOPB_ENABLE; 
    }
    namespace Nonemstset{
        using Addr = Register::Address<0x40008010,0xfffffe88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MW_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MW_ABORT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MW_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MR_ENABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MR_ABORT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MR_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> M_BURST_TYPE; 
    }
    namespace Nonedmacrdreq{
        using Addr = Register::Address<0x40008014,0x3fffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2)> DMARDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMARDCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> DMARDREQ; 
    }
    namespace Nonedmacrdvl{
        using Addr = Register::Address<0x40008018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DMARDDATA; 
    }
    namespace Noneudc2rdreq{
        using Addr = Register::Address<0x4000801c,0x3ffffc03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,2)> UDC2RDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> UDC2RDCLR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> UDC2RDREQ; 
    }
    namespace Noneudc2rdvl{
        using Addr = Register::Address<0x40008020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> UDC2RDATA; 
    }
    namespace Nonearbtset{
        using Addr = Register::Address<0x4000803c,0x6fffcccc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> ABTPRI_R0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> ABTPRI_R1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ABTPRI_W0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> ABTPRI_W1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ABTMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ABT_EN; 
    }
    namespace Nonemwsadr{
        using Addr = Register::Address<0x40008040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MWSADR; 
    }
    namespace Nonemweadr{
        using Addr = Register::Address<0x40008044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MWEADR; 
    }
    namespace Nonemwcadr{
        using Addr = Register::Address<0x40008048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MWCADR; 
    }
    namespace Nonemwahbadr{
        using Addr = Register::Address<0x4000804c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MWAHBADR; 
    }
    namespace Nonemrsadr{
        using Addr = Register::Address<0x40008050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MRSADR; 
    }
    namespace Nonemreadr{
        using Addr = Register::Address<0x40008054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MREADR; 
    }
    namespace Nonemrcadr{
        using Addr = Register::Address<0x40008058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MRCADR; 
    }
    namespace Nonemrahbadr{
        using Addr = Register::Address<0x4000805c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> MRAHBADR; 
    }
    namespace Nonepwctl{
        using Addr = Register::Address<0x40008080,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USB_RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PW_RESETB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PW_DETECT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PHY_SUSPEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SUSPEND_X; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PHY_RESETB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PHY_REMOTE_WKUP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> WAKEUP_EN; 
    }
    namespace Nonemststs{
        using Addr = Register::Address<0x40008084,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MWEPDSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MREPDSET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MWBFEMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MRBFEMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MREPEMPTY; 
    }
    namespace Nonetoutcnt{
        using Addr = Register::Address<0x40008088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TMOUTCNT; 
    }
}
