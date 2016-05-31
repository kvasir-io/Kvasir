#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//UDC2 AHB Bridge
    namespace UdfsIntsts{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40008000,0xcc01f800,0x00000000,unsigned>;
        ///INT_SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSetup{}; 
        ///INT_STATUS_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intStatusNak{}; 
        ///INT_STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intStatus{}; 
        ///INT_RX_ZERO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intRxZero{}; 
        ///INT_SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSof{}; 
        ///INT_EP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intEp0{}; 
        ///INT_EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intEp{}; 
        ///INT_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intNak{}; 
        ///INT_SUSPEND_RESUME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> intSuspendResume{}; 
        ///INT_USB_RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> intUsbReset{}; 
        ///INT_USB_RESET_END
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> intUsbResetEnd{}; 
        ///INT_MW_SET_ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> intMwSetAdd{}; 
        ///INT_MW_END_ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> intMwEndAdd{}; 
        ///INT_MW_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> intMwTimeout{}; 
        ///INT_MW_AHBERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> intMwAhberr{}; 
        ///INT_MR_END_ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> intMrEndAdd{}; 
        ///INT_MR_EP_DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> intMrEpDset{}; 
        ///INT_MR_AHBERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> intMrAhberr{}; 
        ///INT_UDC2_REG_RD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> intUdc2RegRd{}; 
        ///INT_DMAC_REG_RD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> intDmacRegRd{}; 
        ///INT_POWERDETECT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> intPowerdetect{}; 
        ///INT_MW_RERROR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> intMwRerror{}; 
    }
    namespace UdfsIntenb{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40008004,0xcc01f8ff,0x00000000,unsigned>;
        ///SUSPEND_RESUME_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> suspendResumeEn{}; 
        ///RESET_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> resetEn{}; 
        ///RESET_END_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resetEndEn{}; 
        ///MW_SET_ADD_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mwSetAddEn{}; 
        ///MW_END_ADD_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mwEndAddEn{}; 
        ///MW_TIMEOUT_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mwTimeoutEn{}; 
        ///MW_AHBERR_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mwAhberrEn{}; 
        ///MR_END_ADD_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mrEndAddEn{}; 
        ///MR_EP_DSET_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mrEpDsetEn{}; 
        ///MR_AHBERR_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrAhberrEn{}; 
        ///UDC2_REG_RD_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> udc2RegRdEn{}; 
        ///DMAC_REG_RD_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmacRegRdEn{}; 
        ///POWER_DETECT_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> powerDetectEn{}; 
        ///MW_RERROR_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mwRerrorEn{}; 
    }
    namespace UdfsMwtout{    ///<Master Write Timeout Register
        using Addr = Register::Address<0x40008008,0x00000000,0x00000000,unsigned>;
        ///TIMEOUT_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timeoutEn{}; 
        ///TIMEOUTSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> timeoutset{}; 
    }
    namespace UdfsC2stset{    ///<UDC2 setting
        using Addr = Register::Address<0x4000800c,0xffffffee,0x00000000,unsigned>;
        ///TX0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tx0{}; 
        ///EOPB_ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eopbEnable{}; 
    }
    namespace UdfsMstset{    ///<DMAC setting
        using Addr = Register::Address<0x40008010,0xfffffe88,0x00000000,unsigned>;
        ///MW_ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mwEnable{}; 
        ///MW_ABORT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mwAbort{}; 
        ///MW_RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mwReset{}; 
        ///MR_ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrEnable{}; 
        ///MR_ABORT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrAbort{}; 
        ///MR_RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mrReset{}; 
        ///M_BURST_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mBurstType{}; 
    }
    namespace UdfsDmacrdreq{    ///<DMAC Read request
        using Addr = Register::Address<0x40008014,0x3fffff03,0x00000000,unsigned>;
        ///DMARDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> dmardadr{}; 
        ///DMARDCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dmardclr{}; 
        ///DMARDREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmardreq{}; 
    }
    namespace UdfsDmacrdvl{    ///<DMAC Read Value
        using Addr = Register::Address<0x40008018,0x00000000,0x00000000,unsigned>;
        ///DMARDDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmarddata{}; 
    }
    namespace UdfsUdc2rdreq{    ///<UDC2 Read Request
        using Addr = Register::Address<0x4000801c,0x3ffffc03,0x00000000,unsigned>;
        ///UDC2RDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,2),Register::ReadWriteAccess,unsigned> udc2rdadr{}; 
        ///UDC2RDCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> udc2rdclr{}; 
        ///UDC2RDREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> udc2rdreq{}; 
    }
    namespace UdfsUdc2rdvl{    ///<UDC2 Read Value
        using Addr = Register::Address<0x40008020,0xffff0000,0x00000000,unsigned>;
        ///UDC2RDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> udc2rdata{}; 
    }
    namespace UdfsArbtset{    ///<Arbiter Setting
        using Addr = Register::Address<0x4000803c,0x6fffcccc,0x00000000,unsigned>;
        ///ABTPRI_R0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> abtpriR0{}; 
        ///ABTPRI_R1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> abtpriR1{}; 
        ///ABTPRI_W0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> abtpriW0{}; 
        ///ABTPRI_W1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> abtpriW1{}; 
        ///ABTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> abtmod{}; 
        ///ABT_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> abtEn{}; 
    }
    namespace UdfsMwsadr{    ///<Master Write Start Address
        using Addr = Register::Address<0x40008040,0x00000000,0x00000000,unsigned>;
        ///MWSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mwsadr{}; 
    }
    namespace UdfsMweadr{    ///<Master Write End Address
        using Addr = Register::Address<0x40008044,0x00000000,0x00000000,unsigned>;
        ///MWEADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mweadr{}; 
    }
    namespace UdfsMwcadr{    ///<Master Write Current Address
        using Addr = Register::Address<0x40008048,0x00000000,0x00000000,unsigned>;
        ///MWCADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mwcadr{}; 
    }
    namespace UdfsMwahbadr{    ///<Master Write AHB Address
        using Addr = Register::Address<0x4000804c,0x00000000,0x00000000,unsigned>;
        ///MWAHBADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mwahbadr{}; 
    }
    namespace UdfsMrsadr{    ///<Master Read Start Address
        using Addr = Register::Address<0x40008050,0x00000000,0x00000000,unsigned>;
        ///MRSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mrsadr{}; 
    }
    namespace UdfsMreadr{    ///<Master Read End Address
        using Addr = Register::Address<0x40008054,0x00000000,0x00000000,unsigned>;
        ///MREADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mreadr{}; 
    }
    namespace UdfsMrcadr{    ///<Master Read Current Address
        using Addr = Register::Address<0x40008058,0x00000000,0x00000000,unsigned>;
        ///MRCADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrcadr{}; 
    }
    namespace UdfsMrahbadr{    ///<Master Read AHB Address
        using Addr = Register::Address<0x4000805c,0x00000000,0x00000000,unsigned>;
        ///MRAHBADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrahbadr{}; 
    }
    namespace UdfsPwctl{    ///<Power Detect Control
        using Addr = Register::Address<0x40008080,0xffffff00,0x00000000,unsigned>;
        ///USB_RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> usbReset{}; 
        ///PW_RESETB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwResetb{}; 
        ///PW_DETECT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pwDetect{}; 
        ///PHY_SUSPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> phySuspend{}; 
        ///SUSPEND_X
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> suspendX{}; 
        ///PHY_RESETB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> phyResetb{}; 
        ///PHY_REMOTE_WKUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> phyRemoteWkup{}; 
        ///WAKEUP_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wakeupEn{}; 
    }
    namespace UdfsMststs{    ///<Master Status
        using Addr = Register::Address<0x40008084,0xffffffe0,0x00000000,unsigned>;
        ///MWEPDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mwepdset{}; 
        ///MREPDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrepdset{}; 
        ///MWBFEMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mwbfemp{}; 
        ///MRBFEMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrbfemp{}; 
        ///MREPEMPTY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mrepempty{}; 
    }
    namespace UdfsToutcnt{    ///<Timeout Count
        using Addr = Register::Address<0x40008088,0x00000000,0x00000000,unsigned>;
        ///TMOUTCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tmoutcnt{}; 
    }
}
