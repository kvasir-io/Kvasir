#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal serial bus full-speed device
      interface
    namespace Noneep0r{    ///<endpoint register
        using Addr = Register::Address<0x40005c00,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        ///DTOG_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///STAT_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///SETUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///EPTYPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///EP_KIND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///CTR_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///DTOG_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///STAT_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///EA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
    }
    namespace Noneep1r{    ///<endpoint register
        using Addr = Register::Address<0x40005c04,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        ///DTOG_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///STAT_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///SETUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///EPTYPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///EP_KIND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///CTR_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///DTOG_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///STAT_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///EA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
    }
    namespace Noneep2r{    ///<endpoint register
        using Addr = Register::Address<0x40005c08,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        ///DTOG_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///STAT_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///SETUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///EPTYPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///EP_KIND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///CTR_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///DTOG_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///STAT_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///EA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
    }
    namespace Noneep3r{    ///<endpoint register
        using Addr = Register::Address<0x40005c0c,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        ///DTOG_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///STAT_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///SETUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///EPTYPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///EP_KIND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///CTR_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///DTOG_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///STAT_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///EA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
    }
    namespace Noneep4r{    ///<endpoint register
        using Addr = Register::Address<0x40005c10,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        ///DTOG_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///STAT_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///SETUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///EPTYPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///EP_KIND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///CTR_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///DTOG_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///STAT_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///EA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
    }
    namespace Noneep5r{    ///<endpoint register
        using Addr = Register::Address<0x40005c14,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        ///DTOG_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///STAT_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///SETUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///EPTYPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///EP_KIND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///CTR_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///DTOG_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///STAT_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///EA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
    }
    namespace Noneep6r{    ///<endpoint register
        using Addr = Register::Address<0x40005c18,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        ///DTOG_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///STAT_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///SETUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///EPTYPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///EP_KIND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///CTR_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///DTOG_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///STAT_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///EA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
    }
    namespace Noneep7r{    ///<endpoint register
        using Addr = Register::Address<0x40005c1c,0xffff0000,0,unsigned>;
        ///CTR_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrRx{}; 
        ///DTOG_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dtogRx{}; 
        ///STAT_RX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> statRx{}; 
        ///SETUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setup{}; 
        ///EPTYPE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> eptype{}; 
        ///EP_KIND
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> epKind{}; 
        ///CTR_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrTx{}; 
        ///DTOG_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dtogTx{}; 
        ///STAT_TX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> statTx{}; 
        ///EA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ea{}; 
    }
    namespace Nonecntr{    ///<control register
        using Addr = Register::Address<0x40005c40,0xffff0040,0,unsigned>;
        ///CTRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrm{}; 
        ///PMAOVRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovrm{}; 
        ///ERRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errm{}; 
        ///WKUPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkupm{}; 
        ///SUSPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> suspm{}; 
        ///RESETM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> resetm{}; 
        ///SOFM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sofm{}; 
        ///ESOFM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esofm{}; 
        ///L1REQM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> l1reqm{}; 
        ///L1RESUME
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> l1resume{}; 
        ///RESUME
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> resume{}; 
        ///FSUSP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fsusp{}; 
        ///LPMODE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lpmode{}; 
        ///PDWN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdwn{}; 
        ///FRES
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fres{}; 
    }
    namespace Noneistr{    ///<interrupt status register
        using Addr = Register::Address<0x40005c44,0xffff0060,0,unsigned>;
        ///CTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctr{}; 
        ///PMAOVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pmaovr{}; 
        ///ERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> err{}; 
        ///WKUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wkup{}; 
        ///SUSP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp{}; 
        ///RESET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> reset{}; 
        ///SOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sof{}; 
        ///ESOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> esof{}; 
        ///L1REQ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> l1req{}; 
        ///DIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///EP_ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epId{}; 
    }
    namespace Nonefnr{    ///<frame number register
        using Addr = Register::Address<0x40005c48,0xffff0000,0,unsigned>;
        ///RXDP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rxdp{}; 
        ///RXDM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxdm{}; 
        ///LCK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lck{}; 
        ///LSOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> lsof{}; 
        ///FN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> fn{}; 
    }
    namespace Nonedaddr{    ///<device address
        using Addr = Register::Address<0x40005c4c,0xffffff00,0,unsigned>;
        ///EF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ef{}; 
        ///ADD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> add{}; 
    }
    namespace Nonebtable{    ///<Buffer table address
        using Addr = Register::Address<0x40005c50,0xffff0007,0,unsigned>;
        ///BTABLE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,3),Register::ReadWriteAccess,unsigned> btable{}; 
    }
    namespace Nonelpmcsr{    ///<LPM control and status
          register
        using Addr = Register::Address<0x40005c54,0xffffff04,0,unsigned>;
        ///BESL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> besl{}; 
        ///REMWAKE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> remwake{}; 
        ///LPMACK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lpmack{}; 
        ///LPMEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpmen{}; 
    }
    namespace Nonebcdr{    ///<Battery charging detector
        using Addr = Register::Address<0x40005c58,0xffff7f00,0,unsigned>;
        ///DPPU
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dppu{}; 
        ///PS2DET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ps2det{}; 
        ///SDET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sdet{}; 
        ///PDET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pdet{}; 
        ///DCDET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dcdet{}; 
        ///SDEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sden{}; 
        ///PDEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pden{}; 
        ///DCDEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcden{}; 
        ///BCDEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bcden{}; 
    }
}
