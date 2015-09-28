#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace USB0_perid{
        using Addr = Register::Address<0x40072000,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> ID; 
    }
    namespace USB0_idcomp{
        using Addr = Register::Address<0x40072004,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> NID; 
    }
    namespace USB0_rev{
        using Addr = Register::Address<0x40072008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> REV; 
    }
    namespace USB0_addinfo{
        using Addr = Register::Address<0x4007200c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IEHOST; 
    }
    namespace USB0_otgistat{
        using Addr = Register::Address<0x40072010,0xffffff12>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AVBUSCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> B_SESS_CHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SESSVLDCHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LINE_STATE_CHG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ONEMSEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IDCHG; 
    }
    namespace USB0_otgicr{
        using Addr = Register::Address<0x40072014,0xffffff12>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AVBUSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BSESSEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SESSVLDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LINESTATEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ONEMSECEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IDEN; 
    }
    namespace USB0_otgstat{
        using Addr = Register::Address<0x40072018,0xffffff12>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> AVBUSVLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BSESSEND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SESS_VLD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> LINESTATESTABLE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ONEMSECEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ID; 
    }
    namespace USB0_otgctl{
        using Addr = Register::Address<0x4007201c,0xffffff4b>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OTGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMLOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DPLOW; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DPHIGH; 
    }
    namespace USB0_istat{
        using Addr = Register::Address<0x40072080,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERROR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFTOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOKDNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SLEEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RESUME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ATTACH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STALL; 
    }
    namespace USB0_inten{
        using Addr = Register::Address<0x40072084,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBRSTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERROREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SOFTOKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TOKDNEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SLEEPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RESUMEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ATTACHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> STALLEN; 
    }
    namespace USB0_errstat{
        using Addr = Register::Address<0x40072088,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PIDERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRC5EOF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CRC16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DFN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTOERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMAERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BTSERR; 
    }
    namespace USB0_erren{
        using Addr = Register::Address<0x4007208c,0xffffff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PIDERREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CRC5EOFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CRC16EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DFN8EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTOERREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DMAERREN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BTSERREN; 
    }
    namespace USB0_stat{
        using Addr = Register::Address<0x40072090,0xffffff03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> ENDP; 
    }
    namespace USB0_ctl{
        using Addr = Register::Address<0x40072094,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBENSOFEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODDRST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RESUME; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HOSTMODEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RESET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXSUSPENDTOKENBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> JSTATE; 
    }
    namespace USB0_addr{
        using Addr = Register::Address<0x40072098,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> ADDR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> LSEN; 
    }
    namespace USB0_bdtpage1{
        using Addr = Register::Address<0x4007209c,0xffffff01>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1)> BDTBA; 
    }
    namespace USB0_frmnuml{
        using Addr = Register::Address<0x400720a0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FRM; 
    }
    namespace USB0_frmnumh{
        using Addr = Register::Address<0x400720a4,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> FRM; 
    }
    namespace USB0_token{
        using Addr = Register::Address<0x400720a8,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> TOKENENDPT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> TOKENPID; 
    }
    namespace USB0_softhld{
        using Addr = Register::Address<0x400720ac,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CNT; 
    }
    namespace USB0_bdtpage2{
        using Addr = Register::Address<0x400720b0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDTBA; 
    }
    namespace USB0_bdtpage3{
        using Addr = Register::Address<0x400720b4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> BDTBA; 
    }
    namespace USB0_endpt0{
        using Addr = Register::Address<0x400720c0,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt1{
        using Addr = Register::Address<0x400720c4,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt2{
        using Addr = Register::Address<0x400720c8,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt3{
        using Addr = Register::Address<0x400720cc,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt4{
        using Addr = Register::Address<0x400720d0,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt5{
        using Addr = Register::Address<0x400720d4,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt6{
        using Addr = Register::Address<0x400720d8,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt7{
        using Addr = Register::Address<0x400720dc,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt8{
        using Addr = Register::Address<0x400720e0,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt9{
        using Addr = Register::Address<0x400720e4,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt10{
        using Addr = Register::Address<0x400720e8,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt11{
        using Addr = Register::Address<0x400720ec,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt12{
        using Addr = Register::Address<0x400720f0,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt13{
        using Addr = Register::Address<0x400720f4,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt14{
        using Addr = Register::Address<0x400720f8,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_endpt15{
        using Addr = Register::Address<0x400720fc,0xffffff20>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EPHSHK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EPSTALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EPTXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EPRXEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EPCTLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RETRYDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HOSTWOHUB; 
    }
    namespace USB0_usbctrl{
        using Addr = Register::Address<0x40072100,0xffffff3f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SUSP; 
    }
    namespace USB0_observe{
        using Addr = Register::Address<0x40072104,0xffffff2f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DMPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DPPU; 
    }
    namespace USB0_control{
        using Addr = Register::Address<0x40072108,0xffffffef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DPPULLUPNONOTG; 
    }
    namespace USB0_usbtrc0{
        using Addr = Register::Address<0x4007210c,0xffffff5c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USB_RESUME_INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SYNC_DET; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USBRESMEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> USBRESET; 
    }
    namespace USB0_usbfrmadjust{
        using Addr = Register::Address<0x40072114,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ADJ; 
    }
}
