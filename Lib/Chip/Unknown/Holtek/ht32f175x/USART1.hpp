#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USART1
    namespace Noneusart1Rbr{    ///<USART1_RBR
        using Addr = Register::Address<0x40040000,0xfffffe00,0,unsigned>;
        ///RD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> rd{}; 
    }
    namespace Noneusart1Tbr{    ///<USART1_TBR
        using Addr = Register::Address<0x40040000,0xfffffe00,0,unsigned>;
        ///TD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> td{}; 
    }
    namespace Noneusart1Ier{    ///<USART1_IER
        using Addr = Register::Address<0x40040004,0xfffffff0,0,unsigned>;
        ///RFTLI_RTOIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rftliRtoie{}; 
        ///TFTLIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tftlie{}; 
        ///RLSIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rlsie{}; 
        ///MODSIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> modsie{}; 
    }
    namespace Noneusart1Iir{    ///<USART1_IIR
        using Addr = Register::Address<0x40040008,0xfffffff0,0,unsigned>;
        ///NIP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nip{}; 
        ///IID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> iid{}; 
    }
    namespace Noneusart1Fcr{    ///<USART1_FCR
        using Addr = Register::Address<0x4004000c,0xfffffc08,0,unsigned>;
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
        ///URTXEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urtxen{}; 
        ///URRXEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> urrxen{}; 
    }
    namespace Noneusart1Lcr{    ///<USART1_LCR
        using Addr = Register::Address<0x40040010,0xffffff80,0,unsigned>;
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
    namespace Noneusart1Modcr{    ///<USART1_MODCR
        using Addr = Register::Address<0x40040014,0xfffffff8,0,unsigned>;
        ///DTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtr{}; 
        ///RTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rts{}; 
        ///HFCEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hfcen{}; 
    }
    namespace Noneusart1Lsr{    ///<USART1_LSR
        using Addr = Register::Address<0x40040018,0xfffffe00,0,unsigned>;
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
        ///RSADDEF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rsaddef{}; 
    }
    namespace Noneusart1Modsr{    ///<USART1_MODSR
        using Addr = Register::Address<0x4004001c,0xffffff00,0,unsigned>;
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
    namespace Noneusart1Tpr{    ///<USART1_TPR
        using Addr = Register::Address<0x40040020,0xffff0000,0,unsigned>;
        ///RTOIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rtoic{}; 
        ///RTOIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rtoie{}; 
        ///TG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tg{}; 
    }
    namespace Noneusart1Mdr{    ///<USART1_MDR
        using Addr = Register::Address<0x40040024,0xffffffc8,0,unsigned>;
        ///MODE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        ///TRSM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> trsm{}; 
        ///TXDMAEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txdmaen{}; 
        ///RXDMAEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxdmaen{}; 
    }
    namespace Noneusart1Irdacr{    ///<USART1_IrDACR
        using Addr = Register::Address<0x40040028,0xffff00c0,0,unsigned>;
        ///IrDAEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> irdaen{}; 
        ///IrDALP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> irdalp{}; 
        ///TXSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txsel{}; 
        ///LB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb{}; 
        ///TXINV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txinv{}; 
        ///RXINV
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rxinv{}; 
        ///IrDAPSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> irdapsc{}; 
    }
    namespace Noneusart1Rs485cr{    ///<USART1_RS485CR
        using Addr = Register::Address<0x4004002c,0xffff00f8,0,unsigned>;
        ///TXENP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txenp{}; 
        ///RSNMM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rsnmm{}; 
        ///RSAAD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsaad{}; 
        ///ADDMATCH
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> addmatch{}; 
    }
    namespace Noneusart1Syncr{    ///<USART1_SYNCR
        using Addr = Register::Address<0x40040030,0xfffffff2,0,unsigned>;
        ///CLKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clken{}; 
        ///CPS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cps{}; 
        ///CPO
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cpo{}; 
    }
    namespace Noneusart1Fsr{    ///<USART1_FSR
        using Addr = Register::Address<0x40040034,0xffffe0e0,0,unsigned>;
        ///TXFS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> txfs{}; 
        ///RXFS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> rxfs{}; 
    }
    namespace Noneusart1Dlr{    ///<USART1_DLR
        using Addr = Register::Address<0x40040038,0xffff0000,0,unsigned>;
        ///BRD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> brd{}; 
    }
    namespace Noneusart1Degtstr{    ///<USART1_DEGTSTR
        using Addr = Register::Address<0x40040040,0xfffffffc,0,unsigned>;
        ///LBM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> lbm{}; 
    }
}
