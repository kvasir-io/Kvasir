#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//UDC2 AHB Bridge
    namespace Noneintsts{    ///<Interrupt Status Register
        using Addr = Register::Address<0x40008000,0xcc01f800,0,unsigned>;
        ///INT_SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intSetup{}; 
        namespace IntsetupValC{
        }
        ///INT_STATUS_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intStatusNak{}; 
        namespace IntstatusnakValC{
        }
        ///INT_STATUS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intStatus{}; 
        namespace IntstatusValC{
        }
        ///INT_RX_ZERO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intRxZero{}; 
        namespace IntrxzeroValC{
        }
        ///INT_SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intSof{}; 
        namespace IntsofValC{
        }
        ///INT_EP0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intEp0{}; 
        namespace Intep0ValC{
        }
        ///INT_EP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> intEp{}; 
        namespace IntepValC{
        }
        ///INT_NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intNak{}; 
        namespace IntnakValC{
        }
        ///INT_SUSPEND_RESUME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> intSuspendResume{}; 
        namespace IntsuspendresumeValC{
        }
        ///INT_USB_RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> intUsbReset{}; 
        namespace IntusbresetValC{
        }
        ///INT_USB_RESET_END
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> intUsbResetEnd{}; 
        namespace IntusbresetendValC{
        }
        ///INT_MW_SET_ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> intMwSetAdd{}; 
        namespace IntmwsetaddValC{
        }
        ///INT_MW_END_ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> intMwEndAdd{}; 
        namespace IntmwendaddValC{
        }
        ///INT_MW_TIMEOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> intMwTimeout{}; 
        namespace IntmwtimeoutValC{
        }
        ///INT_MW_AHBERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> intMwAhberr{}; 
        namespace IntmwahberrValC{
        }
        ///INT_MR_END_ADD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> intMrEndAdd{}; 
        namespace IntmrendaddValC{
        }
        ///INT_MR_EP_DSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> intMrEpDset{}; 
        namespace IntmrepdsetValC{
        }
        ///INT_MR_AHBERR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> intMrAhberr{}; 
        namespace IntmrahberrValC{
        }
        ///INT_UDC2_REG_RD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> intUdc2RegRd{}; 
        namespace Intudc2regrdValC{
        }
        ///INT_DMAC_REG_RD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> intDmacRegRd{}; 
        namespace IntdmacregrdValC{
        }
        ///INT_POWERDETECT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> intPowerdetect{}; 
        namespace IntpowerdetectValC{
        }
        ///INT_MW_RERROR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> intMwRerror{}; 
        namespace IntmwrerrorValC{
        }
    }
    namespace Noneintenb{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40008004,0xcc01f8ff,0,unsigned>;
        ///SUSPEND_RESUME_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> suspendResumeEn{}; 
        namespace SuspendresumeenValC{
        }
        ///RESET_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> resetEn{}; 
        namespace ResetenValC{
        }
        ///RESET_END_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resetEndEn{}; 
        namespace ResetendenValC{
        }
        ///MW_SET_ADD_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> mwSetAddEn{}; 
        namespace MwsetaddenValC{
        }
        ///MW_END_ADD_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> mwEndAddEn{}; 
        namespace MwendaddenValC{
        }
        ///MW_TIMEOUT_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> mwTimeoutEn{}; 
        namespace MwtimeoutenValC{
        }
        ///MW_AHBERR_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> mwAhberrEn{}; 
        namespace MwahberrenValC{
        }
        ///MR_END_ADD_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mrEndAddEn{}; 
        namespace MrendaddenValC{
        }
        ///MR_EP_DSET_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> mrEpDsetEn{}; 
        namespace MrepdsetenValC{
        }
        ///MR_AHBERR_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mrAhberrEn{}; 
        namespace MrahberrenValC{
        }
        ///UDC2_REG_RD_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> udc2RegRdEn{}; 
        namespace Udc2regrdenValC{
        }
        ///DMAC_REG_RD_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dmacRegRdEn{}; 
        namespace DmacregrdenValC{
        }
        ///POWER_DETECT_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> powerDetectEn{}; 
        namespace PowerdetectenValC{
        }
        ///MW_RERROR_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mwRerrorEn{}; 
        namespace MwrerrorenValC{
        }
    }
    namespace Nonemwtout{    ///<Master Write Timeout Register
        using Addr = Register::Address<0x40008008,0x00000000,0,unsigned>;
        ///TIMEOUT_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> timeoutEn{}; 
        namespace TimeoutenValC{
        }
        ///TIMEOUTSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> timeoutset{}; 
        namespace TimeoutsetValC{
        }
    }
    namespace Nonec2stset{    ///<UDC2 setting
        using Addr = Register::Address<0x4000800c,0xffffffee,0,unsigned>;
        ///TX0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tx0{}; 
        namespace Tx0ValC{
        }
        ///EOPB_ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> eopbEnable{}; 
        namespace EopbenableValC{
        }
    }
    namespace Nonemstset{    ///<DMAC setting
        using Addr = Register::Address<0x40008010,0xfffffe88,0,unsigned>;
        ///MW_ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mwEnable{}; 
        namespace MwenableValC{
        }
        ///MW_ABORT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mwAbort{}; 
        namespace MwabortValC{
        }
        ///MW_RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mwReset{}; 
        namespace MwresetValC{
        }
        ///MR_ENABLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrEnable{}; 
        namespace MrenableValC{
        }
        ///MR_ABORT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mrAbort{}; 
        namespace MrabortValC{
        }
        ///MR_RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mrReset{}; 
        namespace MrresetValC{
        }
        ///M_BURST_TYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mBurstType{}; 
        namespace MbursttypeValC{
        }
    }
    namespace Nonedmacrdreq{    ///<DMAC Read request
        using Addr = Register::Address<0x40008014,0x3fffff03,0,unsigned>;
        ///DMARDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> dmardadr{}; 
        namespace DmardadrValC{
        }
        ///DMARDCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dmardclr{}; 
        namespace DmardclrValC{
        }
        ///DMARDREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dmardreq{}; 
        namespace DmardreqValC{
        }
    }
    namespace Nonedmacrdvl{    ///<DMAC Read Value
        using Addr = Register::Address<0x40008018,0x00000000,0,unsigned>;
        ///DMARDDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmarddata{}; 
        namespace DmarddataValC{
        }
    }
    namespace Noneudc2rdreq{    ///<UDC2 Read Request
        using Addr = Register::Address<0x4000801c,0x3ffffc03,0,unsigned>;
        ///UDC2RDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,2),Register::ReadWriteAccess,unsigned> udc2rdadr{}; 
        namespace Udc2rdadrValC{
        }
        ///UDC2RDCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> udc2rdclr{}; 
        namespace Udc2rdclrValC{
        }
        ///UDC2RDREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> udc2rdreq{}; 
        namespace Udc2rdreqValC{
        }
    }
    namespace Noneudc2rdvl{    ///<UDC2 Read Value
        using Addr = Register::Address<0x40008020,0xffff0000,0,unsigned>;
        ///UDC2RDATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> udc2rdata{}; 
        namespace Udc2rdataValC{
        }
    }
    namespace Nonearbtset{    ///<Arbiter Setting
        using Addr = Register::Address<0x4000803c,0x6fffcccc,0,unsigned>;
        ///ABTPRI_R0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> abtpriR0{}; 
        namespace Abtprir0ValC{
        }
        ///ABTPRI_R1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> abtpriR1{}; 
        namespace Abtprir1ValC{
        }
        ///ABTPRI_W0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> abtpriW0{}; 
        namespace Abtpriw0ValC{
        }
        ///ABTPRI_W1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> abtpriW1{}; 
        namespace Abtpriw1ValC{
        }
        ///ABTMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> abtmod{}; 
        namespace AbtmodValC{
        }
        ///ABT_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> abtEn{}; 
        namespace AbtenValC{
        }
    }
    namespace Nonemwsadr{    ///<Master Write Start Address
        using Addr = Register::Address<0x40008040,0x00000000,0,unsigned>;
        ///MWSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mwsadr{}; 
        namespace MwsadrValC{
        }
    }
    namespace Nonemweadr{    ///<Master Write End Address
        using Addr = Register::Address<0x40008044,0x00000000,0,unsigned>;
        ///MWEADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mweadr{}; 
        namespace MweadrValC{
        }
    }
    namespace Nonemwcadr{    ///<Master Write Current Address
        using Addr = Register::Address<0x40008048,0x00000000,0,unsigned>;
        ///MWCADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mwcadr{}; 
        namespace MwcadrValC{
        }
    }
    namespace Nonemwahbadr{    ///<Master Write AHB Address
        using Addr = Register::Address<0x4000804c,0x00000000,0,unsigned>;
        ///MWAHBADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mwahbadr{}; 
        namespace MwahbadrValC{
        }
    }
    namespace Nonemrsadr{    ///<Master Read Start Address
        using Addr = Register::Address<0x40008050,0x00000000,0,unsigned>;
        ///MRSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mrsadr{}; 
        namespace MrsadrValC{
        }
    }
    namespace Nonemreadr{    ///<Master Read End Address
        using Addr = Register::Address<0x40008054,0x00000000,0,unsigned>;
        ///MREADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mreadr{}; 
        namespace MreadrValC{
        }
    }
    namespace Nonemrcadr{    ///<Master Read Current Address
        using Addr = Register::Address<0x40008058,0x00000000,0,unsigned>;
        ///MRCADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mrcadr{}; 
        namespace MrcadrValC{
        }
    }
    namespace Nonemrahbadr{    ///<Master Read AHB Address
        using Addr = Register::Address<0x4000805c,0x00000000,0,unsigned>;
        ///MRAHBADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mrahbadr{}; 
        namespace MrahbadrValC{
        }
    }
    namespace Nonepwctl{    ///<Power Detect Control
        using Addr = Register::Address<0x40008080,0xffffff00,0,unsigned>;
        ///USB_RESET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbReset{}; 
        namespace UsbresetValC{
        }
        ///PW_RESETB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwResetb{}; 
        namespace PwresetbValC{
        }
        ///PW_DETECT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pwDetect{}; 
        namespace PwdetectValC{
        }
        ///PHY_SUSPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> phySuspend{}; 
        namespace PhysuspendValC{
        }
        ///SUSPEND_X
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> suspendX{}; 
        namespace SuspendxValC{
        }
        ///PHY_RESETB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> phyResetb{}; 
        namespace PhyresetbValC{
        }
        ///PHY_REMOTE_WKUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> phyRemoteWkup{}; 
        namespace PhyremotewkupValC{
        }
        ///WAKEUP_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wakeupEn{}; 
        namespace WakeupenValC{
        }
    }
    namespace Nonemststs{    ///<Master Status
        using Addr = Register::Address<0x40008084,0xffffffe0,0,unsigned>;
        ///MWEPDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mwepdset{}; 
        namespace MwepdsetValC{
        }
        ///MREPDSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mrepdset{}; 
        namespace MrepdsetValC{
        }
        ///MWBFEMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mwbfemp{}; 
        namespace MwbfempValC{
        }
        ///MRBFEMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mrbfemp{}; 
        namespace MrbfempValC{
        }
        ///MREPEMPTY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mrepempty{}; 
        namespace MrepemptyValC{
        }
    }
    namespace Nonetoutcnt{    ///<Timeout Count
        using Addr = Register::Address<0x40008088,0x00000000,0,unsigned>;
        ///TMOUTCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tmoutcnt{}; 
        namespace TmoutcntValC{
        }
    }
}
