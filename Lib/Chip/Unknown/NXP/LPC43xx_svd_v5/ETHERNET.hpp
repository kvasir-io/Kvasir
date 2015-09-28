#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonemac_config{
        using Addr = Register::Address<0x40010000,0xff200103>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> BL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IPC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> LM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> DO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DCRS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> IFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> JE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> JD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> WD; 
    }
    namespace Nonemac_frame_filter{
        using Addr = Register::Address<0x40010004,0x7ffffc06>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DAIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DBF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> PCF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SAIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SAF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> RA; 
    }
    namespace Nonemac_hashtable_high{
        using Addr = Register::Address<0x40010008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTH; 
    }
    namespace Nonemac_hashtable_low{
        using Addr = Register::Address<0x4001000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTL; 
    }
    namespace Nonemac_mii_addr{
        using Addr = Register::Address<0x40010010,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> W; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> CR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> GR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> PA; 
    }
    namespace Nonemac_mii_data{
        using Addr = Register::Address<0x40010014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> GD; 
    }
    namespace Nonemac_flow_ctrl{
        using Addr = Register::Address<0x40010018,0x0000ff40>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FCB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PLT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DZPQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PT; 
    }
    namespace Nonemac_vlan_tag{
        using Addr = Register::Address<0x4001001c,0xfffe0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ETV; 
    }
    namespace Nonemac_debug{
        using Addr = Register::Address<0x40010024,0xfc80fc88>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXIDLESTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> FIFOSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXFIFOSTAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5)> RXFIFOSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> RXFIFOLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> TXIDLESTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> TXSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PAUSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> TXFIFOSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> TXFIFOSTAT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TXFIFOLVL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> TXFIFOFULL; 
    }
    namespace Nonemac_rwake_frflt{
        using Addr = Register::Address<0x40010028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ADDR; 
    }
    namespace Nonemac_pmt_ctrl_stat{
        using Addr = Register::Address<0x4001002c,0x7ffffd98>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MPR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> WFR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> WFFRPR; 
    }
    namespace Nonemac_intr{
        using Addr = Register::Address<0x40010038,0xffffffff>;
    }
    namespace Nonemac_intr_mask{
        using Addr = Register::Address<0x4001003c,0xfffffff7>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PMTMSK; 
    }
    namespace Nonemac_addr0_high{
        using Addr = Register::Address<0x40010040,0x7fff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> A47_32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MO; 
    }
    namespace Nonemac_addr0_low{
        using Addr = Register::Address<0x40010044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> A31_0; 
    }
    namespace Nonemac_timestp_ctrl{
        using Addr = Register::Address<0x40010700,0xfff800c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSCFUPDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TSINIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TSUPDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TSTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TSADDREG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TSENALL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TSCTRLSSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TSVER2ENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> TSIPENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TSIPV6ENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TSIPV4ENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TSEVNTENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TSMSTRENA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TSCLKTYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TSENMACADDR; 
    }
    namespace Nonesubsecond_incr{
        using Addr = Register::Address<0x40010704,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SSINC; 
    }
    namespace Noneseconds{
        using Addr = Register::Address<0x40010708,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSS; 
    }
    namespace Nonenanoseconds{
        using Addr = Register::Address<0x4001070c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> TSSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PSNT; 
    }
    namespace Nonesecondsupdate{
        using Addr = Register::Address<0x40010710,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSS; 
    }
    namespace Nonenanosecondsupdate{
        using Addr = Register::Address<0x40010714,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> TSSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADDSUB; 
    }
    namespace Noneaddend{
        using Addr = Register::Address<0x40010718,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSAR; 
    }
    namespace Nonetargetseconds{
        using Addr = Register::Address<0x4001071c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TSTR; 
    }
    namespace Nonetargetnanoseconds{
        using Addr = Register::Address<0x40010720,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0)> TSTR; 
    }
    namespace Nonehighword{
        using Addr = Register::Address<0x40010724,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> TSHWR; 
    }
    namespace Nonetimestampstat{
        using Addr = Register::Address<0x40010728,0xf0fffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TSSOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSTARGT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> AUXSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ATSSTM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,25)> ATSNS; 
    }
    namespace Noneppsctrl{
        using Addr = Register::Address<0x4001072c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PPSCTRL; 
    }
    namespace Noneauxnanoseconds{
        using Addr = Register::Address<0x40010730,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AUXNS; 
    }
    namespace Noneauxseconds{
        using Addr = Register::Address<0x40010734,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> AUXS; 
    }
    namespace Nonedma_bus_mode{
        using Addr = Register::Address<0x40011000,0xf0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,2)> DSL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ATDS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8)> PBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> FB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,17)> RPBL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> USP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PBL8X; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> AAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> TXPR; 
    }
    namespace Nonedma_trans_poll_demand{
        using Addr = Register::Address<0x40011004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TPD; 
    }
    namespace Nonedma_rec_poll_demand{
        using Addr = Register::Address<0x40011008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> RPD; 
    }
    namespace Nonedma_rec_des_addr{
        using Addr = Register::Address<0x4001100c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRL; 
    }
    namespace Nonedma_trans_des_addr{
        using Addr = Register::Address<0x40011010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SRL; 
    }
    namespace Nonedma_stat{
        using Addr = Register::Address<0x40011014,0xfffe1800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TJT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UNF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RWT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ETI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NIS; 
    }
    namespace Nonedma_op_mode{
        using Addr = Register::Address<0x40011018,0xf8ce1f21>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> RTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FUF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FEF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,14)> TTC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> FTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> TSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> DFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> RSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> DT; 
    }
    namespace Nonedma_int_en{
        using Addr = Register::Address<0x4001101c,0xfffe1800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> TUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TJE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> UNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RUE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RWE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ETE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> FBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ERE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> NIE; 
    }
    namespace Nonedma_mfrm_bufof{
        using Addr = Register::Address<0x40011020,0xe0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> FMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> OC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,17)> FMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> OF; 
    }
    namespace Nonedma_rec_int_wdt{
        using Addr = Register::Address<0x40011024,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> RIWT; 
    }
    namespace Nonedma_curhost_trans_des{
        using Addr = Register::Address<0x40011048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTD; 
    }
    namespace Nonedma_curhost_rec_des{
        using Addr = Register::Address<0x4001104c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HRD; 
    }
    namespace Nonedma_curhost_trans_buf{
        using Addr = Register::Address<0x40011050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HTB; 
    }
    namespace Nonedma_curhost_rec_buf{
        using Addr = Register::Address<0x40011054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> HRB; 
    }
}
