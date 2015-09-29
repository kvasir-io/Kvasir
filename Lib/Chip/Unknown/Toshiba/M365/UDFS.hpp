#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//UDC2 AHB Bridge
    namespace Noneintsts{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40008000,0xcc01f800,0,unsigned>;
        ///SETUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setup{}; 
        ///STATUS_NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statusNak{}; 
        ///STATUS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> status{}; 
        ///RX_ZERO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxZero{}; 
        ///SOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sof{}; 
        ///EP0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ep0{}; 
        ///EP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ep{}; 
        ///NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> nak{}; 
        ///SUSPEND_RESUME
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> suspendResume{}; 
        ///USB_RESET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usbReset{}; 
        ///USB_RESET_END
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usbResetEnd{}; 
        ///MW_SET_ADD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mwSetAdd{}; 
        ///MW_END_ADD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mwEndAdd{}; 
        ///MW_TIMEOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mwTimeout{}; 
        ///MW_AHBERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mwAhberr{}; 
        ///MR_END_ADD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mrEndAdd{}; 
        ///MR_EP_DSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mrEpDset{}; 
        ///MR_AHBERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrAhberr{}; 
        ///UDC2_REG_RD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> udc2RegRd{}; 
        ///DMAC_REG_RD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmacRegRd{}; 
        ///POWERDETECT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> powerdetect{}; 
        ///MW_RERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mwRerr{}; 
    }
    namespace Noneintenb{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40008004,0xcc01f8ff,0,unsigned>;
        ///SUSPEND_RESUME_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> suspendResumeEn{}; 
        ///RESET_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> resetEn{}; 
        ///RESET_END_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resetEndEn{}; 
        ///MW_SET_ADD_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mwSetAddEn{}; 
        ///MW_END_ADD_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mwEndAddEn{}; 
        ///MW_TIMEOUT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mwTimeout{}; 
        ///MW_AHBERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mwAhberr{}; 
        ///MR_END_ADD_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mrEndAddEn{}; 
        ///MR_EP_DSET_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mrEpDsetEn{}; 
        ///MR_AHBERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrAhberr{}; 
        ///UDC2_REG_RD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> udc2RegRd{}; 
        ///DMAC_REG_RD_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmacRegRdEn{}; 
        ///POWER_DETECT_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> powerDetectEn{}; 
        ///MW_RERROR_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mwRerrorEn{}; 
    }
    namespace Nonemwtout{    ///<Master Write Timeout Register
        using Addr = Register::Address<0x40008008,0x00000000,0,unsigned>;
        ///TIMEOUT_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timeoutEn{}; 
        ///TIMEOUTSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> timeoutset{}; 
    }
    namespace Nonec2stset{    ///<UDC2 setting
        using Addr = Register::Address<0x4000800c,0xffffffee,0,unsigned>;
        ///TX0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tx0{}; 
        ///EOPB_ENABLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eopbEnable{}; 
    }
    namespace Nonemstset{    ///<DMAC setting
        using Addr = Register::Address<0x40008010,0xfffffe88,0,unsigned>;
        ///MW_ENABLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mwEnable{}; 
        ///MW_ABORT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mwAbort{}; 
        ///MW_RESET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mwReset{}; 
        ///MR_ENABLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrEnable{}; 
        ///MR_ABORT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mrAbort{}; 
        ///MR_RESET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mrReset{}; 
        ///M_BURST_TYPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mBurstType{}; 
    }
    namespace Nonedmacrdreq{    ///<DMAC Read request
        using Addr = Register::Address<0x40008014,0x3fffff03,0,unsigned>;
        ///DMARDADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> dmardadr{}; 
        ///DMARDCLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dmardclr{}; 
        ///DMARDREQ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmardreq{}; 
    }
    namespace Nonedmacrdvl{    ///<DMAC Read Value
        using Addr = Register::Address<0x40008018,0x00000000,0,unsigned>;
        ///DMARDDATA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmarddata{}; 
    }
    namespace Noneudc2rdreq{    ///<UDC2 Read Request
        using Addr = Register::Address<0x4000801c,0x3ffffc03,0,unsigned>;
        ///UDC2RDADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,2),Register::ReadWriteAccess,unsigned> udc2rdadr{}; 
        ///UDC2RDCLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> udc2rdclr{}; 
        ///UDC2RDREQ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> udc2rdreq{}; 
    }
    namespace Noneudc2rdvl{    ///<UDC2 Read Value
        using Addr = Register::Address<0x40008020,0x00000000,0,unsigned>;
        ///UDC2RDATA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> udc2rdata{}; 
    }
    namespace Nonearbtset{    ///<Arbiter Setting
        using Addr = Register::Address<0x4000803c,0x6fffcccc,0,unsigned>;
        ///ABTPRI_R0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> abtpriR0{}; 
        ///ABTPRI_R1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> abtpriR1{}; 
        ///ABTPRI_W0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> abtpriW0{}; 
        ///ABTPRI_W1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> abtpriW1{}; 
        ///ABTMOD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> abtmod{}; 
        ///ABT_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> abtEn{}; 
    }
    namespace Nonemwsadr{    ///<Master Write Start Address
        using Addr = Register::Address<0x40008040,0x00000000,0,unsigned>;
        ///MWSADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mwsadr{}; 
    }
    namespace Nonemweadr{    ///<Master Write End Address
        using Addr = Register::Address<0x40008044,0x00000000,0,unsigned>;
        ///MWEADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mweadr{}; 
    }
    namespace Nonemwcadr{    ///<Master Write Current Address
        using Addr = Register::Address<0x40008048,0x00000000,0,unsigned>;
        ///MWCADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mwcadr{}; 
    }
    namespace Nonemwahbadr{    ///<Master Write AHB Address
        using Addr = Register::Address<0x4000804c,0x00000000,0,unsigned>;
        ///MWAHBADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mwahbadr{}; 
    }
    namespace Nonemrsadr{    ///<Master Read Start Address
        using Addr = Register::Address<0x40008050,0x00000000,0,unsigned>;
        ///MRSADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mrsadr{}; 
    }
    namespace Nonemreadr{    ///<Master Read End Address
        using Addr = Register::Address<0x40008054,0x00000000,0,unsigned>;
        ///MREADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mreadr{}; 
    }
    namespace Nonemrcadr{    ///<Master Read Current Address
        using Addr = Register::Address<0x40008058,0x00000000,0,unsigned>;
        ///MRCADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mrcadr{}; 
    }
    namespace Nonemrahbadr{    ///<Master Read AHB Address
        using Addr = Register::Address<0x4000805c,0x00000000,0,unsigned>;
        ///MRAHBADR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mrahbadr{}; 
    }
    namespace Nonepwctl{    ///<Power Detect Control
        using Addr = Register::Address<0x40008080,0xffffff00,0,unsigned>;
        ///USB_RESET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbReset{}; 
        ///PW_RESETB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwResetb{}; 
        ///PW_DETECT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pwDetect{}; 
        ///PHY_SUSPEND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> phySuspend{}; 
        ///SUSPEND_X
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> suspendX{}; 
        ///PHY_RESETB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> phyResetb{}; 
        ///PHY_REMOTE_WKUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> phyRemoteWkup{}; 
        ///WAKEUP_EN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wakeupEn{}; 
    }
    namespace Nonemststs{    ///<Master Status
        using Addr = Register::Address<0x40008084,0xffffffe0,0,unsigned>;
        ///MWEPDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mwepdset{}; 
        ///MREPDSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mrepdset{}; 
        ///MWBFEMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mwbfemp{}; 
        ///MRBFEMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mrbfemp{}; 
        ///MREPEMPTY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrepempty{}; 
    }
    namespace Nonetoutcnt{    ///<Timeout Count
        using Addr = Register::Address<0x40008088,0x00000000,0,unsigned>;
        ///TMOUTCNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tmoutcnt{}; 
    }
}
