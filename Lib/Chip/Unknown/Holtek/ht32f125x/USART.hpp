#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USART
    namespace NoneusartRbr{    ///<USART_RBR
        using Addr = Register::Address<0x40000000,0xfffffe00,0,unsigned>;
        ///RD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rd{}; 
    }
    namespace NoneusartTbr{    ///<USART_TBR
        using Addr = Register::Address<0x40000000,0xfffffe00,0,unsigned>;
        ///TD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> td{}; 
    }
    namespace NoneusartIer{    ///<USART_IER
        using Addr = Register::Address<0x40000004,0xfffffff0,0,unsigned>;
        ///RFTLI_RTOIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rftliRtoie{}; 
        ///TFTLIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tftlie{}; 
        ///RLSIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rlsie{}; 
        ///MODSIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> modsie{}; 
    }
    namespace NoneusartIir{    ///<USART_IIR
        using Addr = Register::Address<0x40000008,0xfffffff0,0,unsigned>;
        ///NIP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nip{}; 
        ///IID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> iid{}; 
    }
    namespace NoneusartFcr{    ///<USART_FCR
        using Addr = Register::Address<0x4000000c,0xffffff08,0,unsigned>;
        ///FME
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fme{}; 
        ///RFR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rfr{}; 
        ///TFR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tfr{}; 
        ///TFTL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tftl{}; 
        ///RFTL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rftl{}; 
    }
    namespace NoneusartLcr{    ///<USART_LCR
        using Addr = Register::Address<0x40000010,0xffffff80,0,unsigned>;
        ///WLS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wls{}; 
        ///NSB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nsb{}; 
        ///PBE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pbe{}; 
        ///EPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epe{}; 
        ///SPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spe{}; 
        ///BCB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bcb{}; 
    }
    namespace NoneusartModcr{    ///<USART_MODCR
        using Addr = Register::Address<0x40000014,0xfffffffc,0,unsigned>;
        ///DTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtr{}; 
        ///RTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rts{}; 
    }
    namespace NoneusartLsr{    ///<USART_LSR
        using Addr = Register::Address<0x40000018,0xffffff00,0,unsigned>;
        ///RFDR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rfdr{}; 
        ///OEI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oei{}; 
        ///PEI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pei{}; 
        ///FEI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fei{}; 
        ///BII
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bii{}; 
        ///TXFEMPT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txfempt{}; 
        ///TXEMPT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txempt{}; 
        ///ERRRX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> errrx{}; 
    }
    namespace NoneusartModsr{    ///<USART_MODSR
        using Addr = Register::Address<0x4000001c,0xffffff00,0,unsigned>;
        ///DCTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dcts{}; 
        ///DDSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ddsr{}; 
        ///DRI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dri{}; 
        ///DDCD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ddcd{}; 
        ///CTSS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctss{}; 
        ///DSRS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsrs{}; 
        ///RIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ris{}; 
        ///DCDS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcds{}; 
    }
    namespace NoneusartTpr{    ///<USART_TPR
        using Addr = Register::Address<0x40000020,0xffff0000,0,unsigned>;
        ///RTOIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rtoic{}; 
        ///RTOIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rtoie{}; 
        ///TG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tg{}; 
    }
    namespace NoneusartMdr{    ///<USART_MDR
        using Addr = Register::Address<0x40000024,0xfffffff8,0,unsigned>;
        ///MODE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        ///TRSM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trsm{}; 
    }
    namespace NoneusartIrdacr{    ///<USART_IrDACR
        using Addr = Register::Address<0x40000028,0xffff00f0,0,unsigned>;
        ///IrDAEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irdaen{}; 
        ///IrDALP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irdalp{}; 
        ///TXSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txsel{}; 
        ///LB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb{}; 
        ///IrDAPSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> irdapsc{}; 
    }
    namespace NoneusartRs485cr{    ///<USART_RS485CR
        using Addr = Register::Address<0x4000002c,0xfffffffe,0,unsigned>;
        ///TXENP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txenp{}; 
    }
    namespace NoneusartSyncr{    ///<USART_SYNCR
        using Addr = Register::Address<0x40000030,0xfffffff2,0,unsigned>;
        ///CLKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        ///CPS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cps{}; 
        ///CPO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpo{}; 
    }
    namespace NoneusartDegtstr{    ///<USART_DEGTSTR
        using Addr = Register::Address<0x40000034,0xfffffffc,0,unsigned>;
        ///LBM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> lbm{}; 
    }
    namespace NoneusartDlr{    ///<USART_DLR
        using Addr = Register::Address<0x40000038,0xffff0000,0,unsigned>;
        ///BRD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> brd{}; 
    }
}
